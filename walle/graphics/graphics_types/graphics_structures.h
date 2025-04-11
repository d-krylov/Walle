#ifndef WALLE_GRAPHICS_STRUCTURES_H
#define WALLE_GRAPHICS_STRUCTURES_H

#include "graphics_enums.h"
#include <array>
#include <bit>
#include <span>

namespace Walle {

using DebugMessengerCallback = PFN_vkDebugUtilsMessengerCallbackEXT;
using bool32 = VkBool32;
using SampleMask = VkSampleMask;

struct ApplicationInfo {

  using native_type = VkApplicationInfo;

  static constexpr StructureType structure_type = StructureType::APPLICATION_INFO;

  ApplicationInfo(const char *application_name = {},
                  uint32_t application_version = {},
                  const char *engine_name = nullptr,
                  uint32_t engine_version = {},
                  uint32_t api_version = {},
                  const void *next = nullptr)
    : next_(next), application_name_(application_name), application_version_(application_version), engine_name_(engine_name),
      engine_version_(engine_version), api_version_(api_version) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  const char *application_name_;
  uint32_t application_version_;
  const char *engine_name_;
  uint32_t engine_version_;
  uint32_t api_version_;
};

struct DebugMessengerCreateInfo {
  static constexpr StructureType structure_type = StructureType::DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;

  using native_type = VkDebugUtilsMessengerCreateInfoEXT;

  DebugMessengerCreateInfo(DebugMessageSeverityMask message_severity = {},
                           DebugMessageTypeMask message_type = {},
                           DebugMessengerCallback messenger_callback = {},
                           DebugMessengerCreateMask mask = {},
                           void *user_data = nullptr,
                           const void *next = nullptr)
    : next_(next), mask_(mask), message_severity_(message_severity), message_type_(message_type), messenger_callback_(messenger_callback),
      user_data_(user_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  DebugMessengerCreateMask mask_;
  DebugMessageSeverityMask message_severity_;
  DebugMessageTypeMask message_type_;
  DebugMessengerCallback messenger_callback_;
  void *user_data_;
};

struct InstanceCreateInfo {
  static constexpr StructureType structure_type = StructureType::INSTANCE_CREATE_INFO;

  using native_type = VkInstanceCreateInfo;

  InstanceCreateInfo(const ApplicationInfo *application_info = {},
                     std::span<const char *> enabled_layer_names = {},
                     std::span<const char *> enabled_extension_names = {},
                     const void *next = nullptr,
                     InstanceCreateMask mask = {})
    : next_(next), mask_(mask), application_info_(application_info), enabled_layer_count_(enabled_layer_names.size()),
      enabled_layer_names_(enabled_layer_names.data()), enabled_extension_count_(enabled_extension_names.size()),
      enabled_extension_names_(enabled_extension_names.data()) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  InstanceCreateMask mask_;
  const ApplicationInfo *application_info_;
  uint32_t enabled_layer_count_;
  const char *const *enabled_layer_names_;
  uint32_t enabled_extension_count_;
  const char *const *enabled_extension_names_;
};

struct DeviceQueueCreateInfo {

  static constexpr StructureType structure_type = StructureType::DEVICE_QUEUE_CREATE_INFO;

  using native_type = VkDeviceQueueCreateInfo;

  DeviceQueueCreateInfo(DeviceQueueCreateMask mask = {},
                        uint32_t queue_family_index = {},
                        uint32_t queue_count = {},
                        const float *queue_priorities = {},
                        const void *next = nullptr)
    : next_(next), mask_(mask), queue_family_index_(queue_family_index), queue_count_(queue_count), queue_priorities_(queue_priorities_) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  DeviceQueueCreateMask mask_;
  uint32_t queue_family_index_;
  uint32_t queue_count_;
  const float *queue_priorities_;
};

struct DeviceCreateInfo {

  static constexpr StructureType structure_type = StructureType::DEVICE_CREATE_INFO;

  using native_type = VkDeviceCreateInfo;

