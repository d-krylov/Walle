#include "device.h"
#include "device_tools.h"

namespace Walle {

VkPhysicalDevice PickPhysicalDevice(std::span<const VkPhysicalDevice> physical_devices) {}

std::vector<std::pair<QueueMask, uint32_t>> GetPhysicalDeviceQueueIndices(const VkPhysicalDevice physical_device) {
  auto ret = std::vector<std::pair<QueueMask, uint32_t>>();
  auto properties = EnumeratePhysicalDeviceQueueFamilyProperties(physical_device);
  for (auto index = 0; index < properties.size(); index++) {
    ret.emplace_back(properties[index].queue_flags_, index);
  }
  return ret;
}

void CreateDevice() { DeviceCreateInfo device_ci; }

} // namespace Walle