#include "device_tools.h"
#include "core/type_tools.h"

namespace Walle {

template <typename FUNCTION, typename... ARGUMENTS> auto Enumerate(FUNCTION &&enumerate_function, ARGUMENTS &&...arguments) {
  using R = FunctionTraits<std::remove_pointer_t<decltype(&enumerate_function)>>::arguments_t;
  using V = std::remove_pointer_t<std::tuple_element_t<std::tuple_size_v<R> - 1, R>>;
  auto count{0u};
  std::forward<FUNCTION>(enumerate_function)(std::forward<ARGUMENTS>(arguments)..., &count, nullptr);
  std::vector<V> ret(count);
  std::forward<FUNCTION>(enumerate_function)(std::forward<ARGUMENTS>(arguments)..., &count, ret.data());
  return ret;
}

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

std::vector<PresentMode> EnumeratePhysicalDeviceSurfacePresentModes() {}

std::vector<SurfaceFormatKHR> EnumeratePhysicalDeviceSurfaceFormats(const VkPhysicalDevice device, const VkSurfaceKHR surface) {
  auto formats = Enumerate(vkGetPhysicalDeviceSurfaceFormatsKHR, device, surface);
  return {formats.begin(), formats.end()};
}

std::vector<QueueFamilyProperties> EnumeratePhysicalDeviceQueueFamilyProperties(const VkPhysicalDevice device) {
  auto properties = Enumerate(vkGetPhysicalDeviceQueueFamilyProperties, device);
  return {properties.begin(), properties.end()};
}

} // namespace Walle