  DeviceCreateInfo(uint32_t queue_create_info_count = {},
                   const DeviceQueueCreateInfo *queue_create_infos = {},
                   uint32_t enabled_layer_count = {},
                   const char *const *enabled_layer_names = {},
                   uint32_t enabled_extension_count = {},
                   const char *const *enabled_extension_names = {},
                   const VkPhysicalDeviceFeatures *enabled_features = {},
                   const void *next = nullptr,
                   DeviceCreateMask mask = {})
    : next_(next), mask_(mask), queue_create_info_count_(queue_create_info_count), queue_create_infos_(queue_create_infos),
      enabled_layer_count_(enabled_layer_count), enabled_layer_names_(enabled_layer_names),
      enabled_extension_count_(enabled_extension_count), enabled_extension_names_(enabled_extension_names),
      enabled_features_(enabled_features) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  DeviceCreateMask mask_;
  uint32_t queue_create_info_count_;
  const DeviceQueueCreateInfo *queue_create_infos_;
  uint32_t enabled_layer_count_;
  const char *const *enabled_layer_names_;
  uint32_t enabled_extension_count_;
  const char *const *enabled_extension_names_;
  const VkPhysicalDeviceFeatures *enabled_features_;
};

struct PhysicalDeviceFeatures {

  using native_type = VkPhysicalDeviceFeatures;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  friend bool operator==(const PhysicalDeviceFeatures &lhs, const PhysicalDeviceFeatures &rhs) = default;

  bool32 robust_buffer_access_;
  bool32 full_draw_index_uint32_;
  bool32 image_cube_array_;
  bool32 independent_blend_;
  bool32 geometry_shader_;
  bool32 tessellation_shader_;
  bool32 sample_rate_shading_;
  bool32 dual_src_blend_;
  bool32 logic_op_;
  bool32 multi_draw_indirect_;
  bool32 draw_indirect_first_instance_;
  bool32 depth_clamp_;
  bool32 depth_bias_clamp_;
  bool32 fill_mode_non_solid_;
  bool32 depth_bounds_;
  bool32 wide_lines_;
  bool32 large_points_;
  bool32 alpha_to_one_;
  bool32 multi_viewport_;
  bool32 sampler_anisotropy_;
  bool32 texture_compression_etc2_;
  bool32 texture_compression_astc_ldr_;
  bool32 texture_compression_bc_;
  bool32 occlusion_query_precise_;
  bool32 pipeline_statistics_query_;
  bool32 vertex_pipeline_stores_and_atomics_;
  bool32 fragment_stores_and_atomics_;
  bool32 shader_tessellation_and_geometry_point_size_;
  bool32 shader_image_gather_extended_;
  bool32 shader_storage_image_extended_formats_;
  bool32 shader_storage_image_multisample_;
  bool32 shader_storage_image_read_without_format_;
  bool32 shader_storage_image_write_without_format_;
  bool32 shader_uniform_buffer_array_dynamic_indexing_;
  bool32 shader_sampled_image_array_dynamic_indexing_;
  bool32 shader_storage_buffer_array_dynamic_indexing_;
  bool32 shader_storage_image_array_dynamic_indexing_;
  bool32 shader_clip_distance_;
  bool32 shader_cull_distance_;
  bool32 shader_float64_;
  bool32 shader_int64_;
  bool32 shader_int16_;
  bool32 shader_resource_residency_;
  bool32 shader_resource_min_lod_;
  bool32 sparse_binding_;
  bool32 sparse_residency_buffer_;
  bool32 sparse_residency_image2d_;
  bool32 sparse_residency_image3d_;
  bool32 sparse_residency2samples_;
  bool32 sparse_residency4samples_;
  bool32 sparse_residency8samples_;
  bool32 sparse_residency16samples_;
  bool32 sparse_residency_aliased_;
  bool32 variable_multisample_rate_;
  bool32 inherited_queries_;
};

struct PhysicalDeviceFeatures2 {

  static constexpr StructureType structure_type = StructureType::PHYSICAL_DEVICE_FEATURES_2_KHR;

  PhysicalDeviceFeatures2(void *next) : next_(next) {}

  using native_type = VkPhysicalDeviceFeatures2;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  friend bool operator==(const PhysicalDeviceFeatures2 &lhs, const PhysicalDeviceFeatures2 &rhs) {
    return (lhs.features_ == rhs.features_);
  }

  StructureType structure_type_{structure_type};
  void *next_;
  PhysicalDeviceFeatures features_;
};

struct PresentInfo {

  static constexpr StructureType structure_type = StructureType::DEVICE_QUEUE_CREATE_INFO;

  using native_type = VkPresentInfoKHR;

