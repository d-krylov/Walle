#include "walle/common/walle.h"
#include <array>
#include <iostream>
#include <print>

static VKAPI_ATTR VkBool32 VKAPI_CALL DebugCallback(Walle::DebugUtilsMessageSeverityMaskBit severity,
                                                    Walle::DebugMessageTypeMask type,
                                                    const Walle::DebugUtilsMessengerCallbackDataEXT *data,
                                                    void *user_data) {
  std::print("{0} {1}\n", "Validation Layer:", data->p_message_);
  return VK_FALSE;
}

int main() {

  namespace W = Walle;

  std::array required_layers{"VK_LAYER_KHRONOS_validation"};
  std::array required_extensions{VK_EXT_DEBUG_UTILS_EXTENSION_NAME};

  auto type_mask = W::DebugMessageTypeMaskBit::E_VALIDATION_BIT_EXT | W::DebugMessageTypeMaskBit::E_GENERAL_BIT_EXT;
  auto severity_mask = W::DebugMessageSeverityMaskBit::E_VERBOSE_BIT_EXT | W::DebugMessageSeverityMaskBit::E_INFO_BIT_EXT |
                       W::DebugMessageSeverityMaskBit::E_ERROR_BIT_EXT;

  Walle::DebugMessengerCreateInfo debug_messenger(severity_mask, type_mask, DebugCallback);

  Walle::ApplicationInfo application_info(VK_API_VERSION_1_3, "instance", VK_MAKE_VERSION(1, 0, 0), "walle", VK_MAKE_VERSION(1, 0, 0));
  Walle::InstanceCreateInfo instance_ci(&application_info, required_layers, required_extensions, &debug_messenger);

  VkInstance instance;

  Walle::VK_CHECK(volkInitialize());

  Walle::VK_CHECK(vkCreateInstance(instance_ci.get(), nullptr, &instance));

  volkLoadInstanceOnly(instance);

  auto layer_properties = W::EnumerateInstanceLayerProperties();

  for (const auto &layer_property : layer_properties) {
    std::cout << std::string_view(layer_property.layer_name_) << std::endl;
  }

  auto devices = Walle::EnumeratePhysicalDevices(instance);

  for (auto device : devices) {

    auto queues = Walle::GetPhysicalDeviceQueueIndices(device);

    for (auto queue : queues) {
      std::cout << (uint32_t)queue.first << " " << queue.second << std::endl;
    }
  }

  return 0;
}