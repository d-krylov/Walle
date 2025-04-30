#ifndef WALLE_DEVICE_H
#define WALLE_DEVICE_H

#include "walle/graphics/graphics_types/graphics_structures.h"
#include <vector>

namespace Walle {

std::vector<std::pair<QueueMask, uint32_t>> GetPhysicalDeviceQueueIndices(const VkPhysicalDevice physical_device);

} // namespace Walle

#endif // WALLE_DEVICE_H