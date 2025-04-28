#ifndef WALLE_DEVICE_TOOLS_H
#define WALLE_DEVICE_TOOLS_H

#include "graphics/graphics_types/graphics_structures.h"
#include <string_view>
#include <vector>

namespace Walle {

std::vector<VkPhysicalDevice> EnumeratePhysicalDevices(const VkInstance instance);
std::vector<LayerProperties> EnumerateInstanceLayerProperties();
std::vector<ExtensionProperties> EnumerateInstanceExtensionProperties(std::string_view layer);
std::vector<LayerProperties> EnumerateDeviceLayerProperties(const VkPhysicalDevice device);
std::vector<PresentMode> EnumeratePhysicalDeviceSurfacePresentModes();
std::vector<SurfaceFormatKHR> EnumeratePhysicalDeviceSurfaceFormats(const VkPhysicalDevice device, const VkSurfaceKHR surface);
std::vector<ExtensionProperties> EnumerateDeviceExtensionProperties(const VkPhysicalDevice device, std::string_view layer = {});
std::vector<QueueFamilyProperties> EnumeratePhysicalDeviceQueueFamilyProperties(const VkPhysicalDevice device);

} // namespace Walle

#endif // WALLE_DEVICE_TOOLS_H