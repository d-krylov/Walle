#include "device_tools.h"
#include <print>

namespace Walle {

static VKAPI_ATTR bool32 VKAPI_CALL DebugCallback(DebugUtilsMessageSeverityMaskBit severity,
                                                  DebugMessageTypeMask type,
                                                  const DebugUtilsMessengerCallbackDataEXT *data,
                                                  void *user_data) {
  std::print("{0} {1}\n", "Validation Layer:", data->p_message_);
  return VK_FALSE;
}

VkInstance CreateInstance(uint32_t api_version,
                          std::span<const char *> required_layers,
                          std::span<const char *> required_extensions,
                          std::string_view application_name,
                          uint32_t application_version,
                          std::string_view engine_name,
                          uint32_t engine_version) {

  VK_CHECK(volkInitialize());

  ApplicationInfo application_info(api_version, application_name.data(), application_version, engine_name.data(), engine_version);
  // DebugMessengerCreateInfo debug_messenger_ci(severity_mask, type_mask, DebugCallback);
  InstanceCreateInfo instance_ci(&application_info, required_layers, required_extensions);

  VkInstance instance{VK_NULL_HANDLE};

  VK_CHECK(vkCreateInstance(instance_ci.get(), nullptr, &instance));

  volkLoadInstanceOnly(instance);

  return instance;
}

} // namespace Walle