  PresentInfo(const void *next = nullptr,
              uint32_t wait_semaphore_count = {},
              const VkSemaphore *wait_semaphores = {},
              uint32_t swapchain_count = {},
              const VkSwapchainKHR *swapchains = {},
              const uint32_t *image_indices = {},
              Result *results = {}) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  uint32_t wait_semaphore_count_;
  const VkSemaphore *wait_semaphores_;
  uint32_t swapchain_count_;
  const VkSwapchainKHR *swapchains_;
  const uint32_t *image_indices_;
  Result *results_;
};

struct SurfaceFormat {

  using native_type = VkSurfaceFormatKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  Format format_;
  ColorSpace color_space_;
};

struct StencilOpState {

  using native_type = VkStencilOpState;

  StencilOpState(StencilOperation fail_op = {},
                 StencilOperation pass_op = {},
                 StencilOperation depth_fail_op = {},
                 StencilOperation compare_op = {},
                 uint32_t compare_mask = {},
                 uint32_t write_mask = {},
                 uint32_t reference = {})
    : fail_op_(fail_op), pass_op_(pass_op), depth_fail_op_(depth_fail_op), compare_op_(compare_op), compare_mask_(compare_mask),
      write_mask_(write_mask), reference_(reference) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StencilOperation fail_op_;
  StencilOperation pass_op_;
  StencilOperation depth_fail_op_;
  StencilOperation compare_op_;
  uint32_t compare_mask_;
  uint32_t write_mask_;
  uint32_t reference_;
};

struct PipelineDepthStencilStateCreateInfo {

  static constexpr StructureType structure_type = StructureType::PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;

  using native_type = VkPipelineDepthStencilStateCreateInfo;

  PipelineDepthStencilStateCreateInfo(PipelineDepthStencilStateCreateMask mask = {},
                                      bool32 depth_test_enable = {},
                                      bool32 depth_write_enable = {},
                                      CompareOperation depth_compare_op = {},
                                      bool32 depth_bounds_test_enable = {},
                                      bool32 stencil_test_enable = {},
                                      StencilOpState front = {},
                                      StencilOpState back = {},
                                      float min_depth_bounds = {},
                                      float max_depth_bounds = {},
                                      const void *next = nullptr)
    : next_(next), mask_(mask), depth_test_enable_(depth_test_enable), depth_write_enable_(depth_write_enable),
      depth_compare_op_(depth_compare_op), depth_bounds_test_enable_(depth_bounds_test_enable), stencil_test_enable_(stencil_test_enable),
      front_(front), back_(back), min_depth_bounds_(min_depth_bounds), max_depth_bounds_(max_depth_bounds) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  PipelineDepthStencilStateCreateMask mask_;
  bool32 depth_test_enable_;
  bool32 depth_write_enable_;
  CompareOperation depth_compare_op_;
  bool32 depth_bounds_test_enable_;
  bool32 stencil_test_enable_;
  StencilOpState front_;
  StencilOpState back_;
  float min_depth_bounds_;
  float max_depth_bounds_;
};

struct VertexInputBindingDescription {

  using native_type = VkVertexInputBindingDescription;

  VertexInputBindingDescription(uint32_t binding = {}, uint32_t stride = {}, VertexInputRate input_rate = {})
    : binding_(binding), stride_(stride), input_rate_(input_rate) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t binding_;
  uint32_t stride_;
  VertexInputRate input_rate_;
};

struct VertexInputAttributeDescription {

  using native_type = VkVertexInputAttributeDescription;

  VertexInputAttributeDescription(uint32_t location = {}, uint32_t binding = {}, Format format = {}, uint32_t offset = {})
    : location_(location), binding_(binding), format_(format), offset_(offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t location_;
  uint32_t binding_;
  Format format_;
  uint32_t offset_;
};

struct PipelineVertexInputStateCreateInfo {

  static constexpr StructureType structure_type = StructureType::PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;

  using native_type = VkPipelineVertexInputStateCreateInfo;

  PipelineVertexInputStateCreateInfo(PipelineVertexInputStateCreateMask mask = {},
                                     uint32_t vertex_binding_description_count = {},
                                     const VertexInputBindingDescription *vertex_binding_descriptions = {},
                                     uint32_t vertex_attribute_description_count = {},
                                     const VertexInputAttributeDescription *vertex_attribute_descriptions = {},
                                     const void *next = nullptr)
    : next_(next), mask_(mask), vertex_binding_description_count_(vertex_binding_description_count),
      vertex_binding_descriptions_(vertex_binding_descriptions), vertex_attribute_description_count_(vertex_attribute_description_count),
      vertex_attribute_descriptions_(vertex_attribute_descriptions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  PipelineVertexInputStateCreateMask mask_;
  uint32_t vertex_binding_description_count_;
  const VertexInputBindingDescription *vertex_binding_descriptions_;
  uint32_t vertex_attribute_description_count_;
  const VertexInputAttributeDescription *vertex_attribute_descriptions_;
};

struct PipelineInputAssemblyStateCreateInfo {

