#include "graphics/graphics_types/graphics_structures.h"
#include <array>
#include <print>

static VKAPI_ATTR VkBool32 VKAPI_CALL DebugCallback(VkDebugUtilsMessageSeverityFlagBitsEXT severity,
                                                    VkDebugUtilsMessageTypeFlagsEXT type,
                                                    const VkDebugUtilsMessengerCallbackDataEXT *data,
                                                    void *user_data) {
  std::print("{0} {1}\n", "Validation Layer:", data->pMessage);
  return VK_FALSE;
}

int main() {

  std::array required_layers{"VK_LAYER_KHRONOS_validation"};
  std::array required_extensions{VK_EXT_DEBUG_UTILS_EXTENSION_NAME};

  Walle::DebugMessengerCreateInfo debug_messenger(
    Walle::DebugMessageSeverityMaskBit::VERBOSE_BIT_EXT | Walle::DebugMessageSeverityMaskBit::INFO_BIT_EXT |
      Walle::DebugMessageSeverityMaskBit::ERROR_BIT_EXT,
    Walle::DebugMessageTypeMaskBit::VALIDATION_BIT_EXT | Walle::DebugMessageTypeMaskBit::GENERAL_BIT_EXT, DebugCallback);

  Walle::ApplicationInfo application_info("instance", VK_MAKE_VERSION(1, 0, 0), "walle", VK_MAKE_VERSION(1, 0, 0), VK_API_VERSION_1_3);
  Walle::InstanceCreateInfo instance_ci(&application_info, required_layers, required_extensions, &debug_messenger);

  VkInstance instance;

  Walle::VK_CHECK(volkInitialize());

  Walle::VK_CHECK(vkCreateInstance(instance_ci.get(), nullptr, &instance));

  return 0;
}