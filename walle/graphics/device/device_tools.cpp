#include "device_tools.h"
#include <ranges>

namespace Walle {

std::vector<VkPhysicalDevice> EnumeratePhysicalDevices(const VkInstance instance) {
  return Enumerate(vkEnumeratePhysicalDevices, instance);
}

std::vector<LayerProperties> EnumerateInstanceLayerProperties() {
  auto properties = Enumerate(vkEnumerateInstanceLayerProperties);
  return {properties.begin(), properties.end()};
}

std::vector<ExtensionProperties> EnumerateInstanceExtensionProperties(std::string_view layer) {
  auto properties = Enumerate(vkEnumerateInstanceExtensionProperties, layer.data());
  return {properties.begin(), properties.end()};
}

std::vector<LayerProperties> EnumerateDeviceLayerProperties(const VkPhysicalDevice device) {
  auto properties = Enumerate(vkEnumerateDeviceLayerProperties, device);
  return {properties.begin(), properties.end()};
}

std::vector<ExtensionProperties> EnumerateDeviceExtensionProperties(const VkPhysicalDevice device, std::string_view layer) {
  auto properties = Enumerate(vkEnumerateDeviceExtensionProperties, device, layer.data());
  return {properties.begin(), properties.end()};
}

std::vector<SurfaceFormatKHR> EnumeratePhysicalDeviceSurfaceFormats(const VkPhysicalDevice device, const VkSurfaceKHR surface) {
  auto formats = Enumerate(vkGetPhysicalDeviceSurfaceFormatsKHR, device, surface);
  return {formats.begin(), formats.end()};
}

std::vector<QueueFamilyProperties> EnumeratePhysicalDeviceQueueFamilyProperties(const VkPhysicalDevice device) {
  auto properties = Enumerate(vkGetPhysicalDeviceQueueFamilyProperties, device);
  return {properties.begin(), properties.end()};
}

auto to_present_mode = [](VkPresentModeKHR present_mode) { return static_cast<PresentMode>(present_mode); };

// clang-format off
std::vector<PresentMode> EnumeratePhysicalDeviceSurfacePresentModes(const VkPhysicalDevice device, const VkSurfaceKHR surface) {
  auto present_modes = Enumerate(vkGetPhysicalDeviceSurfacePresentModesKHR, device, surface);
  return present_modes 
    | std::views::transform(to_present_mode) 
    | std::ranges::to<std::vector>();
}

// clang-format on

std::vector<std::pair<QueueMask, uint32_t>> GetPhysicalDeviceQueueIndices(const VkPhysicalDevice physical_device) {
  auto ret = std::vector<std::pair<QueueMask, uint32_t>>();
  auto properties = EnumeratePhysicalDeviceQueueFamilyProperties(physical_device);
  for (auto index = 0; index < properties.size(); index++) {
    ret.emplace_back(properties[index].queue_flags_, index);
  }
  return ret;
}

void VK_CHECK(VkResult result, std::source_location source_location) {}

} // namespace Walle