  static constexpr StructureType structure_type = StructureType::PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;

  using native_type = VkPipelineInputAssemblyStateCreateInfo;

  PipelineInputAssemblyStateCreateInfo(PipelineInputAssemblyStateCreateMask mask = {},
                                       PrimitiveTopology topology = {},
                                       VkBool32 primitive_restart_enable = {},
                                       const void *next = nullptr)
    : next_(next), mask_(mask), topology_(topology), primitive_restart_enable_(primitive_restart_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  PipelineInputAssemblyStateCreateMask mask_;
  PrimitiveTopology topology_;
  bool32 primitive_restart_enable_;
};

struct PipelineRenderingCreateInfo {

  static constexpr StructureType structure_type = StructureType::PIPELINE_RENDERING_CREATE_INFO_KHR;

  using native_type = VkPipelineRenderingCreateInfo;

  PipelineRenderingCreateInfo(uint32_t view_mask = {},
                              uint32_t color_attachment_count = {},
                              const Format *color_attachment_formats = {},
                              Format depth_attachment_format = {},
                              Format stencil_attachment_format = {},
                              const void *next = nullptr)
    : next_(next), view_mask_(view_mask), color_attachment_count_(color_attachment_count),
      color_attachment_formats_(color_attachment_formats), depth_attachment_format_(depth_attachment_format),
      stencil_attachment_format_(stencil_attachment_format) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  uint32_t view_mask_;
  uint32_t color_attachment_count_;
  const Format *color_attachment_formats_;
  Format depth_attachment_format_;
  Format stencil_attachment_format_;
};

struct PipelineDynamicStateCreateInfo {

  static constexpr StructureType structure_type = StructureType::PIPELINE_DYNAMIC_STATE_CREATE_INFO;

  using native_type = VkPipelineDynamicStateCreateInfo;

  PipelineDynamicStateCreateInfo(uint32_t dynamic_state_count = {},
                                 const VkDynamicState *dynamic_states = {},
                                 PipelineDynamicStateCreateMask mask = {},
                                 const void *next = nullptr)
    : next_(next), mask_(mask), dynamic_state_count_(dynamic_state_count), dynamic_states_(dynamic_states) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  PipelineDynamicStateCreateMask mask_;
  uint32_t dynamic_state_count_;
  const VkDynamicState *dynamic_states_;
};

struct PipelineColorBlendStateCreateInfo {

  static constexpr StructureType structure_type = StructureType::PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;

  using native_type = VkPipelineColorBlendStateCreateInfo;

  PipelineColorBlendStateCreateInfo(bool32 logic_op_enable = {},
                                    LogicOperation logic_op = {},
                                    uint32_t attachment_count = {},
                                    const VkPipelineColorBlendAttachmentState *attachments = {},
                                    const std::array<float, 4> &blend_constants = {},
                                    PipelineColorBlendStateCreateMask mask = {},
                                    const void *next = nullptr)
    : next_(next), mask_(mask), logic_op_enable_(logic_op_enable), logic_op_(logic_op), attachment_count_(attachment_count),
      attachments_(attachments), blend_constants_(blend_constants) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  PipelineColorBlendStateCreateMask mask_;
  bool32 logic_op_enable_;
  LogicOperation logic_op_;
  uint32_t attachment_count_;
  const VkPipelineColorBlendAttachmentState *attachments_;
  std::array<float, 4> blend_constants_;
};

struct PipelineMultisampleStateCreateInfo {

  static constexpr StructureType structure_type = StructureType::PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;

  using native_type = VkPipelineMultisampleStateCreateInfo;

