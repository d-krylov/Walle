#ifndef WALLE_DEVICE_TOOLS_H
#define WALLE_DEVICE_TOOLS_H

#include "walle/core/type_tools.h"
#include "walle/graphics/graphics_types/graphics_structures.h"
#include <string_view>
#include <vector>

namespace Walle {

template <typename FUNCTION, typename... ARGUMENTS> inline auto Enumerate(FUNCTION &&enumerate_function, ARGUMENTS &&...arguments) {
  using R = FunctionTraits<std::remove_pointer_t<decltype(&enumerate_function)>>::arguments_t;
  using V = std::remove_pointer_t<std::tuple_element_t<std::tuple_size_v<R> - 1, R>>;
  auto count{0u};
  std::forward<FUNCTION>(enumerate_function)(std::forward<ARGUMENTS>(arguments)..., &count, nullptr);
  std::vector<V> ret(count);
  std::forward<FUNCTION>(enumerate_function)(std::forward<ARGUMENTS>(arguments)..., &count, ret.data());
  return ret;
}

std::vector<VkPhysicalDevice> EnumeratePhysicalDevices(const VkInstance instance);
std::vector<LayerProperties> EnumerateInstanceLayerProperties();
std::vector<ExtensionProperties> EnumerateInstanceExtensionProperties(std::string_view layer);
std::vector<LayerProperties> EnumerateDeviceLayerProperties(const VkPhysicalDevice device);
std::vector<PresentMode> EnumeratePhysicalDeviceSurfacePresentModes(const VkPhysicalDevice device, const VkSurfaceKHR surface);
std::vector<SurfaceFormatKHR> EnumeratePhysicalDeviceSurfaceFormats(const VkPhysicalDevice device, const VkSurfaceKHR surface);
std::vector<ExtensionProperties> EnumerateDeviceExtensionProperties(const VkPhysicalDevice device, std::string_view layer = {});
std::vector<QueueFamilyProperties> EnumeratePhysicalDeviceQueueFamilyProperties(const VkPhysicalDevice device);
std::vector<std::pair<QueueMask, uint32_t>> GetPhysicalDeviceQueueIndices(const VkPhysicalDevice device);

void VK_CHECK(VkResult result, std::source_location = std::source_location::current());

} // namespace Walle

#endif // WALLE_DEVICE_TOOLS_H