  PipelineMultisampleStateCreateInfo(SampleCountMask rasterization_samples = SampleCountMaskBit::E_1_BIT,
                                     bool32 sample_shading_enable = {},
                                     float min_sample_shading = {},
                                     const SampleMask *sample_mask = {},
                                     bool32 alpha_to_coverage_enable = {},
                                     bool32 alpha_to_one_enable = {},
                                     PipelineMultisampleStateCreateMask mask = {},
                                     const void *next = nullptr)
    : next_(next), mask_(mask), rasterization_samples_(rasterization_samples), sample_shading_enable_(sample_shading_enable),
      min_sample_shading_(min_sample_shading), sample_mask_(sample_mask), alpha_to_coverage_enable_(alpha_to_coverage_enable),
      alpha_to_one_enable_(alpha_to_one_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  PipelineMultisampleStateCreateMask mask_;
  SampleCountMask rasterization_samples_;
  bool32 sample_shading_enable_;
  float min_sample_shading_;
  const SampleMask *sample_mask_;
  bool32 alpha_to_coverage_enable_;
  bool32 alpha_to_one_enable_;
};

struct PipelineRasterizationStateCreateInfo {

  static constexpr StructureType structure_type = StructureType::PIPELINE_RASTERIZATION_STATE_CREATE_INFO;

  using native_type = VkPipelineRasterizationStateCreateInfo;

  PipelineRasterizationStateCreateInfo(bool32 depth_clamp_enable = {},
                                       bool32 rasterizer_discard_enable = {},
                                       PolygonMode polygon_mode = {},
                                       CullModeMask cull_mode = {},
                                       FrontFace front_face = {},
                                       bool32 depth_bias_enable = {},
                                       float depth_bias_constant_factor = {},
                                       float depth_bias_clamp = {},
                                       float depth_bias_slope_factor = {},
                                       float line_width = {},
                                       PipelineRasterizationStateCreateMask mask = {},
                                       const void *next = nullptr)
    : next_(next), mask_(mask), depth_clamp_enable_(depth_clamp_enable), rasterizer_discard_enable_(rasterizer_discard_enable),
      polygon_mode_(polygon_mode), cull_mode_(cull_mode), front_face_(front_face), depth_bias_enable_(depth_bias_enable),
      depth_bias_constant_factor_(depth_bias_constant_factor), depth_bias_clamp_(depth_bias_clamp),
      depth_bias_slope_factor_(depth_bias_slope_factor), line_width_(line_width) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  PipelineRasterizationStateCreateMask mask_;
  bool32 depth_clamp_enable_;
  bool32 rasterizer_discard_enable_;
  PolygonMode polygon_mode_;
  CullModeMask cull_mode_;
  FrontFace front_face_;
  bool32 depth_bias_enable_;
  float depth_bias_constant_factor_;
  float depth_bias_clamp_;
  float depth_bias_slope_factor_;
  float line_width_;
};

struct Viewport {

  using native_type = VkViewport;

  Viewport(float x = {}, float y = {}, float width = {}, float height = {}, float min_depth = {}, float max_depth = {})
    : x_(x), y_(y), width_(width), height_(height), min_depth_(min_depth), max_depth_(max_depth) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  float x_;
  float y_;
  float width_;
  float height_;
  float min_depth_;
  float max_depth_;
};

struct Offset2D {

  using native_type = VkOffset2D;

  Offset2D(int32_t x = {}, int32_t y = {}) : x_(x), y_(y) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  int32_t x_;
  int32_t y_;
};

struct Extent2D {

  using native_type = VkExtent2D;

  Extent2D(uint32_t width = {}, uint32_t height = {}) : width_(width), height_(height) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t width_;
  uint32_t height_;
};

struct Extent3D {

  using native_type = VkExtent3D;

  Extent3D(uint32_t width = {}, uint32_t height = {}, uint32_t depth = {}) : width_(width), height_(height), depth_(depth) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t width_;
  uint32_t height_;
  uint32_t depth_;
};

struct Rect2D {

  using native_type = VkRect2D;

  Rect2D(Offset2D offset = {}, Extent2D extent = {}) : offset_(offset), extent_(extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  Offset2D offset_;
  Extent2D extent_;
};

struct PipelineViewportStateCreateInfo {

  static constexpr StructureType structure_type = StructureType::PIPELINE_VIEWPORT_STATE_CREATE_INFO;

  using native_type = VkPipelineViewportStateCreateInfo;

  PipelineViewportStateCreateInfo(uint32_t viewport_count = {},
                                  const Viewport *viewports = {},
                                  uint32_t scissor_count = {},
                                  const Rect2D *scissors = {},
                                  PipelineViewportStateCreateMask mask = {},
                                  const void *next = nullptr)
    : next_(next), mask_(mask), viewport_count_(viewport_count), viewports_(viewports), scissor_count_(scissor_count), scissors_(scissors) {
  }

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  PipelineViewportStateCreateMask mask_;
  uint32_t viewport_count_;
  const Viewport *viewports_;
  uint32_t scissor_count_;
  const Rect2D *scissors_;
};

struct PushConstantRange {

  using native_type = VkPushConstantRange;

  PushConstantRange(ShaderStageMask stage_mask = {}, uint32_t offset = {}, uint32_t size = {})
    : stage_mask_(stage_mask_), offset_(offset), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ShaderStageMask stage_mask_;
  uint32_t offset_;
  uint32_t size_;
};

struct SurfaceCapabilities {

  using native_type = VkSurfaceCapabilitiesKHR;

  SurfaceCapabilities(uint32_t min_image_count,
                      uint32_t max_image_count,
                      Extent2D current_extent,
                      Extent2D min_image_extent,
                      Extent2D max_image_extent,
                      uint32_t max_image_array_layers,
                      SurfaceTransformMask supported_transforms,
                      SurfaceTransformMaskBit current_transform,
                      CompositeAlphaMask supported_composite_alpha,
                      ImageUsageMask supported_usage_flags)
    : min_image_count_(min_image_count), max_image_count_(max_image_count), current_extent_(current_extent),
      min_image_extent_(min_image_extent), max_image_extent_(max_image_extent), max_image_array_layers_(max_image_array_layers),
      supported_transforms_(supported_transforms), current_transform_(current_transform),
      supported_composite_alpha_(supported_composite_alpha), supported_usage_flags_(supported_usage_flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t min_image_count_;
  uint32_t max_image_count_;
  Extent2D current_extent_;
  Extent2D min_image_extent_;
  Extent2D max_image_extent_;
  uint32_t max_image_array_layers_;
  SurfaceTransformMask supported_transforms_;
  SurfaceTransformMaskBit current_transform_;
  CompositeAlphaMask supported_composite_alpha_;
  ImageUsageMask supported_usage_flags_;
};

struct ImageCreateInfo {

  static constexpr StructureType structure_type = StructureType::IMAGE_CREATE_INFO;

  using native_type = VkImageCreateInfo;

  ImageCreateInfo(const void *next,
                  VkImageCreateFlags flags,
                  VkImageType image_type,
                  Format format,
                  Extent3D extent,
                  uint32_t mip_levels,
                  uint32_t array_layers,
                  SampleCountMaskBit samples,
                  VkImageTiling tiling,
                  ImageUsageMask usage,
                  VkSharingMode sharing_mode,
                  uint32_t queue_family_index_count,
                  const uint32_t *queue_family_indices,
                  ImageLayout initial_layout)
    : next_(next), flags_(flags), image_type_(image_type), format_(format), extent_(extent), mip_levels_(mip_levels),
      array_layers_(array_layers), samples_(samples), tiling_(tiling), usage_(usage), sharing_mode_(sharing_mode),
      queue_family_index_count_(queue_family_index_count), queue_family_indices_(queue_family_indices), initial_layout_(initial_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  VkImageCreateFlags flags_;
  VkImageType image_type_;
  Format format_;
  Extent3D extent_;
  uint32_t mip_levels_;
  uint32_t array_layers_;
  SampleCountMaskBit samples_;
  VkImageTiling tiling_;
  ImageUsageMask usage_;
  VkSharingMode sharing_mode_;
  uint32_t queue_family_index_count_;
  const uint32_t *queue_family_indices_;
  ImageLayout initial_layout_;
};

struct ImageViewCreateInfo {

  static constexpr StructureType structure_type = StructureType::IMAGE_VIEW_CREATE_INFO;

  using native_type = VkImageViewCreateInfo;

  ImageViewCreateInfo(const void *next,
                      VkImageViewCreateFlags flags,
                      VkImage image,
                      ImageViewType view_type,
                      Format format,
                      VkComponentMapping components,
                      VkImageSubresourceRange subresource_range)
    : next_(next), flags_(flags), image_(image), view_type_(view_type), format_(format), components_(components),
      subresource_range_(subresource_range) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_{structure_type};
  const void *next_;
  VkImageViewCreateFlags flags_;
  VkImage image_;
  ImageViewType view_type_;
  Format format_;
  VkComponentMapping components_;
  VkImageSubresourceRange subresource_range_;
};

} // namespace Walle

#endif // WALLE_GRAPHICS_STRUCTURES_H