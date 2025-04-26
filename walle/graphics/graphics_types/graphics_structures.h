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
using DeviceSize = VkDeviceSize;
using DeviceAddress = VkDeviceAddress;

struct PhysicalDeviceShaderReplicatedCompositesFeaturesEXT {

  using native_type = VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT;

  PhysicalDeviceShaderReplicatedCompositesFeaturesEXT(void *next = {}, bool32 shader_replicated_composites = {})
    : next_(next), shader_replicated_composites_(shader_replicated_composites) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT;
  void *next_;
  bool32 shader_replicated_composites_;
};

struct PhysicalDeviceImageAlignmentControlFeaturesMESA {

  using native_type = VkPhysicalDeviceImageAlignmentControlFeaturesMESA;

  PhysicalDeviceImageAlignmentControlFeaturesMESA(void *next = {}, bool32 image_alignment_control = {})
    : next_(next), image_alignment_control_(image_alignment_control) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA;
  void *next_;
  bool32 image_alignment_control_;
};

struct MemoryMapPlacedInfoEXT {

  using native_type = VkMemoryMapPlacedInfoEXT;

  MemoryMapPlacedInfoEXT(const void *next = {}, void *p_placed_address = {}) : next_(next), p_placed_address_(p_placed_address) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_MAP_PLACED_INFO_EXT;
  const void *next_;
  void *p_placed_address_;
};

struct PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR {

  using native_type = VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR;

  PhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(void *next = {}, bool32 dynamic_rendering_local_read = {})
    : next_(next), dynamic_rendering_local_read_(dynamic_rendering_local_read) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR;
  void *next_;
  bool32 dynamic_rendering_local_read_;
};

struct SemaphoreSubmitInfo {

  using native_type = VkSemaphoreSubmitInfo;

  SemaphoreSubmitInfo(
    const void *next = {}, VkSemaphore semaphore = {}, uint64_t value = {}, PipelineStageMask2 stage_mask = {}, uint32_t device_index = {})
    : next_(next), semaphore_(semaphore), value_(value), stage_mask_(stage_mask), device_index_(device_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SEMAPHORE_SUBMIT_INFO;
  const void *next_;
  VkSemaphore semaphore_;
  uint64_t value_;
  PipelineStageMask2 stage_mask_;
  uint32_t device_index_;
};

struct RenderPassStripeSubmitInfoARM {

  using native_type = VkRenderPassStripeSubmitInfoARM;

  RenderPassStripeSubmitInfoARM(const void *next = {},
                                uint32_t stripe_semaphore_info_count = {},
                                const SemaphoreSubmitInfo *p_stripe_semaphore_infos = {})
    : next_(next), stripe_semaphore_info_count_(stripe_semaphore_info_count), p_stripe_semaphore_infos_(p_stripe_semaphore_infos) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_STRIPE_SUBMIT_INFO_ARM;
  const void *next_;
  uint32_t stripe_semaphore_info_count_;
  const SemaphoreSubmitInfo *p_stripe_semaphore_infos_;
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

struct Rect2D {

  using native_type = VkRect2D;

  Rect2D(Offset2D offset = {}, Extent2D extent = {}) : offset_(offset), extent_(extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  Offset2D offset_;
  Extent2D extent_;
};

struct RenderPassStripeInfoARM {

  using native_type = VkRenderPassStripeInfoARM;

  RenderPassStripeInfoARM(const void *next = {}, Rect2D stripe_area = {}) : next_(next), stripe_area_(stripe_area) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_STRIPE_INFO_ARM;
  const void *next_;
  Rect2D stripe_area_;
};

struct RenderPassStripeBeginInfoARM {

  using native_type = VkRenderPassStripeBeginInfoARM;

  RenderPassStripeBeginInfoARM(const void *next = {}, uint32_t stripe_info_count = {}, const RenderPassStripeInfoARM *p_stripe_infos = {})
    : next_(next), stripe_info_count_(stripe_info_count), p_stripe_infos_(p_stripe_infos) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_STRIPE_BEGIN_INFO_ARM;
  const void *next_;
  uint32_t stripe_info_count_;
  const RenderPassStripeInfoARM *p_stripe_infos_;
};

struct PhysicalDeviceRelaxedLineRasterizationFeaturesIMG {

  using native_type = VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG;

  PhysicalDeviceRelaxedLineRasterizationFeaturesIMG(void *next = {}, bool32 relaxed_line_rasterization = {})
    : next_(next), relaxed_line_rasterization_(relaxed_line_rasterization) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG;
  void *next_;
  bool32 relaxed_line_rasterization_;
};

struct PhysicalDeviceSchedulingControlsPropertiesARM {

  using native_type = VkPhysicalDeviceSchedulingControlsPropertiesARM;

  PhysicalDeviceSchedulingControlsPropertiesARM(void *next = {}, PhysicalDeviceSchedulingControlsMask scheduling_controls_flags = {})
    : next_(next), scheduling_controls_flags_(scheduling_controls_flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM;
  void *next_;
  PhysicalDeviceSchedulingControlsMask scheduling_controls_flags_;
};

struct PhysicalDeviceSchedulingControlsFeaturesARM {

  using native_type = VkPhysicalDeviceSchedulingControlsFeaturesARM;

  PhysicalDeviceSchedulingControlsFeaturesARM(void *next = {}, bool32 scheduling_controls = {})
    : next_(next), scheduling_controls_(scheduling_controls) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM;
  void *next_;
  bool32 scheduling_controls_;
};

struct PhysicalDeviceCudaKernelLaunchPropertiesNV {

  using native_type = VkPhysicalDeviceCudaKernelLaunchPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV;
  void *next_;
  uint32_t compute_capability_minor_;
  uint32_t compute_capability_major_;
};

struct PhysicalDeviceCudaKernelLaunchFeaturesNV {

  using native_type = VkPhysicalDeviceCudaKernelLaunchFeaturesNV;

  PhysicalDeviceCudaKernelLaunchFeaturesNV(void *next = {}, bool32 cuda_kernel_launch_features = {})
    : next_(next), cuda_kernel_launch_features_(cuda_kernel_launch_features) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV;
  void *next_;
  bool32 cuda_kernel_launch_features_;
};

struct LatencySurfaceCapabilitiesNV {

  using native_type = VkLatencySurfaceCapabilitiesNV;

  LatencySurfaceCapabilitiesNV(const void *next = {}, uint32_t present_mode_count = {}, PresentMode *p_present_modes = {})
    : next_(next), present_mode_count_(present_mode_count), p_present_modes_(p_present_modes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::LATENCY_SURFACE_CAPABILITIES_NV;
  const void *next_;
  uint32_t present_mode_count_;
  PresentMode *p_present_modes_;
};

struct SwapchainLatencyCreateInfoNV {

  using native_type = VkSwapchainLatencyCreateInfoNV;

  SwapchainLatencyCreateInfoNV(const void *next = {}, bool32 latency_mode_enable = {})
    : next_(next), latency_mode_enable_(latency_mode_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SWAPCHAIN_LATENCY_CREATE_INFO_NV;
  const void *next_;
  bool32 latency_mode_enable_;
};

struct LatencyTimingsFrameReportNV {

  using native_type = VkLatencyTimingsFrameReportNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::LATENCY_TIMINGS_FRAME_REPORT_NV;
  const void *next_;
  uint64_t present_id_;
  uint64_t input_sample_time_us_;
  uint64_t sim_start_time_us_;
  uint64_t sim_end_time_us_;
  uint64_t render_submit_start_time_us_;
  uint64_t render_submit_end_time_us_;
  uint64_t present_start_time_us_;
  uint64_t present_end_time_us_;
  uint64_t driver_start_time_us_;
  uint64_t driver_end_time_us_;
  uint64_t os_render_queue_start_time_us_;
  uint64_t os_render_queue_end_time_us_;
  uint64_t gpu_render_start_time_us_;
  uint64_t gpu_render_end_time_us_;
};

struct LatencySleepInfoNV {

  using native_type = VkLatencySleepInfoNV;

  LatencySleepInfoNV(const void *next = {}, VkSemaphore signal_semaphore = {}, uint64_t value = {})
    : next_(next), signal_semaphore_(signal_semaphore), value_(value) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::LATENCY_SLEEP_INFO_NV;
  const void *next_;
  VkSemaphore signal_semaphore_;
  uint64_t value_;
};

struct LatencySleepModeInfoNV {

  using native_type = VkLatencySleepModeInfoNV;

  LatencySleepModeInfoNV(const void *next = {},
                         bool32 low_latency_mode = {},
                         bool32 low_latency_boost = {},
                         uint32_t minimum_interval_us = {})
    : next_(next), low_latency_mode_(low_latency_mode), low_latency_boost_(low_latency_boost), minimum_interval_us_(minimum_interval_us) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::LATENCY_SLEEP_MODE_INFO_NV;
  const void *next_;
  bool32 low_latency_mode_;
  bool32 low_latency_boost_;
  uint32_t minimum_interval_us_;
};

struct PhysicalDeviceCubicWeightsFeaturesQCOM {

  using native_type = VkPhysicalDeviceCubicWeightsFeaturesQCOM;

  PhysicalDeviceCubicWeightsFeaturesQCOM(void *next = {}, bool32 selectable_cubic_weights = {})
    : next_(next), selectable_cubic_weights_(selectable_cubic_weights) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM;
  void *next_;
  bool32 selectable_cubic_weights_;
};

struct SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM {

  using native_type = VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM;

  SamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(void *next = {}, bool32 enable_ydegamma = {}, bool32 enable_cb_cr_degamma = {})
    : next_(next), enable_ydegamma_(enable_ydegamma), enable_cb_cr_degamma_(enable_cb_cr_degamma) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM;
  void *next_;
  bool32 enable_ydegamma_;
  bool32 enable_cb_cr_degamma_;
};

struct BindDescriptorBufferEmbeddedSamplersInfoEXT {

  using native_type = VkBindDescriptorBufferEmbeddedSamplersInfoEXT;

  BindDescriptorBufferEmbeddedSamplersInfoEXT(const void *next = {},
                                              ShaderStageMask stage_flags = {},
                                              VkPipelineLayout layout = {},
                                              uint32_t set = {})
    : next_(next), stage_flags_(stage_flags), layout_(layout), set_(set) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT;
  const void *next_;
  ShaderStageMask stage_flags_;
  VkPipelineLayout layout_;
  uint32_t set_;
};

struct PushConstantsInfoKHR {

  using native_type = VkPushConstantsInfoKHR;

  PushConstantsInfoKHR(const void *next = {},
                       VkPipelineLayout layout = {},
                       ShaderStageMask stage_flags = {},
                       uint32_t offset = {},
                       uint32_t size = {},
                       const void *p_values = {})
    : next_(next), layout_(layout), stage_flags_(stage_flags), offset_(offset), size_(size), p_values_(p_values) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PUSH_CONSTANTS_INFO_KHR;
  const void *next_;
  VkPipelineLayout layout_;
  ShaderStageMask stage_flags_;
  uint32_t offset_;
  uint32_t size_;
  const void *p_values_;
};

struct BindMemoryStatusKHR {

  using native_type = VkBindMemoryStatusKHR;

  BindMemoryStatusKHR(const void *next = {}, Result *p_result = {}) : next_(next), p_result_(p_result) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_MEMORY_STATUS_KHR;
  const void *next_;
  Result *p_result_;
};

struct SpecializationMapEntry {

  using native_type = VkSpecializationMapEntry;

  SpecializationMapEntry(uint32_t constant_id = {}, uint32_t offset = {}, size_t size = {})
    : constant_id_(constant_id), offset_(offset), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t constant_id_;
  uint32_t offset_;
  size_t size_;
};

struct SpecializationInfo {

  using native_type = VkSpecializationInfo;

  SpecializationInfo(uint32_t map_entry_count = {},
                     const SpecializationMapEntry *p_map_entries = {},
                     size_t data_size = {},
                     const void *p_data = {})
    : map_entry_count_(map_entry_count), p_map_entries_(p_map_entries), data_size_(data_size), p_data_(p_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t map_entry_count_;
  const SpecializationMapEntry *p_map_entries_;
  size_t data_size_;
  const void *p_data_;
};

struct PipelineShaderStageCreateInfo {

  using native_type = VkPipelineShaderStageCreateInfo;

  PipelineShaderStageCreateInfo(const void *next = {},
                                PipelineShaderStageCreateMask flags = {},
                                ShaderStageMaskBit stage = {},
                                VkShaderModule module = {},
                                const char *p_name = {},
                                const SpecializationInfo *p_specialization_info = {})
    : next_(next), flags_(flags), stage_(stage), module_(module), p_name_(p_name), p_specialization_info_(p_specialization_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_SHADER_STAGE_CREATE_INFO;
  const void *next_;
  PipelineShaderStageCreateMask flags_;
  ShaderStageMaskBit stage_;
  VkShaderModule module_;
  const char *p_name_;
  const SpecializationInfo *p_specialization_info_;
};

struct PipelineLibraryCreateInfoKHR {

  using native_type = VkPipelineLibraryCreateInfoKHR;

  PipelineLibraryCreateInfoKHR(const void *next = {}, uint32_t library_count = {}, const VkPipeline *p_libraries = {})
    : next_(next), library_count_(library_count), p_libraries_(p_libraries) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_LIBRARY_CREATE_INFO_KHR;
  const void *next_;
  uint32_t library_count_;
  const VkPipeline *p_libraries_;
};

struct BindDescriptorSetsInfoKHR {

  using native_type = VkBindDescriptorSetsInfoKHR;

  BindDescriptorSetsInfoKHR(const void *next = {},
                            ShaderStageMask stage_flags = {},
                            VkPipelineLayout layout = {},
                            uint32_t first_set = {},
                            uint32_t descriptor_set_count = {},
                            const VkDescriptorSet *p_descriptor_sets = {},
                            uint32_t dynamic_offset_count = {},
                            const uint32_t *p_dynamic_offsets = {})
    : next_(next), stage_flags_(stage_flags), layout_(layout), first_set_(first_set), descriptor_set_count_(descriptor_set_count),
      p_descriptor_sets_(p_descriptor_sets), dynamic_offset_count_(dynamic_offset_count), p_dynamic_offsets_(p_dynamic_offsets) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_DESCRIPTOR_SETS_INFO_KHR;
  const void *next_;
  ShaderStageMask stage_flags_;
  VkPipelineLayout layout_;
  uint32_t first_set_;
  uint32_t descriptor_set_count_;
  const VkDescriptorSet *p_descriptor_sets_;
  uint32_t dynamic_offset_count_;
  const uint32_t *p_dynamic_offsets_;
};

struct PhysicalDeviceShaderTileImageFeaturesEXT {

  using native_type = VkPhysicalDeviceShaderTileImageFeaturesEXT;

  PhysicalDeviceShaderTileImageFeaturesEXT(void *next = {},
                                           bool32 shader_tile_image_color_read_access = {},
                                           bool32 shader_tile_image_depth_read_access = {},
                                           bool32 shader_tile_image_stencil_read_access = {})
    : next_(next), shader_tile_image_color_read_access_(shader_tile_image_color_read_access),
      shader_tile_image_depth_read_access_(shader_tile_image_depth_read_access),
      shader_tile_image_stencil_read_access_(shader_tile_image_stencil_read_access) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT;
  void *next_;
  bool32 shader_tile_image_color_read_access_;
  bool32 shader_tile_image_depth_read_access_;
  bool32 shader_tile_image_stencil_read_access_;
};

struct PushConstantRange {

  using native_type = VkPushConstantRange;

  PushConstantRange(ShaderStageMask stage_flags = {}, uint32_t offset = {}, uint32_t size = {})
    : stage_flags_(stage_flags), offset_(offset), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ShaderStageMask stage_flags_;
  uint32_t offset_;
  uint32_t size_;
};

struct ShaderCreateInfoEXT {

  using native_type = VkShaderCreateInfoEXT;

  ShaderCreateInfoEXT(const void *next = {},
                      ShaderCreateMask flags = {},
                      ShaderStageMaskBit stage = {},
                      ShaderStageMask next_stage = {},
                      ShaderCodeType code_type = {},
                      size_t code_size = {},
                      const void *p_code = {},
                      const char *p_name = {},
                      uint32_t set_layout_count = {},
                      const VkDescriptorSetLayout *p_set_layouts = {},
                      uint32_t push_constant_range_count = {},
                      const PushConstantRange *p_push_constant_ranges = {},
                      const SpecializationInfo *p_specialization_info = {})
    : next_(next), flags_(flags), stage_(stage), next_stage_(next_stage), code_type_(code_type), code_size_(code_size), p_code_(p_code),
      p_name_(p_name), set_layout_count_(set_layout_count), p_set_layouts_(p_set_layouts),
      push_constant_range_count_(push_constant_range_count), p_push_constant_ranges_(p_push_constant_ranges),
      p_specialization_info_(p_specialization_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SHADER_CREATE_INFO_EXT;
  const void *next_;
  ShaderCreateMask flags_;
  ShaderStageMaskBit stage_;
  ShaderStageMask next_stage_;
  ShaderCodeType code_type_;
  size_t code_size_;
  const void *p_code_;
  const char *p_name_;
  uint32_t set_layout_count_;
  const VkDescriptorSetLayout *p_set_layouts_;
  uint32_t push_constant_range_count_;
  const PushConstantRange *p_push_constant_ranges_;
  const SpecializationInfo *p_specialization_info_;
};

struct PhysicalDeviceShaderObjectFeaturesEXT {

  using native_type = VkPhysicalDeviceShaderObjectFeaturesEXT;

  PhysicalDeviceShaderObjectFeaturesEXT(void *next = {}, bool32 shader_object = {}) : next_(next), shader_object_(shader_object) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT;
  void *next_;
  bool32 shader_object_;
};

struct MemoryMapInfoKHR {

  using native_type = VkMemoryMapInfoKHR;

  MemoryMapInfoKHR(
    const void *next = {}, MemoryMapMask flags = {}, VkDeviceMemory memory = {}, DeviceSize offset = {}, DeviceSize size = {})
    : next_(next), flags_(flags), memory_(memory), offset_(offset), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_MAP_INFO_KHR;
  const void *next_;
  MemoryMapMask flags_;
  VkDeviceMemory memory_;
  DeviceSize offset_;
  DeviceSize size_;
};

struct QueryLowLatencySupportNV {

  using native_type = VkQueryLowLatencySupportNV;

  QueryLowLatencySupportNV(const void *next = {}, void *p_queried_low_latency_data = {})
    : next_(next), p_queried_low_latency_data_(p_queried_low_latency_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUERY_LOW_LATENCY_SUPPORT_NV;
  const void *next_;
  void *p_queried_low_latency_data_;
};

struct PhysicalDeviceShaderCorePropertiesARM {

  using native_type = VkPhysicalDeviceShaderCorePropertiesARM;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM;
  void *next_;
  uint32_t pixel_rate_;
  uint32_t texel_rate_;
  uint32_t fma_rate_;
};

struct PhysicalDeviceRayTracingPositionFetchFeaturesKHR {

  using native_type = VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR;

  PhysicalDeviceRayTracingPositionFetchFeaturesKHR(void *next = {}, bool32 ray_tracing_position_fetch = {})
    : next_(next), ray_tracing_position_fetch_(ray_tracing_position_fetch) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR;
  void *next_;
  bool32 ray_tracing_position_fetch_;
};

struct DirectDriverLoadingInfoLUNARG {

  using native_type = VkDirectDriverLoadingInfoLUNARG;

  DirectDriverLoadingInfoLUNARG(void *next = {},
                                DirectDriverLoadingMask flags = {},
                                PFN_vkGetInstanceProcAddrLUNARG pfn_get_instance_proc_addr = {})
    : next_(next), flags_(flags), pfn_get_instance_proc_addr_(pfn_get_instance_proc_addr) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DIRECT_DRIVER_LOADING_INFO_LUNARG;
  void *next_;
  DirectDriverLoadingMask flags_;
  PFN_vkGetInstanceProcAddrLUNARG pfn_get_instance_proc_addr_;
};

struct DirectDriverLoadingListLUNARG {

  using native_type = VkDirectDriverLoadingListLUNARG;

  DirectDriverLoadingListLUNARG(const void *next = {},
                                DirectDriverLoadingMode mode = {},
                                uint32_t driver_count = {},
                                const DirectDriverLoadingInfoLUNARG *p_drivers = {})
    : next_(next), mode_(mode), driver_count_(driver_count), p_drivers_(p_drivers) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DIRECT_DRIVER_LOADING_LIST_LUNARG;
  const void *next_;
  DirectDriverLoadingMode mode_;
  uint32_t driver_count_;
  const DirectDriverLoadingInfoLUNARG *p_drivers_;
};

struct PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV {

  using native_type = VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV;

  PhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(void *next = {}, bool32 extended_sparse_address_space = {})
    : next_(next), extended_sparse_address_space_(extended_sparse_address_space) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV;
  void *next_;
  bool32 extended_sparse_address_space_;
};

struct SwapchainPresentScalingCreateInfoEXT {

  using native_type = VkSwapchainPresentScalingCreateInfoEXT;

  SwapchainPresentScalingCreateInfoEXT(const void *next = {},
                                       PresentScalingMask scaling_behavior = {},
                                       PresentGravityMask present_gravity_x = {},
                                       PresentGravityMask present_gravity_y = {})
    : next_(next), scaling_behavior_(scaling_behavior), present_gravity_x_(present_gravity_x), present_gravity_y_(present_gravity_y) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT;
  const void *next_;
  PresentScalingMask scaling_behavior_;
  PresentGravityMask present_gravity_x_;
  PresentGravityMask present_gravity_y_;
};

struct SwapchainPresentModeInfoEXT {

  using native_type = VkSwapchainPresentModeInfoEXT;

  SwapchainPresentModeInfoEXT(const void *next = {}, uint32_t swapchain_count = {}, const PresentMode *p_present_modes = {})
    : next_(next), swapchain_count_(swapchain_count), p_present_modes_(p_present_modes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SWAPCHAIN_PRESENT_MODE_INFO_EXT;
  const void *next_;
  uint32_t swapchain_count_;
  const PresentMode *p_present_modes_;
};

struct PhysicalDeviceLayeredDriverPropertiesMSFT {

  using native_type = VkPhysicalDeviceLayeredDriverPropertiesMSFT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT;
  void *next_;
  LayeredDriverUnderlyingApi underlying_api_;
};

struct SurfacePresentModeCompatibilityEXT {

  using native_type = VkSurfacePresentModeCompatibilityEXT;

  SurfacePresentModeCompatibilityEXT(void *next = {}, uint32_t present_mode_count = {}, PresentMode *p_present_modes = {})
    : next_(next), present_mode_count_(present_mode_count), p_present_modes_(p_present_modes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SURFACE_PRESENT_MODE_COMPATIBILITY_EXT;
  void *next_;
  uint32_t present_mode_count_;
  PresentMode *p_present_modes_;
};

struct SurfacePresentScalingCapabilitiesEXT {

  using native_type = VkSurfacePresentScalingCapabilitiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SURFACE_PRESENT_SCALING_CAPABILITIES_EXT;
  void *next_;
  PresentScalingMask supported_present_scaling_;
  PresentGravityMask supported_present_gravity_x_;
  PresentGravityMask supported_present_gravity_y_;
  Extent2D min_scaled_image_extent_;
  Extent2D max_scaled_image_extent_;
};

struct SurfacePresentModeEXT {

  using native_type = VkSurfacePresentModeEXT;

  SurfacePresentModeEXT(void *next = {}, PresentMode present_mode = {}) : next_(next), present_mode_(present_mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SURFACE_PRESENT_MODE_EXT;
  void *next_;
  PresentMode present_mode_;
};

struct PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT {

  using native_type = VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT;

  PhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(void *next = {}, bool32 dynamic_rendering_unused_attachments = {})
    : next_(next), dynamic_rendering_unused_attachments_(dynamic_rendering_unused_attachments) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT;
  void *next_;
  bool32 dynamic_rendering_unused_attachments_;
};

struct PhysicalDeviceFrameBoundaryFeaturesEXT {

  using native_type = VkPhysicalDeviceFrameBoundaryFeaturesEXT;

  PhysicalDeviceFrameBoundaryFeaturesEXT(void *next = {}, bool32 frame_boundary = {}) : next_(next), frame_boundary_(frame_boundary) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT;
  void *next_;
  bool32 frame_boundary_;
};

struct PhysicalDeviceShaderCoreBuiltinsFeaturesARM {

  using native_type = VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM;

  PhysicalDeviceShaderCoreBuiltinsFeaturesARM(void *next = {}, bool32 shader_core_builtins = {})
    : next_(next), shader_core_builtins_(shader_core_builtins) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM;
  void *next_;
  bool32 shader_core_builtins_;
};

struct PhysicalDeviceShaderCoreBuiltinsPropertiesARM {

  using native_type = VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM;
  void *next_;
  uint64_t shader_core_mask_;
  uint32_t shader_core_count_;
  uint32_t shader_warps_per_core_;
};

struct DecompressMemoryRegionNV {

  using native_type = VkDecompressMemoryRegionNV;

  DecompressMemoryRegionNV(DeviceAddress src_address = {},
                           DeviceAddress dst_address = {},
                           DeviceSize compressed_size = {},
                           DeviceSize decompressed_size = {},
                           MemoryDecompressionMethodMask decompression_method = {})
    : src_address_(src_address), dst_address_(dst_address), compressed_size_(compressed_size), decompressed_size_(decompressed_size),
      decompression_method_(decompression_method) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceAddress src_address_;
  DeviceAddress dst_address_;
  DeviceSize compressed_size_;
  DeviceSize decompressed_size_;
  MemoryDecompressionMethodMask decompression_method_;
};

struct PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT {

  using native_type = VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT;

  PhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(void *next = {}, bool32 pipeline_library_group_handles = {})
    : next_(next), pipeline_library_group_handles_(pipeline_library_group_handles) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT;
  void *next_;
  bool32 pipeline_library_group_handles_;
};

struct DeviceFaultVendorBinaryHeaderVersionOneEXT {

  using native_type = VkDeviceFaultVendorBinaryHeaderVersionOneEXT;

  DeviceFaultVendorBinaryHeaderVersionOneEXT(uint32_t header_size = {},
                                             DeviceFaultVendorBinaryHeaderVersion header_version = {},
                                             uint32_t vendor_id = {},
                                             uint32_t device_id = {},
                                             uint32_t driver_version = {},
                                             const std::array<uint8_t, VK_UUID_SIZE> &pipeline_cache_uuid = {},
                                             uint32_t application_name_offset = {},
                                             uint32_t application_version = {},
                                             uint32_t engine_name_offset = {},
                                             uint32_t engine_version = {},
                                             uint32_t api_version = {})
    : header_size_(header_size), header_version_(header_version), vendor_id_(vendor_id), device_id_(device_id),
      driver_version_(driver_version), pipeline_cache_uuid_(pipeline_cache_uuid), application_name_offset_(application_name_offset),
      application_version_(application_version), engine_name_offset_(engine_name_offset), engine_version_(engine_version),
      api_version_(api_version) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t header_size_;
  DeviceFaultVendorBinaryHeaderVersion header_version_;
  uint32_t vendor_id_;
  uint32_t device_id_;
  uint32_t driver_version_;
  std::array<uint8_t, VK_UUID_SIZE> pipeline_cache_uuid_;
  uint32_t application_name_offset_;
  uint32_t application_version_;
  uint32_t engine_name_offset_;
  uint32_t engine_version_;
  uint32_t api_version_;
};

struct DeviceFaultVendorInfoEXT {

  using native_type = VkDeviceFaultVendorInfoEXT;

  DeviceFaultVendorInfoEXT(const std::array<char, VK_MAX_DESCRIPTION_SIZE> &description = {},
                           uint64_t vendor_fault_code = {},
                           uint64_t vendor_fault_data = {})
    : description_(description), vendor_fault_code_(vendor_fault_code), vendor_fault_data_(vendor_fault_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  std::array<char, VK_MAX_DESCRIPTION_SIZE> description_;
  uint64_t vendor_fault_code_;
  uint64_t vendor_fault_data_;
};

struct DeviceFaultAddressInfoEXT {

  using native_type = VkDeviceFaultAddressInfoEXT;

  DeviceFaultAddressInfoEXT(DeviceFaultAddressType address_type = {},
                            DeviceAddress reported_address = {},
                            DeviceSize address_precision = {})
    : addresstructure_type_(address_type), reported_address_(reported_address), address_precision_(address_precision) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceFaultAddressType addresstructure_type_;
  DeviceAddress reported_address_;
  DeviceSize address_precision_;
};

struct OpticalFlowSessionCreateInfoNV {

  using native_type = VkOpticalFlowSessionCreateInfoNV;

  OpticalFlowSessionCreateInfoNV(void *next = {},
                                 uint32_t width = {},
                                 uint32_t height = {},
                                 Format image_format = {},
                                 Format flow_vector_format = {},
                                 Format cost_format = {},
                                 OpticalFlowGridSizeMask output_grid_size = {},
                                 OpticalFlowGridSizeMask hint_grid_size = {},
                                 OpticalFlowPerformanceLevel performance_level = {},
                                 OpticalFlowSessionCreateMask flags = {})
    : next_(next), width_(width), height_(height), image_format_(image_format), flow_vector_format_(flow_vector_format),
      cost_format_(cost_format), output_grid_size_(output_grid_size), hint_grid_size_(hint_grid_size),
      performance_level_(performance_level), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::OPTICAL_FLOW_SESSION_CREATE_INFO_NV;
  void *next_;
  uint32_t width_;
  uint32_t height_;
  Format image_format_;
  Format flow_vector_format_;
  Format cost_format_;
  OpticalFlowGridSizeMask output_grid_size_;
  OpticalFlowGridSizeMask hint_grid_size_;
  OpticalFlowPerformanceLevel performance_level_;
  OpticalFlowSessionCreateMask flags_;
};

struct OpticalFlowImageFormatPropertiesNV {

  using native_type = VkOpticalFlowImageFormatPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV;
  const void *next_;
  Format format_;
};

struct OpticalFlowImageFormatInfoNV {

  using native_type = VkOpticalFlowImageFormatInfoNV;

  OpticalFlowImageFormatInfoNV(const void *next = {}, OpticalFlowUsageMask usage = {}) : next_(next), usage_(usage) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV;
  const void *next_;
  OpticalFlowUsageMask usage_;
};

struct PhysicalDeviceAddressBindingReportFeaturesEXT {

  using native_type = VkPhysicalDeviceAddressBindingReportFeaturesEXT;

  PhysicalDeviceAddressBindingReportFeaturesEXT(void *next = {}, bool32 report_address_binding = {})
    : next_(next), report_address_binding_(report_address_binding) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT;
  void *next_;
  bool32 report_address_binding_;
};

struct PhysicalDeviceDepthClampZeroOneFeaturesEXT {

  using native_type = VkPhysicalDeviceDepthClampZeroOneFeaturesEXT;

  PhysicalDeviceDepthClampZeroOneFeaturesEXT(void *next = {}, bool32 depth_clamp_zero_one = {})
    : next_(next), depth_clamp_zero_one_(depth_clamp_zero_one) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT;
  void *next_;
  bool32 depth_clamp_zero_one_;
};

struct PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT {

  using native_type = VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT;

  PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(void *next = {}, bool32 attachment_feedback_loop_layout = {})
    : next_(next), attachment_feedback_loop_layout_(attachment_feedback_loop_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT;
  void *next_;
  bool32 attachment_feedback_loop_layout_;
};

struct PhysicalDeviceAmigoProfilingFeaturesSEC {

  using native_type = VkPhysicalDeviceAmigoProfilingFeaturesSEC;

  PhysicalDeviceAmigoProfilingFeaturesSEC(void *next = {}, bool32 amigo_profiling = {}) : next_(next), amigo_profiling_(amigo_profiling) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC;
  void *next_;
  bool32 amigo_profiling_;
};

struct DescriptorImageInfo {

  using native_type = VkDescriptorImageInfo;

  DescriptorImageInfo(VkSampler sampler = {}, VkImageView image_view = {}, ImageLayout image_layout = {})
    : sampler_(sampler), image_view_(image_view), image_layout_(image_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  VkSampler sampler_;
  VkImageView image_view_;
  ImageLayout image_layout_;
};

struct DescriptorBufferInfo {

  using native_type = VkDescriptorBufferInfo;

  DescriptorBufferInfo(VkBuffer buffer = {}, DeviceSize offset = {}, DeviceSize range = {})
    : buffer_(buffer), offset_(offset), range_(range) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  VkBuffer buffer_;
  DeviceSize offset_;
  DeviceSize range_;
};

struct WriteDescriptorSet {

  using native_type = VkWriteDescriptorSet;

  WriteDescriptorSet(const void *next = {},
                     VkDescriptorSet dst_set = {},
                     uint32_t dst_binding = {},
                     uint32_t dst_array_element = {},
                     uint32_t descriptor_count = {},
                     DescriptorType descriptor_type = {},
                     const DescriptorImageInfo *p_image_info = {},
                     const DescriptorBufferInfo *p_buffer_info = {},
                     const VkBufferView *p_texel_buffer_view = {})
    : next_(next), dst_set_(dst_set), dst_binding_(dst_binding), dst_array_element_(dst_array_element), descriptor_count_(descriptor_count),
      descriptor_type_(descriptor_type), p_image_info_(p_image_info), p_buffer_info_(p_buffer_info),
      p_texel_buffer_view_(p_texel_buffer_view) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::WRITE_DESCRIPTOR_SET;
  const void *next_;
  VkDescriptorSet dst_set_;
  uint32_t dst_binding_;
  uint32_t dst_array_element_;
  uint32_t descriptor_count_;
  DescriptorType descriptor_type_;
  const DescriptorImageInfo *p_image_info_;
  const DescriptorBufferInfo *p_buffer_info_;
  const VkBufferView *p_texel_buffer_view_;
};

struct PushDescriptorSetInfoKHR {

  using native_type = VkPushDescriptorSetInfoKHR;

  PushDescriptorSetInfoKHR(const void *next = {},
                           ShaderStageMask stage_flags = {},
                           VkPipelineLayout layout = {},
                           uint32_t set = {},
                           uint32_t descriptor_write_count = {},
                           const WriteDescriptorSet *p_descriptor_writes = {})
    : next_(next), stage_flags_(stage_flags), layout_(layout), set_(set), descriptor_write_count_(descriptor_write_count),
      p_descriptor_writes_(p_descriptor_writes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PUSH_DESCRIPTOR_SET_INFO_KHR;
  const void *next_;
  ShaderStageMask stage_flags_;
  VkPipelineLayout layout_;
  uint32_t set_;
  uint32_t descriptor_write_count_;
  const WriteDescriptorSet *p_descriptor_writes_;
};

struct Extent3D {

  using native_type = VkExtent3D;

  Extent3D(uint32_t width = {}, uint32_t height = {}, uint32_t depth = {}) : width_(width), height_(height), depth_(depth) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t width_;
  uint32_t height_;
  uint32_t depth_;
};

struct TilePropertiesQCOM {

  using native_type = VkTilePropertiesQCOM;

  TilePropertiesQCOM(void *next = {}, Extent3D tile_size = {}, Extent2D apron_size = {}, Offset2D origin = {})
    : next_(next), tile_size_(tile_size), apron_size_(apron_size), origin_(origin) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::TILE_PROPERTIES_QCOM;
  void *next_;
  Extent3D tile_size_;
  Extent2D apron_size_;
  Offset2D origin_;
};

struct PhysicalDeviceImageProcessingFeaturesQCOM {

  using native_type = VkPhysicalDeviceImageProcessingFeaturesQCOM;

  PhysicalDeviceImageProcessingFeaturesQCOM(void *next = {},
                                            bool32 texture_sample_weighted = {},
                                            bool32 texture_box_filter = {},
                                            bool32 texture_block_match = {})
    : next_(next), texture_sample_weighted_(texture_sample_weighted), texture_box_filter_(texture_box_filter),
      texture_block_match_(texture_block_match) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM;
  void *next_;
  bool32 texture_sample_weighted_;
  bool32 texture_box_filter_;
  bool32 texture_block_match_;
};

struct ImageViewSampleWeightCreateInfoQCOM {

  using native_type = VkImageViewSampleWeightCreateInfoQCOM;

  ImageViewSampleWeightCreateInfoQCOM(const void *next = {},
                                      Offset2D filter_center = {},
                                      Extent2D filter_size = {},
                                      uint32_t num_phases = {})
    : next_(next), filter_center_(filter_center), filter_size_(filter_size), num_phases_(num_phases) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM;
  const void *next_;
  Offset2D filter_center_;
  Extent2D filter_size_;
  uint32_t num_phases_;
};

struct PhysicalDevicePipelineRobustnessPropertiesEXT {

  using native_type = VkPhysicalDevicePipelineRobustnessPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT;
  void *next_;
  PipelineRobustnessBufferBehavior default_robustness_storage_buffers_;
  PipelineRobustnessBufferBehavior default_robustness_uniform_buffers_;
  PipelineRobustnessBufferBehavior default_robustness_vertex_inputs_;
  PipelineRobustnessImageBehavior default_robustness_images_;
};

struct PipelineRobustnessCreateInfoEXT {

  using native_type = VkPipelineRobustnessCreateInfoEXT;

  PipelineRobustnessCreateInfoEXT(const void *next = {},
                                  PipelineRobustnessBufferBehavior storage_buffers = {},
                                  PipelineRobustnessBufferBehavior uniform_buffers = {},
                                  PipelineRobustnessBufferBehavior vertex_inputs = {},
                                  PipelineRobustnessImageBehavior images = {})
    : next_(next), storage_buffers_(storage_buffers), uniform_buffers_(uniform_buffers), vertex_inputs_(vertex_inputs), images_(images) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_ROBUSTNESS_CREATE_INFO_EXT;
  const void *next_;
  PipelineRobustnessBufferBehavior storage_buffers_;
  PipelineRobustnessBufferBehavior uniform_buffers_;
  PipelineRobustnessBufferBehavior vertex_inputs_;
  PipelineRobustnessImageBehavior images_;
};

struct PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM {

  using native_type = VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM;

  PhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(void *next = {}, bool32 multiview_per_view_render_areas = {})
    : next_(next), multiview_per_view_render_areas_(multiview_per_view_render_areas) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM;
  void *next_;
  bool32 multiview_per_view_render_areas_;
};

struct PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD {

  using native_type = VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD;

  PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(void *next = {}, bool32 shader_early_and_late_fragment_tests = {})
    : next_(next), shader_early_and_late_fragment_tests_(shader_early_and_late_fragment_tests) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD;
  void *next_;
  bool32 shader_early_and_late_fragment_tests_;
};

struct PhysicalDevicePipelinePropertiesFeaturesEXT {

  using native_type = VkPhysicalDevicePipelinePropertiesFeaturesEXT;

  PhysicalDevicePipelinePropertiesFeaturesEXT(void *next = {}, bool32 pipeline_properties_identifier = {})
    : next_(next), pipeline_properties_identifier_(pipeline_properties_identifier) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT;
  void *next_;
  bool32 pipeline_properties_identifier_;
};

struct PipelinePropertiesIdentifierEXT {

  using native_type = VkPipelinePropertiesIdentifierEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_PROPERTIES_IDENTIFIER_EXT;
  void *next_;
  std::array<uint8_t, VK_UUID_SIZE> pipeline_identifier_;
};

struct PhysicalDeviceShaderTileImagePropertiesEXT {

  using native_type = VkPhysicalDeviceShaderTileImagePropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT;
  void *next_;
  bool32 shader_tile_image_coherent_read_accelerated_;
  bool32 shader_tile_image_read_sample_from_pixel_rate_invocation_;
  bool32 shader_tile_image_read_from_helper_invocation_;
};

struct MicromapUsageEXT {

  using native_type = VkMicromapUsageEXT;

  MicromapUsageEXT(uint32_t count = {}, uint32_t subdivision_level = {}, uint32_t format = {})
    : count_(count), subdivision_level_(subdivision_level), format_(format) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t count_;
  uint32_t subdivision_level_;
  uint32_t format_;
};

struct AccelerationStructureTrianglesOpacityMicromapEXT {

  using native_type = VkAccelerationStructureTrianglesOpacityMicromapEXT;

  AccelerationStructureTrianglesOpacityMicromapEXT(void *next = {},
                                                   IndexType index_type = {},
                                                   VkDeviceOrHostAddressConstKHR index_buffer = {},
                                                   DeviceSize index_stride = {},
                                                   uint32_t base_triangle = {},
                                                   uint32_t usage_counts_count = {},
                                                   const MicromapUsageEXT *p_usage_counts = {},
                                                   const MicromapUsageEXT *const *pp_usage_counts = {},
                                                   VkMicromapEXT micromap = {})
    : next_(next), index_type_(index_type), index_buffer_(index_buffer), index_stride_(index_stride), base_triangle_(base_triangle),
      usage_counts_count_(usage_counts_count), p_usage_counts_(p_usage_counts), pp_usage_counts_(pp_usage_counts), micromap_(micromap) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT;
  void *next_;
  IndexType index_type_;
  VkDeviceOrHostAddressConstKHR index_buffer_;
  DeviceSize index_stride_;
  uint32_t base_triangle_;
  uint32_t usage_counts_count_;
  const MicromapUsageEXT *p_usage_counts_;
  const MicromapUsageEXT *const *pp_usage_counts_;
  VkMicromapEXT micromap_;
};

struct PhysicalDeviceOpacityMicromapPropertiesEXT {

  using native_type = VkPhysicalDeviceOpacityMicromapPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT;
  void *next_;
  uint32_t max_opacity2state_subdivision_level_;
  uint32_t max_opacity4state_subdivision_level_;
};

struct MicromapTriangleEXT {

  using native_type = VkMicromapTriangleEXT;

  MicromapTriangleEXT(uint32_t data_offset = {}, uint16_t subdivision_level = {}, uint16_t format = {})
    : data_offset_(data_offset), subdivision_level_(subdivision_level), format_(format) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t data_offset_;
  uint16_t subdivision_level_;
  uint16_t format_;
};

struct MicromapBuildSizesInfoEXT {

  using native_type = VkMicromapBuildSizesInfoEXT;

  MicromapBuildSizesInfoEXT(const void *next = {},
                            DeviceSize micromap_size = {},
                            DeviceSize build_scratch_size = {},
                            bool32 discardable = {})
    : next_(next), micromap_size_(micromap_size), build_scratch_size_(build_scratch_size), discardable_(discardable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MICROMAP_BUILD_SIZES_INFO_EXT;
  const void *next_;
  DeviceSize micromap_size_;
  DeviceSize build_scratch_size_;
  bool32 discardable_;
};

struct MicromapVersionInfoEXT {

  using native_type = VkMicromapVersionInfoEXT;

  MicromapVersionInfoEXT(const void *next = {}, const uint8_t *p_version_data = {}) : next_(next), p_version_data_(p_version_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MICROMAP_VERSION_INFO_EXT;
  const void *next_;
  const uint8_t *p_version_data_;
};

struct MicromapBuildInfoEXT {

  using native_type = VkMicromapBuildInfoEXT;

  MicromapBuildInfoEXT(const void *next = {},
                       MicromapType type = {},
                       BuildMicromapMask flags = {},
                       BuildMicromapMode mode = {},
                       VkMicromapEXT dst_micromap = {},
                       uint32_t usage_counts_count = {},
                       const MicromapUsageEXT *p_usage_counts = {},
                       const MicromapUsageEXT *const *pp_usage_counts = {},
                       VkDeviceOrHostAddressConstKHR data = {},
                       VkDeviceOrHostAddressKHR scratch_data = {},
                       VkDeviceOrHostAddressConstKHR triangle_array = {},
                       DeviceSize triangle_array_stride = {})
    : next_(next), type_(type), flags_(flags), mode_(mode), dst_micromap_(dst_micromap), usage_counts_count_(usage_counts_count),
      p_usage_counts_(p_usage_counts), pp_usage_counts_(pp_usage_counts), data_(data), scratch_data_(scratch_data),
      triangle_array_(triangle_array), triangle_array_stride_(triangle_array_stride) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MICROMAP_BUILD_INFO_EXT;
  const void *next_;
  MicromapType type_;
  BuildMicromapMask flags_;
  BuildMicromapMode mode_;
  VkMicromapEXT dst_micromap_;
  uint32_t usage_counts_count_;
  const MicromapUsageEXT *p_usage_counts_;
  const MicromapUsageEXT *const *pp_usage_counts_;
  VkDeviceOrHostAddressConstKHR data_;
  VkDeviceOrHostAddressKHR scratch_data_;
  VkDeviceOrHostAddressConstKHR triangle_array_;
  DeviceSize triangle_array_stride_;
};

struct PhysicalDeviceSubpassMergeFeedbackFeaturesEXT {

  using native_type = VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT;

  PhysicalDeviceSubpassMergeFeedbackFeaturesEXT(void *next = {}, bool32 subpass_merge_feedback = {})
    : next_(next), subpass_merge_feedback_(subpass_merge_feedback) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT;
  void *next_;
  bool32 subpass_merge_feedback_;
};

struct RenderPassCreationFeedbackInfoEXT {

  using native_type = VkRenderPassCreationFeedbackInfoEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t post_merge_subpass_count_;
};

struct RenderPassCreationFeedbackCreateInfoEXT {

  using native_type = VkRenderPassCreationFeedbackCreateInfoEXT;

  RenderPassCreationFeedbackCreateInfoEXT(const void *next = {}, RenderPassCreationFeedbackInfoEXT *p_render_pass_feedback = {})
    : next_(next), p_render_pass_feedback_(p_render_pass_feedback) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT;
  const void *next_;
  RenderPassCreationFeedbackInfoEXT *p_render_pass_feedback_;
};

struct SubresourceLayout {

  using native_type = VkSubresourceLayout;

  SubresourceLayout(
    DeviceSize offset = {}, DeviceSize size = {}, DeviceSize row_pitch = {}, DeviceSize array_pitch = {}, DeviceSize depth_pitch = {})
    : offset_(offset), size_(size), row_pitch_(row_pitch), array_pitch_(array_pitch), depth_pitch_(depth_pitch) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceSize offset_;
  DeviceSize size_;
  DeviceSize row_pitch_;
  DeviceSize array_pitch_;
  DeviceSize depth_pitch_;
};

struct SubresourceLayout2KHR {

  using native_type = VkSubresourceLayout2KHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBRESOURCE_LAYOUT_2_KHR;
  void *next_;
  SubresourceLayout subresource_layout_;
};

struct ImageSubresource {

  using native_type = VkImageSubresource;

  ImageSubresource(ImageAspectMask aspect_mask = {}, uint32_t mip_level = {}, uint32_t array_layer = {})
    : aspect_mask_(aspect_mask), mip_level_(mip_level), array_layer_(array_layer) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ImageAspectMask aspect_mask_;
  uint32_t mip_level_;
  uint32_t array_layer_;
};

struct ImageSubresource2KHR {

  using native_type = VkImageSubresource2KHR;

  ImageSubresource2KHR(void *next = {}, ImageSubresource image_subresource = {}) : next_(next), image_subresource_(image_subresource) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_SUBRESOURCE_2_KHR;
  void *next_;
  ImageSubresource image_subresource_;
};

struct PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT {

  using native_type = VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT;

  PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(void *next = {}, bool32 image_compression_control_swapchain = {})
    : next_(next), image_compression_control_swapchain_(image_compression_control_swapchain) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT;
  void *next_;
  bool32 image_compression_control_swapchain_;
};

struct ImageCompressionPropertiesEXT {

  using native_type = VkImageCompressionPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_COMPRESSION_PROPERTIES_EXT;
  void *next_;
  ImageCompressionMask image_compression_flags_;
  ImageCompressionFixedRateMask image_compression_fixed_rate_flags_;
};

struct PhysicalDeviceOpticalFlowPropertiesNV {

  using native_type = VkPhysicalDeviceOpticalFlowPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV;
  void *next_;
  OpticalFlowGridSizeMask supported_output_grid_sizes_;
  OpticalFlowGridSizeMask supported_hint_grid_sizes_;
  bool32 hint_supported_;
  bool32 cost_supported_;
  bool32 bidirectional_flow_supported_;
  bool32 global_flow_supported_;
  uint32_t min_width_;
  uint32_t min_height_;
  uint32_t max_width_;
  uint32_t max_height_;
  uint32_t max_num_regions_of_interest_;
};

struct ImageCompressionControlEXT {

  using native_type = VkImageCompressionControlEXT;

  ImageCompressionControlEXT(const void *next = {},
                             ImageCompressionMask flags = {},
                             uint32_t compression_control_plane_count = {},
                             ImageCompressionFixedRateMask *p_fixed_rate_flags = {})
    : next_(next), flags_(flags), compression_control_plane_count_(compression_control_plane_count),
      p_fixed_rate_flags_(p_fixed_rate_flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_COMPRESSION_CONTROL_EXT;
  const void *next_;
  ImageCompressionMask flags_;
  uint32_t compression_control_plane_count_;
  ImageCompressionFixedRateMask *p_fixed_rate_flags_;
};

struct ImageAlignmentControlCreateInfoMESA {

  using native_type = VkImageAlignmentControlCreateInfoMESA;

  ImageAlignmentControlCreateInfoMESA(const void *next = {}, uint32_t maximum_requested_alignment = {})
    : next_(next), maximum_requested_alignment_(maximum_requested_alignment) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA;
  const void *next_;
  uint32_t maximum_requested_alignment_;
};

struct PipelineShaderStageModuleIdentifierCreateInfoEXT {

  using native_type = VkPipelineShaderStageModuleIdentifierCreateInfoEXT;

  PipelineShaderStageModuleIdentifierCreateInfoEXT(const void *next = {}, uint32_t identifier_size = {}, const uint8_t *p_identifier = {})
    : next_(next), identifier_size_(identifier_size), p_identifier_(p_identifier) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT;
  const void *next_;
  uint32_t identifier_size_;
  const uint8_t *p_identifier_;
};

struct PhysicalDeviceShaderModuleIdentifierPropertiesEXT {

  using native_type = VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT;
  void *next_;
  std::array<uint8_t, VK_UUID_SIZE> shader_module_identifier_algorithm_uuid_;
};

struct PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT {

  using native_type = VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT;

  PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(void *next = {},
                                                     bool32 graphics_pipeline_library_fast_linking = {},
                                                     bool32 graphics_pipeline_library_independent_interpolation_decoration = {})
    : next_(next), graphics_pipeline_library_fast_linking_(graphics_pipeline_library_fast_linking),
      graphics_pipeline_library_independent_interpolation_decoration_(graphics_pipeline_library_independent_interpolation_decoration) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT;
  void *next_;
  bool32 graphics_pipeline_library_fast_linking_;
  bool32 graphics_pipeline_library_independent_interpolation_decoration_;
};

struct PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT {

  using native_type = VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT;

  PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(void *next = {}, bool32 graphics_pipeline_library = {})
    : next_(next), graphics_pipeline_library_(graphics_pipeline_library) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT;
  void *next_;
  bool32 graphics_pipeline_library_;
};

struct ImageViewMinLodCreateInfoEXT {

  using native_type = VkImageViewMinLodCreateInfoEXT;

  ImageViewMinLodCreateInfoEXT(const void *next = {}, float min_lod = {}) : next_(next), min_lod_(min_lod) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT;
  const void *next_;
  float min_lod_;
};

struct AttachmentSampleCountInfoAMD {

  using native_type = VkAttachmentSampleCountInfoAMD;

  AttachmentSampleCountInfoAMD(const void *next = {},
                               uint32_t color_attachment_count = {},
                               const SampleCountMaskBit *p_color_attachment_samples = {},
                               SampleCountMaskBit depth_stencil_attachment_samples = {})
    : next_(next), color_attachment_count_(color_attachment_count), p_color_attachment_samples_(p_color_attachment_samples),
      depth_stencil_attachment_samples_(depth_stencil_attachment_samples) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ATTACHMENT_SAMPLE_COUNT_INFO_AMD;
  const void *next_;
  uint32_t color_attachment_count_;
  const SampleCountMaskBit *p_color_attachment_samples_;
  SampleCountMaskBit depth_stencil_attachment_samples_;
};

struct RenderingFragmentDensityMapAttachmentInfoEXT {

  using native_type = VkRenderingFragmentDensityMapAttachmentInfoEXT;

  RenderingFragmentDensityMapAttachmentInfoEXT(const void *next = {}, VkImageView image_view = {}, ImageLayout image_layout = {})
    : next_(next), image_view_(image_view), image_layout_(image_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT;
  const void *next_;
  VkImageView image_view_;
  ImageLayout image_layout_;
};

struct PipelineRenderingCreateInfo {

  using native_type = VkPipelineRenderingCreateInfo;

  PipelineRenderingCreateInfo(const void *next = {},
                              uint32_t view_mask = {},
                              uint32_t color_attachment_count = {},
                              const Format *p_color_attachment_formats = {},
                              Format depth_attachment_format = {},
                              Format stencil_attachment_format = {})
    : next_(next), view_mask_(view_mask), color_attachment_count_(color_attachment_count),
      p_color_attachment_formats_(p_color_attachment_formats), depth_attachment_format_(depth_attachment_format),
      stencil_attachment_format_(stencil_attachment_format) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_RENDERING_CREATE_INFO;
  const void *next_;
  uint32_t view_mask_;
  uint32_t color_attachment_count_;
  const Format *p_color_attachment_formats_;
  Format depth_attachment_format_;
  Format stencil_attachment_format_;
};

struct DrmFormatModifierProperties2EXT {

  using native_type = VkDrmFormatModifierProperties2EXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint64_t drm_format_modifier_;
  uint32_t drm_format_modifier_plane_count_;
  FormatFeatureMask2 drm_format_modifier_tiling_features_;
};

struct DrmFormatModifierPropertiesList2EXT {

  using native_type = VkDrmFormatModifierPropertiesList2EXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT;
  void *next_;
  uint32_t drm_format_modifier_count_;
  DrmFormatModifierProperties2EXT *p_drm_format_modifier_properties_;
};

struct PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT {

  using native_type = VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;

  PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(void *next = {},
                                                              bool32 rasterization_order_color_attachment_access = {},
                                                              bool32 rasterization_order_depth_attachment_access = {},
                                                              bool32 rasterization_order_stencil_attachment_access = {})
    : next_(next), rasterization_order_color_attachment_access_(rasterization_order_color_attachment_access),
      rasterization_order_depth_attachment_access_(rasterization_order_depth_attachment_access),
      rasterization_order_stencil_attachment_access_(rasterization_order_stencil_attachment_access) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT;
  void *next_;
  bool32 rasterization_order_color_attachment_access_;
  bool32 rasterization_order_depth_attachment_access_;
  bool32 rasterization_order_stencil_attachment_access_;
};

struct FormatProperties3 {

  using native_type = VkFormatProperties3;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FORMAT_PROPERTIES_3;
  void *next_;
  FormatFeatureMask2 linear_tiling_features_;
  FormatFeatureMask2 optimal_tiling_features_;
  FormatFeatureMask2 buffer_features_;
};

struct PhysicalDeviceRGBA10X6FormatsFeaturesEXT {

  using native_type = VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT;

  PhysicalDeviceRGBA10X6FormatsFeaturesEXT(void *next = {}, bool32 format_rgba10x6without_ycb_cr_sampler = {})
    : next_(next), format_rgba10x6without_ycb_cr_sampler_(format_rgba10x6without_ycb_cr_sampler) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT;
  void *next_;
  bool32 format_rgba10x6without_ycb_cr_sampler_;
};

struct CudaModuleCreateInfoNV {

  using native_type = VkCudaModuleCreateInfoNV;

  CudaModuleCreateInfoNV(const void *next = {}, size_t data_size = {}, const void *p_data = {})
    : next_(next), data_size_(data_size), p_data_(p_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::CUDA_MODULE_CREATE_INFO_NV;
  const void *next_;
  size_t data_size_;
  const void *p_data_;
};

struct ImageCreateInfo {

  using native_type = VkImageCreateInfo;

  ImageCreateInfo(const void *next = {},
                  ImageCreateMask flags = {},
                  ImageType image_type = {},
                  Format format = {},
                  Extent3D extent = {},
                  uint32_t mip_levels = {},
                  uint32_t array_layers = {},
                  SampleCountMaskBit samples = {},
                  ImageTiling tiling = {},
                  ImageUsageMask usage = {},
                  SharingMode sharing_mode = {},
                  uint32_t queue_family_index_count = {},
                  const uint32_t *p_queue_family_indices = {},
                  ImageLayout initial_layout = {})
    : next_(next), flags_(flags), image_type_(image_type), format_(format), extent_(extent), mip_levels_(mip_levels),
      array_layers_(array_layers), samples_(samples), tiling_(tiling), usage_(usage), sharing_mode_(sharing_mode),
      queue_family_index_count_(queue_family_index_count), p_queue_family_indices_(p_queue_family_indices),
      initial_layout_(initial_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_CREATE_INFO;
  const void *next_;
  ImageCreateMask flags_;
  ImageType image_type_;
  Format format_;
  Extent3D extent_;
  uint32_t mip_levels_;
  uint32_t array_layers_;
  SampleCountMaskBit samples_;
  ImageTiling tiling_;
  ImageUsageMask usage_;
  SharingMode sharing_mode_;
  uint32_t queue_family_index_count_;
  const uint32_t *p_queue_family_indices_;
  ImageLayout initial_layout_;
};

struct BufferCreateInfo {

  using native_type = VkBufferCreateInfo;

  BufferCreateInfo(const void *next = {},
                   BufferCreateMask flags = {},
                   DeviceSize size = {},
                   BufferUsageMask usage = {},
                   SharingMode sharing_mode = {},
                   uint32_t queue_family_index_count = {},
                   const uint32_t *p_queue_family_indices = {})
    : next_(next), flags_(flags), size_(size), usage_(usage), sharing_mode_(sharing_mode),
      queue_family_index_count_(queue_family_index_count), p_queue_family_indices_(p_queue_family_indices) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_CREATE_INFO;
  const void *next_;
  BufferCreateMask flags_;
  DeviceSize size_;
  BufferUsageMask usage_;
  SharingMode sharing_mode_;
  uint32_t queue_family_index_count_;
  const uint32_t *p_queue_family_indices_;
};

struct SRTDataNV {

  using native_type = VkSRTDataNV;

  SRTDataNV(float sx = {},
            float a = {},
            float b = {},
            float pvx = {},
            float sy = {},
            float c = {},
            float pvy = {},
            float sz = {},
            float pvz = {},
            float qx = {},
            float qy = {},
            float qz = {},
            float qw = {},
            float tx = {},
            float ty = {},
            float tz = {})
    : sx_(sx), a_(a), b_(b), pvx_(pvx), sy_(sy), c_(c), pvy_(pvy), sz_(sz), pvz_(pvz), qx_(qx), qy_(qy), qz_(qz), qw_(qw), tx_(tx), ty_(ty),
      tz_(tz) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  float sx_;
  float a_;
  float b_;
  float pvx_;
  float sy_;
  float c_;
  float pvy_;
  float sz_;
  float pvz_;
  float qx_;
  float qy_;
  float qz_;
  float qw_;
  float tx_;
  float ty_;
  float tz_;
};

struct AccelerationStructureMotionInfoNV {

  using native_type = VkAccelerationStructureMotionInfoNV;

  AccelerationStructureMotionInfoNV(const void *next = {}, uint32_t max_instances = {}, AccelerationStructureMotionInfoMask flags = {})
    : next_(next), max_instances_(max_instances), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_MOTION_INFO_NV;
  const void *next_;
  uint32_t max_instances_;
  AccelerationStructureMotionInfoMask flags_;
};

struct PhysicalDeviceImageProcessingPropertiesQCOM {

  using native_type = VkPhysicalDeviceImageProcessingPropertiesQCOM;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM;
  void *next_;
  uint32_t max_weight_filter_phases_;
  Extent2D max_weight_filter_dimension_;
  Extent2D max_block_match_region_;
  Extent2D max_box_filter_block_size_;
};

struct PhysicalDeviceFragmentShaderBarycentricPropertiesKHR {

  using native_type = VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR;
  void *next_;
  bool32 tri_strip_vertex_order_independent_of_provoking_vertex_;
};

struct PhysicalDeviceFragmentShaderBarycentricFeaturesKHR {

  using native_type = VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR;

  PhysicalDeviceFragmentShaderBarycentricFeaturesKHR(void *next = {}, bool32 fragment_shader_barycentric = {})
    : next_(next), fragment_shader_barycentric_(fragment_shader_barycentric) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR;
  void *next_;
  bool32 fragment_shader_barycentric_;
};

struct PhysicalDeviceShaderIntegerDotProductFeatures {

  using native_type = VkPhysicalDeviceShaderIntegerDotProductFeatures;

  PhysicalDeviceShaderIntegerDotProductFeatures(void *next = {}, bool32 shader_integer_dot_product = {})
    : next_(next), shader_integer_dot_product_(shader_integer_dot_product) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES;
  void *next_;
  bool32 shader_integer_dot_product_;
};

struct AccelerationStructureCaptureDescriptorDataInfoEXT {

  using native_type = VkAccelerationStructureCaptureDescriptorDataInfoEXT;

  AccelerationStructureCaptureDescriptorDataInfoEXT(const void *next = {},
                                                    VkAccelerationStructureKHR acceleration_structure = {},
                                                    VkAccelerationStructureNV acceleration_structure_nv = {})
    : next_(next), acceleration_structure_(acceleration_structure), acceleration_structure_nv_(acceleration_structure_nv) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;
  const void *next_;
  VkAccelerationStructureKHR acceleration_structure_;
  VkAccelerationStructureNV acceleration_structure_nv_;
};

struct ImageCaptureDescriptorDataInfoEXT {

  using native_type = VkImageCaptureDescriptorDataInfoEXT;

  ImageCaptureDescriptorDataInfoEXT(const void *next = {}, VkImage image = {}) : next_(next), image_(image) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;
  const void *next_;
  VkImage image_;
};

struct BufferCaptureDescriptorDataInfoEXT {

  using native_type = VkBufferCaptureDescriptorDataInfoEXT;

  BufferCaptureDescriptorDataInfoEXT(const void *next = {}, VkBuffer buffer = {}) : next_(next), buffer_(buffer) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;
  const void *next_;
  VkBuffer buffer_;
};

struct DescriptorAddressInfoEXT {

  using native_type = VkDescriptorAddressInfoEXT;

  DescriptorAddressInfoEXT(void *next = {}, DeviceAddress address = {}, DeviceSize range = {}, Format format = {})
    : next_(next), address_(address), range_(range), format_(format) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_ADDRESS_INFO_EXT;
  void *next_;
  DeviceAddress address_;
  DeviceSize range_;
  Format format_;
};

struct PhysicalDeviceDescriptorBufferPropertiesEXT {

  using native_type = VkPhysicalDeviceDescriptorBufferPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT;
  void *next_;
  bool32 combined_image_sampler_descriptor_single_array_;
  bool32 bufferless_push_descriptors_;
  bool32 allow_sampler_image_view_post_submit_creation_;
  DeviceSize descriptor_buffer_offset_alignment_;
  uint32_t max_descriptor_buffer_bindings_;
  uint32_t max_resource_descriptor_buffer_bindings_;
  uint32_t max_sampler_descriptor_buffer_bindings_;
  uint32_t max_embedded_immutable_sampler_bindings_;
  uint32_t max_embedded_immutable_samplers_;
  size_t buffer_capture_replay_descriptor_data_size_;
  size_t image_capture_replay_descriptor_data_size_;
  size_t image_view_capture_replay_descriptor_data_size_;
  size_t sampler_capture_replay_descriptor_data_size_;
  size_t acceleration_structure_capture_replay_descriptor_data_size_;
  size_t sampler_descriptor_size_;
  size_t combined_image_sampler_descriptor_size_;
  size_t sampled_image_descriptor_size_;
  size_t storage_image_descriptor_size_;
  size_t uniform_texel_buffer_descriptor_size_;
  size_t robust_uniform_texel_buffer_descriptor_size_;
  size_t storage_texel_buffer_descriptor_size_;
  size_t robust_storage_texel_buffer_descriptor_size_;
  size_t uniform_buffer_descriptor_size_;
  size_t robust_uniform_buffer_descriptor_size_;
  size_t storage_buffer_descriptor_size_;
  size_t robust_storage_buffer_descriptor_size_;
  size_t input_attachment_descriptor_size_;
  size_t acceleration_structure_descriptor_size_;
  DeviceSize max_sampler_descriptor_buffer_range_;
  DeviceSize max_resource_descriptor_buffer_range_;
  DeviceSize sampler_descriptor_buffer_address_space_size_;
  DeviceSize resource_descriptor_buffer_address_space_size_;
  DeviceSize descriptor_buffer_address_space_size_;
};

struct CuLaunchInfoNVX {

  using native_type = VkCuLaunchInfoNVX;

  CuLaunchInfoNVX(const void *next = {},
                  VkCuFunctionNVX function = {},
                  uint32_t grid_dim_x = {},
                  uint32_t grid_dim_y = {},
                  uint32_t grid_dim_z = {},
                  uint32_t block_dim_x = {},
                  uint32_t block_dim_y = {},
                  uint32_t block_dim_z = {},
                  uint32_t shared_mem_bytes = {},
                  size_t param_count = {},
                  const void *const *p_params = {},
                  size_t extra_count = {},
                  const void *const *p_extras = {})
    : next_(next), function_(function), grid_dim_x_(grid_dim_x), grid_dim_y_(grid_dim_y), grid_dim_z_(grid_dim_z),
      block_dim_x_(block_dim_x), block_dim_y_(block_dim_y), block_dim_z_(block_dim_z), shared_mem_bytes_(shared_mem_bytes),
      param_count_(param_count), p_params_(p_params), extra_count_(extra_count), p_extras_(p_extras) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::CU_LAUNCH_INFO_NVX;
  const void *next_;
  VkCuFunctionNVX function_;
  uint32_t grid_dim_x_;
  uint32_t grid_dim_y_;
  uint32_t grid_dim_z_;
  uint32_t block_dim_x_;
  uint32_t block_dim_y_;
  uint32_t block_dim_z_;
  uint32_t shared_mem_bytes_;
  size_t param_count_;
  const void *const *p_params_;
  size_t extra_count_;
  const void *const *p_extras_;
};

struct PhysicalDeviceExtendedSparseAddressSpacePropertiesNV {

  using native_type = VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV;
  void *next_;
  DeviceSize extended_sparse_address_space_size_;
  ImageUsageMask extended_sparse_image_usage_flags_;
  BufferUsageMask extended_sparse_buffer_usage_flags_;
};

struct PipelineRasterizationProvokingVertexStateCreateInfoEXT {

  using native_type = VkPipelineRasterizationProvokingVertexStateCreateInfoEXT;

  PipelineRasterizationProvokingVertexStateCreateInfoEXT(const void *next = {}, ProvokingVertexMode provoking_vertex_mode = {})
    : next_(next), provoking_vertex_mode_(provoking_vertex_mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT;
  const void *next_;
  ProvokingVertexMode provoking_vertex_mode_;
};

struct PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT {

  using native_type = VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;

  PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(void *next = {}, bool32 ycbcr2plane444formats = {})
    : next_(next), ycbcr2plane444formats_(ycbcr2plane444formats) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT;
  void *next_;
  bool32 ycbcr2plane444formats_;
};

struct PhysicalDeviceInheritedViewportScissorFeaturesNV {

  using native_type = VkPhysicalDeviceInheritedViewportScissorFeaturesNV;

  PhysicalDeviceInheritedViewportScissorFeaturesNV(void *next = {}, bool32 inherited_viewport_scissor2d = {})
    : next_(next), inherited_viewport_scissor2d_(inherited_viewport_scissor2d) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV;
  void *next_;
  bool32 inherited_viewport_scissor2d_;
};

struct VideoEncodeH265ProfileInfoKHR {

  using native_type = VkVideoEncodeH265ProfileInfoKHR;

  VideoEncodeH265ProfileInfoKHR(const void *next = {}, StdVideoH265ProfileIdc std_profile_idc = {})
    : next_(next), std_profile_idc_(std_profile_idc) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_PROFILE_INFO_KHR;
  const void *next_;
  StdVideoH265ProfileIdc std_profile_idc_;
};

struct VideoEncodeH265FrameSizeKHR {

  using native_type = VkVideoEncodeH265FrameSizeKHR;

  VideoEncodeH265FrameSizeKHR(uint32_t frame_isize = {}, uint32_t frame_psize = {}, uint32_t frame_bsize = {})
    : frame_isize_(frame_isize), frame_psize_(frame_psize), frame_bsize_(frame_bsize) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t frame_isize_;
  uint32_t frame_psize_;
  uint32_t frame_bsize_;
};

struct VideoEncodeH265RateControlInfoKHR {

  using native_type = VkVideoEncodeH265RateControlInfoKHR;

  VideoEncodeH265RateControlInfoKHR(const void *next = {},
                                    VideoEncodeH265RateControlMask flags = {},
                                    uint32_t gop_frame_count = {},
                                    uint32_t idr_period = {},
                                    uint32_t consecutive_bframe_count = {},
                                    uint32_t sub_layer_count = {})
    : next_(next), flags_(flags), gop_frame_count_(gop_frame_count), idr_period_(idr_period),
      consecutive_bframe_count_(consecutive_bframe_count), sub_layer_count_(sub_layer_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR;
  const void *next_;
  VideoEncodeH265RateControlMask flags_;
  uint32_t gop_frame_count_;
  uint32_t idr_period_;
  uint32_t consecutive_bframe_count_;
  uint32_t sub_layer_count_;
};

struct VideoEncodeH265SessionParametersFeedbackInfoKHR {

  using native_type = VkVideoEncodeH265SessionParametersFeedbackInfoKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR;
  void *next_;
  bool32 has_std_vpsoverrides_;
  bool32 has_std_spsoverrides_;
  bool32 has_std_ppsoverrides_;
};

struct VideoEncodeH265SessionParametersGetInfoKHR {

  using native_type = VkVideoEncodeH265SessionParametersGetInfoKHR;

  VideoEncodeH265SessionParametersGetInfoKHR(const void *next = {},
                                             bool32 write_std_vps = {},
                                             bool32 write_std_sps = {},
                                             bool32 write_std_pps = {},
                                             uint32_t std_vpsid = {},
                                             uint32_t std_spsid = {},
                                             uint32_t std_ppsid = {})
    : next_(next), write_std_vps_(write_std_vps), write_std_sps_(write_std_sps), write_std_pps_(write_std_pps), std_vpsid_(std_vpsid),
      std_spsid_(std_spsid), std_ppsid_(std_ppsid) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR;
  const void *next_;
  bool32 write_std_vps_;
  bool32 write_std_sps_;
  bool32 write_std_pps_;
  uint32_t std_vpsid_;
  uint32_t std_spsid_;
  uint32_t std_ppsid_;
};

struct PhysicalDeviceImageProcessing2FeaturesQCOM {

  using native_type = VkPhysicalDeviceImageProcessing2FeaturesQCOM;

  PhysicalDeviceImageProcessing2FeaturesQCOM(void *next = {}, bool32 texture_block_match2 = {})
    : next_(next), texture_block_match2_(texture_block_match2) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM;
  void *next_;
  bool32 texture_block_match2_;
};

struct VideoEncodeH265DpbSlotInfoKHR {

  using native_type = VkVideoEncodeH265DpbSlotInfoKHR;

  VideoEncodeH265DpbSlotInfoKHR(const void *next = {}, const StdVideoEncodeH265ReferenceInfo *p_std_reference_info = {})
    : next_(next), p_std_reference_info_(p_std_reference_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR;
  const void *next_;
  const StdVideoEncodeH265ReferenceInfo *p_std_reference_info_;
};

struct VideoEncodeH265SessionParametersAddInfoKHR {

  using native_type = VkVideoEncodeH265SessionParametersAddInfoKHR;

  VideoEncodeH265SessionParametersAddInfoKHR(const void *next = {},
                                             uint32_t std_vpscount = {},
                                             const StdVideoH265VideoParameterSet *p_std_vpss = {},
                                             uint32_t std_spscount = {},
                                             const StdVideoH265SequenceParameterSet *p_std_spss = {},
                                             uint32_t std_ppscount = {},
                                             const StdVideoH265PictureParameterSet *p_std_ppss = {})
    : next_(next), std_vpscount_(std_vpscount), p_std_vpss_(p_std_vpss), std_spscount_(std_spscount), p_std_spss_(p_std_spss),
      std_ppscount_(std_ppscount), p_std_ppss_(p_std_ppss) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR;
  const void *next_;
  uint32_t std_vpscount_;
  const StdVideoH265VideoParameterSet *p_std_vpss_;
  uint32_t std_spscount_;
  const StdVideoH265SequenceParameterSet *p_std_spss_;
  uint32_t std_ppscount_;
  const StdVideoH265PictureParameterSet *p_std_ppss_;
};

struct VideoEncodeH265SessionParametersCreateInfoKHR {

  using native_type = VkVideoEncodeH265SessionParametersCreateInfoKHR;

  VideoEncodeH265SessionParametersCreateInfoKHR(const void *next = {},
                                                uint32_t max_std_vpscount = {},
                                                uint32_t max_std_spscount = {},
                                                uint32_t max_std_ppscount = {},
                                                const VideoEncodeH265SessionParametersAddInfoKHR *p_parameters_add_info = {})
    : next_(next), max_std_vpscount_(max_std_vpscount), max_std_spscount_(max_std_spscount), max_std_ppscount_(max_std_ppscount),
      p_parameters_add_info_(p_parameters_add_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR;
  const void *next_;
  uint32_t max_std_vpscount_;
  uint32_t max_std_spscount_;
  uint32_t max_std_ppscount_;
  const VideoEncodeH265SessionParametersAddInfoKHR *p_parameters_add_info_;
};

struct VideoEncodeH265SessionCreateInfoKHR {

  using native_type = VkVideoEncodeH265SessionCreateInfoKHR;

  VideoEncodeH265SessionCreateInfoKHR(const void *next = {}, bool32 use_max_level_idc = {}, StdVideoH265LevelIdc max_level_idc = {})
    : next_(next), use_max_level_idc_(use_max_level_idc), max_level_idc_(max_level_idc) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR;
  const void *next_;
  bool32 use_max_level_idc_;
  StdVideoH265LevelIdc max_level_idc_;
};

struct VideoEncodeH265QpKHR {

  using native_type = VkVideoEncodeH265QpKHR;

  VideoEncodeH265QpKHR(int32_t qp_i = {}, int32_t qp_p = {}, int32_t qp_b = {}) : qp_i_(qp_i), qp_p_(qp_p), qp_b_(qp_b) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  int32_t qp_i_;
  int32_t qp_p_;
  int32_t qp_b_;
};

struct VideoEncodeH265QualityLevelPropertiesKHR {

  using native_type = VkVideoEncodeH265QualityLevelPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR;
  void *next_;
  VideoEncodeH265RateControlMask preferred_rate_control_flags_;
  uint32_t preferred_gop_frame_count_;
  uint32_t preferred_idr_period_;
  uint32_t preferred_consecutive_bframe_count_;
  uint32_t preferred_sub_layer_count_;
  VideoEncodeH265QpKHR preferred_constant_qp_;
  uint32_t preferred_max_l0reference_count_;
  uint32_t preferred_max_l1reference_count_;
};

struct VideoEncodeH265CapabilitiesKHR {

  using native_type = VkVideoEncodeH265CapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_CAPABILITIES_KHR;
  void *next_;
  VideoEncodeH265CapabilityMask flags_;
  StdVideoH265LevelIdc max_level_idc_;
  uint32_t max_slice_segment_count_;
  Extent2D max_tiles_;
  VideoEncodeH265CtbSizeMask ctb_sizes_;
  VideoEncodeH265TransformBlockSizeMask transform_block_sizes_;
  uint32_t max_ppicture_l0reference_count_;
  uint32_t max_bpicture_l0reference_count_;
  uint32_t max_l1reference_count_;
  uint32_t max_sub_layer_count_;
  bool32 expect_dyadic_temporal_sub_layer_pattern_;
  int32_t min_qp_;
  int32_t max_qp_;
  bool32 prefers_gop_remaining_frames_;
  bool32 requires_gop_remaining_frames_;
  VideoEncodeH265StdMask std_syntax_flags_;
};

struct VideoEncodeH264QpKHR {

  using native_type = VkVideoEncodeH264QpKHR;

  VideoEncodeH264QpKHR(int32_t qp_i = {}, int32_t qp_p = {}, int32_t qp_b = {}) : qp_i_(qp_i), qp_p_(qp_p), qp_b_(qp_b) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  int32_t qp_i_;
  int32_t qp_p_;
  int32_t qp_b_;
};

struct VideoEncodeH264FrameSizeKHR {

  using native_type = VkVideoEncodeH264FrameSizeKHR;

  VideoEncodeH264FrameSizeKHR(uint32_t frame_isize = {}, uint32_t frame_psize = {}, uint32_t frame_bsize = {})
    : frame_isize_(frame_isize), frame_psize_(frame_psize), frame_bsize_(frame_bsize) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t frame_isize_;
  uint32_t frame_psize_;
  uint32_t frame_bsize_;
};

struct VideoEncodeH264RateControlLayerInfoKHR {

  using native_type = VkVideoEncodeH264RateControlLayerInfoKHR;

  VideoEncodeH264RateControlLayerInfoKHR(const void *next = {},
                                         bool32 use_min_qp = {},
                                         VideoEncodeH264QpKHR min_qp = {},
                                         bool32 use_max_qp = {},
                                         VideoEncodeH264QpKHR max_qp = {},
                                         bool32 use_max_frame_size = {},
                                         VideoEncodeH264FrameSizeKHR max_frame_size = {})
    : next_(next), use_min_qp_(use_min_qp), min_qp_(min_qp), use_max_qp_(use_max_qp), max_qp_(max_qp),
      use_max_frame_size_(use_max_frame_size), max_frame_size_(max_frame_size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR;
  const void *next_;
  bool32 use_min_qp_;
  VideoEncodeH264QpKHR min_qp_;
  bool32 use_max_qp_;
  VideoEncodeH264QpKHR max_qp_;
  bool32 use_max_frame_size_;
  VideoEncodeH264FrameSizeKHR max_frame_size_;
};

struct VideoEncodeH264RateControlInfoKHR {

  using native_type = VkVideoEncodeH264RateControlInfoKHR;

  VideoEncodeH264RateControlInfoKHR(const void *next = {},
                                    VideoEncodeH264RateControlMask flags = {},
                                    uint32_t gop_frame_count = {},
                                    uint32_t idr_period = {},
                                    uint32_t consecutive_bframe_count = {},
                                    uint32_t temporal_layer_count = {})
    : next_(next), flags_(flags), gop_frame_count_(gop_frame_count), idr_period_(idr_period),
      consecutive_bframe_count_(consecutive_bframe_count), temporal_layer_count_(temporal_layer_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR;
  const void *next_;
  VideoEncodeH264RateControlMask flags_;
  uint32_t gop_frame_count_;
  uint32_t idr_period_;
  uint32_t consecutive_bframe_count_;
  uint32_t temporal_layer_count_;
};

struct VideoEncodeH264NaluSliceInfoKHR {

  using native_type = VkVideoEncodeH264NaluSliceInfoKHR;

  VideoEncodeH264NaluSliceInfoKHR(const void *next = {},
                                  int32_t constant_qp = {},
                                  const StdVideoEncodeH264SliceHeader *p_std_slice_header = {})
    : next_(next), constant_qp_(constant_qp), p_std_slice_header_(p_std_slice_header) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR;
  const void *next_;
  int32_t constant_qp_;
  const StdVideoEncodeH264SliceHeader *p_std_slice_header_;
};

struct VideoEncodeH264ProfileInfoKHR {

  using native_type = VkVideoEncodeH264ProfileInfoKHR;

  VideoEncodeH264ProfileInfoKHR(const void *next = {}, StdVideoH264ProfileIdc std_profile_idc = {})
    : next_(next), std_profile_idc_(std_profile_idc) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_PROFILE_INFO_KHR;
  const void *next_;
  StdVideoH264ProfileIdc std_profile_idc_;
};

struct VideoEncodeH264PictureInfoKHR {

  using native_type = VkVideoEncodeH264PictureInfoKHR;

  VideoEncodeH264PictureInfoKHR(const void *next = {},
                                uint32_t nalu_slice_entry_count = {},
                                const VideoEncodeH264NaluSliceInfoKHR *p_nalu_slice_entries = {},
                                const StdVideoEncodeH264PictureInfo *p_std_picture_info = {},
                                bool32 generate_prefix_nalu = {})
    : next_(next), nalu_slice_entry_count_(nalu_slice_entry_count), p_nalu_slice_entries_(p_nalu_slice_entries),
      p_std_picture_info_(p_std_picture_info), generate_prefix_nalu_(generate_prefix_nalu) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_PICTURE_INFO_KHR;
  const void *next_;
  uint32_t nalu_slice_entry_count_;
  const VideoEncodeH264NaluSliceInfoKHR *p_nalu_slice_entries_;
  const StdVideoEncodeH264PictureInfo *p_std_picture_info_;
  bool32 generate_prefix_nalu_;
};

struct VideoEncodeH264DpbSlotInfoKHR {

  using native_type = VkVideoEncodeH264DpbSlotInfoKHR;

  VideoEncodeH264DpbSlotInfoKHR(const void *next = {}, const StdVideoEncodeH264ReferenceInfo *p_std_reference_info = {})
    : next_(next), p_std_reference_info_(p_std_reference_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR;
  const void *next_;
  const StdVideoEncodeH264ReferenceInfo *p_std_reference_info_;
};

struct VideoEncodeH264SessionParametersFeedbackInfoKHR {

  using native_type = VkVideoEncodeH264SessionParametersFeedbackInfoKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR;
  void *next_;
  bool32 has_std_spsoverrides_;
  bool32 has_std_ppsoverrides_;
};

struct VideoEncodeH264SessionParametersAddInfoKHR {

  using native_type = VkVideoEncodeH264SessionParametersAddInfoKHR;

  VideoEncodeH264SessionParametersAddInfoKHR(const void *next = {},
                                             uint32_t std_spscount = {},
                                             const StdVideoH264SequenceParameterSet *p_std_spss = {},
                                             uint32_t std_ppscount = {},
                                             const StdVideoH264PictureParameterSet *p_std_ppss = {})
    : next_(next), std_spscount_(std_spscount), p_std_spss_(p_std_spss), std_ppscount_(std_ppscount), p_std_ppss_(p_std_ppss) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR;
  const void *next_;
  uint32_t std_spscount_;
  const StdVideoH264SequenceParameterSet *p_std_spss_;
  uint32_t std_ppscount_;
  const StdVideoH264PictureParameterSet *p_std_ppss_;
};

struct VideoEncodeH264SessionCreateInfoKHR {

  using native_type = VkVideoEncodeH264SessionCreateInfoKHR;

  VideoEncodeH264SessionCreateInfoKHR(const void *next = {}, bool32 use_max_level_idc = {}, StdVideoH264LevelIdc max_level_idc = {})
    : next_(next), use_max_level_idc_(use_max_level_idc), max_level_idc_(max_level_idc) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR;
  const void *next_;
  bool32 use_max_level_idc_;
  StdVideoH264LevelIdc max_level_idc_;
};

struct VideoEncodeH264CapabilitiesKHR {

  using native_type = VkVideoEncodeH264CapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_CAPABILITIES_KHR;
  void *next_;
  VideoEncodeH264CapabilityMask flags_;
  StdVideoH264LevelIdc max_level_idc_;
  uint32_t max_slice_count_;
  uint32_t max_ppicture_l0reference_count_;
  uint32_t max_bpicture_l0reference_count_;
  uint32_t max_l1reference_count_;
  uint32_t max_temporal_layer_count_;
  bool32 expect_dyadic_temporal_layer_pattern_;
  int32_t min_qp_;
  int32_t max_qp_;
  bool32 prefers_gop_remaining_frames_;
  bool32 requires_gop_remaining_frames_;
  VideoEncodeH264StdMask std_syntax_flags_;
};

struct VideoEncodeRateControlLayerInfoKHR {

  using native_type = VkVideoEncodeRateControlLayerInfoKHR;

  VideoEncodeRateControlLayerInfoKHR(const void *next = {},
                                     uint64_t average_bitrate = {},
                                     uint64_t max_bitrate = {},
                                     uint32_t frame_rate_numerator = {},
                                     uint32_t frame_rate_denominator = {})
    : next_(next), average_bitrate_(average_bitrate), max_bitrate_(max_bitrate), frame_rate_numerator_(frame_rate_numerator),
      frame_rate_denominator_(frame_rate_denominator) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR;
  const void *next_;
  uint64_t average_bitrate_;
  uint64_t max_bitrate_;
  uint32_t frame_rate_numerator_;
  uint32_t frame_rate_denominator_;
};

struct VideoEncodeRateControlInfoKHR {

  using native_type = VkVideoEncodeRateControlInfoKHR;

  VideoEncodeRateControlInfoKHR(const void *next = {},
                                VideoEncodeRateControlMask flags = {},
                                VideoEncodeRateControlModeMaskBit rate_control_mode = {},
                                uint32_t layer_count = {},
                                const VideoEncodeRateControlLayerInfoKHR *p_layers = {},
                                uint32_t virtual_buffer_size_in_ms = {},
                                uint32_t initial_virtual_buffer_size_in_ms = {})
    : next_(next), flags_(flags), rate_control_mode_(rate_control_mode), layer_count_(layer_count), p_layers_(p_layers),
      virtual_buffer_size_in_ms_(virtual_buffer_size_in_ms), initial_virtual_buffer_size_in_ms_(initial_virtual_buffer_size_in_ms) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_RATE_CONTROL_INFO_KHR;
  const void *next_;
  VideoEncodeRateControlMask flags_;
  VideoEncodeRateControlModeMaskBit rate_control_mode_;
  uint32_t layer_count_;
  const VideoEncodeRateControlLayerInfoKHR *p_layers_;
  uint32_t virtual_buffer_size_in_ms_;
  uint32_t initial_virtual_buffer_size_in_ms_;
};

struct VideoEncodeQualityLevelPropertiesKHR {

  using native_type = VkVideoEncodeQualityLevelPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR;
  void *next_;
  VideoEncodeRateControlModeMaskBit preferred_rate_control_mode_;
  uint32_t preferred_rate_control_layer_count_;
};

struct VideoEncodeH264SessionParametersGetInfoKHR {

  using native_type = VkVideoEncodeH264SessionParametersGetInfoKHR;

  VideoEncodeH264SessionParametersGetInfoKHR(
    const void *next = {}, bool32 write_std_sps = {}, bool32 write_std_pps = {}, uint32_t std_spsid = {}, uint32_t std_ppsid = {})
    : next_(next), write_std_sps_(write_std_sps), write_std_pps_(write_std_pps), std_spsid_(std_spsid), std_ppsid_(std_ppsid) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR;
  const void *next_;
  bool32 write_std_sps_;
  bool32 write_std_pps_;
  uint32_t std_spsid_;
  uint32_t std_ppsid_;
};

struct VideoProfileInfoKHR {

  using native_type = VkVideoProfileInfoKHR;

  VideoProfileInfoKHR(const void *next = {},
                      VideoCodecOperationMaskBit video_codec_operation = {},
                      VideoChromaSubsamplingMask chroma_subsampling = {},
                      VideoComponentBitDepthMask luma_bit_depth = {},
                      VideoComponentBitDepthMask chroma_bit_depth = {})
    : next_(next), video_codec_operation_(video_codec_operation), chroma_subsampling_(chroma_subsampling), luma_bit_depth_(luma_bit_depth),
      chroma_bit_depth_(chroma_bit_depth) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_PROFILE_INFO_KHR;
  const void *next_;
  VideoCodecOperationMaskBit video_codec_operation_;
  VideoChromaSubsamplingMask chroma_subsampling_;
  VideoComponentBitDepthMask luma_bit_depth_;
  VideoComponentBitDepthMask chroma_bit_depth_;
};

struct PhysicalDeviceVideoEncodeQualityLevelInfoKHR {

  using native_type = VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR;

  PhysicalDeviceVideoEncodeQualityLevelInfoKHR(const void *next = {},
                                               const VideoProfileInfoKHR *p_video_profile = {},
                                               uint32_t quality_level = {})
    : next_(next), p_video_profile_(p_video_profile), quality_level_(quality_level) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR;
  const void *next_;
  const VideoProfileInfoKHR *p_video_profile_;
  uint32_t quality_level_;
};

struct PhysicalDeviceProvokingVertexPropertiesEXT {

  using native_type = VkPhysicalDeviceProvokingVertexPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT;
  void *next_;
  bool32 provoking_vertex_mode_per_pipeline_;
  bool32 transform_feedback_preserves_triangle_fan_provoking_vertex_;
};

struct QueryPoolVideoEncodeFeedbackCreateInfoKHR {

  using native_type = VkQueryPoolVideoEncodeFeedbackCreateInfoKHR;

  QueryPoolVideoEncodeFeedbackCreateInfoKHR(const void *next = {}, VideoEncodeFeedbackMask encode_feedback_flags = {})
    : next_(next), encode_feedback_flags_(encode_feedback_flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR;
  const void *next_;
  VideoEncodeFeedbackMask encode_feedback_flags_;
};

struct VideoPictureResourceInfoKHR {

  using native_type = VkVideoPictureResourceInfoKHR;

  VideoPictureResourceInfoKHR(const void *next = {},
                              Offset2D coded_offset = {},
                              Extent2D coded_extent = {},
                              uint32_t base_array_layer = {},
                              VkImageView image_view_binding = {})
    : next_(next), coded_offset_(coded_offset), coded_extent_(coded_extent), base_array_layer_(base_array_layer),
      image_view_binding_(image_view_binding) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_PICTURE_RESOURCE_INFO_KHR;
  const void *next_;
  Offset2D coded_offset_;
  Extent2D coded_extent_;
  uint32_t base_array_layer_;
  VkImageView image_view_binding_;
};

struct VideoReferenceSlotInfoKHR {

  using native_type = VkVideoReferenceSlotInfoKHR;

  VideoReferenceSlotInfoKHR(const void *next = {}, int32_t slot_index = {}, const VideoPictureResourceInfoKHR *p_picture_resource = {})
    : next_(next), slot_index_(slot_index), p_picture_resource_(p_picture_resource) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_REFERENCE_SLOT_INFO_KHR;
  const void *next_;
  int32_t slot_index_;
  const VideoPictureResourceInfoKHR *p_picture_resource_;
};

struct VideoEncodeInfoKHR {

  using native_type = VkVideoEncodeInfoKHR;

  VideoEncodeInfoKHR(const void *next = {},
                     VideoEncodeMask flags = {},
                     VkBuffer dst_buffer = {},
                     DeviceSize dst_buffer_offset = {},
                     DeviceSize dst_buffer_range = {},
                     VideoPictureResourceInfoKHR src_picture_resource = {},
                     const VideoReferenceSlotInfoKHR *p_setup_reference_slot = {},
                     uint32_t reference_slot_count = {},
                     const VideoReferenceSlotInfoKHR *p_reference_slots = {},
                     uint32_t preceding_externally_encoded_bytes = {})
    : next_(next), flags_(flags), dst_buffer_(dst_buffer), dst_buffer_offset_(dst_buffer_offset), dst_buffer_range_(dst_buffer_range),
      src_picture_resource_(src_picture_resource), p_setup_reference_slot_(p_setup_reference_slot),
      reference_slot_count_(reference_slot_count), p_reference_slots_(p_reference_slots),
      preceding_externally_encoded_bytes_(preceding_externally_encoded_bytes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_INFO_KHR;
  const void *next_;
  VideoEncodeMask flags_;
  VkBuffer dst_buffer_;
  DeviceSize dst_buffer_offset_;
  DeviceSize dst_buffer_range_;
  VideoPictureResourceInfoKHR src_picture_resource_;
  const VideoReferenceSlotInfoKHR *p_setup_reference_slot_;
  uint32_t reference_slot_count_;
  const VideoReferenceSlotInfoKHR *p_reference_slots_;
  uint32_t preceding_externally_encoded_bytes_;
};

struct ComponentMapping {

  using native_type = VkComponentMapping;

  ComponentMapping(ComponentSwizzle r = {}, ComponentSwizzle g = {}, ComponentSwizzle b = {}, ComponentSwizzle a = {})
    : r_(r), g_(g), b_(b), a_(a) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ComponentSwizzle r_;
  ComponentSwizzle g_;
  ComponentSwizzle b_;
  ComponentSwizzle a_;
};

struct DeviceAddressBindingCallbackDataEXT {

  using native_type = DeviceAddressBindingCallbackDataEXT;

  DeviceAddressBindingCallbackDataEXT(void *next = {},
                                      DeviceAddressBindingMask flags = {},
                                      DeviceAddress base_address = {},
                                      DeviceSize size = {},
                                      DeviceAddressBindingType binding_type = {})
    : next_(next), flags_(flags), base_address_(base_address), size_(size), binding_type_(binding_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT;
  void *next_;
  DeviceAddressBindingMask flags_;
  DeviceAddress base_address_;
  DeviceSize size_;
  DeviceAddressBindingType binding_type_;
};

struct VideoEndCodingInfoKHR {

  using native_type = VkVideoEndCodingInfoKHR;

  VideoEndCodingInfoKHR(const void *next = {}, VideoEndCodingMask flags = {}) : next_(next), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_END_CODING_INFO_KHR;
  const void *next_;
  VideoEndCodingMask flags_;
};

struct PhysicalDeviceOpacityMicromapFeaturesEXT {

  using native_type = VkPhysicalDeviceOpacityMicromapFeaturesEXT;

  PhysicalDeviceOpacityMicromapFeaturesEXT(void *next = {},
                                           bool32 micromap = {},
                                           bool32 micromap_capture_replay = {},
                                           bool32 micromap_host_commands = {})
    : next_(next), micromap_(micromap), micromap_capture_replay_(micromap_capture_replay), micromap_host_commands_(micromap_host_commands) {
  }

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT;
  void *next_;
  bool32 micromap_;
  bool32 micromap_capture_replay_;
  bool32 micromap_host_commands_;
};

struct VideoBeginCodingInfoKHR {

  using native_type = VkVideoBeginCodingInfoKHR;

  VideoBeginCodingInfoKHR(const void *next = {},
                          VideoBeginCodingMask flags = {},
                          VkVideoSessionKHR video_session = {},
                          VkVideoSessionParametersKHR video_session_parameters = {},
                          uint32_t reference_slot_count = {},
                          const VideoReferenceSlotInfoKHR *p_reference_slots = {})
    : next_(next), flags_(flags), video_session_(video_session), video_session_parameters_(video_session_parameters),
      reference_slot_count_(reference_slot_count), p_reference_slots_(p_reference_slots) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_BEGIN_CODING_INFO_KHR;
  const void *next_;
  VideoBeginCodingMask flags_;
  VkVideoSessionKHR video_session_;
  VkVideoSessionParametersKHR video_session_parameters_;
  uint32_t reference_slot_count_;
  const VideoReferenceSlotInfoKHR *p_reference_slots_;
};

struct DeviceFaultCountsEXT {

  using native_type = VkDeviceFaultCountsEXT;

  DeviceFaultCountsEXT(void *next = {},
                       uint32_t address_info_count = {},
                       uint32_t vendor_info_count = {},
                       DeviceSize vendor_binary_size = {})
    : next_(next), address_info_count_(address_info_count), vendor_info_count_(vendor_info_count), vendor_binary_size_(vendor_binary_size) {
  }

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_FAULT_COUNTS_EXT;
  void *next_;
  uint32_t address_info_count_;
  uint32_t vendor_info_count_;
  DeviceSize vendor_binary_size_;
};

struct VideoEncodeSessionParametersGetInfoKHR {

  using native_type = VkVideoEncodeSessionParametersGetInfoKHR;

  VideoEncodeSessionParametersGetInfoKHR(const void *next = {}, VkVideoSessionParametersKHR video_session_parameters = {})
    : next_(next), video_session_parameters_(video_session_parameters) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR;
  const void *next_;
  VkVideoSessionParametersKHR video_session_parameters_;
};

struct VideoSessionParametersUpdateInfoKHR {

  using native_type = VkVideoSessionParametersUpdateInfoKHR;

  VideoSessionParametersUpdateInfoKHR(const void *next = {}, uint32_t update_sequence_count = {})
    : next_(next), update_sequence_count_(update_sequence_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR;
  const void *next_;
  uint32_t update_sequence_count_;
};

struct ExtensionProperties {

  using native_type = VkExtensionProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  std::array<char, VK_MAX_EXTENSION_NAME_SIZE> extension_name_;
  uint32_t spec_version_;
};

struct VideoSessionCreateInfoKHR {

  using native_type = VkVideoSessionCreateInfoKHR;

  VideoSessionCreateInfoKHR(const void *next = {},
                            uint32_t queue_family_index = {},
                            VideoSessionCreateMask flags = {},
                            const VideoProfileInfoKHR *p_video_profile = {},
                            Format picture_format = {},
                            Extent2D max_coded_extent = {},
                            Format reference_picture_format = {},
                            uint32_t max_dpb_slots = {},
                            uint32_t max_active_reference_pictures = {},
                            const ExtensionProperties *p_std_header_version = {})
    : next_(next), queue_family_index_(queue_family_index), flags_(flags), p_video_profile_(p_video_profile),
      picture_format_(picture_format), max_coded_extent_(max_coded_extent), reference_picture_format_(reference_picture_format),
      max_dpb_slots_(max_dpb_slots), max_active_reference_pictures_(max_active_reference_pictures),
      p_std_header_version_(p_std_header_version) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_SESSION_CREATE_INFO_KHR;
  const void *next_;
  uint32_t queue_family_index_;
  VideoSessionCreateMask flags_;
  const VideoProfileInfoKHR *p_video_profile_;
  Format picture_format_;
  Extent2D max_coded_extent_;
  Format reference_picture_format_;
  uint32_t max_dpb_slots_;
  uint32_t max_active_reference_pictures_;
  const ExtensionProperties *p_std_header_version_;
};

struct VideoDecodeAV1PictureInfoKHR {

  using native_type = VkVideoDecodeAV1PictureInfoKHR;

  VideoDecodeAV1PictureInfoKHR(const void *next = {},
                               const StdVideoDecodeAV1PictureInfo *p_std_picture_info = {},
                               const std::array<int32_t, VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR> &reference_name_slot_indices = {},
                               uint32_t frame_header_offset = {},
                               uint32_t tile_count = {},
                               const uint32_t *p_tile_offsets = {},
                               const uint32_t *p_tile_sizes = {})
    : next_(next), p_std_picture_info_(p_std_picture_info), reference_name_slot_indices_(reference_name_slot_indices),
      frame_header_offset_(frame_header_offset), tile_count_(tile_count), p_tile_offsets_(p_tile_offsets), p_tile_sizes_(p_tile_sizes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_AV1_PICTURE_INFO_KHR;
  const void *next_;
  const StdVideoDecodeAV1PictureInfo *p_std_picture_info_;
  std::array<int32_t, VK_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR> reference_name_slot_indices_;
  uint32_t frame_header_offset_;
  uint32_t tile_count_;
  const uint32_t *p_tile_offsets_;
  const uint32_t *p_tile_sizes_;
};

struct VideoDecodeAV1SessionParametersCreateInfoKHR {

  using native_type = VkVideoDecodeAV1SessionParametersCreateInfoKHR;

  VideoDecodeAV1SessionParametersCreateInfoKHR(const void *next = {}, const StdVideoAV1SequenceHeader *p_std_sequence_header = {})
    : next_(next), p_std_sequence_header_(p_std_sequence_header) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR;
  const void *next_;
  const StdVideoAV1SequenceHeader *p_std_sequence_header_;
};

struct VideoDecodeAV1CapabilitiesKHR {

  using native_type = VkVideoDecodeAV1CapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_AV1_CAPABILITIES_KHR;
  void *next_;
  StdVideoAV1Level max_level_;
};

struct VideoDecodeH265DpbSlotInfoKHR {

  using native_type = VkVideoDecodeH265DpbSlotInfoKHR;

  VideoDecodeH265DpbSlotInfoKHR(const void *next = {}, const StdVideoDecodeH265ReferenceInfo *p_std_reference_info = {})
    : next_(next), p_std_reference_info_(p_std_reference_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR;
  const void *next_;
  const StdVideoDecodeH265ReferenceInfo *p_std_reference_info_;
};

struct VideoDecodeH265ProfileInfoKHR {

  using native_type = VkVideoDecodeH265ProfileInfoKHR;

  VideoDecodeH265ProfileInfoKHR(const void *next = {}, StdVideoH265ProfileIdc std_profile_idc = {})
    : next_(next), std_profile_idc_(std_profile_idc) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H265_PROFILE_INFO_KHR;
  const void *next_;
  StdVideoH265ProfileIdc std_profile_idc_;
};

struct VideoDecodeH264PictureInfoKHR {

  using native_type = VkVideoDecodeH264PictureInfoKHR;

  VideoDecodeH264PictureInfoKHR(const void *next = {},
                                const StdVideoDecodeH264PictureInfo *p_std_picture_info = {},
                                uint32_t slice_count = {},
                                const uint32_t *p_slice_offsets = {})
    : next_(next), p_std_picture_info_(p_std_picture_info), slice_count_(slice_count), p_slice_offsets_(p_slice_offsets) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H264_PICTURE_INFO_KHR;
  const void *next_;
  const StdVideoDecodeH264PictureInfo *p_std_picture_info_;
  uint32_t slice_count_;
  const uint32_t *p_slice_offsets_;
};

struct PhysicalDeviceDescriptorBufferFeaturesEXT {

  using native_type = VkPhysicalDeviceDescriptorBufferFeaturesEXT;

  PhysicalDeviceDescriptorBufferFeaturesEXT(void *next = {},
                                            bool32 descriptor_buffer = {},
                                            bool32 descriptor_buffer_capture_replay = {},
                                            bool32 descriptor_buffer_image_layout_ignored = {},
                                            bool32 descriptor_buffer_push_descriptors = {})
    : next_(next), descriptor_buffer_(descriptor_buffer), descriptor_buffer_capture_replay_(descriptor_buffer_capture_replay),
      descriptor_buffer_image_layout_ignored_(descriptor_buffer_image_layout_ignored),
      descriptor_buffer_push_descriptors_(descriptor_buffer_push_descriptors) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT;
  void *next_;
  bool32 descriptor_buffer_;
  bool32 descriptor_buffer_capture_replay_;
  bool32 descriptor_buffer_image_layout_ignored_;
  bool32 descriptor_buffer_push_descriptors_;
};

struct VideoDecodeH264SessionParametersAddInfoKHR {

  using native_type = VkVideoDecodeH264SessionParametersAddInfoKHR;

  VideoDecodeH264SessionParametersAddInfoKHR(const void *next = {},
                                             uint32_t std_spscount = {},
                                             const StdVideoH264SequenceParameterSet *p_std_spss = {},
                                             uint32_t std_ppscount = {},
                                             const StdVideoH264PictureParameterSet *p_std_ppss = {})
    : next_(next), std_spscount_(std_spscount), p_std_spss_(p_std_spss), std_ppscount_(std_ppscount), p_std_ppss_(p_std_ppss) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR;
  const void *next_;
  uint32_t std_spscount_;
  const StdVideoH264SequenceParameterSet *p_std_spss_;
  uint32_t std_ppscount_;
  const StdVideoH264PictureParameterSet *p_std_ppss_;
};

struct VideoDecodeH264ProfileInfoKHR {

  using native_type = VkVideoDecodeH264ProfileInfoKHR;

  VideoDecodeH264ProfileInfoKHR(const void *next = {},
                                StdVideoH264ProfileIdc std_profile_idc = {},
                                VideoDecodeH264PictureLayoutMaskBit picture_layout = {})
    : next_(next), std_profile_idc_(std_profile_idc), picture_layout_(picture_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H264_PROFILE_INFO_KHR;
  const void *next_;
  StdVideoH264ProfileIdc std_profile_idc_;
  VideoDecodeH264PictureLayoutMaskBit picture_layout_;
};

struct VideoDecodeUsageInfoKHR {

  using native_type = VkVideoDecodeUsageInfoKHR;

  VideoDecodeUsageInfoKHR(const void *next = {}, VideoDecodeUsageMask video_usage_hints = {})
    : next_(next), video_usage_hints_(video_usage_hints) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_USAGE_INFO_KHR;
  const void *next_;
  VideoDecodeUsageMask video_usage_hints_;
};

struct VideoInlineQueryInfoKHR {

  using native_type = VkVideoInlineQueryInfoKHR;

  VideoInlineQueryInfoKHR(const void *next = {}, VkQueryPool query_pool = {}, uint32_t first_query = {}, uint32_t query_count = {})
    : next_(next), query_pool_(query_pool), first_query_(first_query), query_count_(query_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_INLINE_QUERY_INFO_KHR;
  const void *next_;
  VkQueryPool query_pool_;
  uint32_t first_query_;
  uint32_t query_count_;
};

struct VideoCapabilitiesKHR {

  using native_type = VkVideoCapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_CAPABILITIES_KHR;
  void *next_;
  VideoCapabilityMask flags_;
  DeviceSize min_bitstream_buffer_offset_alignment_;
  DeviceSize min_bitstream_buffer_size_alignment_;
  Extent2D picture_access_granularity_;
  Extent2D min_coded_extent_;
  Extent2D max_coded_extent_;
  uint32_t max_dpb_slots_;
  uint32_t max_active_reference_pictures_;
  ExtensionProperties std_header_version_;
};

struct VideoFormatPropertiesKHR {

  using native_type = VkVideoFormatPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_FORMAT_PROPERTIES_KHR;
  void *next_;
  Format format_;
  ComponentMapping component_mapping_;
  ImageCreateMask image_create_flags_;
  ImageType image_type_;
  ImageTiling image_tiling_;
  ImageUsageMask image_usage_flags_;
};

struct QueueFamilyQueryResultStatusPropertiesKHR {

  using native_type = VkQueueFamilyQueryResultStatusPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR;
  void *next_;
  bool32 query_result_status_support_;
};

struct QueueFamilyVideoPropertiesKHR {

  using native_type = VkQueueFamilyVideoPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUEUE_FAMILY_VIDEO_PROPERTIES_KHR;
  void *next_;
  VideoCodecOperationMask video_codec_operations_;
};

struct PhysicalDevicePipelineProtectedAccessFeaturesEXT {

  using native_type = VkPhysicalDevicePipelineProtectedAccessFeaturesEXT;

  PhysicalDevicePipelineProtectedAccessFeaturesEXT(void *next = {}, bool32 pipeline_protected_access = {})
    : next_(next), pipeline_protected_access_(pipeline_protected_access) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT;
  void *next_;
  bool32 pipeline_protected_access_;
};

struct MultisampledRenderToSingleSampledInfoEXT {

  using native_type = VkMultisampledRenderToSingleSampledInfoEXT;

  MultisampledRenderToSingleSampledInfoEXT(const void *next = {},
                                           bool32 multisampled_render_to_single_sampled_enable = {},
                                           SampleCountMaskBit rasterization_samples = {})
    : next_(next), multisampled_render_to_single_sampled_enable_(multisampled_render_to_single_sampled_enable),
      rasterization_samples_(rasterization_samples) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT;
  const void *next_;
  bool32 multisampled_render_to_single_sampled_enable_;
  SampleCountMaskBit rasterization_samples_;
};

struct SubpassResolvePerformanceQueryEXT {

  using native_type = VkSubpassResolvePerformanceQueryEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT;
  void *next_;
  bool32 optimal_;
};

struct PhysicalDeviceMapMemoryPlacedPropertiesEXT {

  using native_type = VkPhysicalDeviceMapMemoryPlacedPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT;
  void *next_;
  DeviceSize min_placed_memory_map_alignment_;
};

struct PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT {

  using native_type = VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT;

  PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(void *next = {}, bool32 multisampled_render_to_single_sampled = {})
    : next_(next), multisampled_render_to_single_sampled_(multisampled_render_to_single_sampled) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT;
  void *next_;
  bool32 multisampled_render_to_single_sampled_;
};

struct HostImageCopyDevicePerformanceQueryEXT {

  using native_type = VkHostImageCopyDevicePerformanceQueryEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT;
  void *next_;
  bool32 optimal_device_access_;
  bool32 identical_memory_layout_;
};

struct ImageSubresourceLayers {

  using native_type = VkImageSubresourceLayers;

  ImageSubresourceLayers(ImageAspectMask aspect_mask = {},
                         uint32_t mip_level = {},
                         uint32_t base_array_layer = {},
                         uint32_t layer_count = {})
    : aspect_mask_(aspect_mask), mip_level_(mip_level), base_array_layer_(base_array_layer), layer_count_(layer_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ImageAspectMask aspect_mask_;
  uint32_t mip_level_;
  uint32_t base_array_layer_;
  uint32_t layer_count_;
};

struct Offset3D {

  using native_type = VkOffset3D;

  Offset3D(int32_t x = {}, int32_t y = {}, int32_t z = {}) : x_(x), y_(y), z_(z) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  int32_t x_;
  int32_t y_;
  int32_t z_;
};

struct ImageToMemoryCopyEXT {

  using native_type = VkImageToMemoryCopyEXT;

  ImageToMemoryCopyEXT(const void *next = {},
                       void *p_host_pointer = {},
                       uint32_t memory_row_length = {},
                       uint32_t memory_image_height = {},
                       ImageSubresourceLayers image_subresource = {},
                       Offset3D image_offset = {},
                       Extent3D image_extent = {})
    : next_(next), p_host_pointer_(p_host_pointer), memory_row_length_(memory_row_length), memory_image_height_(memory_image_height),
      image_subresource_(image_subresource), image_offset_(image_offset), image_extent_(image_extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_TO_MEMORY_COPY_EXT;
  const void *next_;
  void *p_host_pointer_;
  uint32_t memory_row_length_;
  uint32_t memory_image_height_;
  ImageSubresourceLayers image_subresource_;
  Offset3D image_offset_;
  Extent3D image_extent_;
};

struct CopyImageToMemoryInfoEXT {

  using native_type = VkCopyImageToMemoryInfoEXT;

  CopyImageToMemoryInfoEXT(const void *next = {},
                           HostImageCopyMask flags = {},
                           VkImage src_image = {},
                           ImageLayout src_image_layout = {},
                           uint32_t region_count = {},
                           const ImageToMemoryCopyEXT *p_regions = {})
    : next_(next), flags_(flags), src_image_(src_image), src_image_layout_(src_image_layout), region_count_(region_count),
      p_regions_(p_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_IMAGE_TO_MEMORY_INFO_EXT;
  const void *next_;
  HostImageCopyMask flags_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  uint32_t region_count_;
  const ImageToMemoryCopyEXT *p_regions_;
};

struct PhysicalDeviceHostImageCopyPropertiesEXT {

  using native_type = VkPhysicalDeviceHostImageCopyPropertiesEXT;

  PhysicalDeviceHostImageCopyPropertiesEXT(void *next = {},
                                           uint32_t copy_src_layout_count = {},
                                           ImageLayout *p_copy_src_layouts = {},
                                           uint32_t copy_dst_layout_count = {},
                                           ImageLayout *p_copy_dst_layouts = {},
                                           const std::array<uint8_t, VK_UUID_SIZE> &optimal_tiling_layout_uuid = {},
                                           bool32 identical_memory_type_requirements = {})
    : next_(next), copy_src_layout_count_(copy_src_layout_count), p_copy_src_layouts_(p_copy_src_layouts),
      copy_dst_layout_count_(copy_dst_layout_count), p_copy_dst_layouts_(p_copy_dst_layouts),
      optimal_tiling_layout_uuid_(optimal_tiling_layout_uuid), identical_memory_type_requirements_(identical_memory_type_requirements) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT;
  void *next_;
  uint32_t copy_src_layout_count_;
  ImageLayout *p_copy_src_layouts_;
  uint32_t copy_dst_layout_count_;
  ImageLayout *p_copy_dst_layouts_;
  std::array<uint8_t, VK_UUID_SIZE> optimal_tiling_layout_uuid_;
  bool32 identical_memory_type_requirements_;
};

struct VideoEncodeSessionParametersFeedbackInfoKHR {

  using native_type = VkVideoEncodeSessionParametersFeedbackInfoKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR;
  void *next_;
  bool32 has_overrides_;
};

struct PhysicalDeviceHostImageCopyFeaturesEXT {

  using native_type = VkPhysicalDeviceHostImageCopyFeaturesEXT;

  PhysicalDeviceHostImageCopyFeaturesEXT(void *next = {}, bool32 host_image_copy = {}) : next_(next), host_image_copy_(host_image_copy) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT;
  void *next_;
  bool32 host_image_copy_;
};

struct PhysicalDeviceSynchronization2Features {

  using native_type = VkPhysicalDeviceSynchronization2Features;

  PhysicalDeviceSynchronization2Features(void *next = {}, bool32 synchronization2 = {})
    : next_(next), synchronization2_(synchronization2) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES;
  void *next_;
  bool32 synchronization2_;
};

struct QueueFamilyCheckpointProperties2NV {

  using native_type = VkQueueFamilyCheckpointProperties2NV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV;
  void *next_;
  PipelineStageMask2 checkpoint_execution_stage_mask_;
};

struct MemoryBarrier2 {

  using native_type = VkMemoryBarrier2;

  MemoryBarrier2(const void *next = {},
                 PipelineStageMask2 src_stage_mask = {},
                 AccessMask2 src_access_mask = {},
                 PipelineStageMask2 dst_stage_mask = {},
                 AccessMask2 dst_access_mask = {})
    : next_(next), src_stage_mask_(src_stage_mask), src_access_mask_(src_access_mask), dst_stage_mask_(dst_stage_mask),
      dst_access_mask_(dst_access_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_BARRIER_2;
  const void *next_;
  PipelineStageMask2 src_stage_mask_;
  AccessMask2 src_access_mask_;
  PipelineStageMask2 dst_stage_mask_;
  AccessMask2 dst_access_mask_;
};

struct BufferMemoryBarrier2 {

  using native_type = VkBufferMemoryBarrier2;

  BufferMemoryBarrier2(const void *next = {},
                       PipelineStageMask2 src_stage_mask = {},
                       AccessMask2 src_access_mask = {},
                       PipelineStageMask2 dst_stage_mask = {},
                       AccessMask2 dst_access_mask = {},
                       uint32_t src_queue_family_index = {},
                       uint32_t dst_queue_family_index = {},
                       VkBuffer buffer = {},
                       DeviceSize offset = {},
                       DeviceSize size = {})
    : next_(next), src_stage_mask_(src_stage_mask), src_access_mask_(src_access_mask), dst_stage_mask_(dst_stage_mask),
      dst_access_mask_(dst_access_mask), src_queue_family_index_(src_queue_family_index), dst_queue_family_index_(dst_queue_family_index),
      buffer_(buffer), offset_(offset), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_MEMORY_BARRIER_2;
  const void *next_;
  PipelineStageMask2 src_stage_mask_;
  AccessMask2 src_access_mask_;
  PipelineStageMask2 dst_stage_mask_;
  AccessMask2 dst_access_mask_;
  uint32_t src_queue_family_index_;
  uint32_t dst_queue_family_index_;
  VkBuffer buffer_;
  DeviceSize offset_;
  DeviceSize size_;
};

struct ImageSubresourceRange {

  using native_type = VkImageSubresourceRange;

  ImageSubresourceRange(ImageAspectMask aspect_mask = {},
                        uint32_t base_mip_level = {},
                        uint32_t level_count = {},
                        uint32_t base_array_layer = {},
                        uint32_t layer_count = {})
    : aspect_mask_(aspect_mask), base_mip_level_(base_mip_level), level_count_(level_count), base_array_layer_(base_array_layer),
      layer_count_(layer_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ImageAspectMask aspect_mask_;
  uint32_t base_mip_level_;
  uint32_t level_count_;
  uint32_t base_array_layer_;
  uint32_t layer_count_;
};

struct ImageMemoryBarrier2 {

  using native_type = VkImageMemoryBarrier2;

  ImageMemoryBarrier2(const void *next = {},
                      PipelineStageMask2 src_stage_mask = {},
                      AccessMask2 src_access_mask = {},
                      PipelineStageMask2 dst_stage_mask = {},
                      AccessMask2 dst_access_mask = {},
                      ImageLayout old_layout = {},
                      ImageLayout new_layout = {},
                      uint32_t src_queue_family_index = {},
                      uint32_t dst_queue_family_index = {},
                      VkImage image = {},
                      ImageSubresourceRange subresource_range = {})
    : next_(next), src_stage_mask_(src_stage_mask), src_access_mask_(src_access_mask), dst_stage_mask_(dst_stage_mask),
      dst_access_mask_(dst_access_mask), old_layout_(old_layout), new_layout_(new_layout), src_queue_family_index_(src_queue_family_index),
      dst_queue_family_index_(dst_queue_family_index), image_(image), subresource_range_(subresource_range) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_MEMORY_BARRIER_2;
  const void *next_;
  PipelineStageMask2 src_stage_mask_;
  AccessMask2 src_access_mask_;
  PipelineStageMask2 dst_stage_mask_;
  AccessMask2 dst_access_mask_;
  ImageLayout old_layout_;
  ImageLayout new_layout_;
  uint32_t src_queue_family_index_;
  uint32_t dst_queue_family_index_;
  VkImage image_;
  ImageSubresourceRange subresource_range_;
};

struct DependencyInfo {

  using native_type = VkDependencyInfo;

  DependencyInfo(const void *next = {},
                 DependencyMask dependency_flags = {},
                 uint32_t memory_barrier_count = {},
                 const MemoryBarrier2 *p_memory_barriers = {},
                 uint32_t buffer_memory_barrier_count = {},
                 const BufferMemoryBarrier2 *p_buffer_memory_barriers = {},
                 uint32_t image_memory_barrier_count = {},
                 const ImageMemoryBarrier2 *p_image_memory_barriers = {})
    : next_(next), dependency_flags_(dependency_flags), memory_barrier_count_(memory_barrier_count), p_memory_barriers_(p_memory_barriers),
      buffer_memory_barrier_count_(buffer_memory_barrier_count), p_buffer_memory_barriers_(p_buffer_memory_barriers),
      image_memory_barrier_count_(image_memory_barrier_count), p_image_memory_barriers_(p_image_memory_barriers) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEPENDENCY_INFO;
  const void *next_;
  DependencyMask dependency_flags_;
  uint32_t memory_barrier_count_;
  const MemoryBarrier2 *p_memory_barriers_;
  uint32_t buffer_memory_barrier_count_;
  const BufferMemoryBarrier2 *p_buffer_memory_barriers_;
  uint32_t image_memory_barrier_count_;
  const ImageMemoryBarrier2 *p_image_memory_barriers_;
};

struct VertexInputAttributeDescription2EXT {

  using native_type = VkVertexInputAttributeDescription2EXT;

  VertexInputAttributeDescription2EXT(
    void *next = {}, uint32_t location = {}, uint32_t binding = {}, Format format = {}, uint32_t offset = {})
    : next_(next), location_(location), binding_(binding), format_(format), offset_(offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT;
  void *next_;
  uint32_t location_;
  uint32_t binding_;
  Format format_;
  uint32_t offset_;
};

struct PhysicalDeviceExternalMemoryRDMAFeaturesNV {

  using native_type = VkPhysicalDeviceExternalMemoryRDMAFeaturesNV;

  PhysicalDeviceExternalMemoryRDMAFeaturesNV(void *next = {}, bool32 external_memory_rdma = {})
    : next_(next), external_memory_rdma_(external_memory_rdma) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV;
  void *next_;
  bool32 external_memory_rdma_;
};

struct PhysicalDeviceVertexInputDynamicStateFeaturesEXT {

  using native_type = VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT;

  PhysicalDeviceVertexInputDynamicStateFeaturesEXT(void *next = {}, bool32 vertex_input_dynamic_state = {})
    : next_(next), vertex_input_dynamic_state_(vertex_input_dynamic_state) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT;
  void *next_;
  bool32 vertex_input_dynamic_state_;
};

struct PipelineViewportDepthClipControlCreateInfoEXT {

  using native_type = VkPipelineViewportDepthClipControlCreateInfoEXT;

  PipelineViewportDepthClipControlCreateInfoEXT(const void *next = {}, bool32 negative_one_to_one = {})
    : next_(next), negative_one_to_one_(negative_one_to_one) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT;
  const void *next_;
  bool32 negative_one_to_one_;
};

struct MutableDescriptorTypeListEXT {

  using native_type = VkMutableDescriptorTypeListEXT;

  MutableDescriptorTypeListEXT(uint32_t descriptor_type_count = {}, const DescriptorType *p_descriptor_types = {})
    : descriptor_type_count_(descriptor_type_count), p_descriptor_types_(p_descriptor_types) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t descriptor_type_count_;
  const DescriptorType *p_descriptor_types_;
};

struct MutableDescriptorTypeCreateInfoEXT {

  using native_type = VkMutableDescriptorTypeCreateInfoEXT;

  MutableDescriptorTypeCreateInfoEXT(const void *next = {},
                                     uint32_t mutable_descriptor_type_list_count = {},
                                     const MutableDescriptorTypeListEXT *p_mutable_descriptor_type_lists = {})
    : next_(next), mutable_descriptor_type_list_count_(mutable_descriptor_type_list_count),
      p_mutable_descriptor_type_lists_(p_mutable_descriptor_type_lists) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT;
  const void *next_;
  uint32_t mutable_descriptor_type_list_count_;
  const MutableDescriptorTypeListEXT *p_mutable_descriptor_type_lists_;
};

struct PhysicalDeviceMutableDescriptorTypeFeaturesEXT {

  using native_type = VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT;

  PhysicalDeviceMutableDescriptorTypeFeaturesEXT(void *next = {}, bool32 mutable_descriptor_type = {})
    : next_(next), mutable_descriptor_type_(mutable_descriptor_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT;
  void *next_;
  bool32 mutable_descriptor_type_;
};

struct DeviceFaultInfoEXT {

  using native_type = VkDeviceFaultInfoEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_FAULT_INFO_EXT;
  void *next_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> description_;
  DeviceFaultAddressInfoEXT *p_address_infos_;
  DeviceFaultVendorInfoEXT *p_vendor_infos_;
  void *p_vendor_binary_data_;
};

struct PhysicalDeviceLegacyVertexAttributesPropertiesEXT {

  using native_type = VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT;

  PhysicalDeviceLegacyVertexAttributesPropertiesEXT(void *next = {}, bool32 native_unaligned_performance = {})
    : next_(next), native_unaligned_performance_(native_unaligned_performance) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT;
  void *next_;
  bool32 native_unaligned_performance_;
};

struct PhysicalDeviceLegacyVertexAttributesFeaturesEXT {

  using native_type = VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT;

  PhysicalDeviceLegacyVertexAttributesFeaturesEXT(void *next = {}, bool32 legacy_vertex_attributes = {})
    : next_(next), legacy_vertex_attributes_(legacy_vertex_attributes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT;
  void *next_;
  bool32 legacy_vertex_attributes_;
};

struct PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT {

  using native_type = VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT;

  PhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(void *next = {}, bool32 attachment_feedback_loop_dynamic_state = {})
    : next_(next), attachment_feedback_loop_dynamic_state_(attachment_feedback_loop_dynamic_state) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT;
  void *next_;
  bool32 attachment_feedback_loop_dynamic_state_;
};

struct PhysicalDeviceImageProcessing2PropertiesQCOM {

  using native_type = VkPhysicalDeviceImageProcessing2PropertiesQCOM;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM;
  void *next_;
  Extent2D max_block_match_window_;
};

struct PhysicalDeviceImageSlicedViewOf3DFeaturesEXT {

  using native_type = VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT;

  PhysicalDeviceImageSlicedViewOf3DFeaturesEXT(void *next = {}, bool32 image_sliced_view_of3d = {})
    : next_(next), image_sliced_view_of3d_(image_sliced_view_of3d) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT;
  void *next_;
  bool32 image_sliced_view_of3d_;
};

struct PhysicalDeviceImage2DViewOf3DFeaturesEXT {

  using native_type = VkPhysicalDeviceImage2DViewOf3DFeaturesEXT;

  PhysicalDeviceImage2DViewOf3DFeaturesEXT(void *next = {}, bool32 image2dview_of3d = {}, bool32 sampler2dview_of3d = {})
    : next_(next), image2dview_of3d_(image2dview_of3d), sampler2dview_of3d_(sampler2dview_of3d) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT;
  void *next_;
  bool32 image2dview_of3d_;
  bool32 sampler2dview_of3d_;
};

struct PipelineFragmentShadingRateEnumStateCreateInfoNV {

  using native_type = VkPipelineFragmentShadingRateEnumStateCreateInfoNV;

  PipelineFragmentShadingRateEnumStateCreateInfoNV(const void *next = {},
                                                   FragmentShadingRateType shading_rate_type = {},
                                                   FragmentShadingRate shading_rate = {},
                                                   const std::array<FragmentShadingRateCombinerOp, 2> &combiner_ops = {})
    : next_(next), shading_rate_type_(shading_rate_type), shading_rate_(shading_rate), combiner_ops_(combiner_ops) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV;
  const void *next_;
  FragmentShadingRateType shading_rate_type_;
  FragmentShadingRate shading_rate_;
  std::array<FragmentShadingRateCombinerOp, 2> combiner_ops_;
};

struct PhysicalDeviceNestedCommandBufferPropertiesEXT {

  using native_type = VkPhysicalDeviceNestedCommandBufferPropertiesEXT;

  PhysicalDeviceNestedCommandBufferPropertiesEXT(void *next = {}, uint32_t max_command_buffer_nesting_level = {})
    : next_(next), max_command_buffer_nesting_level_(max_command_buffer_nesting_level) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT;
  void *next_;
  uint32_t max_command_buffer_nesting_level_;
};

struct PhysicalDeviceFragmentShadingRateEnumsPropertiesNV {

  using native_type = VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV;

  PhysicalDeviceFragmentShadingRateEnumsPropertiesNV(void *next = {}, SampleCountMaskBit max_fragment_shading_rate_invocation_count = {})
    : next_(next), max_fragment_shading_rate_invocation_count_(max_fragment_shading_rate_invocation_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV;
  void *next_;
  SampleCountMaskBit max_fragment_shading_rate_invocation_count_;
};

struct PhysicalDeviceFragmentShadingRateEnumsFeaturesNV {

  using native_type = VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV;

  PhysicalDeviceFragmentShadingRateEnumsFeaturesNV(void *next = {},
                                                   bool32 fragment_shading_rate_enums = {},
                                                   bool32 supersample_fragment_shading_rates = {},
                                                   bool32 no_invocation_fragment_shading_rates = {})
    : next_(next), fragment_shading_rate_enums_(fragment_shading_rate_enums),
      supersample_fragment_shading_rates_(supersample_fragment_shading_rates),
      no_invocation_fragment_shading_rates_(no_invocation_fragment_shading_rates) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV;
  void *next_;
  bool32 fragment_shading_rate_enums_;
  bool32 supersample_fragment_shading_rates_;
  bool32 no_invocation_fragment_shading_rates_;
};

struct PhysicalDeviceShaderTerminateInvocationFeatures {

  using native_type = VkPhysicalDeviceShaderTerminateInvocationFeatures;

  PhysicalDeviceShaderTerminateInvocationFeatures(void *next = {}, bool32 shader_terminate_invocation = {})
    : next_(next), shader_terminate_invocation_(shader_terminate_invocation) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES;
  void *next_;
  bool32 shader_terminate_invocation_;
};

struct PhysicalDeviceFragmentShadingRateFeaturesKHR {

  using native_type = VkPhysicalDeviceFragmentShadingRateFeaturesKHR;

  PhysicalDeviceFragmentShadingRateFeaturesKHR(void *next = {},
                                               bool32 pipeline_fragment_shading_rate = {},
                                               bool32 primitive_fragment_shading_rate = {},
                                               bool32 attachment_fragment_shading_rate = {})
    : next_(next), pipeline_fragment_shading_rate_(pipeline_fragment_shading_rate),
      primitive_fragment_shading_rate_(primitive_fragment_shading_rate),
      attachment_fragment_shading_rate_(attachment_fragment_shading_rate) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR;
  void *next_;
  bool32 pipeline_fragment_shading_rate_;
  bool32 primitive_fragment_shading_rate_;
  bool32 attachment_fragment_shading_rate_;
};

struct ImageResolve2 {

  using native_type = VkImageResolve2;

  ImageResolve2(const void *next = {},
                ImageSubresourceLayers src_subresource = {},
                Offset3D src_offset = {},
                ImageSubresourceLayers dst_subresource = {},
                Offset3D dst_offset = {},
                Extent3D extent = {})
    : next_(next), src_subresource_(src_subresource), src_offset_(src_offset), dst_subresource_(dst_subresource), dst_offset_(dst_offset),
      extent_(extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_RESOLVE_2;
  const void *next_;
  ImageSubresourceLayers src_subresource_;
  Offset3D src_offset_;
  ImageSubresourceLayers dst_subresource_;
  Offset3D dst_offset_;
  Extent3D extent_;
};

struct ResolveImageInfo2 {

  using native_type = VkResolveImageInfo2;

  ResolveImageInfo2(const void *next = {},
                    VkImage src_image = {},
                    ImageLayout src_image_layout = {},
                    VkImage dst_image = {},
                    ImageLayout dst_image_layout = {},
                    uint32_t region_count = {},
                    const ImageResolve2 *p_regions = {})
    : next_(next), src_image_(src_image), src_image_layout_(src_image_layout), dst_image_(dst_image), dst_image_layout_(dst_image_layout),
      region_count_(region_count), p_regions_(p_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RESOLVE_IMAGE_INFO_2;
  const void *next_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const ImageResolve2 *p_regions_;
};

struct BufferImageCopy2 {

  using native_type = VkBufferImageCopy2;

  BufferImageCopy2(const void *next = {},
                   DeviceSize buffer_offset = {},
                   uint32_t buffer_row_length = {},
                   uint32_t buffer_image_height = {},
                   ImageSubresourceLayers image_subresource = {},
                   Offset3D image_offset = {},
                   Extent3D image_extent = {})
    : next_(next), buffer_offset_(buffer_offset), buffer_row_length_(buffer_row_length), buffer_image_height_(buffer_image_height),
      image_subresource_(image_subresource), image_offset_(image_offset), image_extent_(image_extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_IMAGE_COPY_2;
  const void *next_;
  DeviceSize buffer_offset_;
  uint32_t buffer_row_length_;
  uint32_t buffer_image_height_;
  ImageSubresourceLayers image_subresource_;
  Offset3D image_offset_;
  Extent3D image_extent_;
};

struct CopyBufferToImageInfo2 {

  using native_type = VkCopyBufferToImageInfo2;

  CopyBufferToImageInfo2(const void *next = {},
                         VkBuffer src_buffer = {},
                         VkImage dst_image = {},
                         ImageLayout dst_image_layout = {},
                         uint32_t region_count = {},
                         const BufferImageCopy2 *p_regions = {})
    : next_(next), src_buffer_(src_buffer), dst_image_(dst_image), dst_image_layout_(dst_image_layout), region_count_(region_count),
      p_regions_(p_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_BUFFER_TO_IMAGE_INFO_2;
  const void *next_;
  VkBuffer src_buffer_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const BufferImageCopy2 *p_regions_;
};

struct BufferCopy2 {

  using native_type = VkBufferCopy2;

  BufferCopy2(const void *next = {}, DeviceSize src_offset = {}, DeviceSize dst_offset = {}, DeviceSize size = {})
    : next_(next), src_offset_(src_offset), dst_offset_(dst_offset), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_COPY_2;
  const void *next_;
  DeviceSize src_offset_;
  DeviceSize dst_offset_;
  DeviceSize size_;
};

struct CopyBufferInfo2 {

  using native_type = VkCopyBufferInfo2;

  CopyBufferInfo2(const void *next = {},
                  VkBuffer src_buffer = {},
                  VkBuffer dst_buffer = {},
                  uint32_t region_count = {},
                  const BufferCopy2 *p_regions = {})
    : next_(next), src_buffer_(src_buffer), dst_buffer_(dst_buffer), region_count_(region_count), p_regions_(p_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_BUFFER_INFO_2;
  const void *next_;
  VkBuffer src_buffer_;
  VkBuffer dst_buffer_;
  uint32_t region_count_;
  const BufferCopy2 *p_regions_;
};

struct PhysicalDeviceShaderImageAtomicInt64FeaturesEXT {

  using native_type = VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT;

  PhysicalDeviceShaderImageAtomicInt64FeaturesEXT(void *next = {},
                                                  bool32 shader_image_int64atomics = {},
                                                  bool32 sparse_image_int64atomics = {})
    : next_(next), shader_image_int64atomics_(shader_image_int64atomics), sparse_image_int64atomics_(sparse_image_int64atomics) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT;
  void *next_;
  bool32 shader_image_int64atomics_;
  bool32 sparse_image_int64atomics_;
};

struct ImageBlit2 {

  using native_type = VkImageBlit2;

  ImageBlit2(const void *next = {},
             ImageSubresourceLayers src_subresource = {},
             const std::array<Offset3D, 2> &src_offsets = {},
             ImageSubresourceLayers dst_subresource = {},
             const std::array<Offset3D, 2> &dst_offsets = {})
    : next_(next), src_subresource_(src_subresource), src_offsets_(src_offsets), dst_subresource_(dst_subresource),
      dst_offsets_(dst_offsets) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_BLIT_2;
  const void *next_;
  ImageSubresourceLayers src_subresource_;
  std::array<Offset3D, 2> src_offsets_;
  ImageSubresourceLayers dst_subresource_;
  std::array<Offset3D, 2> dst_offsets_;
};

struct ImageCopy2 {

  using native_type = VkImageCopy2;

  ImageCopy2(const void *next = {},
             ImageSubresourceLayers src_subresource = {},
             Offset3D src_offset = {},
             ImageSubresourceLayers dst_subresource = {},
             Offset3D dst_offset = {},
             Extent3D extent = {})
    : next_(next), src_subresource_(src_subresource), src_offset_(src_offset), dst_subresource_(dst_subresource), dst_offset_(dst_offset),
      extent_(extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_COPY_2;
  const void *next_;
  ImageSubresourceLayers src_subresource_;
  Offset3D src_offset_;
  ImageSubresourceLayers dst_subresource_;
  Offset3D dst_offset_;
  Extent3D extent_;
};

struct VideoEncodeH265NaluSliceSegmentInfoKHR {

  using native_type = VkVideoEncodeH265NaluSliceSegmentInfoKHR;

  VideoEncodeH265NaluSliceSegmentInfoKHR(const void *next = {},
                                         int32_t constant_qp = {},
                                         const StdVideoEncodeH265SliceSegmentHeader *p_std_slice_segment_header = {})
    : next_(next), constant_qp_(constant_qp), p_std_slice_segment_header_(p_std_slice_segment_header) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR;
  const void *next_;
  int32_t constant_qp_;
  const StdVideoEncodeH265SliceSegmentHeader *p_std_slice_segment_header_;
};

struct PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI {

  using native_type = VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI;

  PhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(void *next = {}, bool32 cluster_shading_rate = {})
    : next_(next), cluster_shading_rate_(cluster_shading_rate) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI;
  void *next_;
  bool32 cluster_shading_rate_;
};

struct PhysicalDeviceImageViewMinLodFeaturesEXT {

  using native_type = VkPhysicalDeviceImageViewMinLodFeaturesEXT;

  PhysicalDeviceImageViewMinLodFeaturesEXT(void *next = {}, bool32 min_lod = {}) : next_(next), min_lod_(min_lod) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT;
  void *next_;
  bool32 min_lod_;
};

struct PhysicalDeviceClusterCullingShaderFeaturesHUAWEI {

  using native_type = VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI;

  PhysicalDeviceClusterCullingShaderFeaturesHUAWEI(void *next = {},
                                                   bool32 clusterculling_shader = {},
                                                   bool32 multiview_cluster_culling_shader = {})
    : next_(next), clusterculling_shader_(clusterculling_shader), multiview_cluster_culling_shader_(multiview_cluster_culling_shader) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI;
  void *next_;
  bool32 clusterculling_shader_;
  bool32 multiview_cluster_culling_shader_;
};

struct PhysicalDevice4444FormatsFeaturesEXT {

  using native_type = VkPhysicalDevice4444FormatsFeaturesEXT;

  PhysicalDevice4444FormatsFeaturesEXT(void *next = {}, bool32 format_a4r4g4b4 = {}, bool32 format_a4b4g4r4 = {})
    : next_(next), format_a4r4g4b4_(format_a4r4g4b4), format_a4b4g4r4_(format_a4b4g4r4) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT;
  void *next_;
  bool32 format_a4r4g4b4_;
  bool32 format_a4b4g4r4_;
};

struct SamplerCubicWeightsCreateInfoQCOM {

  using native_type = VkSamplerCubicWeightsCreateInfoQCOM;

  SamplerCubicWeightsCreateInfoQCOM(const void *next = {}, CubicFilterWeights cubic_weights = {})
    : next_(next), cubic_weights_(cubic_weights) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM;
  const void *next_;
  CubicFilterWeights cubic_weights_;
};

struct PhysicalDeviceLinearColorAttachmentFeaturesNV {

  using native_type = VkPhysicalDeviceLinearColorAttachmentFeaturesNV;

  PhysicalDeviceLinearColorAttachmentFeaturesNV(void *next = {}, bool32 linear_color_attachment = {})
    : next_(next), linear_color_attachment_(linear_color_attachment) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV;
  void *next_;
  bool32 linear_color_attachment_;
};

struct PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR {

  using native_type = VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR;

  PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(void *next = {},
                                                         bool32 workgroup_memory_explicit_layout = {},
                                                         bool32 workgroup_memory_explicit_layout_scalar_block_layout = {},
                                                         bool32 workgroup_memory_explicit_layout8bit_access = {},
                                                         bool32 workgroup_memory_explicit_layout16bit_access = {})
    : next_(next), workgroup_memory_explicit_layout_(workgroup_memory_explicit_layout),
      workgroup_memory_explicit_layout_scalar_block_layout_(workgroup_memory_explicit_layout_scalar_block_layout),
      workgroup_memory_explicit_layout8bit_access_(workgroup_memory_explicit_layout8bit_access),
      workgroup_memory_explicit_layout16bit_access_(workgroup_memory_explicit_layout16bit_access) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR;
  void *next_;
  bool32 workgroup_memory_explicit_layout_;
  bool32 workgroup_memory_explicit_layout_scalar_block_layout_;
  bool32 workgroup_memory_explicit_layout8bit_access_;
  bool32 workgroup_memory_explicit_layout16bit_access_;
};

struct PhysicalDeviceRobustness2PropertiesEXT {

  using native_type = VkPhysicalDeviceRobustness2PropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT;
  void *next_;
  DeviceSize robust_storage_buffer_access_size_alignment_;
  DeviceSize robust_uniform_buffer_access_size_alignment_;
};

struct VideoEncodeUsageInfoKHR {

  using native_type = VkVideoEncodeUsageInfoKHR;

  VideoEncodeUsageInfoKHR(const void *next = {},
                          VideoEncodeUsageMask video_usage_hints = {},
                          VideoEncodeContentMask video_content_hints = {},
                          VideoEncodeTuningMode tuning_mode = {})
    : next_(next), video_usage_hints_(video_usage_hints), video_content_hints_(video_content_hints), tuning_mode_(tuning_mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_USAGE_INFO_KHR;
  const void *next_;
  VideoEncodeUsageMask video_usage_hints_;
  VideoEncodeContentMask video_content_hints_;
  VideoEncodeTuningMode tuning_mode_;
};

struct DeviceDiagnosticsConfigCreateInfoNV {

  using native_type = VkDeviceDiagnosticsConfigCreateInfoNV;

  DeviceDiagnosticsConfigCreateInfoNV(const void *next = {}, DeviceDiagnosticsConfigMask flags = {}) : next_(next), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV;
  const void *next_;
  DeviceDiagnosticsConfigMask flags_;
};

struct CommandBufferInheritanceRenderPassTransformInfoQCOM {

  using native_type = VkCommandBufferInheritanceRenderPassTransformInfoQCOM;

  CommandBufferInheritanceRenderPassTransformInfoQCOM(void *next = {}, SurfaceTransformMaskBit transform = {}, Rect2D render_area = {})
    : next_(next), transform_(transform), render_area_(render_area) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM;
  void *next_;
  SurfaceTransformMaskBit transform_;
  Rect2D render_area_;
};

struct CopyCommandTransformInfoQCOM {

  using native_type = VkCopyCommandTransformInfoQCOM;

  CopyCommandTransformInfoQCOM(const void *next = {}, SurfaceTransformMaskBit transform = {}) : next_(next), transform_(transform) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_COMMAND_TRANSFORM_INFO_QCOM;
  const void *next_;
  SurfaceTransformMaskBit transform_;
};

struct CopyMemoryToMicromapInfoEXT {

  using native_type = VkCopyMemoryToMicromapInfoEXT;

  CopyMemoryToMicromapInfoEXT(const void *next = {},
                              VkDeviceOrHostAddressConstKHR src = {},
                              VkMicromapEXT dst = {},
                              CopyMicromapMode mode = {})
    : next_(next), src_(src), dst_(dst), mode_(mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_MEMORY_TO_MICROMAP_INFO_EXT;
  const void *next_;
  VkDeviceOrHostAddressConstKHR src_;
  VkMicromapEXT dst_;
  CopyMicromapMode mode_;
};

struct RenderPassTransformBeginInfoQCOM {

  using native_type = VkRenderPassTransformBeginInfoQCOM;

  RenderPassTransformBeginInfoQCOM(void *next = {}, SurfaceTransformMaskBit transform = {}) : next_(next), transform_(transform) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM;
  void *next_;
  SurfaceTransformMaskBit transform_;
};

struct DeviceImageSubresourceInfoKHR {

  using native_type = VkDeviceImageSubresourceInfoKHR;

  DeviceImageSubresourceInfoKHR(const void *next = {},
                                const ImageCreateInfo *p_create_info = {},
                                const ImageSubresource2KHR *p_subresource = {})
    : next_(next), p_create_info_(p_create_info), p_subresource_(p_subresource) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_IMAGE_SUBRESOURCE_INFO_KHR;
  const void *next_;
  const ImageCreateInfo *p_create_info_;
  const ImageSubresource2KHR *p_subresource_;
};

struct ColorBlendAdvancedEXT {

  using native_type = VkColorBlendAdvancedEXT;

  ColorBlendAdvancedEXT(BlendOp advanced_blend_op = {},
                        bool32 src_premultiplied = {},
                        bool32 dst_premultiplied = {},
                        BlendOverlap blend_overlap = {},
                        bool32 clamp_results = {})
    : advanced_blend_op_(advanced_blend_op), src_premultiplied_(src_premultiplied), dst_premultiplied_(dst_premultiplied),
      blend_overlap_(blend_overlap), clamp_results_(clamp_results) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  BlendOp advanced_blend_op_;
  bool32 src_premultiplied_;
  bool32 dst_premultiplied_;
  BlendOverlap blend_overlap_;
  bool32 clamp_results_;
};

struct PhysicalDeviceExtendedDynamicState3PropertiesEXT {

  using native_type = VkPhysicalDeviceExtendedDynamicState3PropertiesEXT;

  PhysicalDeviceExtendedDynamicState3PropertiesEXT(void *next = {}, bool32 dynamic_primitive_topology_unrestricted = {})
    : next_(next), dynamic_primitive_topology_unrestricted_(dynamic_primitive_topology_unrestricted) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT;
  void *next_;
  bool32 dynamic_primitive_topology_unrestricted_;
};

struct PhysicalDeviceExtendedDynamicStateFeaturesEXT {

  using native_type = VkPhysicalDeviceExtendedDynamicStateFeaturesEXT;

  PhysicalDeviceExtendedDynamicStateFeaturesEXT(void *next = {}, bool32 extended_dynamic_state = {})
    : next_(next), extended_dynamic_state_(extended_dynamic_state) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT;
  void *next_;
  bool32 extended_dynamic_state_;
};

struct PhysicalDeviceDepthClipControlFeaturesEXT {

  using native_type = VkPhysicalDeviceDepthClipControlFeaturesEXT;

  PhysicalDeviceDepthClipControlFeaturesEXT(void *next = {}, bool32 depth_clip_control = {})
    : next_(next), depth_clip_control_(depth_clip_control) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT;
  void *next_;
  bool32 depth_clip_control_;
};

struct RayTracingPipelineInterfaceCreateInfoKHR {

  using native_type = VkRayTracingPipelineInterfaceCreateInfoKHR;

  RayTracingPipelineInterfaceCreateInfoKHR(const void *next = {},
                                           uint32_t max_pipeline_ray_payload_size = {},
                                           uint32_t max_pipeline_ray_hit_attribute_size = {})
    : next_(next), max_pipeline_ray_payload_size_(max_pipeline_ray_payload_size),
      max_pipeline_ray_hit_attribute_size_(max_pipeline_ray_hit_attribute_size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR;
  const void *next_;
  uint32_t max_pipeline_ray_payload_size_;
  uint32_t max_pipeline_ray_hit_attribute_size_;
};

struct CopyAccelerationStructureToMemoryInfoKHR {

  using native_type = VkCopyAccelerationStructureToMemoryInfoKHR;

  CopyAccelerationStructureToMemoryInfoKHR(const void *next = {},
                                           VkAccelerationStructureKHR src = {},
                                           VkDeviceOrHostAddressKHR dst = {},
                                           CopyAccelerationStructureMode mode = {})
    : next_(next), src_(src), dst_(dst), mode_(mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR;
  const void *next_;
  VkAccelerationStructureKHR src_;
  VkDeviceOrHostAddressKHR dst_;
  CopyAccelerationStructureMode mode_;
};

struct AccelerationStructureVersionInfoKHR {

  using native_type = VkAccelerationStructureVersionInfoKHR;

  AccelerationStructureVersionInfoKHR(const void *next = {}, const uint8_t *p_version_data = {})
    : next_(next), p_version_data_(p_version_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_VERSION_INFO_KHR;
  const void *next_;
  const uint8_t *p_version_data_;
};

struct TransformMatrixKHR {

  using native_type = VkTransformMatrixKHR;

  TransformMatrixKHR(const std::array<std::array<float, 4>, 3> &matrix = {}) : matrix_(matrix) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  std::array<std::array<float, 4>, 3> matrix_;
};

struct AccelerationStructureInstanceKHR {

  using native_type = VkAccelerationStructureInstanceKHR;

  AccelerationStructureInstanceKHR(TransformMatrixKHR transform = {},
                                   uint32_t instance_custom_index = {},
                                   uint32_t mask = {},
                                   uint32_t instance_shader_binding_table_record_offset = {},
                                   VkGeometryInstanceFlagsKHR flags = {},
                                   uint64_t acceleration_structure_reference = {})
    : transform_(transform), instance_custom_index_(instance_custom_index), mask_(mask),
      instance_shader_binding_table_record_offset_(instance_shader_binding_table_record_offset), flags_(flags),
      acceleration_structure_reference_(acceleration_structure_reference) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  TransformMatrixKHR transform_;
  uint32_t instance_custom_index_ : 24;
  uint32_t mask_ : 8;
  uint32_t instance_shader_binding_table_record_offset_ : 24;
  VkGeometryInstanceFlagsKHR flags_ : 8;
  uint64_t acceleration_structure_reference_;
};

struct AabbPositionsKHR {

  using native_type = VkAabbPositionsKHR;

  AabbPositionsKHR(float min_x = {}, float min_y = {}, float min_z = {}, float max_x = {}, float max_y = {}, float max_z = {})
    : min_x_(min_x), min_y_(min_y), min_z_(min_z), max_x_(max_x), max_y_(max_y), max_z_(max_z) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  float min_x_;
  float min_y_;
  float min_z_;
  float max_x_;
  float max_y_;
  float max_z_;
};

struct AccelerationStructureBuildRangeInfoKHR {

  using native_type = VkAccelerationStructureBuildRangeInfoKHR;

  AccelerationStructureBuildRangeInfoKHR(uint32_t primitive_count = {},
                                         uint32_t primitive_offset = {},
                                         uint32_t first_vertex = {},
                                         uint32_t transform_offset = {})
    : primitive_count_(primitive_count), primitive_offset_(primitive_offset), first_vertex_(first_vertex),
      transform_offset_(transform_offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t primitive_count_;
  uint32_t primitive_offset_;
  uint32_t first_vertex_;
  uint32_t transform_offset_;
};

struct AccelerationStructureGeometryKHR {

  using native_type = VkAccelerationStructureGeometryKHR;

  AccelerationStructureGeometryKHR(const void *next = {},
                                   GeometryType geometry_type = {},
                                   VkAccelerationStructureGeometryDataKHR geometry = {},
                                   GeometryMask flags = {})
    : next_(next), geometry_type_(geometry_type), geometry_(geometry), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_GEOMETRY_KHR;
  const void *next_;
  GeometryType geometry_type_;
  VkAccelerationStructureGeometryDataKHR geometry_;
  GeometryMask flags_;
};

struct AccelerationStructureGeometryAabbsDataKHR {

  using native_type = VkAccelerationStructureGeometryAabbsDataKHR;

  AccelerationStructureGeometryAabbsDataKHR(const void *next = {}, VkDeviceOrHostAddressConstKHR data = {}, DeviceSize stride = {})
    : next_(next), data_(data), stride_(stride) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR;
  const void *next_;
  VkDeviceOrHostAddressConstKHR data_;
  DeviceSize stride_;
};

struct PhysicalDeviceBorderColorSwizzleFeaturesEXT {

  using native_type = VkPhysicalDeviceBorderColorSwizzleFeaturesEXT;

  PhysicalDeviceBorderColorSwizzleFeaturesEXT(void *next = {},
                                              bool32 border_color_swizzle = {},
                                              bool32 border_color_swizzle_from_image = {})
    : next_(next), border_color_swizzle_(border_color_swizzle), border_color_swizzle_from_image_(border_color_swizzle_from_image) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT;
  void *next_;
  bool32 border_color_swizzle_;
  bool32 border_color_swizzle_from_image_;
};

struct PhysicalDeviceCustomBorderColorFeaturesEXT {

  using native_type = VkPhysicalDeviceCustomBorderColorFeaturesEXT;

  PhysicalDeviceCustomBorderColorFeaturesEXT(void *next = {},
                                             bool32 custom_border_colors = {},
                                             bool32 custom_border_color_without_format = {})
    : next_(next), custom_border_colors_(custom_border_colors), custom_border_color_without_format_(custom_border_color_without_format) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT;
  void *next_;
  bool32 custom_border_colors_;
  bool32 custom_border_color_without_format_;
};

struct PhysicalDeviceToolProperties {

  using native_type = VkPhysicalDeviceToolProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_TOOL_PROPERTIES;
  void *next_;
  std::array<char, VK_MAX_EXTENSION_NAME_SIZE> name_;
  std::array<char, VK_MAX_EXTENSION_NAME_SIZE> version_;
  ToolPurposeMask purposes_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> description_;
  std::array<char, VK_MAX_EXTENSION_NAME_SIZE> layer_;
};

struct PipelineCompilerControlCreateInfoAMD {

  using native_type = VkPipelineCompilerControlCreateInfoAMD;

  PipelineCompilerControlCreateInfoAMD(const void *next = {}, PipelineCompilerControlMask compiler_control_flags = {})
    : next_(next), compiler_control_flags_(compiler_control_flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD;
  const void *next_;
  PipelineCompilerControlMask compiler_control_flags_;
};

struct PhysicalDeviceVulkan13Properties {

  using native_type = VkPhysicalDeviceVulkan13Properties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES;
  void *next_;
  uint32_t min_subgroup_size_;
  uint32_t max_subgroup_size_;
  uint32_t max_compute_workgroup_subgroups_;
  ShaderStageMask required_subgroup_size_stages_;
  uint32_t max_inline_uniform_block_size_;
  uint32_t max_per_stage_descriptor_inline_uniform_blocks_;
  uint32_t max_per_stage_descriptor_update_after_bind_inline_uniform_blocks_;
  uint32_t max_descriptor_set_inline_uniform_blocks_;
  uint32_t max_descriptor_set_update_after_bind_inline_uniform_blocks_;
  uint32_t max_inline_uniform_total_size_;
  bool32 integer_dot_product8bit_unsigned_accelerated_;
  bool32 integer_dot_product8bit_signed_accelerated_;
  bool32 integer_dot_product8bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product4x8bit_packed_unsigned_accelerated_;
  bool32 integer_dot_product4x8bit_packed_signed_accelerated_;
  bool32 integer_dot_product4x8bit_packed_mixed_signedness_accelerated_;
  bool32 integer_dot_product16bit_unsigned_accelerated_;
  bool32 integer_dot_product16bit_signed_accelerated_;
  bool32 integer_dot_product16bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product32bit_unsigned_accelerated_;
  bool32 integer_dot_product32bit_signed_accelerated_;
  bool32 integer_dot_product32bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product64bit_unsigned_accelerated_;
  bool32 integer_dot_product64bit_signed_accelerated_;
  bool32 integer_dot_product64bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product_accumulating_saturating8bit_unsigned_accelerated_;
  bool32 integer_dot_product_accumulating_saturating8bit_signed_accelerated_;
  bool32 integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated_;
  bool32 integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated_;
  bool32 integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated_;
  bool32 integer_dot_product_accumulating_saturating16bit_unsigned_accelerated_;
  bool32 integer_dot_product_accumulating_saturating16bit_signed_accelerated_;
  bool32 integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product_accumulating_saturating32bit_unsigned_accelerated_;
  bool32 integer_dot_product_accumulating_saturating32bit_signed_accelerated_;
  bool32 integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product_accumulating_saturating64bit_unsigned_accelerated_;
  bool32 integer_dot_product_accumulating_saturating64bit_signed_accelerated_;
  bool32 integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated_;
  DeviceSize storage_texel_buffer_offset_alignment_bytes_;
  bool32 storage_texel_buffer_offset_single_texel_alignment_;
  DeviceSize uniform_texel_buffer_offset_alignment_bytes_;
  bool32 uniform_texel_buffer_offset_single_texel_alignment_;
  DeviceSize max_buffer_size_;
};

struct DeviceQueueShaderCoreControlCreateInfoARM {

  using native_type = VkDeviceQueueShaderCoreControlCreateInfoARM;

  DeviceQueueShaderCoreControlCreateInfoARM(void *next = {}, uint32_t shader_core_count = {})
    : next_(next), shader_core_count_(shader_core_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM;
  void *next_;
  uint32_t shader_core_count_;
};

struct PhysicalDeviceVulkan13Features {

  using native_type = VkPhysicalDeviceVulkan13Features;

  PhysicalDeviceVulkan13Features(void *next = {},
                                 bool32 robust_image_access = {},
                                 bool32 inline_uniform_block = {},
                                 bool32 descriptor_binding_inline_uniform_block_update_after_bind = {},
                                 bool32 pipeline_creation_cache_control = {},
                                 bool32 private_data = {},
                                 bool32 shader_demote_to_helper_invocation = {},
                                 bool32 shader_terminate_invocation = {},
                                 bool32 subgroup_size_control = {},
                                 bool32 compute_full_subgroups = {},
                                 bool32 synchronization2 = {},
                                 bool32 texture_compression_astc_hdr = {},
                                 bool32 shader_zero_initialize_workgroup_memory = {},
                                 bool32 dynamic_rendering = {},
                                 bool32 shader_integer_dot_product = {},
                                 bool32 maintenance4 = {})
    : next_(next), robust_image_access_(robust_image_access), inline_uniform_block_(inline_uniform_block),
      descriptor_binding_inline_uniform_block_update_after_bind_(descriptor_binding_inline_uniform_block_update_after_bind),
      pipeline_creation_cache_control_(pipeline_creation_cache_control), private_data_(private_data),
      shader_demote_to_helper_invocation_(shader_demote_to_helper_invocation), shader_terminate_invocation_(shader_terminate_invocation),
      subgroup_size_control_(subgroup_size_control), compute_full_subgroups_(compute_full_subgroups), synchronization2_(synchronization2),
      texture_compression_astc_hdr_(texture_compression_astc_hdr),
      shader_zero_initialize_workgroup_memory_(shader_zero_initialize_workgroup_memory), dynamic_rendering_(dynamic_rendering),
      shader_integer_dot_product_(shader_integer_dot_product), maintenance4_(maintenance4) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VULKAN_1_3_FEATURES;
  void *next_;
  bool32 robust_image_access_;
  bool32 inline_uniform_block_;
  bool32 descriptor_binding_inline_uniform_block_update_after_bind_;
  bool32 pipeline_creation_cache_control_;
  bool32 private_data_;
  bool32 shader_demote_to_helper_invocation_;
  bool32 shader_terminate_invocation_;
  bool32 subgroup_size_control_;
  bool32 compute_full_subgroups_;
  bool32 synchronization2_;
  bool32 texture_compression_astc_hdr_;
  bool32 shader_zero_initialize_workgroup_memory_;
  bool32 dynamic_rendering_;
  bool32 shader_integer_dot_product_;
  bool32 maintenance4_;
};

struct AccelerationStructureGeometryTrianglesDataKHR {

  using native_type = VkAccelerationStructureGeometryTrianglesDataKHR;

  AccelerationStructureGeometryTrianglesDataKHR(const void *next = {},
                                                Format vertex_format = {},
                                                VkDeviceOrHostAddressConstKHR vertex_data = {},
                                                DeviceSize vertex_stride = {},
                                                uint32_t max_vertex = {},
                                                IndexType index_type = {},
                                                VkDeviceOrHostAddressConstKHR index_data = {},
                                                VkDeviceOrHostAddressConstKHR transform_data = {})
    : next_(next), vertex_format_(vertex_format), vertex_data_(vertex_data), vertex_stride_(vertex_stride), max_vertex_(max_vertex),
      index_type_(index_type), index_data_(index_data), transform_data_(transform_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR;
  const void *next_;
  Format vertex_format_;
  VkDeviceOrHostAddressConstKHR vertex_data_;
  DeviceSize vertex_stride_;
  uint32_t max_vertex_;
  IndexType index_type_;
  VkDeviceOrHostAddressConstKHR index_data_;
  VkDeviceOrHostAddressConstKHR transform_data_;
};

struct PhysicalDeviceVulkan11Features {

  using native_type = VkPhysicalDeviceVulkan11Features;

  PhysicalDeviceVulkan11Features(void *next = {},
                                 bool32 storage_buffer16bit_access = {},
                                 bool32 uniform_and_storage_buffer16bit_access = {},
                                 bool32 storage_push_constant16 = {},
                                 bool32 storage_input_output16 = {},
                                 bool32 multiview = {},
                                 bool32 multiview_geometry_shader = {},
                                 bool32 multiview_tessellation_shader = {},
                                 bool32 variable_pointers_storage_buffer = {},
                                 bool32 variable_pointers = {},
                                 bool32 protected_memory = {},
                                 bool32 sampler_ycbcr_conversion = {},
                                 bool32 shader_draw_parameters = {})
    : next_(next), storage_buffer16bit_access_(storage_buffer16bit_access),
      uniform_and_storage_buffer16bit_access_(uniform_and_storage_buffer16bit_access), storage_push_constant16_(storage_push_constant16),
      storage_input_output16_(storage_input_output16), multiview_(multiview), multiview_geometry_shader_(multiview_geometry_shader),
      multiview_tessellation_shader_(multiview_tessellation_shader), variable_pointers_storage_buffer_(variable_pointers_storage_buffer),
      variable_pointers_(variable_pointers), protected_memory_(protected_memory), sampler_ycbcr_conversion_(sampler_ycbcr_conversion),
      shader_draw_parameters_(shader_draw_parameters) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;
  void *next_;
  bool32 storage_buffer16bit_access_;
  bool32 uniform_and_storage_buffer16bit_access_;
  bool32 storage_push_constant16_;
  bool32 storage_input_output16_;
  bool32 multiview_;
  bool32 multiview_geometry_shader_;
  bool32 multiview_tessellation_shader_;
  bool32 variable_pointers_storage_buffer_;
  bool32 variable_pointers_;
  bool32 protected_memory_;
  bool32 sampler_ycbcr_conversion_;
  bool32 shader_draw_parameters_;
};

struct PipelineRasterizationLineStateCreateInfoKHR {

  using native_type = VkPipelineRasterizationLineStateCreateInfoKHR;

  PipelineRasterizationLineStateCreateInfoKHR(const void *next = {},
                                              LineRasterizationMode line_rasterization_mode = {},
                                              bool32 stippled_line_enable = {},
                                              uint32_t line_stipple_factor = {},
                                              uint16_t line_stipple_pattern = {})
    : next_(next), line_rasterization_mode_(line_rasterization_mode), stippled_line_enable_(stippled_line_enable),
      line_stipple_factor_(line_stipple_factor), line_stipple_pattern_(line_stipple_pattern) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR;
  const void *next_;
  LineRasterizationMode line_rasterization_mode_;
  bool32 stippled_line_enable_;
  uint32_t line_stipple_factor_;
  uint16_t line_stipple_pattern_;
};

struct PhysicalDeviceLineRasterizationPropertiesKHR {

  using native_type = VkPhysicalDeviceLineRasterizationPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR;
  void *next_;
  uint32_t line_sub_pixel_precision_bits_;
};

struct MemoryOpaqueCaptureAddressAllocateInfo {

  using native_type = VkMemoryOpaqueCaptureAddressAllocateInfo;

  MemoryOpaqueCaptureAddressAllocateInfo(const void *next = {}, uint64_t opaque_capture_address = {})
    : next_(next), opaque_capture_address_(opaque_capture_address) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO;
  const void *next_;
  uint64_t opaque_capture_address_;
};

struct RenderingInputAttachmentIndexInfoKHR {

  using native_type = VkRenderingInputAttachmentIndexInfoKHR;

  RenderingInputAttachmentIndexInfoKHR(const void *next = {},
                                       uint32_t color_attachment_count = {},
                                       const uint32_t *p_color_attachment_input_indices = {},
                                       const uint32_t *p_depth_input_attachment_index = {},
                                       const uint32_t *p_stencil_input_attachment_index = {})
    : next_(next), color_attachment_count_(color_attachment_count), p_color_attachment_input_indices_(p_color_attachment_input_indices),
      p_depth_input_attachment_index_(p_depth_input_attachment_index), p_stencil_input_attachment_index_(p_stencil_input_attachment_index) {
  }

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDERING_INPUT_ATTACHMENT_INDEX_INFO_KHR;
  const void *next_;
  uint32_t color_attachment_count_;
  const uint32_t *p_color_attachment_input_indices_;
  const uint32_t *p_depth_input_attachment_index_;
  const uint32_t *p_stencil_input_attachment_index_;
};

struct PhysicalDeviceClusterCullingShaderPropertiesHUAWEI {

  using native_type = VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI;
  void *next_;
  std::array<uint32_t, 3> max_work_group_count_;
  std::array<uint32_t, 3> max_work_group_size_;
  uint32_t max_output_cluster_count_;
  DeviceSize indirect_buffer_offset_alignment_;
};

struct PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR;

  PhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(void *next = {}, bool32 shader_maximal_reconvergence = {})
    : next_(next), shader_maximal_reconvergence_(shader_maximal_reconvergence) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR;
  void *next_;
  bool32 shader_maximal_reconvergence_;
};

struct ReleaseSwapchainImagesInfoEXT {

  using native_type = VkReleaseSwapchainImagesInfoEXT;

  ReleaseSwapchainImagesInfoEXT(const void *next = {},
                                VkSwapchainKHR swapchain = {},
                                uint32_t image_index_count = {},
                                const uint32_t *p_image_indices = {})
    : next_(next), swapchain_(swapchain), image_index_count_(image_index_count), p_image_indices_(p_image_indices) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RELEASE_SWAPCHAIN_IMAGES_INFO_EXT;
  const void *next_;
  VkSwapchainKHR swapchain_;
  uint32_t image_index_count_;
  const uint32_t *p_image_indices_;
};

struct SubpassShadingPipelineCreateInfoHUAWEI {

  using native_type = VkSubpassShadingPipelineCreateInfoHUAWEI;

  SubpassShadingPipelineCreateInfoHUAWEI(void *next = {}, VkRenderPass render_pass = {}, uint32_t subpass = {})
    : next_(next), render_pass_(render_pass), subpass_(subpass) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI;
  void *next_;
  VkRenderPass render_pass_;
  uint32_t subpass_;
};

struct PhysicalDeviceSubgroupSizeControlFeatures {

  using native_type = VkPhysicalDeviceSubgroupSizeControlFeatures;

  PhysicalDeviceSubgroupSizeControlFeatures(void *next = {}, bool32 subgroup_size_control = {}, bool32 compute_full_subgroups = {})
    : next_(next), subgroup_size_control_(subgroup_size_control), compute_full_subgroups_(compute_full_subgroups) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES;
  void *next_;
  bool32 subgroup_size_control_;
  bool32 compute_full_subgroups_;
};

struct PhysicalDeviceTexelBufferAlignmentProperties {

  using native_type = VkPhysicalDeviceTexelBufferAlignmentProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES;
  void *next_;
  DeviceSize storage_texel_buffer_offset_alignment_bytes_;
  bool32 storage_texel_buffer_offset_single_texel_alignment_;
  DeviceSize uniform_texel_buffer_offset_alignment_bytes_;
  bool32 uniform_texel_buffer_offset_single_texel_alignment_;
};

struct PhysicalDeviceTexelBufferAlignmentFeaturesEXT {

  using native_type = VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT;

  PhysicalDeviceTexelBufferAlignmentFeaturesEXT(void *next = {}, bool32 texel_buffer_alignment = {})
    : next_(next), texel_buffer_alignment_(texel_buffer_alignment) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT;
  void *next_;
  bool32 texel_buffer_alignment_;
};

struct PipelineExecutableInternalRepresentationKHR {

  using native_type = VkPipelineExecutableInternalRepresentationKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR;
  void *next_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> name_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> description_;
  bool32 is_text_;
  size_t data_size_;
  void *p_data_;
};

struct DeviceMemoryOpaqueCaptureAddressInfo {

  using native_type = VkDeviceMemoryOpaqueCaptureAddressInfo;

  DeviceMemoryOpaqueCaptureAddressInfo(const void *next = {}, VkDeviceMemory memory = {}) : next_(next), memory_(memory) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO;
  const void *next_;
  VkDeviceMemory memory_;
};

struct PipelineExecutableStatisticKHR {

  using native_type = VkPipelineExecutableStatisticKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_EXECUTABLE_STATISTIC_KHR;
  void *next_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> name_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> description_;
  PipelineExecutableStatisticFormat format_;
  VkPipelineExecutableStatisticValueKHR value_;
};

struct PipelineExecutablePropertiesKHR {

  using native_type = VkPipelineExecutablePropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_EXECUTABLE_PROPERTIES_KHR;
  void *next_;
  ShaderStageMask stages_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> name_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> description_;
  uint32_t subgroup_size_;
};

struct PhysicalDeviceVideoMaintenance1FeaturesKHR {

  using native_type = VkPhysicalDeviceVideoMaintenance1FeaturesKHR;

  PhysicalDeviceVideoMaintenance1FeaturesKHR(void *next = {}, bool32 video_maintenance1 = {})
    : next_(next), video_maintenance1_(video_maintenance1) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR;
  void *next_;
  bool32 video_maintenance1_;
};

struct PipelineInfoKHR {

  using native_type = VkPipelineInfoKHR;

  PipelineInfoKHR(const void *next = {}, VkPipeline pipeline = {}) : next_(next), pipeline_(pipeline) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_INFO_KHR;
  const void *next_;
  VkPipeline pipeline_;
};

struct PhysicalDevicePipelineExecutablePropertiesFeaturesKHR {

  using native_type = VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR;

  PhysicalDevicePipelineExecutablePropertiesFeaturesKHR(void *next = {}, bool32 pipeline_executable_info = {})
    : next_(next), pipeline_executable_info_(pipeline_executable_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR;
  void *next_;
  bool32 pipeline_executable_info_;
};

struct AttachmentDescriptionStencilLayout {

  using native_type = VkAttachmentDescriptionStencilLayout;

  AttachmentDescriptionStencilLayout(void *next = {}, ImageLayout stencil_initial_layout = {}, ImageLayout stencil_final_layout = {})
    : next_(next), stencil_initial_layout_(stencil_initial_layout), stencil_final_layout_(stencil_final_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT;
  void *next_;
  ImageLayout stencil_initial_layout_;
  ImageLayout stencil_final_layout_;
};

struct PhysicalDeviceRayTracingMotionBlurFeaturesNV {

  using native_type = VkPhysicalDeviceRayTracingMotionBlurFeaturesNV;

  PhysicalDeviceRayTracingMotionBlurFeaturesNV(void *next = {},
                                               bool32 ray_tracing_motion_blur = {},
                                               bool32 ray_tracing_motion_blur_pipeline_trace_rays_indirect = {})
    : next_(next), ray_tracing_motion_blur_(ray_tracing_motion_blur),
      ray_tracing_motion_blur_pipeline_trace_rays_indirect_(ray_tracing_motion_blur_pipeline_trace_rays_indirect) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV;
  void *next_;
  bool32 ray_tracing_motion_blur_;
  bool32 ray_tracing_motion_blur_pipeline_trace_rays_indirect_;
};

struct PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT {

  using native_type = VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;

  PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(void *next = {},
                                                        bool32 primitive_topology_list_restart = {},
                                                        bool32 primitive_topology_patch_list_restart = {})
    : next_(next), primitive_topology_list_restart_(primitive_topology_list_restart),
      primitive_topology_patch_list_restart_(primitive_topology_patch_list_restart) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT;
  void *next_;
  bool32 primitive_topology_list_restart_;
  bool32 primitive_topology_patch_list_restart_;
};

struct AttachmentReferenceStencilLayout {

  using native_type = VkAttachmentReferenceStencilLayout;

  AttachmentReferenceStencilLayout(void *next = {}, ImageLayout stencil_layout = {}) : next_(next), stencil_layout_(stencil_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ATTACHMENT_REFERENCE_STENCIL_LAYOUT;
  void *next_;
  ImageLayout stencil_layout_;
};

struct PhysicalDeviceCooperativeMatrixFeaturesKHR {

  using native_type = VkPhysicalDeviceCooperativeMatrixFeaturesKHR;

  PhysicalDeviceCooperativeMatrixFeaturesKHR(void *next = {},
                                             bool32 cooperative_matrix = {},
                                             bool32 cooperative_matrix_robust_buffer_access = {})
    : next_(next), cooperative_matrix_(cooperative_matrix),
      cooperative_matrix_robust_buffer_access_(cooperative_matrix_robust_buffer_access) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR;
  void *next_;
  bool32 cooperative_matrix_;
  bool32 cooperative_matrix_robust_buffer_access_;
};

struct PhysicalDeviceFragmentShaderInterlockFeaturesEXT {

  using native_type = VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT;

  PhysicalDeviceFragmentShaderInterlockFeaturesEXT(void *next = {},
                                                   bool32 fragment_shader_sample_interlock = {},
                                                   bool32 fragment_shader_pixel_interlock = {},
                                                   bool32 fragment_shader_shading_rate_interlock = {})
    : next_(next), fragment_shader_sample_interlock_(fragment_shader_sample_interlock),
      fragment_shader_pixel_interlock_(fragment_shader_pixel_interlock),
      fragment_shader_shading_rate_interlock_(fragment_shader_shading_rate_interlock) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT;
  void *next_;
  bool32 fragment_shader_sample_interlock_;
  bool32 fragment_shader_pixel_interlock_;
  bool32 fragment_shader_shading_rate_interlock_;
};

struct VideoEncodeH265RateControlLayerInfoKHR {

  using native_type = VkVideoEncodeH265RateControlLayerInfoKHR;

  VideoEncodeH265RateControlLayerInfoKHR(const void *next = {},
                                         bool32 use_min_qp = {},
                                         VideoEncodeH265QpKHR min_qp = {},
                                         bool32 use_max_qp = {},
                                         VideoEncodeH265QpKHR max_qp = {},
                                         bool32 use_max_frame_size = {},
                                         VideoEncodeH265FrameSizeKHR max_frame_size = {})
    : next_(next), use_min_qp_(use_min_qp), min_qp_(min_qp), use_max_qp_(use_max_qp), max_qp_(max_qp),
      use_max_frame_size_(use_max_frame_size), max_frame_size_(max_frame_size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR;
  const void *next_;
  bool32 use_min_qp_;
  VideoEncodeH265QpKHR min_qp_;
  bool32 use_max_qp_;
  VideoEncodeH265QpKHR max_qp_;
  bool32 use_max_frame_size_;
  VideoEncodeH265FrameSizeKHR max_frame_size_;
};

struct PhysicalDeviceShaderSMBuiltinsFeaturesNV {

  using native_type = VkPhysicalDeviceShaderSMBuiltinsFeaturesNV;

  PhysicalDeviceShaderSMBuiltinsFeaturesNV(void *next = {}, bool32 shader_smbuiltins = {})
    : next_(next), shader_smbuiltins_(shader_smbuiltins) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV;
  void *next_;
  bool32 shader_smbuiltins_;
};

struct OutOfBandQueueTypeInfoNV {

  using native_type = VkOutOfBandQueueTypeInfoNV;

  OutOfBandQueueTypeInfoNV(const void *next = {}, OutOfBandQueueType queue_type = {}) : next_(next), queue_type_(queue_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::OUT_OF_BAND_QUEUE_TYPE_INFO_NV;
  const void *next_;
  OutOfBandQueueType queue_type_;
};

struct PhysicalDeviceIndexTypeUint8FeaturesKHR {

  using native_type = VkPhysicalDeviceIndexTypeUint8FeaturesKHR;

  PhysicalDeviceIndexTypeUint8FeaturesKHR(void *next = {}, bool32 index_type_uint8 = {})
    : next_(next), index_type_uint8_(index_type_uint8) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR;
  void *next_;
  bool32 index_type_uint8_;
};

struct PerformanceOverrideInfoINTEL {

  using native_type = VkPerformanceOverrideInfoINTEL;

  PerformanceOverrideInfoINTEL(const void *next = {}, PerformanceOverrideType type = {}, bool32 enable = {}, uint64_t parameter = {})
    : next_(next), type_(type), enable_(enable), parameter_(parameter) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PERFORMANCE_OVERRIDE_INFO_INTEL;
  const void *next_;
  PerformanceOverrideType type_;
  bool32 enable_;
  uint64_t parameter_;
};

struct VideoDecodeH265SessionParametersAddInfoKHR {

  using native_type = VkVideoDecodeH265SessionParametersAddInfoKHR;

  VideoDecodeH265SessionParametersAddInfoKHR(const void *next = {},
                                             uint32_t std_vpscount = {},
                                             const StdVideoH265VideoParameterSet *p_std_vpss = {},
                                             uint32_t std_spscount = {},
                                             const StdVideoH265SequenceParameterSet *p_std_spss = {},
                                             uint32_t std_ppscount = {},
                                             const StdVideoH265PictureParameterSet *p_std_ppss = {})
    : next_(next), std_vpscount_(std_vpscount), p_std_vpss_(p_std_vpss), std_spscount_(std_spscount), p_std_spss_(p_std_spss),
      std_ppscount_(std_ppscount), p_std_ppss_(p_std_ppss) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR;
  const void *next_;
  uint32_t std_vpscount_;
  const StdVideoH265VideoParameterSet *p_std_vpss_;
  uint32_t std_spscount_;
  const StdVideoH265SequenceParameterSet *p_std_spss_;
  uint32_t std_ppscount_;
  const StdVideoH265PictureParameterSet *p_std_ppss_;
};

struct PerformanceStreamMarkerInfoINTEL {

  using native_type = VkPerformanceStreamMarkerInfoINTEL;

  PerformanceStreamMarkerInfoINTEL(const void *next = {}, uint32_t marker = {}) : next_(next), marker_(marker) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PERFORMANCE_STREAM_MARKER_INFO_INTEL;
  const void *next_;
  uint32_t marker_;
};

struct SamplerBlockMatchWindowCreateInfoQCOM {

  using native_type = VkSamplerBlockMatchWindowCreateInfoQCOM;

  SamplerBlockMatchWindowCreateInfoQCOM(const void *next = {},
                                        Extent2D window_extent = {},
                                        BlockMatchWindowCompareMode window_compare_mode = {})
    : next_(next), window_extent_(window_extent), window_compare_mode_(window_compare_mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM;
  const void *next_;
  Extent2D window_extent_;
  BlockMatchWindowCompareMode window_compare_mode_;
};

struct QueryPoolPerformanceQueryCreateInfoINTEL {

  using native_type = VkQueryPoolPerformanceQueryCreateInfoINTEL;

  QueryPoolPerformanceQueryCreateInfoINTEL(const void *next = {}, QueryPoolSamplingMode performance_counters_sampling = {})
    : next_(next), performance_counters_sampling_(performance_counters_sampling) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL;
  const void *next_;
  QueryPoolSamplingMode performance_counters_sampling_;
};

struct InitializePerformanceApiInfoINTEL {

  using native_type = VkInitializePerformanceApiInfoINTEL;

  InitializePerformanceApiInfoINTEL(const void *next = {}, void *p_user_data = {}) : next_(next), p_user_data_(p_user_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::INITIALIZE_PERFORMANCE_API_INFO_INTEL;
  const void *next_;
  void *p_user_data_;
};

struct DeviceGroupPresentInfoKHR {

  using native_type = VkDeviceGroupPresentInfoKHR;

  DeviceGroupPresentInfoKHR(const void *next = {},
                            uint32_t swapchain_count = {},
                            const uint32_t *p_device_masks = {},
                            DeviceGroupPresentModeMaskBit mode = {})
    : next_(next), swapchain_count_(swapchain_count), p_device_masks_(p_device_masks), mode_(mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_GROUP_PRESENT_INFO_KHR;
  const void *next_;
  uint32_t swapchain_count_;
  const uint32_t *p_device_masks_;
  DeviceGroupPresentModeMaskBit mode_;
};

struct AcquireNextImageInfoKHR {

  using native_type = VkAcquireNextImageInfoKHR;

  AcquireNextImageInfoKHR(const void *next = {},
                          VkSwapchainKHR swapchain = {},
                          uint64_t timeout = {},
                          VkSemaphore semaphore = {},
                          VkFence fence = {},
                          uint32_t device_mask = {})
    : next_(next), swapchain_(swapchain), timeout_(timeout), semaphore_(semaphore), fence_(fence), device_mask_(device_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACQUIRE_NEXT_IMAGE_INFO_KHR;
  const void *next_;
  VkSwapchainKHR swapchain_;
  uint64_t timeout_;
  VkSemaphore semaphore_;
  VkFence fence_;
  uint32_t device_mask_;
};

struct ImageSwapchainCreateInfoKHR {

  using native_type = VkImageSwapchainCreateInfoKHR;

  ImageSwapchainCreateInfoKHR(const void *next = {}, VkSwapchainKHR swapchain = {}) : next_(next), swapchain_(swapchain) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_SWAPCHAIN_CREATE_INFO_KHR;
  const void *next_;
  VkSwapchainKHR swapchain_;
};

struct MemoryGetFdInfoKHR {

  using native_type = VkMemoryGetFdInfoKHR;

  MemoryGetFdInfoKHR(const void *next = {}, VkDeviceMemory memory = {}, ExternalMemoryHandleTypeMaskBit handle_type = {})
    : next_(next), memory_(memory), handle_type_(handle_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_GET_FD_INFO_KHR;
  const void *next_;
  VkDeviceMemory memory_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct AccelerationStructureMotionInstanceNV {

  using native_type = VkAccelerationStructureMotionInstanceNV;

  AccelerationStructureMotionInstanceNV(AccelerationStructureMotionInstanceType type = {},
                                        AccelerationStructureMotionInstanceMask flags = {},
                                        VkAccelerationStructureMotionInstanceDataNV data = {})
    : type_(type), flags_(flags), data_(data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  AccelerationStructureMotionInstanceType type_;
  AccelerationStructureMotionInstanceMask flags_;
  VkAccelerationStructureMotionInstanceDataNV data_;
};

struct QueryPoolPerformanceCreateInfoKHR {

  using native_type = VkQueryPoolPerformanceCreateInfoKHR;

  QueryPoolPerformanceCreateInfoKHR(const void *next = {},
                                    uint32_t queue_family_index = {},
                                    uint32_t counter_index_count = {},
                                    const uint32_t *p_counter_indices = {})
    : next_(next), queue_family_index_(queue_family_index), counter_index_count_(counter_index_count),
      p_counter_indices_(p_counter_indices) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR;
  const void *next_;
  uint32_t queue_family_index_;
  uint32_t counter_index_count_;
  const uint32_t *p_counter_indices_;
};

struct BindBufferMemoryInfo {

  using native_type = VkBindBufferMemoryInfo;

  BindBufferMemoryInfo(const void *next = {}, VkBuffer buffer = {}, VkDeviceMemory memory = {}, DeviceSize memory_offset = {})
    : next_(next), buffer_(buffer), memory_(memory), memory_offset_(memory_offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_BUFFER_MEMORY_INFO;
  const void *next_;
  VkBuffer buffer_;
  VkDeviceMemory memory_;
  DeviceSize memory_offset_;
};

struct ImportFenceFdInfoKHR {

  using native_type = VkImportFenceFdInfoKHR;

  ImportFenceFdInfoKHR(
    const void *next = {}, VkFence fence = {}, FenceImportMask flags = {}, ExternalFenceHandleTypeMaskBit handle_type = {}, int fd = {})
    : next_(next), fence_(fence), flags_(flags), handle_type_(handle_type), fd_(fd) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMPORT_FENCE_FD_INFO_KHR;
  const void *next_;
  VkFence fence_;
  FenceImportMask flags_;
  ExternalFenceHandleTypeMaskBit handle_type_;
  int fd_;
};

struct LayerSettingEXT {

  using native_type = VkLayerSettingEXT;

  LayerSettingEXT(const char *p_layer_name = {},
                  const char *p_setting_name = {},
                  LayerSettingType type = {},
                  uint32_t value_count = {},
                  const void *p_values = {})
    : p_layer_name_(p_layer_name), p_setting_name_(p_setting_name), type_(type), value_count_(value_count), p_values_(p_values) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  const char *p_layer_name_;
  const char *p_setting_name_;
  LayerSettingType type_;
  uint32_t value_count_;
  const void *p_values_;
};

struct LayerSettingsCreateInfoEXT {

  using native_type = VkLayerSettingsCreateInfoEXT;

  LayerSettingsCreateInfoEXT(const void *next = {}, uint32_t setting_count = {}, const LayerSettingEXT *p_settings = {})
    : next_(next), setting_count_(setting_count), p_settings_(p_settings) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::LAYER_SETTINGS_CREATE_INFO_EXT;
  const void *next_;
  uint32_t setting_count_;
  const LayerSettingEXT *p_settings_;
};

struct DisplayEventInfoEXT {

  using native_type = VkDisplayEventInfoEXT;

  DisplayEventInfoEXT(const void *next = {}, DisplayEventType display_event = {}) : next_(next), display_event_(display_event) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_EVENT_INFO_EXT;
  const void *next_;
  DisplayEventType display_event_;
};

struct PhysicalDeviceMultiviewProperties {

  using native_type = VkPhysicalDeviceMultiviewProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;
  void *next_;
  uint32_t max_multiview_view_count_;
  uint32_t max_multiview_instance_index_;
};

struct PhysicalDeviceRenderPassStripedPropertiesARM {

  using native_type = VkPhysicalDeviceRenderPassStripedPropertiesARM;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM;
  void *next_;
  Extent2D render_pass_stripe_granularity_;
  uint32_t max_render_pass_stripes_;
};

struct AmigoProfilingSubmitInfoSEC {

  using native_type = VkAmigoProfilingSubmitInfoSEC;

  AmigoProfilingSubmitInfoSEC(const void *next = {}, uint64_t first_draw_timestamp = {}, uint64_t swap_buffer_timestamp = {})
    : next_(next), first_draw_timestamp_(first_draw_timestamp), swap_buffer_timestamp_(swap_buffer_timestamp) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::AMIGO_PROFILING_SUBMIT_INFO_SEC;
  const void *next_;
  uint64_t first_draw_timestamp_;
  uint64_t swap_buffer_timestamp_;
};

struct PhysicalDeviceShaderSubgroupExtendedTypesFeatures {

  using native_type = VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures;

  PhysicalDeviceShaderSubgroupExtendedTypesFeatures(void *next = {}, bool32 shader_subgroup_extended_types = {})
    : next_(next), shader_subgroup_extended_types_(shader_subgroup_extended_types) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES;
  void *next_;
  bool32 shader_subgroup_extended_types_;
};

struct PerformanceConfigurationAcquireInfoINTEL {

  using native_type = VkPerformanceConfigurationAcquireInfoINTEL;

  PerformanceConfigurationAcquireInfoINTEL(const void *next = {}, PerformanceConfigurationType type = {}) : next_(next), type_(type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL;
  const void *next_;
  PerformanceConfigurationType type_;
};

struct PipelineTessellationDomainOriginStateCreateInfo {

  using native_type = VkPipelineTessellationDomainOriginStateCreateInfo;

  PipelineTessellationDomainOriginStateCreateInfo(const void *next = {}, TessellationDomainOrigin domain_origin = {})
    : next_(next), domain_origin_(domain_origin) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;
  const void *next_;
  TessellationDomainOrigin domain_origin_;
};

struct PhysicalDeviceProtectedMemoryProperties {

  using native_type = VkPhysicalDeviceProtectedMemoryProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES;
  void *next_;
  bool32 protected_no_fault_;
};

struct ExternalFenceProperties {

  using native_type = VkExternalFenceProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXTERNAL_FENCE_PROPERTIES;
  void *next_;
  ExternalFenceHandleTypeMask export_from_imported_handle_types_;
  ExternalFenceHandleTypeMask compatible_handle_types_;
  ExternalFenceFeatureMask external_fence_features_;
};

struct PhysicalDeviceExtendedDynamicState3FeaturesEXT {

  using native_type = VkPhysicalDeviceExtendedDynamicState3FeaturesEXT;

  PhysicalDeviceExtendedDynamicState3FeaturesEXT(void *next = {},
                                                 bool32 extended_dynamic_state3tessellation_domain_origin = {},
                                                 bool32 extended_dynamic_state3depth_clamp_enable = {},
                                                 bool32 extended_dynamic_state3polygon_mode = {},
                                                 bool32 extended_dynamic_state3rasterization_samples = {},
                                                 bool32 extended_dynamic_state3sample_mask = {},
                                                 bool32 extended_dynamic_state3alpha_to_coverage_enable = {},
                                                 bool32 extended_dynamic_state3alpha_to_one_enable = {},
                                                 bool32 extended_dynamic_state3logic_op_enable = {},
                                                 bool32 extended_dynamic_state3color_blend_enable = {},
                                                 bool32 extended_dynamic_state3color_blend_equation = {},
                                                 bool32 extended_dynamic_state3color_write_mask = {},
                                                 bool32 extended_dynamic_state3rasterization_stream = {},
                                                 bool32 extended_dynamic_state3conservative_rasterization_mode = {},
                                                 bool32 extended_dynamic_state3extra_primitive_overestimation_size = {},
                                                 bool32 extended_dynamic_state3depth_clip_enable = {},
                                                 bool32 extended_dynamic_state3sample_locations_enable = {},
                                                 bool32 extended_dynamic_state3color_blend_advanced = {},
                                                 bool32 extended_dynamic_state3provoking_vertex_mode = {},
                                                 bool32 extended_dynamic_state3line_rasterization_mode = {},
                                                 bool32 extended_dynamic_state3line_stipple_enable = {},
                                                 bool32 extended_dynamic_state3depth_clip_negative_one_to_one = {},
                                                 bool32 extended_dynamic_state3viewport_wscaling_enable = {},
                                                 bool32 extended_dynamic_state3viewport_swizzle = {},
                                                 bool32 extended_dynamic_state3coverage_to_color_enable = {},
                                                 bool32 extended_dynamic_state3coverage_to_color_location = {},
                                                 bool32 extended_dynamic_state3coverage_modulation_mode = {},
                                                 bool32 extended_dynamic_state3coverage_modulation_table_enable = {},
                                                 bool32 extended_dynamic_state3coverage_modulation_table = {},
                                                 bool32 extended_dynamic_state3coverage_reduction_mode = {},
                                                 bool32 extended_dynamic_state3representative_fragment_test_enable = {},
                                                 bool32 extended_dynamic_state3shading_rate_image_enable = {})
    : next_(next), extended_dynamic_state3tessellation_domain_origin_(extended_dynamic_state3tessellation_domain_origin),
      extended_dynamic_state3depth_clamp_enable_(extended_dynamic_state3depth_clamp_enable),
      extended_dynamic_state3polygon_mode_(extended_dynamic_state3polygon_mode),
      extended_dynamic_state3rasterization_samples_(extended_dynamic_state3rasterization_samples),
      extended_dynamic_state3sample_mask_(extended_dynamic_state3sample_mask),
      extended_dynamic_state3alpha_to_coverage_enable_(extended_dynamic_state3alpha_to_coverage_enable),
      extended_dynamic_state3alpha_to_one_enable_(extended_dynamic_state3alpha_to_one_enable),
      extended_dynamic_state3logic_op_enable_(extended_dynamic_state3logic_op_enable),
      extended_dynamic_state3color_blend_enable_(extended_dynamic_state3color_blend_enable),
      extended_dynamic_state3color_blend_equation_(extended_dynamic_state3color_blend_equation),
      extended_dynamic_state3color_write_mask_(extended_dynamic_state3color_write_mask),
      extended_dynamic_state3rasterization_stream_(extended_dynamic_state3rasterization_stream),
      extended_dynamic_state3conservative_rasterization_mode_(extended_dynamic_state3conservative_rasterization_mode),
      extended_dynamic_state3extra_primitive_overestimation_size_(extended_dynamic_state3extra_primitive_overestimation_size),
      extended_dynamic_state3depth_clip_enable_(extended_dynamic_state3depth_clip_enable),
      extended_dynamic_state3sample_locations_enable_(extended_dynamic_state3sample_locations_enable),
      extended_dynamic_state3color_blend_advanced_(extended_dynamic_state3color_blend_advanced),
      extended_dynamic_state3provoking_vertex_mode_(extended_dynamic_state3provoking_vertex_mode),
      extended_dynamic_state3line_rasterization_mode_(extended_dynamic_state3line_rasterization_mode),
      extended_dynamic_state3line_stipple_enable_(extended_dynamic_state3line_stipple_enable),
      extended_dynamic_state3depth_clip_negative_one_to_one_(extended_dynamic_state3depth_clip_negative_one_to_one),
      extended_dynamic_state3viewport_wscaling_enable_(extended_dynamic_state3viewport_wscaling_enable),
      extended_dynamic_state3viewport_swizzle_(extended_dynamic_state3viewport_swizzle),
      extended_dynamic_state3coverage_to_color_enable_(extended_dynamic_state3coverage_to_color_enable),
      extended_dynamic_state3coverage_to_color_location_(extended_dynamic_state3coverage_to_color_location),
      extended_dynamic_state3coverage_modulation_mode_(extended_dynamic_state3coverage_modulation_mode),
      extended_dynamic_state3coverage_modulation_table_enable_(extended_dynamic_state3coverage_modulation_table_enable),
      extended_dynamic_state3coverage_modulation_table_(extended_dynamic_state3coverage_modulation_table),
      extended_dynamic_state3coverage_reduction_mode_(extended_dynamic_state3coverage_reduction_mode),
      extended_dynamic_state3representative_fragment_test_enable_(extended_dynamic_state3representative_fragment_test_enable),
      extended_dynamic_state3shading_rate_image_enable_(extended_dynamic_state3shading_rate_image_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT;
  void *next_;
  bool32 extended_dynamic_state3tessellation_domain_origin_;
  bool32 extended_dynamic_state3depth_clamp_enable_;
  bool32 extended_dynamic_state3polygon_mode_;
  bool32 extended_dynamic_state3rasterization_samples_;
  bool32 extended_dynamic_state3sample_mask_;
  bool32 extended_dynamic_state3alpha_to_coverage_enable_;
  bool32 extended_dynamic_state3alpha_to_one_enable_;
  bool32 extended_dynamic_state3logic_op_enable_;
  bool32 extended_dynamic_state3color_blend_enable_;
  bool32 extended_dynamic_state3color_blend_equation_;
  bool32 extended_dynamic_state3color_write_mask_;
  bool32 extended_dynamic_state3rasterization_stream_;
  bool32 extended_dynamic_state3conservative_rasterization_mode_;
  bool32 extended_dynamic_state3extra_primitive_overestimation_size_;
  bool32 extended_dynamic_state3depth_clip_enable_;
  bool32 extended_dynamic_state3sample_locations_enable_;
  bool32 extended_dynamic_state3color_blend_advanced_;
  bool32 extended_dynamic_state3provoking_vertex_mode_;
  bool32 extended_dynamic_state3line_rasterization_mode_;
  bool32 extended_dynamic_state3line_stipple_enable_;
  bool32 extended_dynamic_state3depth_clip_negative_one_to_one_;
  bool32 extended_dynamic_state3viewport_wscaling_enable_;
  bool32 extended_dynamic_state3viewport_swizzle_;
  bool32 extended_dynamic_state3coverage_to_color_enable_;
  bool32 extended_dynamic_state3coverage_to_color_location_;
  bool32 extended_dynamic_state3coverage_modulation_mode_;
  bool32 extended_dynamic_state3coverage_modulation_table_enable_;
  bool32 extended_dynamic_state3coverage_modulation_table_;
  bool32 extended_dynamic_state3coverage_reduction_mode_;
  bool32 extended_dynamic_state3representative_fragment_test_enable_;
  bool32 extended_dynamic_state3shading_rate_image_enable_;
};

struct PhysicalDeviceExternalFenceInfo {

  using native_type = VkPhysicalDeviceExternalFenceInfo;

  PhysicalDeviceExternalFenceInfo(const void *next = {}, ExternalFenceHandleTypeMaskBit handle_type = {})
    : next_(next), handle_type_(handle_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO;
  const void *next_;
  ExternalFenceHandleTypeMaskBit handle_type_;
};

struct PhysicalDeviceExtendedDynamicState2FeaturesEXT {

  using native_type = VkPhysicalDeviceExtendedDynamicState2FeaturesEXT;

  PhysicalDeviceExtendedDynamicState2FeaturesEXT(void *next = {},
                                                 bool32 extended_dynamic_state2 = {},
                                                 bool32 extended_dynamic_state2logic_op = {},
                                                 bool32 extended_dynamic_state2patch_control_points = {})
    : next_(next), extended_dynamic_state2_(extended_dynamic_state2), extended_dynamic_state2logic_op_(extended_dynamic_state2logic_op),
      extended_dynamic_state2patch_control_points_(extended_dynamic_state2patch_control_points) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT;
  void *next_;
  bool32 extended_dynamic_state2_;
  bool32 extended_dynamic_state2logic_op_;
  bool32 extended_dynamic_state2patch_control_points_;
};

struct ViewportWScalingNV {

  using native_type = VkViewportWScalingNV;

  ViewportWScalingNV(float xcoeff = {}, float ycoeff = {}) : xcoeff_(xcoeff), ycoeff_(ycoeff) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  float xcoeff_;
  float ycoeff_;
};

struct PipelineViewportWScalingStateCreateInfoNV {

  using native_type = VkPipelineViewportWScalingStateCreateInfoNV;

  PipelineViewportWScalingStateCreateInfoNV(const void *next = {},
                                            bool32 viewport_wscaling_enable = {},
                                            uint32_t viewport_count = {},
                                            const ViewportWScalingNV *p_viewport_wscalings = {})
    : next_(next), viewport_wscaling_enable_(viewport_wscaling_enable), viewport_count_(viewport_count),
      p_viewport_wscalings_(p_viewport_wscalings) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV;
  const void *next_;
  bool32 viewport_wscaling_enable_;
  uint32_t viewport_count_;
  const ViewportWScalingNV *p_viewport_wscalings_;
};

struct CommandBufferSubmitInfo {

  using native_type = VkCommandBufferSubmitInfo;

  CommandBufferSubmitInfo(const void *next = {}, VkCommandBuffer command_buffer = {}, uint32_t device_mask = {})
    : next_(next), command_buffer_(command_buffer), device_mask_(device_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMMAND_BUFFER_SUBMIT_INFO;
  const void *next_;
  VkCommandBuffer command_buffer_;
  uint32_t device_mask_;
};

struct MemoryFdPropertiesKHR {

  using native_type = VkMemoryFdPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_FD_PROPERTIES_KHR;
  void *next_;
  uint32_t memory_type_bits_;
};

struct PhysicalDeviceShaderFloat16Int8Features {

  using native_type = VkPhysicalDeviceShaderFloat16Int8Features;

  PhysicalDeviceShaderFloat16Int8Features(void *next = {}, bool32 shader_float16 = {}, bool32 shader_int8 = {})
    : next_(next), shader_float16_(shader_float16), shader_int8_(shader_int8) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES;
  void *next_;
  bool32 shader_float16_;
  bool32 shader_int8_;
};

struct SampleLocationEXT {

  using native_type = VkSampleLocationEXT;

  SampleLocationEXT(float x = {}, float y = {}) : x_(x), y_(y) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  float x_;
  float y_;
};

struct SampleLocationsInfoEXT {

  using native_type = VkSampleLocationsInfoEXT;

  SampleLocationsInfoEXT(const void *next = {},
                         SampleCountMaskBit sample_locations_per_pixel = {},
                         Extent2D sample_location_grid_size = {},
                         uint32_t sample_locations_count = {},
                         const SampleLocationEXT *p_sample_locations = {})
    : next_(next), sample_locations_per_pixel_(sample_locations_per_pixel), sample_location_grid_size_(sample_location_grid_size),
      sample_locations_count_(sample_locations_count), p_sample_locations_(p_sample_locations) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLE_LOCATIONS_INFO_EXT;
  const void *next_;
  SampleCountMaskBit sample_locations_per_pixel_;
  Extent2D sample_location_grid_size_;
  uint32_t sample_locations_count_;
  const SampleLocationEXT *p_sample_locations_;
};

struct ExternalMemoryAcquireUnmodifiedEXT {

  using native_type = VkExternalMemoryAcquireUnmodifiedEXT;

  ExternalMemoryAcquireUnmodifiedEXT(const void *next = {}, bool32 acquire_unmodified_memory = {})
    : next_(next), acquire_unmodified_memory_(acquire_unmodified_memory) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT;
  const void *next_;
  bool32 acquire_unmodified_memory_;
};

struct PhysicalDeviceColorWriteEnableFeaturesEXT {

  using native_type = VkPhysicalDeviceColorWriteEnableFeaturesEXT;

  PhysicalDeviceColorWriteEnableFeaturesEXT(void *next = {}, bool32 color_write_enable = {})
    : next_(next), color_write_enable_(color_write_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT;
  void *next_;
  bool32 color_write_enable_;
};

struct BindShaderGroupIndirectCommandNV {

  using native_type = VkBindShaderGroupIndirectCommandNV;

  BindShaderGroupIndirectCommandNV(uint32_t group_index = {}) : group_index_(group_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t group_index_;
};

struct RayTracingShaderGroupCreateInfoNV {

  using native_type = VkRayTracingShaderGroupCreateInfoNV;

  RayTracingShaderGroupCreateInfoNV(const void *next = {},
                                    RayTracingShaderGroupType type = {},
                                    uint32_t general_shader = {},
                                    uint32_t closest_hit_shader = {},
                                    uint32_t any_hit_shader = {},
                                    uint32_t intersection_shader = {})
    : next_(next), type_(type), general_shader_(general_shader), closest_hit_shader_(closest_hit_shader), any_hit_shader_(any_hit_shader),
      intersection_shader_(intersection_shader) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV;
  const void *next_;
  RayTracingShaderGroupType type_;
  uint32_t general_shader_;
  uint32_t closest_hit_shader_;
  uint32_t any_hit_shader_;
  uint32_t intersection_shader_;
};

struct ComputePipelineCreateInfo {

  using native_type = VkComputePipelineCreateInfo;

  ComputePipelineCreateInfo(const void *next = {},
                            PipelineCreateMask flags = {},
                            PipelineShaderStageCreateInfo stage = {},
                            VkPipelineLayout layout = {},
                            VkPipeline base_pipeline_handle = {},
                            int32_t base_pipeline_index = {})
    : next_(next), flags_(flags), stage_(stage), layout_(layout), base_pipeline_handle_(base_pipeline_handle),
      base_pipeline_index_(base_pipeline_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMPUTE_PIPELINE_CREATE_INFO;
  const void *next_;
  PipelineCreateMask flags_;
  PipelineShaderStageCreateInfo stage_;
  VkPipelineLayout layout_;
  VkPipeline base_pipeline_handle_;
  int32_t base_pipeline_index_;
};

struct RenderingAttachmentInfo {

  using native_type = VkRenderingAttachmentInfo;

  RenderingAttachmentInfo(const void *next = {},
                          VkImageView image_view = {},
                          ImageLayout image_layout = {},
                          ResolveModeMaskBit resolve_mode = {},
                          VkImageView resolve_image_view = {},
                          ImageLayout resolve_image_layout = {},
                          AttachmentLoadOp load_op = {},
                          AttachmentStoreOp store_op = {},
                          VkClearValue clear_value = {})
    : next_(next), image_view_(image_view), image_layout_(image_layout), resolve_mode_(resolve_mode),
      resolve_image_view_(resolve_image_view), resolve_image_layout_(resolve_image_layout), load_op_(load_op), store_op_(store_op),
      clear_value_(clear_value) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDERING_ATTACHMENT_INFO;
  const void *next_;
  VkImageView image_view_;
  ImageLayout image_layout_;
  ResolveModeMaskBit resolve_mode_;
  VkImageView resolve_image_view_;
  ImageLayout resolve_image_layout_;
  AttachmentLoadOp load_op_;
  AttachmentStoreOp store_op_;
  VkClearValue clear_value_;
};

struct SemaphoreCreateInfo {

  using native_type = VkSemaphoreCreateInfo;

  SemaphoreCreateInfo(const void *next = {}, SemaphoreCreateMask flags = {}) : next_(next), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SEMAPHORE_CREATE_INFO;
  const void *next_;
  SemaphoreCreateMask flags_;
};

struct PipelineColorWriteCreateInfoEXT {

  using native_type = VkPipelineColorWriteCreateInfoEXT;

  PipelineColorWriteCreateInfoEXT(const void *next = {}, uint32_t attachment_count = {}, const bool32 *p_color_write_enables = {})
    : next_(next), attachment_count_(attachment_count), p_color_write_enables_(p_color_write_enables) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_COLOR_WRITE_CREATE_INFO_EXT;
  const void *next_;
  uint32_t attachment_count_;
  const bool32 *p_color_write_enables_;
};

struct ExternalMemoryBufferCreateInfo {

  using native_type = VkExternalMemoryBufferCreateInfo;

  ExternalMemoryBufferCreateInfo(const void *next = {}, ExternalMemoryHandleTypeMask handle_types = {})
    : next_(next), handle_types_(handle_types) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXTERNAL_MEMORY_BUFFER_CREATE_INFO;
  const void *next_;
  ExternalMemoryHandleTypeMask handle_types_;
};

struct MicromapCreateInfoEXT {

  using native_type = VkMicromapCreateInfoEXT;

  MicromapCreateInfoEXT(const void *next = {},
                        MicromapCreateMask create_flags = {},
                        VkBuffer buffer = {},
                        DeviceSize offset = {},
                        DeviceSize size = {},
                        MicromapType type = {},
                        DeviceAddress device_address = {})
    : next_(next), create_flags_(create_flags), buffer_(buffer), offset_(offset), size_(size), type_(type),
      device_address_(device_address) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MICROMAP_CREATE_INFO_EXT;
  const void *next_;
  MicromapCreateMask create_flags_;
  VkBuffer buffer_;
  DeviceSize offset_;
  DeviceSize size_;
  MicromapType type_;
  DeviceAddress device_address_;
};

struct DeviceGroupPresentCapabilitiesKHR {

  using native_type = VkDeviceGroupPresentCapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;
  void *next_;
  std::array<uint32_t, VK_MAX_DEVICE_GROUP_SIZE> present_mask_;
  DeviceGroupPresentModeMask modes_;
};

struct ExternalMemoryProperties {

  using native_type = VkExternalMemoryProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ExternalMemoryFeatureMask external_memory_features_;
  ExternalMemoryHandleTypeMask export_from_imported_handle_types_;
  ExternalMemoryHandleTypeMask compatible_handle_types_;
};

struct ExternalBufferProperties {

  using native_type = VkExternalBufferProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXTERNAL_BUFFER_PROPERTIES;
  void *next_;
  ExternalMemoryProperties external_memory_properties_;
};

struct RenderPassCreationControlEXT {

  using native_type = VkRenderPassCreationControlEXT;

  RenderPassCreationControlEXT(const void *next = {}, bool32 disallow_merging = {}) : next_(next), disallow_merging_(disallow_merging) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_CREATION_CONTROL_EXT;
  const void *next_;
  bool32 disallow_merging_;
};

struct VideoDecodeH264SessionParametersCreateInfoKHR {

  using native_type = VkVideoDecodeH264SessionParametersCreateInfoKHR;

  VideoDecodeH264SessionParametersCreateInfoKHR(const void *next = {},
                                                uint32_t max_std_spscount = {},
                                                uint32_t max_std_ppscount = {},
                                                const VideoDecodeH264SessionParametersAddInfoKHR *p_parameters_add_info = {})
    : next_(next), max_std_spscount_(max_std_spscount), max_std_ppscount_(max_std_ppscount), p_parameters_add_info_(p_parameters_add_info) {
  }

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR;
  const void *next_;
  uint32_t max_std_spscount_;
  uint32_t max_std_ppscount_;
  const VideoDecodeH264SessionParametersAddInfoKHR *p_parameters_add_info_;
};

struct PhysicalDeviceVariablePointersFeatures {

  using native_type = VkPhysicalDeviceVariablePointersFeatures;

  PhysicalDeviceVariablePointersFeatures(void *next = {}, bool32 variable_pointers_storage_buffer = {}, bool32 variable_pointers = {})
    : next_(next), variable_pointers_storage_buffer_(variable_pointers_storage_buffer), variable_pointers_(variable_pointers) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES;
  void *next_;
  bool32 variable_pointers_storage_buffer_;
  bool32 variable_pointers_;
};

struct PhysicalDeviceIDProperties {

  using native_type = VkPhysicalDeviceIDProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_ID_PROPERTIES;
  void *next_;
  std::array<uint8_t, VK_UUID_SIZE> device_uuid_;
  std::array<uint8_t, VK_UUID_SIZE> driver_uuid_;
  std::array<uint8_t, VK_LUID_SIZE> device_luid_;
  uint32_t device_node_mask_;
  bool32 device_luidvalid_;
};

struct PhysicalDeviceVulkanMemoryModelFeatures {

  using native_type = VkPhysicalDeviceVulkanMemoryModelFeatures;

  PhysicalDeviceVulkanMemoryModelFeatures(void *next = {},
                                          bool32 vulkan_memory_model = {},
                                          bool32 vulkan_memory_model_device_scope = {},
                                          bool32 vulkan_memory_model_availability_visibility_chains = {})
    : next_(next), vulkan_memory_model_(vulkan_memory_model), vulkan_memory_model_device_scope_(vulkan_memory_model_device_scope),
      vulkan_memory_model_availability_visibility_chains_(vulkan_memory_model_availability_visibility_chains) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES;
  void *next_;
  bool32 vulkan_memory_model_;
  bool32 vulkan_memory_model_device_scope_;
  bool32 vulkan_memory_model_availability_visibility_chains_;
};

struct DrawIndexedIndirectCommand {

  using native_type = VkDrawIndexedIndirectCommand;

  DrawIndexedIndirectCommand(uint32_t index_count = {},
                             uint32_t instance_count = {},
                             uint32_t first_index = {},
                             int32_t vertex_offset = {},
                             uint32_t first_instance = {})
    : index_count_(index_count), instance_count_(instance_count), first_index_(first_index), vertex_offset_(vertex_offset),
      first_instance_(first_instance) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t index_count_;
  uint32_t instance_count_;
  uint32_t first_index_;
  int32_t vertex_offset_;
  uint32_t first_instance_;
};

struct ConformanceVersion {

  using native_type = VkConformanceVersion;

  ConformanceVersion(uint8_t major = {}, uint8_t minor = {}, uint8_t subminor = {}, uint8_t patch = {})
    : major_(major), minor_(minor), subminor_(subminor), patch_(patch) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint8_t major_;
  uint8_t minor_;
  uint8_t subminor_;
  uint8_t patch_;
};

struct PhysicalDeviceDriverProperties {

  using native_type = VkPhysicalDeviceDriverProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DRIVER_PROPERTIES;
  void *next_;
  DriverId driver_id_;
  std::array<char, VK_MAX_DRIVER_NAME_SIZE> driver_name_;
  std::array<char, VK_MAX_DRIVER_INFO_SIZE> driver_info_;
  ConformanceVersion conformance_version_;
};

struct DebugMessengerCreateInfo {

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

  StructureType structure_type_ = StructureType::DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
  const void *next_;
  DebugMessengerCreateMask mask_;
  DebugMessageSeverityMask message_severity_;
  DebugMessageTypeMask message_type_;
  DebugMessengerCallback messenger_callback_;
  void *user_data_;
};

struct PhysicalDeviceImageFormatInfo2 {

  using native_type = VkPhysicalDeviceImageFormatInfo2;

  PhysicalDeviceImageFormatInfo2(const void *next = {},
                                 Format format = {},
                                 ImageType type = {},
                                 ImageTiling tiling = {},
                                 ImageUsageMask usage = {},
                                 ImageCreateMask flags = {})
    : next_(next), format_(format), type_(type), tiling_(tiling), usage_(usage), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;
  const void *next_;
  Format format_;
  ImageType type_;
  ImageTiling tiling_;
  ImageUsageMask usage_;
  ImageCreateMask flags_;
};

struct FormatProperties {

  using native_type = VkFormatProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  FormatFeatureMask linear_tiling_features_;
  FormatFeatureMask optimal_tiling_features_;
  FormatFeatureMask buffer_features_;
};

struct FormatProperties2 {

  using native_type = VkFormatProperties2;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FORMAT_PROPERTIES_2;
  void *next_;
  FormatProperties format_properties_;
};

struct BindPipelineIndirectCommandNV {

  using native_type = VkBindPipelineIndirectCommandNV;

  BindPipelineIndirectCommandNV(DeviceAddress pipeline_address = {}) : pipeline_address_(pipeline_address) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceAddress pipeline_address_;
};

struct PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;

  PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(void *next = {}, bool32 shader_subgroup_uniform_control_flow = {})
    : next_(next), shader_subgroup_uniform_control_flow_(shader_subgroup_uniform_control_flow) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR;
  void *next_;
  bool32 shader_subgroup_uniform_control_flow_;
};

struct IndirectCommandsStreamNV {

  using native_type = VkIndirectCommandsStreamNV;

  IndirectCommandsStreamNV(VkBuffer buffer = {}, DeviceSize offset = {}) : buffer_(buffer), offset_(offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  VkBuffer buffer_;
  DeviceSize offset_;
};

struct GeneratedCommandsInfoNV {

  using native_type = VkGeneratedCommandsInfoNV;

  GeneratedCommandsInfoNV(const void *next = {},
                          PipelineBindPoint pipeline_bind_point = {},
                          VkPipeline pipeline = {},
                          VkIndirectCommandsLayoutNV indirect_commands_layout = {},
                          uint32_t stream_count = {},
                          const IndirectCommandsStreamNV *p_streams = {},
                          uint32_t sequences_count = {},
                          VkBuffer preprocess_buffer = {},
                          DeviceSize preprocess_offset = {},
                          DeviceSize preprocess_size = {},
                          VkBuffer sequences_count_buffer = {},
                          DeviceSize sequences_count_offset = {},
                          VkBuffer sequences_index_buffer = {},
                          DeviceSize sequences_index_offset = {})
    : next_(next), pipeline_bind_point_(pipeline_bind_point), pipeline_(pipeline), indirect_commands_layout_(indirect_commands_layout),
      stream_count_(stream_count), p_streams_(p_streams), sequences_count_(sequences_count), preprocess_buffer_(preprocess_buffer),
      preprocess_offset_(preprocess_offset), preprocess_size_(preprocess_size), sequences_count_buffer_(sequences_count_buffer),
      sequences_count_offset_(sequences_count_offset), sequences_index_buffer_(sequences_index_buffer),
      sequences_index_offset_(sequences_index_offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::GENERATED_COMMANDS_INFO_NV;
  const void *next_;
  PipelineBindPoint pipeline_bind_point_;
  VkPipeline pipeline_;
  VkIndirectCommandsLayoutNV indirect_commands_layout_;
  uint32_t stream_count_;
  const IndirectCommandsStreamNV *p_streams_;
  uint32_t sequences_count_;
  VkBuffer preprocess_buffer_;
  DeviceSize preprocess_offset_;
  DeviceSize preprocess_size_;
  VkBuffer sequences_count_buffer_;
  DeviceSize sequences_count_offset_;
  VkBuffer sequences_index_buffer_;
  DeviceSize sequences_index_offset_;
};

struct MemoryUnmapInfoKHR {

  using native_type = VkMemoryUnmapInfoKHR;

  MemoryUnmapInfoKHR(const void *next = {}, MemoryUnmapMask flags = {}, VkDeviceMemory memory = {})
    : next_(next), flags_(flags), memory_(memory) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_UNMAP_INFO_KHR;
  const void *next_;
  MemoryUnmapMask flags_;
  VkDeviceMemory memory_;
};

struct PhysicalDeviceTilePropertiesFeaturesQCOM {

  using native_type = VkPhysicalDeviceTilePropertiesFeaturesQCOM;

  PhysicalDeviceTilePropertiesFeaturesQCOM(void *next = {}, bool32 tile_properties = {}) : next_(next), tile_properties_(tile_properties) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM;
  void *next_;
  bool32 tile_properties_;
};

struct VideoDecodeH264DpbSlotInfoKHR {

  using native_type = VkVideoDecodeH264DpbSlotInfoKHR;

  VideoDecodeH264DpbSlotInfoKHR(const void *next = {}, const StdVideoDecodeH264ReferenceInfo *p_std_reference_info = {})
    : next_(next), p_std_reference_info_(p_std_reference_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR;
  const void *next_;
  const StdVideoDecodeH264ReferenceInfo *p_std_reference_info_;
};

struct ViewportSwizzleNV {

  using native_type = VkViewportSwizzleNV;

  ViewportSwizzleNV(ViewportCoordinateSwizzle x = {},
                    ViewportCoordinateSwizzle y = {},
                    ViewportCoordinateSwizzle z = {},
                    ViewportCoordinateSwizzle w = {})
    : x_(x), y_(y), z_(z), w_(w) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ViewportCoordinateSwizzle x_;
  ViewportCoordinateSwizzle y_;
  ViewportCoordinateSwizzle z_;
  ViewportCoordinateSwizzle w_;
};

struct ExternalImageFormatProperties {

  using native_type = VkExternalImageFormatProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXTERNAL_IMAGE_FORMAT_PROPERTIES;
  void *next_;
  ExternalMemoryProperties external_memory_properties_;
};

struct SetDescriptorBufferOffsetsInfoEXT {

  using native_type = VkSetDescriptorBufferOffsetsInfoEXT;

  SetDescriptorBufferOffsetsInfoEXT(const void *next = {},
                                    ShaderStageMask stage_flags = {},
                                    VkPipelineLayout layout = {},
                                    uint32_t first_set = {},
                                    uint32_t set_count = {},
                                    const uint32_t *p_buffer_indices = {},
                                    const DeviceSize *p_offsets = {})
    : next_(next), stage_flags_(stage_flags), layout_(layout), first_set_(first_set), set_count_(set_count),
      p_buffer_indices_(p_buffer_indices), p_offsets_(p_offsets) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT;
  const void *next_;
  ShaderStageMask stage_flags_;
  VkPipelineLayout layout_;
  uint32_t first_set_;
  uint32_t set_count_;
  const uint32_t *p_buffer_indices_;
  const DeviceSize *p_offsets_;
};

struct PhysicalDeviceMemoryBudgetPropertiesEXT {

  using native_type = VkPhysicalDeviceMemoryBudgetPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT;
  void *next_;
  std::array<DeviceSize, VK_MAX_MEMORY_HEAPS> heap_budget_;
  std::array<DeviceSize, VK_MAX_MEMORY_HEAPS> heap_usage_;
};

struct SamplerCaptureDescriptorDataInfoEXT {

  using native_type = VkSamplerCaptureDescriptorDataInfoEXT;

  SamplerCaptureDescriptorDataInfoEXT(const void *next = {}, VkSampler sampler = {}) : next_(next), sampler_(sampler) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;
  const void *next_;
  VkSampler sampler_;
};

struct IndirectCommandsLayoutTokenNV {

  using native_type = VkIndirectCommandsLayoutTokenNV;

  IndirectCommandsLayoutTokenNV(const void *next = {},
                                IndirectCommandsTokenType token_type = {},
                                uint32_t stream = {},
                                uint32_t offset = {},
                                uint32_t vertex_binding_unit = {},
                                bool32 vertex_dynamic_stride = {},
                                VkPipelineLayout pushconstant_pipeline_layout = {},
                                ShaderStageMask pushconstant_shader_stage_flags = {},
                                uint32_t pushconstant_offset = {},
                                uint32_t pushconstant_size = {},
                                IndirectStateMask indirect_state_flags = {},
                                uint32_t index_type_count = {},
                                const IndexType *p_index_types = {},
                                const uint32_t *p_index_type_values = {})
    : next_(next), token_type_(token_type), stream_(stream), offset_(offset), vertex_binding_unit_(vertex_binding_unit),
      vertex_dynamic_stride_(vertex_dynamic_stride), pushconstant_pipeline_layout_(pushconstant_pipeline_layout),
      pushconstant_shader_stage_flags_(pushconstant_shader_stage_flags), pushconstant_offset_(pushconstant_offset),
      pushconstant_size_(pushconstant_size), indirect_state_flags_(indirect_state_flags), index_type_count_(index_type_count),
      p_index_types_(p_index_types), p_index_type_values_(p_index_type_values) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::INDIRECT_COMMANDS_LAYOUT_TOKEN_NV;
  const void *next_;
  IndirectCommandsTokenType token_type_;
  uint32_t stream_;
  uint32_t offset_;
  uint32_t vertex_binding_unit_;
  bool32 vertex_dynamic_stride_;
  VkPipelineLayout pushconstant_pipeline_layout_;
  ShaderStageMask pushconstant_shader_stage_flags_;
  uint32_t pushconstant_offset_;
  uint32_t pushconstant_size_;
  IndirectStateMask indirect_state_flags_;
  uint32_t index_type_count_;
  const IndexType *p_index_types_;
  const uint32_t *p_index_type_values_;
};

struct IndirectCommandsLayoutCreateInfoNV {

  using native_type = VkIndirectCommandsLayoutCreateInfoNV;

  IndirectCommandsLayoutCreateInfoNV(const void *next = {},
                                     IndirectCommandsLayoutUsageMask flags = {},
                                     PipelineBindPoint pipeline_bind_point = {},
                                     uint32_t token_count = {},
                                     const IndirectCommandsLayoutTokenNV *p_tokens = {},
                                     uint32_t stream_count = {},
                                     const uint32_t *p_stream_strides = {})
    : next_(next), flags_(flags), pipeline_bind_point_(pipeline_bind_point), token_count_(token_count), p_tokens_(p_tokens),
      stream_count_(stream_count), p_stream_strides_(p_stream_strides) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV;
  const void *next_;
  IndirectCommandsLayoutUsageMask flags_;
  PipelineBindPoint pipeline_bind_point_;
  uint32_t token_count_;
  const IndirectCommandsLayoutTokenNV *p_tokens_;
  uint32_t stream_count_;
  const uint32_t *p_stream_strides_;
};

struct PipelineInputAssemblyStateCreateInfo {

  using native_type = VkPipelineInputAssemblyStateCreateInfo;

  PipelineInputAssemblyStateCreateInfo(const void *next = {},
                                       PipelineInputAssemblyStateCreateMask flags = {},
                                       PrimitiveTopology topology = {},
                                       bool32 primitive_restart_enable = {})
    : next_(next), flags_(flags), topology_(topology), primitive_restart_enable_(primitive_restart_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
  const void *next_;
  PipelineInputAssemblyStateCreateMask flags_;
  PrimitiveTopology topology_;
  bool32 primitive_restart_enable_;
};

struct InputAttachmentAspectReference {

  using native_type = VkInputAttachmentAspectReference;

  InputAttachmentAspectReference(uint32_t subpass = {}, uint32_t input_attachment_index = {}, ImageAspectMask aspect_mask = {})
    : subpass_(subpass), input_attachment_index_(input_attachment_index), aspect_mask_(aspect_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t subpass_;
  uint32_t input_attachment_index_;
  ImageAspectMask aspect_mask_;
};

struct RenderPassInputAttachmentAspectCreateInfo {

  using native_type = VkRenderPassInputAttachmentAspectCreateInfo;

  RenderPassInputAttachmentAspectCreateInfo(const void *next = {},
                                            uint32_t aspect_reference_count = {},
                                            const InputAttachmentAspectReference *p_aspect_references = {})
    : next_(next), aspect_reference_count_(aspect_reference_count), p_aspect_references_(p_aspect_references) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO;
  const void *next_;
  uint32_t aspect_reference_count_;
  const InputAttachmentAspectReference *p_aspect_references_;
};

struct PipelineCoverageReductionStateCreateInfoNV {

  using native_type = VkPipelineCoverageReductionStateCreateInfoNV;

  PipelineCoverageReductionStateCreateInfoNV(const void *next = {},
                                             PipelineCoverageReductionStateCreateMask flags = {},
                                             CoverageReductionMode coverage_reduction_mode = {})
    : next_(next), flags_(flags), coverage_reduction_mode_(coverage_reduction_mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV;
  const void *next_;
  PipelineCoverageReductionStateCreateMask flags_;
  CoverageReductionMode coverage_reduction_mode_;
};

struct SubmitInfo {

  using native_type = VkSubmitInfo;

  SubmitInfo(const void *next = {},
             uint32_t wait_semaphore_count = {},
             const VkSemaphore *p_wait_semaphores = {},
             const PipelineStageMask *p_wait_dst_stage_mask = {},
             uint32_t command_buffer_count = {},
             const VkCommandBuffer *p_command_buffers = {},
             uint32_t signal_semaphore_count = {},
             const VkSemaphore *p_signal_semaphores = {})
    : next_(next), wait_semaphore_count_(wait_semaphore_count), p_wait_semaphores_(p_wait_semaphores),
      p_wait_dst_stage_mask_(p_wait_dst_stage_mask), command_buffer_count_(command_buffer_count), p_command_buffers_(p_command_buffers),
      signal_semaphore_count_(signal_semaphore_count), p_signal_semaphores_(p_signal_semaphores) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBMIT_INFO;
  const void *next_;
  uint32_t wait_semaphore_count_;
  const VkSemaphore *p_wait_semaphores_;
  const PipelineStageMask *p_wait_dst_stage_mask_;
  uint32_t command_buffer_count_;
  const VkCommandBuffer *p_command_buffers_;
  uint32_t signal_semaphore_count_;
  const VkSemaphore *p_signal_semaphores_;
};

struct DisplayPlaneCapabilitiesKHR {

  using native_type = VkDisplayPlaneCapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DisplayPlaneAlphaMask supported_alpha_;
  Offset2D min_src_position_;
  Offset2D max_src_position_;
  Extent2D min_src_extent_;
  Extent2D max_src_extent_;
  Offset2D min_dst_position_;
  Offset2D max_dst_position_;
  Extent2D min_dst_extent_;
  Extent2D max_dst_extent_;
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

  using native_type = VkPipelineVertexInputStateCreateInfo;

  PipelineVertexInputStateCreateInfo(const void *next = {},
                                     PipelineVertexInputStateCreateMask flags = {},
                                     uint32_t vertex_binding_description_count = {},
                                     const VertexInputBindingDescription *p_vertex_binding_descriptions = {},
                                     uint32_t vertex_attribute_description_count = {},
                                     const VertexInputAttributeDescription *p_vertex_attribute_descriptions = {})
    : next_(next), flags_(flags), vertex_binding_description_count_(vertex_binding_description_count),
      p_vertex_binding_descriptions_(p_vertex_binding_descriptions),
      vertex_attribute_description_count_(vertex_attribute_description_count),
      p_vertex_attribute_descriptions_(p_vertex_attribute_descriptions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
  const void *next_;
  PipelineVertexInputStateCreateMask flags_;
  uint32_t vertex_binding_description_count_;
  const VertexInputBindingDescription *p_vertex_binding_descriptions_;
  uint32_t vertex_attribute_description_count_;
  const VertexInputAttributeDescription *p_vertex_attribute_descriptions_;
};

struct PipelineTessellationStateCreateInfo {

  using native_type = VkPipelineTessellationStateCreateInfo;

  PipelineTessellationStateCreateInfo(const void *next = {},
                                      PipelineTessellationStateCreateMask flags = {},
                                      uint32_t patch_control_points = {})
    : next_(next), flags_(flags), patch_control_points_(patch_control_points) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_TESSELLATION_STATE_CREATE_INFO;
  const void *next_;
  PipelineTessellationStateCreateMask flags_;
  uint32_t patch_control_points_;
};

struct GraphicsShaderGroupCreateInfoNV {

  using native_type = VkGraphicsShaderGroupCreateInfoNV;

  GraphicsShaderGroupCreateInfoNV(const void *next = {},
                                  uint32_t stage_count = {},
                                  const PipelineShaderStageCreateInfo *p_stages = {},
                                  const PipelineVertexInputStateCreateInfo *p_vertex_input_state = {},
                                  const PipelineTessellationStateCreateInfo *p_tessellation_state = {})
    : next_(next), stage_count_(stage_count), p_stages_(p_stages), p_vertex_input_state_(p_vertex_input_state),
      p_tessellation_state_(p_tessellation_state) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::GRAPHICS_SHADER_GROUP_CREATE_INFO_NV;
  const void *next_;
  uint32_t stage_count_;
  const PipelineShaderStageCreateInfo *p_stages_;
  const PipelineVertexInputStateCreateInfo *p_vertex_input_state_;
  const PipelineTessellationStateCreateInfo *p_tessellation_state_;
};

struct PhysicalDeviceMultiDrawPropertiesEXT {

  using native_type = VkPhysicalDeviceMultiDrawPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT;
  void *next_;
  uint32_t max_multi_draw_count_;
};

struct PhysicalDeviceDeviceGeneratedCommandsPropertiesNV {

  using native_type = VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV;
  void *next_;
  uint32_t max_graphics_shader_group_count_;
  uint32_t max_indirect_sequence_count_;
  uint32_t max_indirect_commands_token_count_;
  uint32_t max_indirect_commands_stream_count_;
  uint32_t max_indirect_commands_token_offset_;
  uint32_t max_indirect_commands_stream_stride_;
  uint32_t min_sequences_count_buffer_offset_alignment_;
  uint32_t min_sequences_index_buffer_offset_alignment_;
  uint32_t min_indirect_commands_buffer_offset_alignment_;
};

struct DescriptorSetLayoutBinding {

  using native_type = VkDescriptorSetLayoutBinding;

  DescriptorSetLayoutBinding(uint32_t binding = {},
                             DescriptorType descriptor_type = {},
                             uint32_t descriptor_count = {},
                             ShaderStageMask stage_flags = {},
                             const VkSampler *p_immutable_samplers = {})
    : binding_(binding), descriptor_type_(descriptor_type), descriptor_count_(descriptor_count), stage_flags_(stage_flags),
      p_immutable_samplers_(p_immutable_samplers) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t binding_;
  DescriptorType descriptor_type_;
  uint32_t descriptor_count_;
  ShaderStageMask stage_flags_;
  const VkSampler *p_immutable_samplers_;
};

struct DescriptorSetLayoutCreateInfo {

  using native_type = VkDescriptorSetLayoutCreateInfo;

  DescriptorSetLayoutCreateInfo(const void *next = {},
                                DescriptorSetLayoutCreateMask flags = {},
                                uint32_t binding_count = {},
                                const DescriptorSetLayoutBinding *p_bindings = {})
    : next_(next), flags_(flags), binding_count_(binding_count), p_bindings_(p_bindings) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
  const void *next_;
  DescriptorSetLayoutCreateMask flags_;
  uint32_t binding_count_;
  const DescriptorSetLayoutBinding *p_bindings_;
};

struct AttachmentReference2 {

  using native_type = VkAttachmentReference2;

  AttachmentReference2(const void *next = {}, uint32_t attachment = {}, ImageLayout layout = {}, ImageAspectMask aspect_mask = {})
    : next_(next), attachment_(attachment), layout_(layout), aspect_mask_(aspect_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ATTACHMENT_REFERENCE_2;
  const void *next_;
  uint32_t attachment_;
  ImageLayout layout_;
  ImageAspectMask aspect_mask_;
};

struct FragmentShadingRateAttachmentInfoKHR {

  using native_type = VkFragmentShadingRateAttachmentInfoKHR;

  FragmentShadingRateAttachmentInfoKHR(const void *next = {},
                                       const AttachmentReference2 *p_fragment_shading_rate_attachment = {},
                                       Extent2D shading_rate_attachment_texel_size = {})
    : next_(next), p_fragment_shading_rate_attachment_(p_fragment_shading_rate_attachment),
      shading_rate_attachment_texel_size_(shading_rate_attachment_texel_size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR;
  const void *next_;
  const AttachmentReference2 *p_fragment_shading_rate_attachment_;
  Extent2D shading_rate_attachment_texel_size_;
};

struct PrivateDataSlotCreateInfo {

  using native_type = VkPrivateDataSlotCreateInfo;

  PrivateDataSlotCreateInfo(const void *next = {}, PrivateDataSlotCreateMask flags = {}) : next_(next), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PRIVATE_DATA_SLOT_CREATE_INFO;
  const void *next_;
  PrivateDataSlotCreateMask flags_;
};

struct VertexInputBindingDivisorDescriptionKHR {

  using native_type = VkVertexInputBindingDivisorDescriptionKHR;

  VertexInputBindingDivisorDescriptionKHR(uint32_t binding = {}, uint32_t divisor = {}) : binding_(binding), divisor_(divisor) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t binding_;
  uint32_t divisor_;
};

struct PipelineVertexInputDivisorStateCreateInfoKHR {

  using native_type = VkPipelineVertexInputDivisorStateCreateInfoKHR;

  PipelineVertexInputDivisorStateCreateInfoKHR(const void *next = {},
                                               uint32_t vertex_binding_divisor_count = {},
                                               const VertexInputBindingDivisorDescriptionKHR *p_vertex_binding_divisors = {})
    : next_(next), vertex_binding_divisor_count_(vertex_binding_divisor_count), p_vertex_binding_divisors_(p_vertex_binding_divisors) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_KHR;
  const void *next_;
  uint32_t vertex_binding_divisor_count_;
  const VertexInputBindingDivisorDescriptionKHR *p_vertex_binding_divisors_;
};

struct VideoEncodeH264SessionParametersCreateInfoKHR {

  using native_type = VkVideoEncodeH264SessionParametersCreateInfoKHR;

  VideoEncodeH264SessionParametersCreateInfoKHR(const void *next = {},
                                                uint32_t max_std_spscount = {},
                                                uint32_t max_std_ppscount = {},
                                                const VideoEncodeH264SessionParametersAddInfoKHR *p_parameters_add_info = {})
    : next_(next), max_std_spscount_(max_std_spscount), max_std_ppscount_(max_std_ppscount), p_parameters_add_info_(p_parameters_add_info) {
  }

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR;
  const void *next_;
  uint32_t max_std_spscount_;
  uint32_t max_std_ppscount_;
  const VideoEncodeH264SessionParametersAddInfoKHR *p_parameters_add_info_;
};

struct GraphicsPipelineShaderGroupsCreateInfoNV {

  using native_type = VkGraphicsPipelineShaderGroupsCreateInfoNV;

  GraphicsPipelineShaderGroupsCreateInfoNV(const void *next = {},
                                           uint32_t group_count = {},
                                           const GraphicsShaderGroupCreateInfoNV *p_groups = {},
                                           uint32_t pipeline_count = {},
                                           const VkPipeline *p_pipelines = {})
    : next_(next), group_count_(group_count), p_groups_(p_groups), pipeline_count_(pipeline_count), p_pipelines_(p_pipelines) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV;
  const void *next_;
  uint32_t group_count_;
  const GraphicsShaderGroupCreateInfoNV *p_groups_;
  uint32_t pipeline_count_;
  const VkPipeline *p_pipelines_;
};

struct DevicePrivateDataCreateInfo {

  using native_type = VkDevicePrivateDataCreateInfo;

  DevicePrivateDataCreateInfo(const void *next = {}, uint32_t private_data_slot_request_count = {})
    : next_(next), private_data_slot_request_count_(private_data_slot_request_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_PRIVATE_DATA_CREATE_INFO;
  const void *next_;
  uint32_t private_data_slot_request_count_;
};

struct PhysicalDeviceMemoryDecompressionPropertiesNV {

  using native_type = VkPhysicalDeviceMemoryDecompressionPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV;
  void *next_;
  MemoryDecompressionMethodMask decompression_methods_;
  uint64_t max_decompression_indirect_count_;
};

struct DeviceQueueCreateInfo {

  using native_type = VkDeviceQueueCreateInfo;

  DeviceQueueCreateInfo(const void *next = {},
                        DeviceQueueCreateMask flags = {},
                        uint32_t queue_family_index = {},
                        uint32_t queue_count = {},
                        const float *p_queue_priorities = {})
    : next_(next), flags_(flags), queue_family_index_(queue_family_index), queue_count_(queue_count),
      p_queue_priorities_(p_queue_priorities) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_QUEUE_CREATE_INFO;
  const void *next_;
  DeviceQueueCreateMask flags_;
  uint32_t queue_family_index_;
  uint32_t queue_count_;
  const float *p_queue_priorities_;
};

struct PhysicalDeviceFeatures {

  using native_type = VkPhysicalDeviceFeatures;

  PhysicalDeviceFeatures(bool32 robust_buffer_access = {},
                         bool32 full_draw_index_uint32 = {},
                         bool32 image_cube_array = {},
                         bool32 independent_blend = {},
                         bool32 geometry_shader = {},
                         bool32 tessellation_shader = {},
                         bool32 sample_rate_shading = {},
                         bool32 dual_src_blend = {},
                         bool32 logic_op = {},
                         bool32 multi_draw_indirect = {},
                         bool32 draw_indirect_first_instance = {},
                         bool32 depth_clamp = {},
                         bool32 depth_bias_clamp = {},
                         bool32 fill_mode_non_solid = {},
                         bool32 depth_bounds = {},
                         bool32 wide_lines = {},
                         bool32 large_points = {},
                         bool32 alpha_to_one = {},
                         bool32 multi_viewport = {},
                         bool32 sampler_anisotropy = {},
                         bool32 texture_compression_etc2 = {},
                         bool32 texture_compression_astc_ldr = {},
                         bool32 texture_compression_bc = {},
                         bool32 occlusion_query_precise = {},
                         bool32 pipeline_statistics_query = {},
                         bool32 vertex_pipeline_stores_and_atomics = {},
                         bool32 fragment_stores_and_atomics = {},
                         bool32 shader_tessellation_and_geometry_point_size = {},
                         bool32 shader_image_gather_extended = {},
                         bool32 shader_storage_image_extended_formats = {},
                         bool32 shader_storage_image_multisample = {},
                         bool32 shader_storage_image_read_without_format = {},
                         bool32 shader_storage_image_write_without_format = {},
                         bool32 shader_uniform_buffer_array_dynamic_indexing = {},
                         bool32 shader_sampled_image_array_dynamic_indexing = {},
                         bool32 shader_storage_buffer_array_dynamic_indexing = {},
                         bool32 shader_storage_image_array_dynamic_indexing = {},
                         bool32 shader_clip_distance = {},
                         bool32 shader_cull_distance = {},
                         bool32 shader_float64 = {},
                         bool32 shader_int64 = {},
                         bool32 shader_int16 = {},
                         bool32 shader_resource_residency = {},
                         bool32 shader_resource_min_lod = {},
                         bool32 sparse_binding = {},
                         bool32 sparse_residency_buffer = {},
                         bool32 sparse_residency_image2d = {},
                         bool32 sparse_residency_image3d = {},
                         bool32 sparse_residency2samples = {},
                         bool32 sparse_residency4samples = {},
                         bool32 sparse_residency8samples = {},
                         bool32 sparse_residency16samples = {},
                         bool32 sparse_residency_aliased = {},
                         bool32 variable_multisample_rate = {},
                         bool32 inherited_queries = {})
    : robust_buffer_access_(robust_buffer_access), full_draw_index_uint32_(full_draw_index_uint32), image_cube_array_(image_cube_array),
      independent_blend_(independent_blend), geometry_shader_(geometry_shader), tessellation_shader_(tessellation_shader),
      sample_rate_shading_(sample_rate_shading), dual_src_blend_(dual_src_blend), logic_op_(logic_op),
      multi_draw_indirect_(multi_draw_indirect), draw_indirect_first_instance_(draw_indirect_first_instance), depth_clamp_(depth_clamp),
      depth_bias_clamp_(depth_bias_clamp), fill_mode_non_solid_(fill_mode_non_solid), depth_bounds_(depth_bounds), wide_lines_(wide_lines),
      large_points_(large_points), alpha_to_one_(alpha_to_one), multi_viewport_(multi_viewport), sampler_anisotropy_(sampler_anisotropy),
      texture_compression_etc2_(texture_compression_etc2), texture_compression_astc_ldr_(texture_compression_astc_ldr),
      texture_compression_bc_(texture_compression_bc), occlusion_query_precise_(occlusion_query_precise),
      pipeline_statistics_query_(pipeline_statistics_query), vertex_pipeline_stores_and_atomics_(vertex_pipeline_stores_and_atomics),
      fragment_stores_and_atomics_(fragment_stores_and_atomics),
      shader_tessellation_and_geometry_point_size_(shader_tessellation_and_geometry_point_size),
      shader_image_gather_extended_(shader_image_gather_extended),
      shader_storage_image_extended_formats_(shader_storage_image_extended_formats),
      shader_storage_image_multisample_(shader_storage_image_multisample),
      shader_storage_image_read_without_format_(shader_storage_image_read_without_format),
      shader_storage_image_write_without_format_(shader_storage_image_write_without_format),
      shader_uniform_buffer_array_dynamic_indexing_(shader_uniform_buffer_array_dynamic_indexing),
      shader_sampled_image_array_dynamic_indexing_(shader_sampled_image_array_dynamic_indexing),
      shader_storage_buffer_array_dynamic_indexing_(shader_storage_buffer_array_dynamic_indexing),
      shader_storage_image_array_dynamic_indexing_(shader_storage_image_array_dynamic_indexing),
      shader_clip_distance_(shader_clip_distance), shader_cull_distance_(shader_cull_distance), shader_float64_(shader_float64),
      shader_int64_(shader_int64), shader_int16_(shader_int16), shader_resource_residency_(shader_resource_residency),
      shader_resource_min_lod_(shader_resource_min_lod), sparse_binding_(sparse_binding), sparse_residency_buffer_(sparse_residency_buffer),
      sparse_residency_image2d_(sparse_residency_image2d), sparse_residency_image3d_(sparse_residency_image3d),
      sparse_residency2samples_(sparse_residency2samples), sparse_residency4samples_(sparse_residency4samples),
      sparse_residency8samples_(sparse_residency8samples), sparse_residency16samples_(sparse_residency16samples),
      sparse_residency_aliased_(sparse_residency_aliased), variable_multisample_rate_(variable_multisample_rate),
      inherited_queries_(inherited_queries) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

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

struct DeviceCreateInfo {

  using native_type = VkDeviceCreateInfo;

  DeviceCreateInfo(const void *next = {},
                   DeviceCreateMask flags = {},
                   uint32_t queue_create_info_count = {},
                   const DeviceQueueCreateInfo *p_queue_create_infos = {},
                   uint32_t enabled_layer_count = {},
                   const char *const *pp_enabled_layer_names = {},
                   uint32_t enabled_extension_count = {},
                   const char *const *pp_enabled_extension_names = {},
                   const PhysicalDeviceFeatures *p_enabled_features = {})
    : next_(next), flags_(flags), queue_create_info_count_(queue_create_info_count), p_queue_create_infos_(p_queue_create_infos),
      enabled_layer_count_(enabled_layer_count), pp_enabled_layer_names_(pp_enabled_layer_names),
      enabled_extension_count_(enabled_extension_count), pp_enabled_extension_names_(pp_enabled_extension_names),
      p_enabled_features_(p_enabled_features) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_CREATE_INFO;
  const void *next_;
  DeviceCreateMask flags_;
  uint32_t queue_create_info_count_;
  const DeviceQueueCreateInfo *p_queue_create_infos_;
  uint32_t enabled_layer_count_;
  const char *const *pp_enabled_layer_names_;
  uint32_t enabled_extension_count_;
  const char *const *pp_enabled_extension_names_;
  const PhysicalDeviceFeatures *p_enabled_features_;
};

struct TraceRaysIndirectCommand2KHR {

  using native_type = VkTraceRaysIndirectCommand2KHR;

  TraceRaysIndirectCommand2KHR(DeviceAddress raygen_shader_record_address = {},
                               DeviceSize raygen_shader_record_size = {},
                               DeviceAddress miss_shader_binding_table_address = {},
                               DeviceSize miss_shader_binding_table_size = {},
                               DeviceSize miss_shader_binding_table_stride = {},
                               DeviceAddress hit_shader_binding_table_address = {},
                               DeviceSize hit_shader_binding_table_size = {},
                               DeviceSize hit_shader_binding_table_stride = {},
                               DeviceAddress callable_shader_binding_table_address = {},
                               DeviceSize callable_shader_binding_table_size = {},
                               DeviceSize callable_shader_binding_table_stride = {},
                               uint32_t width = {},
                               uint32_t height = {},
                               uint32_t depth = {})
    : raygen_shader_record_address_(raygen_shader_record_address), raygen_shader_record_size_(raygen_shader_record_size),
      miss_shader_binding_table_address_(miss_shader_binding_table_address),
      miss_shader_binding_table_size_(miss_shader_binding_table_size), miss_shader_binding_table_stride_(miss_shader_binding_table_stride),
      hit_shader_binding_table_address_(hit_shader_binding_table_address), hit_shader_binding_table_size_(hit_shader_binding_table_size),
      hit_shader_binding_table_stride_(hit_shader_binding_table_stride),
      callable_shader_binding_table_address_(callable_shader_binding_table_address),
      callable_shader_binding_table_size_(callable_shader_binding_table_size),
      callable_shader_binding_table_stride_(callable_shader_binding_table_stride), width_(width), height_(height), depth_(depth) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceAddress raygen_shader_record_address_;
  DeviceSize raygen_shader_record_size_;
  DeviceAddress miss_shader_binding_table_address_;
  DeviceSize miss_shader_binding_table_size_;
  DeviceSize miss_shader_binding_table_stride_;
  DeviceAddress hit_shader_binding_table_address_;
  DeviceSize hit_shader_binding_table_size_;
  DeviceSize hit_shader_binding_table_stride_;
  DeviceAddress callable_shader_binding_table_address_;
  DeviceSize callable_shader_binding_table_size_;
  DeviceSize callable_shader_binding_table_stride_;
  uint32_t width_;
  uint32_t height_;
  uint32_t depth_;
};

struct PhysicalDeviceOpticalFlowFeaturesNV {

  using native_type = VkPhysicalDeviceOpticalFlowFeaturesNV;

  PhysicalDeviceOpticalFlowFeaturesNV(void *next = {}, bool32 optical_flow = {}) : next_(next), optical_flow_(optical_flow) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV;
  void *next_;
  bool32 optical_flow_;
};

struct HeadlessSurfaceCreateInfoEXT {

  using native_type = VkHeadlessSurfaceCreateInfoEXT;

  HeadlessSurfaceCreateInfoEXT(const void *next = {}, HeadlessSurfaceCreateMask flags = {}) : next_(next), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::HEADLESS_SURFACE_CREATE_INFO_EXT;
  const void *next_;
  HeadlessSurfaceCreateMask flags_;
};

struct PhysicalDeviceMapMemoryPlacedFeaturesEXT {

  using native_type = VkPhysicalDeviceMapMemoryPlacedFeaturesEXT;

  PhysicalDeviceMapMemoryPlacedFeaturesEXT(void *next = {},
                                           bool32 memory_map_placed = {},
                                           bool32 memory_map_range_placed = {},
                                           bool32 memory_unmap_reserve = {})
    : next_(next), memory_map_placed_(memory_map_placed), memory_map_range_placed_(memory_map_range_placed),
      memory_unmap_reserve_(memory_unmap_reserve) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT;
  void *next_;
  bool32 memory_map_placed_;
  bool32 memory_map_range_placed_;
  bool32 memory_unmap_reserve_;
};

struct PhysicalDeviceYcbcrDegammaFeaturesQCOM {

  using native_type = VkPhysicalDeviceYcbcrDegammaFeaturesQCOM;

  PhysicalDeviceYcbcrDegammaFeaturesQCOM(void *next = {}, bool32 ycbcr_degamma = {}) : next_(next), ycbcr_degamma_(ycbcr_degamma) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM;
  void *next_;
  bool32 ycbcr_degamma_;
};

struct PhysicalDeviceShaderModuleIdentifierFeaturesEXT {

  using native_type = VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT;

  PhysicalDeviceShaderModuleIdentifierFeaturesEXT(void *next = {}, bool32 shader_module_identifier = {})
    : next_(next), shader_module_identifier_(shader_module_identifier) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT;
  void *next_;
  bool32 shader_module_identifier_;
};

struct PhysicalDeviceDynamicRenderingFeatures {

  using native_type = VkPhysicalDeviceDynamicRenderingFeatures;

  PhysicalDeviceDynamicRenderingFeatures(void *next = {}, bool32 dynamic_rendering = {})
    : next_(next), dynamic_rendering_(dynamic_rendering) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES;
  void *next_;
  bool32 dynamic_rendering_;
};

struct PhysicalDevicePipelineCreationCacheControlFeatures {

  using native_type = VkPhysicalDevicePipelineCreationCacheControlFeatures;

  PhysicalDevicePipelineCreationCacheControlFeatures(void *next = {}, bool32 pipeline_creation_cache_control = {})
    : next_(next), pipeline_creation_cache_control_(pipeline_creation_cache_control) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES;
  void *next_;
  bool32 pipeline_creation_cache_control_;
};

struct PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV {

  using native_type = VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV;

  PhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(void *next = {},
                                                         bool32 device_generated_compute = {},
                                                         bool32 device_generated_compute_pipelines = {},
                                                         bool32 device_generated_compute_capture_replay = {})
    : next_(next), device_generated_compute_(device_generated_compute),
      device_generated_compute_pipelines_(device_generated_compute_pipelines),
      device_generated_compute_capture_replay_(device_generated_compute_capture_replay) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV;
  void *next_;
  bool32 device_generated_compute_;
  bool32 device_generated_compute_pipelines_;
  bool32 device_generated_compute_capture_replay_;
};

struct PresentIdKHR {

  using native_type = VkPresentIdKHR;

  PresentIdKHR(const void *next = {}, uint32_t swapchain_count = {}, const uint64_t *p_present_ids = {})
    : next_(next), swapchain_count_(swapchain_count), p_present_ids_(p_present_ids) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PRESENT_ID_KHR;
  const void *next_;
  uint32_t swapchain_count_;
  const uint64_t *p_present_ids_;
};

struct PhysicalDeviceExternalImageFormatInfo {

  using native_type = VkPhysicalDeviceExternalImageFormatInfo;

  PhysicalDeviceExternalImageFormatInfo(const void *next = {}, ExternalMemoryHandleTypeMaskBit handle_type = {})
    : next_(next), handle_type_(handle_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO;
  const void *next_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct MemoryHostPointerPropertiesEXT {

  using native_type = VkMemoryHostPointerPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_HOST_POINTER_PROPERTIES_EXT;
  void *next_;
  uint32_t memory_type_bits_;
};

struct PhysicalDeviceSwapchainMaintenance1FeaturesEXT {

  using native_type = VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT;

  PhysicalDeviceSwapchainMaintenance1FeaturesEXT(void *next = {}, bool32 swapchain_maintenance1 = {})
    : next_(next), swapchain_maintenance1_(swapchain_maintenance1) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT;
  void *next_;
  bool32 swapchain_maintenance1_;
};

struct PhysicalDeviceDescriptorIndexingFeatures {

  using native_type = VkPhysicalDeviceDescriptorIndexingFeatures;

  PhysicalDeviceDescriptorIndexingFeatures(void *next = {},
                                           bool32 shader_input_attachment_array_dynamic_indexing = {},
                                           bool32 shader_uniform_texel_buffer_array_dynamic_indexing = {},
                                           bool32 shader_storage_texel_buffer_array_dynamic_indexing = {},
                                           bool32 shader_uniform_buffer_array_non_uniform_indexing = {},
                                           bool32 shader_sampled_image_array_non_uniform_indexing = {},
                                           bool32 shader_storage_buffer_array_non_uniform_indexing = {},
                                           bool32 shader_storage_image_array_non_uniform_indexing = {},
                                           bool32 shader_input_attachment_array_non_uniform_indexing = {},
                                           bool32 shader_uniform_texel_buffer_array_non_uniform_indexing = {},
                                           bool32 shader_storage_texel_buffer_array_non_uniform_indexing = {},
                                           bool32 descriptor_binding_uniform_buffer_update_after_bind = {},
                                           bool32 descriptor_binding_sampled_image_update_after_bind = {},
                                           bool32 descriptor_binding_storage_image_update_after_bind = {},
                                           bool32 descriptor_binding_storage_buffer_update_after_bind = {},
                                           bool32 descriptor_binding_uniform_texel_buffer_update_after_bind = {},
                                           bool32 descriptor_binding_storage_texel_buffer_update_after_bind = {},
                                           bool32 descriptor_binding_update_unused_while_pending = {},
                                           bool32 descriptor_binding_partially_bound = {},
                                           bool32 descriptor_binding_variable_descriptor_count = {},
                                           bool32 runtime_descriptor_array = {})
    : next_(next), shader_input_attachment_array_dynamic_indexing_(shader_input_attachment_array_dynamic_indexing),
      shader_uniform_texel_buffer_array_dynamic_indexing_(shader_uniform_texel_buffer_array_dynamic_indexing),
      shader_storage_texel_buffer_array_dynamic_indexing_(shader_storage_texel_buffer_array_dynamic_indexing),
      shader_uniform_buffer_array_non_uniform_indexing_(shader_uniform_buffer_array_non_uniform_indexing),
      shader_sampled_image_array_non_uniform_indexing_(shader_sampled_image_array_non_uniform_indexing),
      shader_storage_buffer_array_non_uniform_indexing_(shader_storage_buffer_array_non_uniform_indexing),
      shader_storage_image_array_non_uniform_indexing_(shader_storage_image_array_non_uniform_indexing),
      shader_input_attachment_array_non_uniform_indexing_(shader_input_attachment_array_non_uniform_indexing),
      shader_uniform_texel_buffer_array_non_uniform_indexing_(shader_uniform_texel_buffer_array_non_uniform_indexing),
      shader_storage_texel_buffer_array_non_uniform_indexing_(shader_storage_texel_buffer_array_non_uniform_indexing),
      descriptor_binding_uniform_buffer_update_after_bind_(descriptor_binding_uniform_buffer_update_after_bind),
      descriptor_binding_sampled_image_update_after_bind_(descriptor_binding_sampled_image_update_after_bind),
      descriptor_binding_storage_image_update_after_bind_(descriptor_binding_storage_image_update_after_bind),
      descriptor_binding_storage_buffer_update_after_bind_(descriptor_binding_storage_buffer_update_after_bind),
      descriptor_binding_uniform_texel_buffer_update_after_bind_(descriptor_binding_uniform_texel_buffer_update_after_bind),
      descriptor_binding_storage_texel_buffer_update_after_bind_(descriptor_binding_storage_texel_buffer_update_after_bind),
      descriptor_binding_update_unused_while_pending_(descriptor_binding_update_unused_while_pending),
      descriptor_binding_partially_bound_(descriptor_binding_partially_bound),
      descriptor_binding_variable_descriptor_count_(descriptor_binding_variable_descriptor_count),
      runtime_descriptor_array_(runtime_descriptor_array) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES;
  void *next_;
  bool32 shader_input_attachment_array_dynamic_indexing_;
  bool32 shader_uniform_texel_buffer_array_dynamic_indexing_;
  bool32 shader_storage_texel_buffer_array_dynamic_indexing_;
  bool32 shader_uniform_buffer_array_non_uniform_indexing_;
  bool32 shader_sampled_image_array_non_uniform_indexing_;
  bool32 shader_storage_buffer_array_non_uniform_indexing_;
  bool32 shader_storage_image_array_non_uniform_indexing_;
  bool32 shader_input_attachment_array_non_uniform_indexing_;
  bool32 shader_uniform_texel_buffer_array_non_uniform_indexing_;
  bool32 shader_storage_texel_buffer_array_non_uniform_indexing_;
  bool32 descriptor_binding_uniform_buffer_update_after_bind_;
  bool32 descriptor_binding_sampled_image_update_after_bind_;
  bool32 descriptor_binding_storage_image_update_after_bind_;
  bool32 descriptor_binding_storage_buffer_update_after_bind_;
  bool32 descriptor_binding_uniform_texel_buffer_update_after_bind_;
  bool32 descriptor_binding_storage_texel_buffer_update_after_bind_;
  bool32 descriptor_binding_update_unused_while_pending_;
  bool32 descriptor_binding_partially_bound_;
  bool32 descriptor_binding_variable_descriptor_count_;
  bool32 runtime_descriptor_array_;
};

struct PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM {

  using native_type = VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM;
  void *next_;
  Extent2D fragment_density_offset_granularity_;
};

struct PhysicalDeviceCooperativeMatrixPropertiesKHR {

  using native_type = VkPhysicalDeviceCooperativeMatrixPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR;
  void *next_;
  ShaderStageMask cooperative_matrix_supported_stages_;
};

struct SubresourceHostMemcpySizeEXT {

  using native_type = VkSubresourceHostMemcpySizeEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBRESOURCE_HOST_MEMCPY_SIZE_EXT;
  void *next_;
  DeviceSize size_;
};

struct ExportMemoryAllocateInfoNV {

  using native_type = VkExportMemoryAllocateInfoNV;

  ExportMemoryAllocateInfoNV(const void *next = {}, ExternalMemoryHandleTypeMask handle_types = {})
    : next_(next), handle_types_(handle_types) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXPORT_MEMORY_ALLOCATE_INFO_NV;
  const void *next_;
  ExternalMemoryHandleTypeMask handle_types_;
};

struct ImageFormatProperties {

  using native_type = VkImageFormatProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  Extent3D max_extent_;
  uint32_t max_mip_levels_;
  uint32_t max_array_layers_;
  SampleCountMask sample_counts_;
  DeviceSize max_resource_size_;
};

struct ExternalImageFormatPropertiesNV {

  using native_type = VkExternalImageFormatPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ImageFormatProperties image_format_properties_;
  ExternalMemoryFeatureMask external_memory_features_;
  ExternalMemoryHandleTypeMask export_from_imported_handle_types_;
  ExternalMemoryHandleTypeMask compatible_handle_types_;
};

struct DedicatedAllocationBufferCreateInfoNV {

  using native_type = VkDedicatedAllocationBufferCreateInfoNV;

  DedicatedAllocationBufferCreateInfoNV(const void *next = {}, bool32 dedicated_allocation = {})
    : next_(next), dedicated_allocation_(dedicated_allocation) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;
  const void *next_;
  bool32 dedicated_allocation_;
};

struct DeviceDeviceMemoryReportCreateInfoEXT {

  using native_type = VkDeviceDeviceMemoryReportCreateInfoEXT;

  DeviceDeviceMemoryReportCreateInfoEXT(const void *next = {},
                                        DeviceMemoryReportMask flags = {},
                                        PFN_vkDeviceMemoryReportCallbackEXT pfn_user_callback = {},
                                        void *p_user_data = {})
    : next_(next), flags_(flags), pfn_user_callback_(pfn_user_callback), p_user_data_(p_user_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT;
  const void *next_;
  DeviceMemoryReportMask flags_;
  PFN_vkDeviceMemoryReportCallbackEXT pfn_user_callback_;
  void *p_user_data_;
};

struct OpticalFlowSessionCreatePrivateDataInfoNV {

  using native_type = VkOpticalFlowSessionCreatePrivateDataInfoNV;

  OpticalFlowSessionCreatePrivateDataInfoNV(void *next = {}, uint32_t id = {}, uint32_t size = {}, const void *p_private_data = {})
    : next_(next), id_(id), size_(size), p_private_data_(p_private_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV;
  void *next_;
  uint32_t id_;
  uint32_t size_;
  const void *p_private_data_;
};

struct AccelerationStructureGeometryInstancesDataKHR {

  using native_type = VkAccelerationStructureGeometryInstancesDataKHR;

  AccelerationStructureGeometryInstancesDataKHR(const void *next = {},
                                                bool32 array_of_pointers = {},
                                                VkDeviceOrHostAddressConstKHR data = {})
    : next_(next), array_of_pointers_(array_of_pointers), data_(data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR;
  const void *next_;
  bool32 array_of_pointers_;
  VkDeviceOrHostAddressConstKHR data_;
};

struct BindIndexBufferIndirectCommandNV {

  using native_type = VkBindIndexBufferIndirectCommandNV;

  BindIndexBufferIndirectCommandNV(DeviceAddress buffer_address = {}, uint32_t size = {}, IndexType index_type = {})
    : buffer_address_(buffer_address), size_(size), index_type_(index_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceAddress buffer_address_;
  uint32_t size_;
  IndexType index_type_;
};

struct PhysicalDeviceShaderExpectAssumeFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderExpectAssumeFeaturesKHR;

  PhysicalDeviceShaderExpectAssumeFeaturesKHR(void *next = {}, bool32 shader_expect_assume = {})
    : next_(next), shader_expect_assume_(shader_expect_assume) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR;
  void *next_;
  bool32 shader_expect_assume_;
};

struct CopyMicromapInfoEXT {

  using native_type = VkCopyMicromapInfoEXT;

  CopyMicromapInfoEXT(const void *next = {}, VkMicromapEXT src = {}, VkMicromapEXT dst = {}, CopyMicromapMode mode = {})
    : next_(next), src_(src), dst_(dst), mode_(mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_MICROMAP_INFO_EXT;
  const void *next_;
  VkMicromapEXT src_;
  VkMicromapEXT dst_;
  CopyMicromapMode mode_;
};

struct ExportFenceCreateInfo {

  using native_type = VkExportFenceCreateInfo;

  ExportFenceCreateInfo(const void *next = {}, ExternalFenceHandleTypeMask handle_types = {}) : next_(next), handle_types_(handle_types) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXPORT_FENCE_CREATE_INFO;
  const void *next_;
  ExternalFenceHandleTypeMask handle_types_;
};

struct SwapchainCreateInfoKHR {

  using native_type = VkSwapchainCreateInfoKHR;

  SwapchainCreateInfoKHR(const void *next = {},
                         SwapchainCreateMask flags = {},
                         VkSurfaceKHR surface = {},
                         uint32_t min_image_count = {},
                         Format image_format = {},
                         ColorSpace image_color_space = {},
                         Extent2D image_extent = {},
                         uint32_t image_array_layers = {},
                         ImageUsageMask image_usage = {},
                         SharingMode image_sharing_mode = {},
                         uint32_t queue_family_index_count = {},
                         const uint32_t *p_queue_family_indices = {},
                         SurfaceTransformMaskBit pre_transform = {},
                         CompositeAlphaMaskBit composite_alpha = {},
                         PresentMode present_mode = {},
                         bool32 clipped = {},
                         VkSwapchainKHR old_swapchain = {})
    : next_(next), flags_(flags), surface_(surface), min_image_count_(min_image_count), image_format_(image_format),
      image_color_space_(image_color_space), image_extent_(image_extent), image_array_layers_(image_array_layers),
      image_usage_(image_usage), image_sharing_mode_(image_sharing_mode), queue_family_index_count_(queue_family_index_count),
      p_queue_family_indices_(p_queue_family_indices), pre_transform_(pre_transform), composite_alpha_(composite_alpha),
      present_mode_(present_mode), clipped_(clipped), old_swapchain_(old_swapchain) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SWAPCHAIN_CREATE_INFO_KHR;
  const void *next_;
  SwapchainCreateMask flags_;
  VkSurfaceKHR surface_;
  uint32_t min_image_count_;
  Format image_format_;
  ColorSpace image_color_space_;
  Extent2D image_extent_;
  uint32_t image_array_layers_;
  ImageUsageMask image_usage_;
  SharingMode image_sharing_mode_;
  uint32_t queue_family_index_count_;
  const uint32_t *p_queue_family_indices_;
  SurfaceTransformMaskBit pre_transform_;
  CompositeAlphaMaskBit composite_alpha_;
  PresentMode present_mode_;
  bool32 clipped_;
  VkSwapchainKHR old_swapchain_;
};

struct PhysicalDevicePerformanceQueryFeaturesKHR {

  using native_type = VkPhysicalDevicePerformanceQueryFeaturesKHR;

  PhysicalDevicePerformanceQueryFeaturesKHR(void *next = {},
                                            bool32 performance_counter_query_pools = {},
                                            bool32 performance_counter_multiple_query_pools = {})
    : next_(next), performance_counter_query_pools_(performance_counter_query_pools),
      performance_counter_multiple_query_pools_(performance_counter_multiple_query_pools) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR;
  void *next_;
  bool32 performance_counter_query_pools_;
  bool32 performance_counter_multiple_query_pools_;
};

struct SurfaceFormatKHR {

  using native_type = VkSurfaceFormatKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  Format format_;
  ColorSpace color_space_;
};

struct ImportSemaphoreFdInfoKHR {

  using native_type = VkImportSemaphoreFdInfoKHR;

  ImportSemaphoreFdInfoKHR(const void *next = {},
                           VkSemaphore semaphore = {},
                           SemaphoreImportMask flags = {},
                           ExternalSemaphoreHandleTypeMaskBit handle_type = {},
                           int fd = {})
    : next_(next), semaphore_(semaphore), flags_(flags), handle_type_(handle_type), fd_(fd) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMPORT_SEMAPHORE_FD_INFO_KHR;
  const void *next_;
  VkSemaphore semaphore_;
  SemaphoreImportMask flags_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
  int fd_;
};

struct DescriptorBufferBindingInfoEXT {

  using native_type = VkDescriptorBufferBindingInfoEXT;

  DescriptorBufferBindingInfoEXT(void *next = {}, DeviceAddress address = {}, BufferUsageMask usage = {})
    : next_(next), address_(address), usage_(usage) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_BUFFER_BINDING_INFO_EXT;
  void *next_;
  DeviceAddress address_;
  BufferUsageMask usage_;
};

struct RectLayerKHR {

  using native_type = VkRectLayerKHR;

  RectLayerKHR(Offset2D offset = {}, Extent2D extent = {}, uint32_t layer = {}) : offset_(offset), extent_(extent), layer_(layer) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  Offset2D offset_;
  Extent2D extent_;
  uint32_t layer_;
};

struct PresentRegionKHR {

  using native_type = VkPresentRegionKHR;

  PresentRegionKHR(uint32_t rectangle_count = {}, const RectLayerKHR *p_rectangles = {})
    : rectangle_count_(rectangle_count), p_rectangles_(p_rectangles) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t rectangle_count_;
  const RectLayerKHR *p_rectangles_;
};

struct PresentRegionsKHR {

  using native_type = VkPresentRegionsKHR;

  PresentRegionsKHR(const void *next = {}, uint32_t swapchain_count = {}, const PresentRegionKHR *p_regions = {})
    : next_(next), swapchain_count_(swapchain_count), p_regions_(p_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PRESENT_REGIONS_KHR;
  const void *next_;
  uint32_t swapchain_count_;
  const PresentRegionKHR *p_regions_;
};

struct DebugMarkerMarkerInfoEXT {

  using native_type = VkDebugMarkerMarkerInfoEXT;

  DebugMarkerMarkerInfoEXT(const void *next = {}, const char *p_marker_name = {}, const std::array<float, 4> &color = {})
    : next_(next), p_marker_name_(p_marker_name), color_(color) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEBUG_MARKER_MARKER_INFO_EXT;
  const void *next_;
  const char *p_marker_name_;
  std::array<float, 4> color_;
};

struct DeviceGroupRenderPassBeginInfo {

  using native_type = VkDeviceGroupRenderPassBeginInfo;

  DeviceGroupRenderPassBeginInfo(const void *next = {},
                                 uint32_t device_mask = {},
                                 uint32_t device_render_area_count = {},
                                 const Rect2D *p_device_render_areas = {})
    : next_(next), device_mask_(device_mask), device_render_area_count_(device_render_area_count),
      p_device_render_areas_(p_device_render_areas) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_GROUP_RENDER_PASS_BEGIN_INFO;
  const void *next_;
  uint32_t device_mask_;
  uint32_t device_render_area_count_;
  const Rect2D *p_device_render_areas_;
};

struct DebugMarkerObjectTagInfoEXT {

  using native_type = VkDebugMarkerObjectTagInfoEXT;

  DebugMarkerObjectTagInfoEXT(const void *next = {},
                              DebugReportObjectType object_type = {},
                              uint64_t object = {},
                              uint64_t tag_name = {},
                              size_t tag_size = {},
                              const void *p_tag = {})
    : next_(next), object_type_(object_type), object_(object), tag_name_(tag_name), tag_size_(tag_size), p_tag_(p_tag) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEBUG_MARKER_OBJECT_TAG_INFO_EXT;
  const void *next_;
  DebugReportObjectType object_type_;
  uint64_t object_;
  uint64_t tag_name_;
  size_t tag_size_;
  const void *p_tag_;
};

struct PhysicalDeviceRenderPassStripedFeaturesARM {

  using native_type = VkPhysicalDeviceRenderPassStripedFeaturesARM;

  PhysicalDeviceRenderPassStripedFeaturesARM(void *next = {}, bool32 render_pass_striped = {})
    : next_(next), render_pass_striped_(render_pass_striped) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM;
  void *next_;
  bool32 render_pass_striped_;
};

struct PipelineViewportExclusiveScissorStateCreateInfoNV {

  using native_type = VkPipelineViewportExclusiveScissorStateCreateInfoNV;

  PipelineViewportExclusiveScissorStateCreateInfoNV(const void *next = {},
                                                    uint32_t exclusive_scissor_count = {},
                                                    const Rect2D *p_exclusive_scissors = {})
    : next_(next), exclusive_scissor_count_(exclusive_scissor_count), p_exclusive_scissors_(p_exclusive_scissors) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV;
  const void *next_;
  uint32_t exclusive_scissor_count_;
  const Rect2D *p_exclusive_scissors_;
};

struct DebugMarkerObjectNameInfoEXT {

  using native_type = VkDebugMarkerObjectNameInfoEXT;

  DebugMarkerObjectNameInfoEXT(const void *next = {},
                               DebugReportObjectType object_type = {},
                               uint64_t object = {},
                               const char *p_object_name = {})
    : next_(next), object_type_(object_type), object_(object), p_object_name_(p_object_name) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
  const void *next_;
  DebugReportObjectType object_type_;
  uint64_t object_;
  const char *p_object_name_;
};

struct PhysicalDeviceExternalBufferInfo {

  using native_type = VkPhysicalDeviceExternalBufferInfo;

  PhysicalDeviceExternalBufferInfo(const void *next = {},
                                   BufferCreateMask flags = {},
                                   BufferUsageMask usage = {},
                                   ExternalMemoryHandleTypeMaskBit handle_type = {})
    : next_(next), flags_(flags), usage_(usage), handle_type_(handle_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO;
  const void *next_;
  BufferCreateMask flags_;
  BufferUsageMask usage_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct CopyMemoryToImageIndirectCommandNV {

  using native_type = VkCopyMemoryToImageIndirectCommandNV;

  CopyMemoryToImageIndirectCommandNV(DeviceAddress src_address = {},
                                     uint32_t buffer_row_length = {},
                                     uint32_t buffer_image_height = {},
                                     ImageSubresourceLayers image_subresource = {},
                                     Offset3D image_offset = {},
                                     Extent3D image_extent = {})
    : src_address_(src_address), buffer_row_length_(buffer_row_length), buffer_image_height_(buffer_image_height),
      image_subresource_(image_subresource), image_offset_(image_offset), image_extent_(image_extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceAddress src_address_;
  uint32_t buffer_row_length_;
  uint32_t buffer_image_height_;
  ImageSubresourceLayers image_subresource_;
  Offset3D image_offset_;
  Extent3D image_extent_;
};

struct PhysicalDeviceMaintenance4Features {

  using native_type = VkPhysicalDeviceMaintenance4Features;

  PhysicalDeviceMaintenance4Features(void *next = {}, bool32 maintenance4 = {}) : next_(next), maintenance4_(maintenance4) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES;
  void *next_;
  bool32 maintenance4_;
};

struct PhysicalDeviceInvocationMaskFeaturesHUAWEI {

  using native_type = VkPhysicalDeviceInvocationMaskFeaturesHUAWEI;

  PhysicalDeviceInvocationMaskFeaturesHUAWEI(void *next = {}, bool32 invocation_mask = {})
    : next_(next), invocation_mask_(invocation_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI;
  void *next_;
  bool32 invocation_mask_;
};

struct BufferImageCopy {

  using native_type = VkBufferImageCopy;

  BufferImageCopy(DeviceSize buffer_offset = {},
                  uint32_t buffer_row_length = {},
                  uint32_t buffer_image_height = {},
                  ImageSubresourceLayers image_subresource = {},
                  Offset3D image_offset = {},
                  Extent3D image_extent = {})
    : buffer_offset_(buffer_offset), buffer_row_length_(buffer_row_length), buffer_image_height_(buffer_image_height),
      image_subresource_(image_subresource), image_offset_(image_offset), image_extent_(image_extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceSize buffer_offset_;
  uint32_t buffer_row_length_;
  uint32_t buffer_image_height_;
  ImageSubresourceLayers image_subresource_;
  Offset3D image_offset_;
  Extent3D image_extent_;
};

struct CopyAccelerationStructureInfoKHR {

  using native_type = VkCopyAccelerationStructureInfoKHR;

  CopyAccelerationStructureInfoKHR(const void *next = {},
                                   VkAccelerationStructureKHR src = {},
                                   VkAccelerationStructureKHR dst = {},
                                   CopyAccelerationStructureMode mode = {})
    : next_(next), src_(src), dst_(dst), mode_(mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_ACCELERATION_STRUCTURE_INFO_KHR;
  const void *next_;
  VkAccelerationStructureKHR src_;
  VkAccelerationStructureKHR dst_;
  CopyAccelerationStructureMode mode_;
};

struct PhysicalDeviceShadingRateImagePropertiesNV {

  using native_type = VkPhysicalDeviceShadingRateImagePropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV;
  void *next_;
  Extent2D shading_rate_texel_size_;
  uint32_t shading_rate_palette_size_;
  uint32_t shading_rate_max_coarse_samples_;
};

struct ImageBlit {

  using native_type = VkImageBlit;

  ImageBlit(ImageSubresourceLayers src_subresource = {},
            const std::array<Offset3D, 2> &src_offsets = {},
            ImageSubresourceLayers dst_subresource = {},
            const std::array<Offset3D, 2> &dst_offsets = {})
    : src_subresource_(src_subresource), src_offsets_(src_offsets), dst_subresource_(dst_subresource), dst_offsets_(dst_offsets) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ImageSubresourceLayers src_subresource_;
  std::array<Offset3D, 2> src_offsets_;
  ImageSubresourceLayers dst_subresource_;
  std::array<Offset3D, 2> dst_offsets_;
};

struct AccelerationStructureMemoryRequirementsInfoNV {

  using native_type = VkAccelerationStructureMemoryRequirementsInfoNV;

  AccelerationStructureMemoryRequirementsInfoNV(const void *next = {},
                                                AccelerationStructureMemoryRequirementsType type = {},
                                                VkAccelerationStructureNV acceleration_structure = {})
    : next_(next), type_(type), acceleration_structure_(acceleration_structure) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV;
  const void *next_;
  AccelerationStructureMemoryRequirementsType type_;
  VkAccelerationStructureNV acceleration_structure_;
};

struct PhysicalDeviceVulkan11Properties {

  using native_type = VkPhysicalDeviceVulkan11Properties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES;
  void *next_;
  std::array<uint8_t, VK_UUID_SIZE> device_uuid_;
  std::array<uint8_t, VK_UUID_SIZE> driver_uuid_;
  std::array<uint8_t, VK_LUID_SIZE> device_luid_;
  uint32_t device_node_mask_;
  bool32 device_luidvalid_;
  uint32_t subgroup_size_;
  ShaderStageMask subgroup_supported_stages_;
  SubgroupFeatureMask subgroup_supported_operations_;
  bool32 subgroup_quad_operations_in_all_stages_;
  PointClippingBehavior point_clipping_behavior_;
  uint32_t max_multiview_view_count_;
  uint32_t max_multiview_instance_index_;
  bool32 protected_no_fault_;
  uint32_t max_per_set_descriptors_;
  DeviceSize max_memory_allocation_size_;
};

struct BufferUsageFlags2CreateInfoKHR {

  using native_type = VkBufferUsageFlags2CreateInfoKHR;

  BufferUsageFlags2CreateInfoKHR(const void *next = {}, BufferUsageMask2 usage = {}) : next_(next), usage_(usage) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR;
  const void *next_;
  BufferUsageMask2 usage_;
};

struct SurfaceCapabilitiesKHR {

  using native_type = VkSurfaceCapabilitiesKHR;

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

struct RenderingAttachmentLocationInfoKHR {

  using native_type = VkRenderingAttachmentLocationInfoKHR;

  RenderingAttachmentLocationInfoKHR(const void *next = {},
                                     uint32_t color_attachment_count = {},
                                     const uint32_t *p_color_attachment_locations = {})
    : next_(next), color_attachment_count_(color_attachment_count), p_color_attachment_locations_(p_color_attachment_locations) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDERING_ATTACHMENT_LOCATION_INFO_KHR;
  const void *next_;
  uint32_t color_attachment_count_;
  const uint32_t *p_color_attachment_locations_;
};

struct PhysicalDeviceYcbcrImageArraysFeaturesEXT {

  using native_type = VkPhysicalDeviceYcbcrImageArraysFeaturesEXT;

  PhysicalDeviceYcbcrImageArraysFeaturesEXT(void *next = {}, bool32 ycbcr_image_arrays = {})
    : next_(next), ycbcr_image_arrays_(ycbcr_image_arrays) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT;
  void *next_;
  bool32 ycbcr_image_arrays_;
};

struct PhysicalDeviceUniformBufferStandardLayoutFeatures {

  using native_type = VkPhysicalDeviceUniformBufferStandardLayoutFeatures;

  PhysicalDeviceUniformBufferStandardLayoutFeatures(void *next = {}, bool32 uniform_buffer_standard_layout = {})
    : next_(next), uniform_buffer_standard_layout_(uniform_buffer_standard_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES;
  void *next_;
  bool32 uniform_buffer_standard_layout_;
};

struct BufferCopy {

  using native_type = VkBufferCopy;

  BufferCopy(DeviceSize src_offset = {}, DeviceSize dst_offset = {}, DeviceSize size = {})
    : src_offset_(src_offset), dst_offset_(dst_offset), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceSize src_offset_;
  DeviceSize dst_offset_;
  DeviceSize size_;
};

struct PipelineSampleLocationsStateCreateInfoEXT {

  using native_type = VkPipelineSampleLocationsStateCreateInfoEXT;

  PipelineSampleLocationsStateCreateInfoEXT(const void *next = {},
                                            bool32 sample_locations_enable = {},
                                            SampleLocationsInfoEXT sample_locations_info = {})
    : next_(next), sample_locations_enable_(sample_locations_enable), sample_locations_info_(sample_locations_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;
  const void *next_;
  bool32 sample_locations_enable_;
  SampleLocationsInfoEXT sample_locations_info_;
};

struct AttachmentSampleLocationsEXT {

  using native_type = VkAttachmentSampleLocationsEXT;

  AttachmentSampleLocationsEXT(uint32_t attachment_index = {}, SampleLocationsInfoEXT sample_locations_info = {})
    : attachment_index_(attachment_index), sample_locations_info_(sample_locations_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t attachment_index_;
  SampleLocationsInfoEXT sample_locations_info_;
};

struct PhysicalDeviceShaderIntegerDotProductProperties {

  using native_type = VkPhysicalDeviceShaderIntegerDotProductProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES;
  void *next_;
  bool32 integer_dot_product8bit_unsigned_accelerated_;
  bool32 integer_dot_product8bit_signed_accelerated_;
  bool32 integer_dot_product8bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product4x8bit_packed_unsigned_accelerated_;
  bool32 integer_dot_product4x8bit_packed_signed_accelerated_;
  bool32 integer_dot_product4x8bit_packed_mixed_signedness_accelerated_;
  bool32 integer_dot_product16bit_unsigned_accelerated_;
  bool32 integer_dot_product16bit_signed_accelerated_;
  bool32 integer_dot_product16bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product32bit_unsigned_accelerated_;
  bool32 integer_dot_product32bit_signed_accelerated_;
  bool32 integer_dot_product32bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product64bit_unsigned_accelerated_;
  bool32 integer_dot_product64bit_signed_accelerated_;
  bool32 integer_dot_product64bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product_accumulating_saturating8bit_unsigned_accelerated_;
  bool32 integer_dot_product_accumulating_saturating8bit_signed_accelerated_;
  bool32 integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated_;
  bool32 integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated_;
  bool32 integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated_;
  bool32 integer_dot_product_accumulating_saturating16bit_unsigned_accelerated_;
  bool32 integer_dot_product_accumulating_saturating16bit_signed_accelerated_;
  bool32 integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product_accumulating_saturating32bit_unsigned_accelerated_;
  bool32 integer_dot_product_accumulating_saturating32bit_signed_accelerated_;
  bool32 integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated_;
  bool32 integer_dot_product_accumulating_saturating64bit_unsigned_accelerated_;
  bool32 integer_dot_product_accumulating_saturating64bit_signed_accelerated_;
  bool32 integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated_;
};

struct PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT {

  using native_type = VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;

  PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(void *next = {}, bool32 pageable_device_local_memory = {})
    : next_(next), pageable_device_local_memory_(pageable_device_local_memory) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT;
  void *next_;
  bool32 pageable_device_local_memory_;
};

struct PipelineDynamicStateCreateInfo {

  using native_type = VkPipelineDynamicStateCreateInfo;

  PipelineDynamicStateCreateInfo(const void *next = {},
                                 PipelineDynamicStateCreateMask flags = {},
                                 uint32_t dynamic_state_count = {},
                                 const DynamicState *p_dynamic_states = {})
    : next_(next), flags_(flags), dynamic_state_count_(dynamic_state_count), p_dynamic_states_(p_dynamic_states) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_DYNAMIC_STATE_CREATE_INFO;
  const void *next_;
  PipelineDynamicStateCreateMask flags_;
  uint32_t dynamic_state_count_;
  const DynamicState *p_dynamic_states_;
};

struct ExternalMemoryImageCreateInfo {

  using native_type = VkExternalMemoryImageCreateInfo;

  ExternalMemoryImageCreateInfo(const void *next = {}, ExternalMemoryHandleTypeMask handle_types = {})
    : next_(next), handle_types_(handle_types) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXTERNAL_MEMORY_IMAGE_CREATE_INFO;
  const void *next_;
  ExternalMemoryHandleTypeMask handle_types_;
};

struct DeviceEventInfoEXT {

  using native_type = VkDeviceEventInfoEXT;

  DeviceEventInfoEXT(const void *next = {}, DeviceEventType device_event = {}) : next_(next), device_event_(device_event) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_EVENT_INFO_EXT;
  const void *next_;
  DeviceEventType device_event_;
};

struct PhysicalDeviceInlineUniformBlockFeatures {

  using native_type = VkPhysicalDeviceInlineUniformBlockFeatures;

  PhysicalDeviceInlineUniformBlockFeatures(void *next = {},
                                           bool32 inline_uniform_block = {},
                                           bool32 descriptor_binding_inline_uniform_block_update_after_bind = {})
    : next_(next), inline_uniform_block_(inline_uniform_block),
      descriptor_binding_inline_uniform_block_update_after_bind_(descriptor_binding_inline_uniform_block_update_after_bind) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES;
  void *next_;
  bool32 inline_uniform_block_;
  bool32 descriptor_binding_inline_uniform_block_update_after_bind_;
};

struct CuModuleCreateInfoNVX {

  using native_type = VkCuModuleCreateInfoNVX;

  CuModuleCreateInfoNVX(const void *next = {}, size_t data_size = {}, const void *p_data = {})
    : next_(next), data_size_(data_size), p_data_(p_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::CU_MODULE_CREATE_INFO_NVX;
  const void *next_;
  size_t data_size_;
  const void *p_data_;
};

struct VideoDecodeH265PictureInfoKHR {

  using native_type = VkVideoDecodeH265PictureInfoKHR;

  VideoDecodeH265PictureInfoKHR(const void *next = {},
                                const StdVideoDecodeH265PictureInfo *p_std_picture_info = {},
                                uint32_t slice_segment_count = {},
                                const uint32_t *p_slice_segment_offsets = {})
    : next_(next), p_std_picture_info_(p_std_picture_info), slice_segment_count_(slice_segment_count),
      p_slice_segment_offsets_(p_slice_segment_offsets) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H265_PICTURE_INFO_KHR;
  const void *next_;
  const StdVideoDecodeH265PictureInfo *p_std_picture_info_;
  uint32_t slice_segment_count_;
  const uint32_t *p_slice_segment_offsets_;
};

struct ImageViewCreateInfo {

  using native_type = VkImageViewCreateInfo;

  ImageViewCreateInfo(const void *next = {},
                      ImageViewCreateMask flags = {},
                      VkImage image = {},
                      ImageViewType view_type = {},
                      Format format = {},
                      ComponentMapping components = {},
                      ImageSubresourceRange subresource_range = {})
    : next_(next), flags_(flags), image_(image), view_type_(view_type), format_(format), components_(components),
      subresource_range_(subresource_range) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_VIEW_CREATE_INFO;
  const void *next_;
  ImageViewCreateMask flags_;
  VkImage image_;
  ImageViewType view_type_;
  Format format_;
  ComponentMapping components_;
  ImageSubresourceRange subresource_range_;
};

struct CommandBufferInheritanceRenderingInfo {

  using native_type = VkCommandBufferInheritanceRenderingInfo;

  CommandBufferInheritanceRenderingInfo(const void *next = {},
                                        RenderingMask flags = {},
                                        uint32_t view_mask = {},
                                        uint32_t color_attachment_count = {},
                                        const Format *p_color_attachment_formats = {},
                                        Format depth_attachment_format = {},
                                        Format stencil_attachment_format = {},
                                        SampleCountMaskBit rasterization_samples = {})
    : next_(next), flags_(flags), view_mask_(view_mask), color_attachment_count_(color_attachment_count),
      p_color_attachment_formats_(p_color_attachment_formats), depth_attachment_format_(depth_attachment_format),
      stencil_attachment_format_(stencil_attachment_format), rasterization_samples_(rasterization_samples) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMMAND_BUFFER_INHERITANCE_RENDERING_INFO;
  const void *next_;
  RenderingMask flags_;
  uint32_t view_mask_;
  uint32_t color_attachment_count_;
  const Format *p_color_attachment_formats_;
  Format depth_attachment_format_;
  Format stencil_attachment_format_;
  SampleCountMaskBit rasterization_samples_;
};

struct PhysicalDeviceLineRasterizationFeaturesKHR {

  using native_type = VkPhysicalDeviceLineRasterizationFeaturesKHR;

  PhysicalDeviceLineRasterizationFeaturesKHR(void *next = {},
                                             bool32 rectangular_lines = {},
                                             bool32 bresenham_lines = {},
                                             bool32 smooth_lines = {},
                                             bool32 stippled_rectangular_lines = {},
                                             bool32 stippled_bresenham_lines = {},
                                             bool32 stippled_smooth_lines = {})
    : next_(next), rectangular_lines_(rectangular_lines), bresenham_lines_(bresenham_lines), smooth_lines_(smooth_lines),
      stippled_rectangular_lines_(stippled_rectangular_lines), stippled_bresenham_lines_(stippled_bresenham_lines),
      stippled_smooth_lines_(stippled_smooth_lines) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR;
  void *next_;
  bool32 rectangular_lines_;
  bool32 bresenham_lines_;
  bool32 smooth_lines_;
  bool32 stippled_rectangular_lines_;
  bool32 stippled_bresenham_lines_;
  bool32 stippled_smooth_lines_;
};

struct VideoDecodeH265CapabilitiesKHR {

  using native_type = VkVideoDecodeH265CapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H265_CAPABILITIES_KHR;
  void *next_;
  StdVideoH265LevelIdc max_level_idc_;
};

struct AttachmentReference {

  using native_type = VkAttachmentReference;

  AttachmentReference(uint32_t attachment = {}, ImageLayout layout = {}) : attachment_(attachment), layout_(layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t attachment_;
  ImageLayout layout_;
};

struct SubpassDescription {

  using native_type = VkSubpassDescription;

  SubpassDescription(SubpassDescriptionMask flags = {},
                     PipelineBindPoint pipeline_bind_point = {},
                     uint32_t input_attachment_count = {},
                     const AttachmentReference *p_input_attachments = {},
                     uint32_t color_attachment_count = {},
                     const AttachmentReference *p_color_attachments = {},
                     const AttachmentReference *p_resolve_attachments = {},
                     const AttachmentReference *p_depth_stencil_attachment = {},
                     uint32_t preserve_attachment_count = {},
                     const uint32_t *p_preserve_attachments = {})
    : flags_(flags), pipeline_bind_point_(pipeline_bind_point), input_attachment_count_(input_attachment_count),
      p_input_attachments_(p_input_attachments), color_attachment_count_(color_attachment_count), p_color_attachments_(p_color_attachments),
      p_resolve_attachments_(p_resolve_attachments), p_depth_stencil_attachment_(p_depth_stencil_attachment),
      preserve_attachment_count_(preserve_attachment_count), p_preserve_attachments_(p_preserve_attachments) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  SubpassDescriptionMask flags_;
  PipelineBindPoint pipeline_bind_point_;
  uint32_t input_attachment_count_;
  const AttachmentReference *p_input_attachments_;
  uint32_t color_attachment_count_;
  const AttachmentReference *p_color_attachments_;
  const AttachmentReference *p_resolve_attachments_;
  const AttachmentReference *p_depth_stencil_attachment_;
  uint32_t preserve_attachment_count_;
  const uint32_t *p_preserve_attachments_;
};

struct PhysicalDeviceSamplerFilterMinmaxProperties {

  using native_type = VkPhysicalDeviceSamplerFilterMinmaxProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES;
  void *next_;
  bool32 filter_minmax_single_component_formats_;
  bool32 filter_minmax_image_component_mapping_;
};

struct CudaFunctionCreateInfoNV {

  using native_type = VkCudaFunctionCreateInfoNV;

  CudaFunctionCreateInfoNV(const void *next = {}, VkCudaModuleNV module = {}, const char *p_name = {})
    : next_(next), module_(module), p_name_(p_name) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::CUDA_FUNCTION_CREATE_INFO_NV;
  const void *next_;
  VkCudaModuleNV module_;
  const char *p_name_;
};

struct HostImageLayoutTransitionInfoEXT {

  using native_type = VkHostImageLayoutTransitionInfoEXT;

  HostImageLayoutTransitionInfoEXT(const void *next = {},
                                   VkImage image = {},
                                   ImageLayout old_layout = {},
                                   ImageLayout new_layout = {},
                                   ImageSubresourceRange subresource_range = {})
    : next_(next), image_(image), old_layout_(old_layout), new_layout_(new_layout), subresource_range_(subresource_range) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT;
  const void *next_;
  VkImage image_;
  ImageLayout old_layout_;
  ImageLayout new_layout_;
  ImageSubresourceRange subresource_range_;
};

struct ShadingRatePaletteNV {

  using native_type = VkShadingRatePaletteNV;

  ShadingRatePaletteNV(uint32_t shading_rate_palette_entry_count = {}, const ShadingRatePaletteEntry *p_shading_rate_palette_entries = {})
    : shading_rate_palette_entry_count_(shading_rate_palette_entry_count), p_shading_rate_palette_entries_(p_shading_rate_palette_entries) {
  }

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t shading_rate_palette_entry_count_;
  const ShadingRatePaletteEntry *p_shading_rate_palette_entries_;
};

struct PhysicalDeviceExternalSemaphoreInfo {

  using native_type = VkPhysicalDeviceExternalSemaphoreInfo;

  PhysicalDeviceExternalSemaphoreInfo(const void *next = {}, ExternalSemaphoreHandleTypeMaskBit handle_type = {})
    : next_(next), handle_type_(handle_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;
  const void *next_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
};

struct SparseMemoryBind {

  using native_type = VkSparseMemoryBind;

  SparseMemoryBind(DeviceSize resource_offset = {},
                   DeviceSize size = {},
                   VkDeviceMemory memory = {},
                   DeviceSize memory_offset = {},
                   SparseMemoryBindMask flags = {})
    : resource_offset_(resource_offset), size_(size), memory_(memory), memory_offset_(memory_offset), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceSize resource_offset_;
  DeviceSize size_;
  VkDeviceMemory memory_;
  DeviceSize memory_offset_;
  SparseMemoryBindMask flags_;
};

struct SparseBufferMemoryBindInfo {

  using native_type = VkSparseBufferMemoryBindInfo;

  SparseBufferMemoryBindInfo(VkBuffer buffer = {}, uint32_t bind_count = {}, const SparseMemoryBind *p_binds = {})
    : buffer_(buffer), bind_count_(bind_count), p_binds_(p_binds) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  VkBuffer buffer_;
  uint32_t bind_count_;
  const SparseMemoryBind *p_binds_;
};

struct PhysicalDeviceMeshShaderPropertiesEXT {

  using native_type = VkPhysicalDeviceMeshShaderPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT;
  void *next_;
  uint32_t max_task_work_group_total_count_;
  std::array<uint32_t, 3> max_task_work_group_count_;
  uint32_t max_task_work_group_invocations_;
  std::array<uint32_t, 3> max_task_work_group_size_;
  uint32_t max_task_payload_size_;
  uint32_t max_task_shared_memory_size_;
  uint32_t max_task_payload_and_shared_memory_size_;
  uint32_t max_mesh_work_group_total_count_;
  std::array<uint32_t, 3> max_mesh_work_group_count_;
  uint32_t max_mesh_work_group_invocations_;
  std::array<uint32_t, 3> max_mesh_work_group_size_;
  uint32_t max_mesh_shared_memory_size_;
  uint32_t max_mesh_payload_and_shared_memory_size_;
  uint32_t max_mesh_output_memory_size_;
  uint32_t max_mesh_payload_and_output_memory_size_;
  uint32_t max_mesh_output_components_;
  uint32_t max_mesh_output_vertices_;
  uint32_t max_mesh_output_primitives_;
  uint32_t max_mesh_output_layers_;
  uint32_t max_mesh_multiview_view_count_;
  uint32_t mesh_output_per_vertex_granularity_;
  uint32_t mesh_output_per_primitive_granularity_;
  uint32_t max_preferred_task_work_group_invocations_;
  uint32_t max_preferred_mesh_work_group_invocations_;
  bool32 prefers_local_invocation_vertex_output_;
  bool32 prefers_local_invocation_primitive_output_;
  bool32 prefers_compact_vertex_output_;
  bool32 prefers_compact_primitive_output_;
};

struct PhysicalDeviceNestedCommandBufferFeaturesEXT {

  using native_type = VkPhysicalDeviceNestedCommandBufferFeaturesEXT;

  PhysicalDeviceNestedCommandBufferFeaturesEXT(void *next = {},
                                               bool32 nested_command_buffer = {},
                                               bool32 nested_command_buffer_rendering = {},
                                               bool32 nested_command_buffer_simultaneous_use = {})
    : next_(next), nested_command_buffer_(nested_command_buffer), nested_command_buffer_rendering_(nested_command_buffer_rendering),
      nested_command_buffer_simultaneous_use_(nested_command_buffer_simultaneous_use) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT;
  void *next_;
  bool32 nested_command_buffer_;
  bool32 nested_command_buffer_rendering_;
  bool32 nested_command_buffer_simultaneous_use_;
};

struct PhysicalDeviceMaintenance3Properties {

  using native_type = VkPhysicalDeviceMaintenance3Properties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;
  void *next_;
  uint32_t max_per_set_descriptors_;
  DeviceSize max_memory_allocation_size_;
};

struct BufferMemoryBarrier {

  using native_type = VkBufferMemoryBarrier;

  BufferMemoryBarrier(const void *next = {},
                      AccessMask src_access_mask = {},
                      AccessMask dst_access_mask = {},
                      uint32_t src_queue_family_index = {},
                      uint32_t dst_queue_family_index = {},
                      VkBuffer buffer = {},
                      DeviceSize offset = {},
                      DeviceSize size = {})
    : next_(next), src_access_mask_(src_access_mask), dst_access_mask_(dst_access_mask), src_queue_family_index_(src_queue_family_index),
      dst_queue_family_index_(dst_queue_family_index), buffer_(buffer), offset_(offset), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_MEMORY_BARRIER;
  const void *next_;
  AccessMask src_access_mask_;
  AccessMask dst_access_mask_;
  uint32_t src_queue_family_index_;
  uint32_t dst_queue_family_index_;
  VkBuffer buffer_;
  DeviceSize offset_;
  DeviceSize size_;
};

struct MemoryGetRemoteAddressInfoNV {

  using native_type = VkMemoryGetRemoteAddressInfoNV;

  MemoryGetRemoteAddressInfoNV(const void *next = {}, VkDeviceMemory memory = {}, ExternalMemoryHandleTypeMaskBit handle_type = {})
    : next_(next), memory_(memory), handle_type_(handle_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_GET_REMOTE_ADDRESS_INFO_NV;
  const void *next_;
  VkDeviceMemory memory_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
};

struct BufferDeviceAddressCreateInfoEXT {

  using native_type = VkBufferDeviceAddressCreateInfoEXT;

  BufferDeviceAddressCreateInfoEXT(const void *next = {}, DeviceAddress device_address = {})
    : next_(next), device_address_(device_address) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT;
  const void *next_;
  DeviceAddress device_address_;
};

struct OpticalFlowExecuteInfoNV {

  using native_type = VkOpticalFlowExecuteInfoNV;

  OpticalFlowExecuteInfoNV(void *next = {}, OpticalFlowExecuteMask flags = {}, uint32_t region_count = {}, const Rect2D *p_regions = {})
    : next_(next), flags_(flags), region_count_(region_count), p_regions_(p_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::OPTICAL_FLOW_EXECUTE_INFO_NV;
  void *next_;
  OpticalFlowExecuteMask flags_;
  uint32_t region_count_;
  const Rect2D *p_regions_;
};

struct ClearRect {

  using native_type = VkClearRect;

  ClearRect(Rect2D rect = {}, uint32_t base_array_layer = {}, uint32_t layer_count = {})
    : rect_(rect), base_array_layer_(base_array_layer), layer_count_(layer_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  Rect2D rect_;
  uint32_t base_array_layer_;
  uint32_t layer_count_;
};

struct FramebufferAttachmentImageInfo {

  using native_type = VkFramebufferAttachmentImageInfo;

  FramebufferAttachmentImageInfo(const void *next = {},
                                 ImageCreateMask flags = {},
                                 ImageUsageMask usage = {},
                                 uint32_t width = {},
                                 uint32_t height = {},
                                 uint32_t layer_count = {},
                                 uint32_t view_format_count = {},
                                 const Format *p_view_formats = {})
    : next_(next), flags_(flags), usage_(usage), width_(width), height_(height), layer_count_(layer_count),
      view_format_count_(view_format_count), p_view_formats_(p_view_formats) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FRAMEBUFFER_ATTACHMENT_IMAGE_INFO;
  const void *next_;
  ImageCreateMask flags_;
  ImageUsageMask usage_;
  uint32_t width_;
  uint32_t height_;
  uint32_t layer_count_;
  uint32_t view_format_count_;
  const Format *p_view_formats_;
};

struct FramebufferAttachmentsCreateInfo {

  using native_type = VkFramebufferAttachmentsCreateInfo;

  FramebufferAttachmentsCreateInfo(const void *next = {},
                                   uint32_t attachment_image_info_count = {},
                                   const FramebufferAttachmentImageInfo *p_attachment_image_infos = {})
    : next_(next), attachment_image_info_count_(attachment_image_info_count), p_attachment_image_infos_(p_attachment_image_infos) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FRAMEBUFFER_ATTACHMENTS_CREATE_INFO;
  const void *next_;
  uint32_t attachment_image_info_count_;
  const FramebufferAttachmentImageInfo *p_attachment_image_infos_;
};

struct PhysicalDeviceFragmentShadingRatePropertiesKHR {

  using native_type = VkPhysicalDeviceFragmentShadingRatePropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR;
  void *next_;
  Extent2D min_fragment_shading_rate_attachment_texel_size_;
  Extent2D max_fragment_shading_rate_attachment_texel_size_;
  uint32_t max_fragment_shading_rate_attachment_texel_size_aspect_ratio_;
  bool32 primitive_fragment_shading_rate_with_multiple_viewports_;
  bool32 layered_shading_rate_attachments_;
  bool32 fragment_shading_rate_non_trivial_combiner_ops_;
  Extent2D max_fragment_size_;
  uint32_t max_fragment_size_aspect_ratio_;
  uint32_t max_fragment_shading_rate_coverage_samples_;
  SampleCountMaskBit max_fragment_shading_rate_rasterization_samples_;
  bool32 fragment_shading_rate_with_shader_depth_stencil_writes_;
  bool32 fragment_shading_rate_with_sample_mask_;
  bool32 fragment_shading_rate_with_shader_sample_mask_;
  bool32 fragment_shading_rate_with_conservative_rasterization_;
  bool32 fragment_shading_rate_with_fragment_shader_interlock_;
  bool32 fragment_shading_rate_with_custom_sample_locations_;
  bool32 fragment_shading_rate_strict_multiply_combiner_;
};

struct BindImageMemorySwapchainInfoKHR {

  using native_type = VkBindImageMemorySwapchainInfoKHR;

  BindImageMemorySwapchainInfoKHR(const void *next = {}, VkSwapchainKHR swapchain = {}, uint32_t image_index = {})
    : next_(next), swapchain_(swapchain), image_index_(image_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;
  const void *next_;
  VkSwapchainKHR swapchain_;
  uint32_t image_index_;
};

struct ShaderResourceUsageAMD {

  using native_type = VkShaderResourceUsageAMD;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t num_used_vgprs_;
  uint32_t num_used_sgprs_;
  uint32_t lds_size_per_local_work_group_;
  size_t lds_usage_size_in_bytes_;
  size_t scratch_mem_usage_in_bytes_;
};

struct ShaderStatisticsInfoAMD {

  using native_type = VkShaderStatisticsInfoAMD;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ShaderStageMask shader_stage_mask_;
  ShaderResourceUsageAMD resource_usage_;
  uint32_t num_physical_vgprs_;
  uint32_t num_physical_sgprs_;
  uint32_t num_available_vgprs_;
  uint32_t num_available_sgprs_;
  std::array<uint32_t, 3> compute_work_group_size_;
};

struct PhysicalDeviceGroupProperties {

  using native_type = VkPhysicalDeviceGroupProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_GROUP_PROPERTIES;
  void *next_;
  uint32_t physical_device_count_;
  std::array<VkPhysicalDevice, VK_MAX_DEVICE_GROUP_SIZE> physical_devices_;
  bool32 subset_allocation_;
};

struct ImageCopy {

  using native_type = VkImageCopy;

  ImageCopy(ImageSubresourceLayers src_subresource = {},
            Offset3D src_offset = {},
            ImageSubresourceLayers dst_subresource = {},
            Offset3D dst_offset = {},
            Extent3D extent = {})
    : src_subresource_(src_subresource), src_offset_(src_offset), dst_subresource_(dst_subresource), dst_offset_(dst_offset),
      extent_(extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ImageSubresourceLayers src_subresource_;
  Offset3D src_offset_;
  ImageSubresourceLayers dst_subresource_;
  Offset3D dst_offset_;
  Extent3D extent_;
};

struct PhysicalDeviceLegacyDitheringFeaturesEXT {

  using native_type = VkPhysicalDeviceLegacyDitheringFeaturesEXT;

  PhysicalDeviceLegacyDitheringFeaturesEXT(void *next = {}, bool32 legacy_dithering = {})
    : next_(next), legacy_dithering_(legacy_dithering) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT;
  void *next_;
  bool32 legacy_dithering_;
};

struct PhysicalDeviceRayTracingPropertiesNV {

  using native_type = VkPhysicalDeviceRayTracingPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV;
  void *next_;
  uint32_t shader_group_handle_size_;
  uint32_t max_recursion_depth_;
  uint32_t max_shader_group_stride_;
  uint32_t shader_group_base_alignment_;
  uint64_t max_geometry_count_;
  uint64_t max_instance_count_;
  uint64_t max_triangle_count_;
  uint32_t max_descriptor_set_acceleration_structures_;
};

struct PhysicalDeviceMultiviewFeatures {

  using native_type = VkPhysicalDeviceMultiviewFeatures;

  PhysicalDeviceMultiviewFeatures(void *next = {},
                                  bool32 multiview = {},
                                  bool32 multiview_geometry_shader = {},
                                  bool32 multiview_tessellation_shader = {})
    : next_(next), multiview_(multiview), multiview_geometry_shader_(multiview_geometry_shader),
      multiview_tessellation_shader_(multiview_tessellation_shader) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
  void *next_;
  bool32 multiview_;
  bool32 multiview_geometry_shader_;
  bool32 multiview_tessellation_shader_;
};

struct DeviceGroupSwapchainCreateInfoKHR {

  using native_type = VkDeviceGroupSwapchainCreateInfoKHR;

  DeviceGroupSwapchainCreateInfoKHR(const void *next = {}, DeviceGroupPresentModeMask modes = {}) : next_(next), modes_(modes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;
  const void *next_;
  DeviceGroupPresentModeMask modes_;
};

struct PipelineCreateFlags2CreateInfoKHR {

  using native_type = VkPipelineCreateFlags2CreateInfoKHR;

  PipelineCreateFlags2CreateInfoKHR(const void *next = {}, PipelineCreateMask2 flags = {}) : next_(next), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR;
  const void *next_;
  PipelineCreateMask2 flags_;
};

struct DedicatedAllocationMemoryAllocateInfoNV {

  using native_type = VkDedicatedAllocationMemoryAllocateInfoNV;

  DedicatedAllocationMemoryAllocateInfoNV(const void *next = {}, VkImage image = {}, VkBuffer buffer = {})
    : next_(next), image_(image), buffer_(buffer) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;
  const void *next_;
  VkImage image_;
  VkBuffer buffer_;
};

struct PhysicalDeviceCustomBorderColorPropertiesEXT {

  using native_type = VkPhysicalDeviceCustomBorderColorPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT;
  void *next_;
  uint32_t max_custom_border_color_samplers_;
};

struct ComputePipelineIndirectBufferInfoNV {

  using native_type = VkComputePipelineIndirectBufferInfoNV;

  ComputePipelineIndirectBufferInfoNV(const void *next = {},
                                      DeviceAddress device_address = {},
                                      DeviceSize size = {},
                                      DeviceAddress pipeline_device_address_capture_replay = {})
    : next_(next), device_address_(device_address), size_(size),
      pipeline_device_address_capture_replay_(pipeline_device_address_capture_replay) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV;
  const void *next_;
  DeviceAddress device_address_;
  DeviceSize size_;
  DeviceAddress pipeline_device_address_capture_replay_;
};

struct VideoCodingControlInfoKHR {

  using native_type = VkVideoCodingControlInfoKHR;

  VideoCodingControlInfoKHR(const void *next = {}, VideoCodingControlMask flags = {}) : next_(next), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_CODING_CONTROL_INFO_KHR;
  const void *next_;
  VideoCodingControlMask flags_;
};

struct QueueFamilyProperties {

  using native_type = VkQueueFamilyProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  QueueMask queue_flags_;
  uint32_t queue_count_;
  uint32_t timestamp_valid_bits_;
  Extent3D min_image_transfer_granularity_;
};

struct PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE {

  using native_type = VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE;

  PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(void *next = {}, bool32 descriptor_set_host_mapping = {})
    : next_(next), descriptor_set_host_mapping_(descriptor_set_host_mapping) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE;
  void *next_;
  bool32 descriptor_set_host_mapping_;
};

struct AccelerationStructureMatrixMotionInstanceNV {

  using native_type = VkAccelerationStructureMatrixMotionInstanceNV;

  AccelerationStructureMatrixMotionInstanceNV(TransformMatrixKHR transform_t0 = {},
                                              TransformMatrixKHR transform_t1 = {},
                                              uint32_t instance_custom_index = {},
                                              uint32_t mask = {},
                                              uint32_t instance_shader_binding_table_record_offset = {},
                                              VkGeometryInstanceFlagsKHR flags = {},
                                              uint64_t acceleration_structure_reference = {})
    : transform_t0_(transform_t0), transform_t1_(transform_t1), instance_custom_index_(instance_custom_index), mask_(mask),
      instance_shader_binding_table_record_offset_(instance_shader_binding_table_record_offset), flags_(flags),
      acceleration_structure_reference_(acceleration_structure_reference) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  TransformMatrixKHR transform_t0_;
  TransformMatrixKHR transform_t1_;
  uint32_t instance_custom_index_ : 24;
  uint32_t mask_ : 8;
  uint32_t instance_shader_binding_table_record_offset_ : 24;
  VkGeometryInstanceFlagsKHR flags_ : 8;
  uint64_t acceleration_structure_reference_;
};

struct VideoEncodeH265PictureInfoKHR {

  using native_type = VkVideoEncodeH265PictureInfoKHR;

  VideoEncodeH265PictureInfoKHR(const void *next = {},
                                uint32_t nalu_slice_segment_entry_count = {},
                                const VideoEncodeH265NaluSliceSegmentInfoKHR *p_nalu_slice_segment_entries = {},
                                const StdVideoEncodeH265PictureInfo *p_std_picture_info = {})
    : next_(next), nalu_slice_segment_entry_count_(nalu_slice_segment_entry_count),
      p_nalu_slice_segment_entries_(p_nalu_slice_segment_entries), p_std_picture_info_(p_std_picture_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_PICTURE_INFO_KHR;
  const void *next_;
  uint32_t nalu_slice_segment_entry_count_;
  const VideoEncodeH265NaluSliceSegmentInfoKHR *p_nalu_slice_segment_entries_;
  const StdVideoEncodeH265PictureInfo *p_std_picture_info_;
};

struct BlitImageInfo2 {

  using native_type = VkBlitImageInfo2;

  BlitImageInfo2(const void *next = {},
                 VkImage src_image = {},
                 ImageLayout src_image_layout = {},
                 VkImage dst_image = {},
                 ImageLayout dst_image_layout = {},
                 uint32_t region_count = {},
                 const ImageBlit2 *p_regions = {},
                 Filter filter = {})
    : next_(next), src_image_(src_image), src_image_layout_(src_image_layout), dst_image_(dst_image), dst_image_layout_(dst_image_layout),
      region_count_(region_count), p_regions_(p_regions), filter_(filter) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BLIT_IMAGE_INFO_2;
  const void *next_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const ImageBlit2 *p_regions_;
  Filter filter_;
};

struct MemoryBarrier {

  using native_type = VkMemoryBarrier;

  MemoryBarrier(const void *next = {}, AccessMask src_access_mask = {}, AccessMask dst_access_mask = {})
    : next_(next), src_access_mask_(src_access_mask), dst_access_mask_(dst_access_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_BARRIER;
  const void *next_;
  AccessMask src_access_mask_;
  AccessMask dst_access_mask_;
};

struct PhysicalDeviceSubpassShadingPropertiesHUAWEI {

  using native_type = VkPhysicalDeviceSubpassShadingPropertiesHUAWEI;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI;
  void *next_;
  uint32_t max_subpass_shading_workgroup_size_aspect_ratio_;
};

struct PhysicalDeviceSparseImageFormatInfo2 {

  using native_type = VkPhysicalDeviceSparseImageFormatInfo2;

  PhysicalDeviceSparseImageFormatInfo2(const void *next = {},
                                       Format format = {},
                                       ImageType type = {},
                                       SampleCountMaskBit samples = {},
                                       ImageUsageMask usage = {},
                                       ImageTiling tiling = {})
    : next_(next), format_(format), type_(type), samples_(samples), usage_(usage), tiling_(tiling) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;
  const void *next_;
  Format format_;
  ImageType type_;
  SampleCountMaskBit samples_;
  ImageUsageMask usage_;
  ImageTiling tiling_;
};

struct SparseImageOpaqueMemoryBindInfo {

  using native_type = VkSparseImageOpaqueMemoryBindInfo;

  SparseImageOpaqueMemoryBindInfo(VkImage image = {}, uint32_t bind_count = {}, const SparseMemoryBind *p_binds = {})
    : image_(image), bind_count_(bind_count), p_binds_(p_binds) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  VkImage image_;
  uint32_t bind_count_;
  const SparseMemoryBind *p_binds_;
};

struct SparseImageMemoryBind {

  using native_type = VkSparseImageMemoryBind;

  SparseImageMemoryBind(ImageSubresource subresource = {},
                        Offset3D offset = {},
                        Extent3D extent = {},
                        VkDeviceMemory memory = {},
                        DeviceSize memory_offset = {},
                        SparseMemoryBindMask flags = {})
    : subresource_(subresource), offset_(offset), extent_(extent), memory_(memory), memory_offset_(memory_offset), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ImageSubresource subresource_;
  Offset3D offset_;
  Extent3D extent_;
  VkDeviceMemory memory_;
  DeviceSize memory_offset_;
  SparseMemoryBindMask flags_;
};

struct SparseImageMemoryBindInfo {

  using native_type = VkSparseImageMemoryBindInfo;

  SparseImageMemoryBindInfo(VkImage image = {}, uint32_t bind_count = {}, const SparseImageMemoryBind *p_binds = {})
    : image_(image), bind_count_(bind_count), p_binds_(p_binds) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  VkImage image_;
  uint32_t bind_count_;
  const SparseImageMemoryBind *p_binds_;
};

struct BindSparseInfo {

  using native_type = VkBindSparseInfo;

  BindSparseInfo(const void *next = {},
                 uint32_t wait_semaphore_count = {},
                 const VkSemaphore *p_wait_semaphores = {},
                 uint32_t buffer_bind_count = {},
                 const SparseBufferMemoryBindInfo *p_buffer_binds = {},
                 uint32_t image_opaque_bind_count = {},
                 const SparseImageOpaqueMemoryBindInfo *p_image_opaque_binds = {},
                 uint32_t image_bind_count = {},
                 const SparseImageMemoryBindInfo *p_image_binds = {},
                 uint32_t signal_semaphore_count = {},
                 const VkSemaphore *p_signal_semaphores = {})
    : next_(next), wait_semaphore_count_(wait_semaphore_count), p_wait_semaphores_(p_wait_semaphores),
      buffer_bind_count_(buffer_bind_count), p_buffer_binds_(p_buffer_binds), image_opaque_bind_count_(image_opaque_bind_count),
      p_image_opaque_binds_(p_image_opaque_binds), image_bind_count_(image_bind_count), p_image_binds_(p_image_binds),
      signal_semaphore_count_(signal_semaphore_count), p_signal_semaphores_(p_signal_semaphores) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_SPARSE_INFO;
  const void *next_;
  uint32_t wait_semaphore_count_;
  const VkSemaphore *p_wait_semaphores_;
  uint32_t buffer_bind_count_;
  const SparseBufferMemoryBindInfo *p_buffer_binds_;
  uint32_t image_opaque_bind_count_;
  const SparseImageOpaqueMemoryBindInfo *p_image_opaque_binds_;
  uint32_t image_bind_count_;
  const SparseImageMemoryBindInfo *p_image_binds_;
  uint32_t signal_semaphore_count_;
  const VkSemaphore *p_signal_semaphores_;
};

struct PhysicalDevicePipelineRobustnessFeaturesEXT {

  using native_type = VkPhysicalDevicePipelineRobustnessFeaturesEXT;

  PhysicalDevicePipelineRobustnessFeaturesEXT(void *next = {}, bool32 pipeline_robustness = {})
    : next_(next), pipeline_robustness_(pipeline_robustness) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT;
  void *next_;
  bool32 pipeline_robustness_;
};

struct ShaderModuleCreateInfo {

  using native_type = VkShaderModuleCreateInfo;

  ShaderModuleCreateInfo(const void *next = {}, ShaderModuleCreateMask flags = {}, size_t code_size = {}, const uint32_t *p_code = {})
    : next_(next), flags_(flags), code_size_(code_size), p_code_(p_code) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SHADER_MODULE_CREATE_INFO;
  const void *next_;
  ShaderModuleCreateMask flags_;
  size_t code_size_;
  const uint32_t *p_code_;
};

struct PhysicalDevicePCIBusInfoPropertiesEXT {

  using native_type = VkPhysicalDevicePCIBusInfoPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT;
  void *next_;
  uint32_t pci_domain_;
  uint32_t pci_bus_;
  uint32_t pci_device_;
  uint32_t pci_function_;
};

struct SwapchainCounterCreateInfoEXT {

  using native_type = VkSwapchainCounterCreateInfoEXT;

  SwapchainCounterCreateInfoEXT(const void *next = {}, SurfaceCounterMask surface_counters = {})
    : next_(next), surface_counters_(surface_counters) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SWAPCHAIN_COUNTER_CREATE_INFO_EXT;
  const void *next_;
  SurfaceCounterMask surface_counters_;
};

struct LatencySubmissionPresentIdNV {

  using native_type = VkLatencySubmissionPresentIdNV;

  LatencySubmissionPresentIdNV(const void *next = {}, uint64_t present_id = {}) : next_(next), present_id_(present_id) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::LATENCY_SUBMISSION_PRESENT_ID_NV;
  const void *next_;
  uint64_t present_id_;
};

struct DescriptorSetAllocateInfo {

  using native_type = VkDescriptorSetAllocateInfo;

  DescriptorSetAllocateInfo(const void *next = {},
                            VkDescriptorPool descriptor_pool = {},
                            uint32_t descriptor_set_count = {},
                            const VkDescriptorSetLayout *p_set_layouts = {})
    : next_(next), descriptor_pool_(descriptor_pool), descriptor_set_count_(descriptor_set_count), p_set_layouts_(p_set_layouts) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_SET_ALLOCATE_INFO;
  const void *next_;
  VkDescriptorPool descriptor_pool_;
  uint32_t descriptor_set_count_;
  const VkDescriptorSetLayout *p_set_layouts_;
};

struct VideoSessionParametersCreateInfoKHR {

  using native_type = VkVideoSessionParametersCreateInfoKHR;

  VideoSessionParametersCreateInfoKHR(const void *next = {},
                                      VideoSessionParametersCreateMask flags = {},
                                      VkVideoSessionParametersKHR video_session_parameters_template = {},
                                      VkVideoSessionKHR video_session = {})
    : next_(next), flags_(flags), video_session_parameters_template_(video_session_parameters_template), video_session_(video_session) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR;
  const void *next_;
  VideoSessionParametersCreateMask flags_;
  VkVideoSessionParametersKHR video_session_parameters_template_;
  VkVideoSessionKHR video_session_;
};

struct GeometryTrianglesNV {

  using native_type = VkGeometryTrianglesNV;

  GeometryTrianglesNV(const void *next = {},
                      VkBuffer vertex_data = {},
                      DeviceSize vertex_offset = {},
                      uint32_t vertex_count = {},
                      DeviceSize vertex_stride = {},
                      Format vertex_format = {},
                      VkBuffer index_data = {},
                      DeviceSize index_offset = {},
                      uint32_t index_count = {},
                      IndexType index_type = {},
                      VkBuffer transform_data = {},
                      DeviceSize transform_offset = {})
    : next_(next), vertex_data_(vertex_data), vertex_offset_(vertex_offset), vertex_count_(vertex_count), vertex_stride_(vertex_stride),
      vertex_format_(vertex_format), index_data_(index_data), index_offset_(index_offset), index_count_(index_count),
      index_type_(index_type), transform_data_(transform_data), transform_offset_(transform_offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::GEOMETRY_TRIANGLES_NV;
  const void *next_;
  VkBuffer vertex_data_;
  DeviceSize vertex_offset_;
  uint32_t vertex_count_;
  DeviceSize vertex_stride_;
  Format vertex_format_;
  VkBuffer index_data_;
  DeviceSize index_offset_;
  uint32_t index_count_;
  IndexType index_type_;
  VkBuffer transform_data_;
  DeviceSize transform_offset_;
};

struct SubpassSampleLocationsEXT {

  using native_type = VkSubpassSampleLocationsEXT;

  SubpassSampleLocationsEXT(uint32_t subpass_index = {}, SampleLocationsInfoEXT sample_locations_info = {})
    : subpass_index_(subpass_index), sample_locations_info_(sample_locations_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t subpass_index_;
  SampleLocationsInfoEXT sample_locations_info_;
};

struct DisplayPlanePropertiesKHR {

  using native_type = VkDisplayPlanePropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  VkDisplayKHR current_display_;
  uint32_t current_stack_index_;
};

struct DisplayPlaneProperties2KHR {

  using native_type = VkDisplayPlaneProperties2KHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_PLANE_PROPERTIES_2_KHR;
  void *next_;
  DisplayPlanePropertiesKHR display_plane_properties_;
};

struct DescriptorSetBindingReferenceVALVE {

  using native_type = VkDescriptorSetBindingReferenceVALVE;

  DescriptorSetBindingReferenceVALVE(const void *next = {}, VkDescriptorSetLayout descriptor_set_layout = {}, uint32_t binding = {})
    : next_(next), descriptor_set_layout_(descriptor_set_layout), binding_(binding) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_SET_BINDING_REFERENCE_VALVE;
  const void *next_;
  VkDescriptorSetLayout descriptor_set_layout_;
  uint32_t binding_;
};

struct SetStateFlagsIndirectCommandNV {

  using native_type = VkSetStateFlagsIndirectCommandNV;

  SetStateFlagsIndirectCommandNV(uint32_t data = {}) : data_(data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t data_;
};

struct RenderPassAttachmentBeginInfo {

  using native_type = VkRenderPassAttachmentBeginInfo;

  RenderPassAttachmentBeginInfo(const void *next = {}, uint32_t attachment_count = {}, const VkImageView *p_attachments = {})
    : next_(next), attachment_count_(attachment_count), p_attachments_(p_attachments) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_ATTACHMENT_BEGIN_INFO;
  const void *next_;
  uint32_t attachment_count_;
  const VkImageView *p_attachments_;
};

struct PhysicalDeviceDeviceGeneratedCommandsFeaturesNV {

  using native_type = VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV;

  PhysicalDeviceDeviceGeneratedCommandsFeaturesNV(void *next = {}, bool32 device_generated_commands = {})
    : next_(next), device_generated_commands_(device_generated_commands) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV;
  void *next_;
  bool32 device_generated_commands_;
};

struct QueueFamilyGlobalPriorityPropertiesKHR {

  using native_type = VkQueueFamilyGlobalPriorityPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR;
  void *next_;
  uint32_t priority_count_;
  std::array<QueueGlobalPriority, VK_MAX_GLOBAL_PRIORITY_SIZE_KHR> priorities_;
};

struct PhysicalDeviceImageCompressionControlFeaturesEXT {

  using native_type = VkPhysicalDeviceImageCompressionControlFeaturesEXT;

  PhysicalDeviceImageCompressionControlFeaturesEXT(void *next = {}, bool32 image_compression_control = {})
    : next_(next), image_compression_control_(image_compression_control) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT;
  void *next_;
  bool32 image_compression_control_;
};

struct MemoryType {

  using native_type = VkMemoryType;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  MemoryPropertyMask property_flags_;
  uint32_t heap_index_;
};

struct MemoryHeap {

  using native_type = VkMemoryHeap;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceSize size_;
  MemoryHeapMask flags_;
};

struct PhysicalDeviceMemoryProperties {

  using native_type = VkPhysicalDeviceMemoryProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t memory_type_count_;
  std::array<MemoryType, VK_MAX_MEMORY_TYPES> memory_types_;
  uint32_t memory_heap_count_;
  std::array<MemoryHeap, VK_MAX_MEMORY_HEAPS> memory_heaps_;
};

struct PresentTimeGOOGLE {

  using native_type = VkPresentTimeGOOGLE;

  PresentTimeGOOGLE(uint32_t present_id = {}, uint64_t desired_present_time = {})
    : present_id_(present_id), desired_present_time_(desired_present_time) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t present_id_;
  uint64_t desired_present_time_;
};

struct PresentTimesInfoGOOGLE {

  using native_type = VkPresentTimesInfoGOOGLE;

  PresentTimesInfoGOOGLE(const void *next = {}, uint32_t swapchain_count = {}, const PresentTimeGOOGLE *p_times = {})
    : next_(next), swapchain_count_(swapchain_count), p_times_(p_times) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PRESENT_TIMES_INFO_GOOGLE;
  const void *next_;
  uint32_t swapchain_count_;
  const PresentTimeGOOGLE *p_times_;
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

struct DisplayPropertiesKHR {

  using native_type = VkDisplayPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  VkDisplayKHR display_;
  const char *display_name_;
  Extent2D physical_dimensions_;
  Extent2D physical_resolution_;
  SurfaceTransformMask supported_transforms_;
  bool32 plane_reorder_possible_;
  bool32 persistent_content_;
};

struct ImagePlaneMemoryRequirementsInfo {

  using native_type = VkImagePlaneMemoryRequirementsInfo;

  ImagePlaneMemoryRequirementsInfo(const void *next = {}, ImageAspectMaskBit plane_aspect = {})
    : next_(next), plane_aspect_(plane_aspect) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;
  const void *next_;
  ImageAspectMaskBit plane_aspect_;
};

struct AllocationCallbacks {

  using native_type = VkAllocationCallbacks;

  AllocationCallbacks(void *p_user_data = {},
                      PFN_vkAllocationFunction pfn_allocation = {},
                      PFN_vkReallocationFunction pfn_reallocation = {},
                      PFN_vkFreeFunction pfn_free = {},
                      PFN_vkInternalAllocationNotification pfn_internal_allocation = {},
                      PFN_vkInternalFreeNotification pfn_internal_free = {})
    : p_user_data_(p_user_data), pfn_allocation_(pfn_allocation), pfn_reallocation_(pfn_reallocation), pfn_free_(pfn_free),
      pfn_internal_allocation_(pfn_internal_allocation), pfn_internal_free_(pfn_internal_free) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  void *p_user_data_;
  PFN_vkAllocationFunction pfn_allocation_;
  PFN_vkReallocationFunction pfn_reallocation_;
  PFN_vkFreeFunction pfn_free_;
  PFN_vkInternalAllocationNotification pfn_internal_allocation_;
  PFN_vkInternalFreeNotification pfn_internal_free_;
};

struct PhysicalDeviceDrmPropertiesEXT {

  using native_type = VkPhysicalDeviceDrmPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DRM_PROPERTIES_EXT;
  void *next_;
  bool32 has_primary_;
  bool32 has_render_;
  int64_t primary_major_;
  int64_t primary_minor_;
  int64_t render_major_;
  int64_t render_minor_;
};

struct PhysicalDeviceShaderCorePropertiesAMD {

  using native_type = VkPhysicalDeviceShaderCorePropertiesAMD;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;
  void *next_;
  uint32_t shader_engine_count_;
  uint32_t shader_arrays_per_engine_count_;
  uint32_t compute_units_per_shader_array_;
  uint32_t simd_per_compute_unit_;
  uint32_t wavefronts_per_simd_;
  uint32_t wavefront_size_;
  uint32_t sgprs_per_simd_;
  uint32_t min_sgpr_allocation_;
  uint32_t max_sgpr_allocation_;
  uint32_t sgpr_allocation_granularity_;
  uint32_t vgprs_per_simd_;
  uint32_t min_vgpr_allocation_;
  uint32_t max_vgpr_allocation_;
  uint32_t vgpr_allocation_granularity_;
};

struct PipelineMultisampleStateCreateInfo {

  using native_type = VkPipelineMultisampleStateCreateInfo;

  PipelineMultisampleStateCreateInfo(const void *next = {},
                                     PipelineMultisampleStateCreateMask flags = {},
                                     SampleCountMaskBit rasterization_samples = {},
                                     bool32 sample_shading_enable = {},
                                     float min_sample_shading = {},
                                     const VkSampleMask *p_sample_mask = {},
                                     bool32 alpha_to_coverage_enable = {},
                                     bool32 alpha_to_one_enable = {})
    : next_(next), flags_(flags), rasterization_samples_(rasterization_samples), sample_shading_enable_(sample_shading_enable),
      min_sample_shading_(min_sample_shading), p_sample_mask_(p_sample_mask), alpha_to_coverage_enable_(alpha_to_coverage_enable),
      alpha_to_one_enable_(alpha_to_one_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
  const void *next_;
  PipelineMultisampleStateCreateMask flags_;
  SampleCountMaskBit rasterization_samples_;
  bool32 sample_shading_enable_;
  float min_sample_shading_;
  const VkSampleMask *p_sample_mask_;
  bool32 alpha_to_coverage_enable_;
  bool32 alpha_to_one_enable_;
};

struct PhysicalDeviceDescriptorPoolOverallocationFeaturesNV {

  using native_type = VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV;

  PhysicalDeviceDescriptorPoolOverallocationFeaturesNV(void *next = {}, bool32 descriptor_pool_overallocation = {})
    : next_(next), descriptor_pool_overallocation_(descriptor_pool_overallocation) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV;
  void *next_;
  bool32 descriptor_pool_overallocation_;
};

struct CooperativeMatrixPropertiesNV {

  using native_type = VkCooperativeMatrixPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COOPERATIVE_MATRIX_PROPERTIES_NV;
  void *next_;
  uint32_t msize_;
  uint32_t nsize_;
  uint32_t ksize_;
  VkComponentTypeNV atype_;
  VkComponentTypeNV btype_;
  VkComponentTypeNV ctype_;
  VkComponentTypeNV dtype_;
  VkScopeNV scope_;
};

struct PhysicalDeviceFeatures2 {

  using native_type = VkPhysicalDeviceFeatures2;

  PhysicalDeviceFeatures2(void *next = {}, PhysicalDeviceFeatures features = {}) : next_(next), features_(features) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FEATURES_2;
  void *next_;
  PhysicalDeviceFeatures features_;
};

struct RenderingInfo {

  using native_type = VkRenderingInfo;

  RenderingInfo(const void *next = {},
                RenderingMask flags = {},
                Rect2D render_area = {},
                uint32_t layer_count = {},
                uint32_t view_mask = {},
                uint32_t color_attachment_count = {},
                const RenderingAttachmentInfo *p_color_attachments = {},
                const RenderingAttachmentInfo *p_depth_attachment = {},
                const RenderingAttachmentInfo *p_stencil_attachment = {})
    : next_(next), flags_(flags), render_area_(render_area), layer_count_(layer_count), view_mask_(view_mask),
      color_attachment_count_(color_attachment_count), p_color_attachments_(p_color_attachments), p_depth_attachment_(p_depth_attachment),
      p_stencil_attachment_(p_stencil_attachment) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDERING_INFO;
  const void *next_;
  RenderingMask flags_;
  Rect2D render_area_;
  uint32_t layer_count_;
  uint32_t view_mask_;
  uint32_t color_attachment_count_;
  const RenderingAttachmentInfo *p_color_attachments_;
  const RenderingAttachmentInfo *p_depth_attachment_;
  const RenderingAttachmentInfo *p_stencil_attachment_;
};

struct PhysicalDeviceShaderAtomicFloat2FeaturesEXT {

  using native_type = VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT;

  PhysicalDeviceShaderAtomicFloat2FeaturesEXT(void *next = {},
                                              bool32 shader_buffer_float16atomics = {},
                                              bool32 shader_buffer_float16atomic_add = {},
                                              bool32 shader_buffer_float16atomic_min_max = {},
                                              bool32 shader_buffer_float32atomic_min_max = {},
                                              bool32 shader_buffer_float64atomic_min_max = {},
                                              bool32 shader_shared_float16atomics = {},
                                              bool32 shader_shared_float16atomic_add = {},
                                              bool32 shader_shared_float16atomic_min_max = {},
                                              bool32 shader_shared_float32atomic_min_max = {},
                                              bool32 shader_shared_float64atomic_min_max = {},
                                              bool32 shader_image_float32atomic_min_max = {},
                                              bool32 sparse_image_float32atomic_min_max = {})
    : next_(next), shader_buffer_float16atomics_(shader_buffer_float16atomics),
      shader_buffer_float16atomic_add_(shader_buffer_float16atomic_add),
      shader_buffer_float16atomic_min_max_(shader_buffer_float16atomic_min_max),
      shader_buffer_float32atomic_min_max_(shader_buffer_float32atomic_min_max),
      shader_buffer_float64atomic_min_max_(shader_buffer_float64atomic_min_max),
      shader_shared_float16atomics_(shader_shared_float16atomics), shader_shared_float16atomic_add_(shader_shared_float16atomic_add),
      shader_shared_float16atomic_min_max_(shader_shared_float16atomic_min_max),
      shader_shared_float32atomic_min_max_(shader_shared_float32atomic_min_max),
      shader_shared_float64atomic_min_max_(shader_shared_float64atomic_min_max),
      shader_image_float32atomic_min_max_(shader_image_float32atomic_min_max),
      sparse_image_float32atomic_min_max_(sparse_image_float32atomic_min_max) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT;
  void *next_;
  bool32 shader_buffer_float16atomics_;
  bool32 shader_buffer_float16atomic_add_;
  bool32 shader_buffer_float16atomic_min_max_;
  bool32 shader_buffer_float32atomic_min_max_;
  bool32 shader_buffer_float64atomic_min_max_;
  bool32 shader_shared_float16atomics_;
  bool32 shader_shared_float16atomic_add_;
  bool32 shader_shared_float16atomic_min_max_;
  bool32 shader_shared_float32atomic_min_max_;
  bool32 shader_shared_float64atomic_min_max_;
  bool32 shader_image_float32atomic_min_max_;
  bool32 sparse_image_float32atomic_min_max_;
};

struct DebugReportCallbackCreateInfoEXT {

  using native_type = VkDebugReportCallbackCreateInfoEXT;

  DebugReportCallbackCreateInfoEXT(const void *next = {},
                                   DebugReportMask flags = {},
                                   PFN_vkDebugReportCallbackEXT pfn_callback = {},
                                   void *p_user_data = {})
    : next_(next), flags_(flags), pfn_callback_(pfn_callback), p_user_data_(p_user_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
  const void *next_;
  DebugReportMask flags_;
  PFN_vkDebugReportCallbackEXT pfn_callback_;
  void *p_user_data_;
};

struct PhysicalDeviceShaderObjectPropertiesEXT {

  using native_type = VkPhysicalDeviceShaderObjectPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT;
  void *next_;
  std::array<uint8_t, VK_UUID_SIZE> shader_binary_uuid_;
  uint32_t shader_binary_version_;
};

struct PhysicalDeviceMaintenance7FeaturesKHR {

  using native_type = VkPhysicalDeviceMaintenance7FeaturesKHR;

  PhysicalDeviceMaintenance7FeaturesKHR(void *next = {}, bool32 maintenance7 = {}) : next_(next), maintenance7_(maintenance7) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR;
  void *next_;
  bool32 maintenance7_;
};

struct DescriptorBufferBindingPushDescriptorBufferHandleEXT {

  using native_type = VkDescriptorBufferBindingPushDescriptorBufferHandleEXT;

  DescriptorBufferBindingPushDescriptorBufferHandleEXT(void *next = {}, VkBuffer buffer = {}) : next_(next), buffer_(buffer) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT;
  void *next_;
  VkBuffer buffer_;
};

struct ExportSemaphoreCreateInfo {

  using native_type = VkExportSemaphoreCreateInfo;

  ExportSemaphoreCreateInfo(const void *next = {}, ExternalSemaphoreHandleTypeMask handle_types = {})
    : next_(next), handle_types_(handle_types) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXPORT_SEMAPHORE_CREATE_INFO;
  const void *next_;
  ExternalSemaphoreHandleTypeMask handle_types_;
};

struct MemoryRequirements {

  using native_type = VkMemoryRequirements;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceSize size_;
  DeviceSize alignment_;
  uint32_t memory_type_bits_;
};

struct DeviceGroupSubmitInfo {

  using native_type = VkDeviceGroupSubmitInfo;

  DeviceGroupSubmitInfo(const void *next = {},
                        uint32_t wait_semaphore_count = {},
                        const uint32_t *p_wait_semaphore_device_indices = {},
                        uint32_t command_buffer_count = {},
                        const uint32_t *p_command_buffer_device_masks = {},
                        uint32_t signal_semaphore_count = {},
                        const uint32_t *p_signal_semaphore_device_indices = {})
    : next_(next), wait_semaphore_count_(wait_semaphore_count), p_wait_semaphore_device_indices_(p_wait_semaphore_device_indices),
      command_buffer_count_(command_buffer_count), p_command_buffer_device_masks_(p_command_buffer_device_masks),
      signal_semaphore_count_(signal_semaphore_count), p_signal_semaphore_device_indices_(p_signal_semaphore_device_indices) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_GROUP_SUBMIT_INFO;
  const void *next_;
  uint32_t wait_semaphore_count_;
  const uint32_t *p_wait_semaphore_device_indices_;
  uint32_t command_buffer_count_;
  const uint32_t *p_command_buffer_device_masks_;
  uint32_t signal_semaphore_count_;
  const uint32_t *p_signal_semaphore_device_indices_;
};

struct VideoDecodeH264CapabilitiesKHR {

  using native_type = VkVideoDecodeH264CapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H264_CAPABILITIES_KHR;
  void *next_;
  StdVideoH264LevelIdc max_level_idc_;
  Offset2D field_offset_granularity_;
};

struct PhysicalDeviceLimits {

  using native_type = VkPhysicalDeviceLimits;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t max_image_dimension1d_;
  uint32_t max_image_dimension2d_;
  uint32_t max_image_dimension3d_;
  uint32_t max_image_dimension_cube_;
  uint32_t max_image_array_layers_;
  uint32_t max_texel_buffer_elements_;
  uint32_t max_uniform_buffer_range_;
  uint32_t max_storage_buffer_range_;
  uint32_t max_push_constants_size_;
  uint32_t max_memory_allocation_count_;
  uint32_t max_sampler_allocation_count_;
  DeviceSize buffer_image_granularity_;
  DeviceSize sparse_address_space_size_;
  uint32_t max_bound_descriptor_sets_;
  uint32_t max_per_stage_descriptor_samplers_;
  uint32_t max_per_stage_descriptor_uniform_buffers_;
  uint32_t max_per_stage_descriptor_storage_buffers_;
  uint32_t max_per_stage_descriptor_sampled_images_;
  uint32_t max_per_stage_descriptor_storage_images_;
  uint32_t max_per_stage_descriptor_input_attachments_;
  uint32_t max_per_stage_resources_;
  uint32_t max_descriptor_set_samplers_;
  uint32_t max_descriptor_set_uniform_buffers_;
  uint32_t max_descriptor_set_uniform_buffers_dynamic_;
  uint32_t max_descriptor_set_storage_buffers_;
  uint32_t max_descriptor_set_storage_buffers_dynamic_;
  uint32_t max_descriptor_set_sampled_images_;
  uint32_t max_descriptor_set_storage_images_;
  uint32_t max_descriptor_set_input_attachments_;
  uint32_t max_vertex_input_attributes_;
  uint32_t max_vertex_input_bindings_;
  uint32_t max_vertex_input_attribute_offset_;
  uint32_t max_vertex_input_binding_stride_;
  uint32_t max_vertex_output_components_;
  uint32_t max_tessellation_generation_level_;
  uint32_t max_tessellation_patch_size_;
  uint32_t max_tessellation_control_per_vertex_input_components_;
  uint32_t max_tessellation_control_per_vertex_output_components_;
  uint32_t max_tessellation_control_per_patch_output_components_;
  uint32_t max_tessellation_control_total_output_components_;
  uint32_t max_tessellation_evaluation_input_components_;
  uint32_t max_tessellation_evaluation_output_components_;
  uint32_t max_geometry_shader_invocations_;
  uint32_t max_geometry_input_components_;
  uint32_t max_geometry_output_components_;
  uint32_t max_geometry_output_vertices_;
  uint32_t max_geometry_total_output_components_;
  uint32_t max_fragment_input_components_;
  uint32_t max_fragment_output_attachments_;
  uint32_t max_fragment_dual_src_attachments_;
  uint32_t max_fragment_combined_output_resources_;
  uint32_t max_compute_shared_memory_size_;
  std::array<uint32_t, 3> max_compute_work_group_count_;
  uint32_t max_compute_work_group_invocations_;
  std::array<uint32_t, 3> max_compute_work_group_size_;
  uint32_t sub_pixel_precision_bits_;
  uint32_t sub_texel_precision_bits_;
  uint32_t mipmap_precision_bits_;
  uint32_t max_draw_indexed_index_value_;
  uint32_t max_draw_indirect_count_;
  float max_sampler_lod_bias_;
  float max_sampler_anisotropy_;
  uint32_t max_viewports_;
  std::array<uint32_t, 2> max_viewport_dimensions_;
  std::array<float, 2> viewport_bounds_range_;
  uint32_t viewport_sub_pixel_bits_;
  size_t min_memory_map_alignment_;
  DeviceSize min_texel_buffer_offset_alignment_;
  DeviceSize min_uniform_buffer_offset_alignment_;
  DeviceSize min_storage_buffer_offset_alignment_;
  int32_t min_texel_offset_;
  uint32_t max_texel_offset_;
  int32_t min_texel_gather_offset_;
  uint32_t max_texel_gather_offset_;
  float min_interpolation_offset_;
  float max_interpolation_offset_;
  uint32_t sub_pixel_interpolation_offset_bits_;
  uint32_t max_framebuffer_width_;
  uint32_t max_framebuffer_height_;
  uint32_t max_framebuffer_layers_;
  SampleCountMask framebuffer_color_sample_counts_;
  SampleCountMask framebuffer_depth_sample_counts_;
  SampleCountMask framebuffer_stencil_sample_counts_;
  SampleCountMask framebuffer_no_attachments_sample_counts_;
  uint32_t max_color_attachments_;
  SampleCountMask sampled_image_color_sample_counts_;
  SampleCountMask sampled_image_integer_sample_counts_;
  SampleCountMask sampled_image_depth_sample_counts_;
  SampleCountMask sampled_image_stencil_sample_counts_;
  SampleCountMask storage_image_sample_counts_;
  uint32_t max_sample_mask_words_;
  bool32 timestamp_compute_and_graphics_;
  float timestamp_period_;
  uint32_t max_clip_distances_;
  uint32_t max_cull_distances_;
  uint32_t max_combined_clip_and_cull_distances_;
  uint32_t discrete_queue_priorities_;
  std::array<float, 2> point_size_range_;
  std::array<float, 2> line_width_range_;
  float point_size_granularity_;
  float line_width_granularity_;
  bool32 strict_lines_;
  bool32 standard_sample_locations_;
  DeviceSize optimal_buffer_copy_offset_alignment_;
  DeviceSize optimal_buffer_copy_row_pitch_alignment_;
  DeviceSize non_coherent_atom_size_;
};

struct PhysicalDeviceSparseProperties {

  using native_type = VkPhysicalDeviceSparseProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  bool32 residency_standard2dblock_shape_;
  bool32 residency_standard2dmultisample_block_shape_;
  bool32 residency_standard3dblock_shape_;
  bool32 residency_aligned_mip_size_;
  bool32 residency_non_resident_strict_;
};

struct PhysicalDeviceProperties {

  using native_type = VkPhysicalDeviceProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t api_version_;
  uint32_t driver_version_;
  uint32_t vendor_id_;
  uint32_t device_id_;
  PhysicalDeviceType device_type_;
  std::array<char, VK_MAX_PHYSICAL_DEVICE_NAME_SIZE> device_name_;
  std::array<uint8_t, VK_UUID_SIZE> pipeline_cache_uuid_;
  PhysicalDeviceLimits limits_;
  PhysicalDeviceSparseProperties sparse_properties_;
};

struct PhysicalDeviceProperties2 {

  using native_type = VkPhysicalDeviceProperties2;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PROPERTIES_2;
  void *next_;
  PhysicalDeviceProperties properties_;
};

struct PhysicalDeviceLayeredApiVulkanPropertiesKHR {

  using native_type = VkPhysicalDeviceLayeredApiVulkanPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR;
  void *next_;
  PhysicalDeviceProperties2 properties_;
};

struct PhysicalDevicePerStageDescriptorSetFeaturesNV {

  using native_type = VkPhysicalDevicePerStageDescriptorSetFeaturesNV;

  PhysicalDevicePerStageDescriptorSetFeaturesNV(void *next = {}, bool32 per_stage_descriptor_set = {}, bool32 dynamic_pipeline_layout = {})
    : next_(next), per_stage_descriptor_set_(per_stage_descriptor_set), dynamic_pipeline_layout_(dynamic_pipeline_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV;
  void *next_;
  bool32 per_stage_descriptor_set_;
  bool32 dynamic_pipeline_layout_;
};

struct SemaphoreGetFdInfoKHR {

  using native_type = VkSemaphoreGetFdInfoKHR;

  SemaphoreGetFdInfoKHR(const void *next = {}, VkSemaphore semaphore = {}, ExternalSemaphoreHandleTypeMaskBit handle_type = {})
    : next_(next), semaphore_(semaphore), handle_type_(handle_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SEMAPHORE_GET_FD_INFO_KHR;
  const void *next_;
  VkSemaphore semaphore_;
  ExternalSemaphoreHandleTypeMaskBit handle_type_;
};

struct BindAccelerationStructureMemoryInfoNV {

  using native_type = VkBindAccelerationStructureMemoryInfoNV;

  BindAccelerationStructureMemoryInfoNV(const void *next = {},
                                        VkAccelerationStructureNV acceleration_structure = {},
                                        VkDeviceMemory memory = {},
                                        DeviceSize memory_offset = {},
                                        uint32_t device_index_count = {},
                                        const uint32_t *p_device_indices = {})
    : next_(next), acceleration_structure_(acceleration_structure), memory_(memory), memory_offset_(memory_offset),
      device_index_count_(device_index_count), p_device_indices_(p_device_indices) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV;
  const void *next_;
  VkAccelerationStructureNV acceleration_structure_;
  VkDeviceMemory memory_;
  DeviceSize memory_offset_;
  uint32_t device_index_count_;
  const uint32_t *p_device_indices_;
};

struct GeneratedCommandsMemoryRequirementsInfoNV {

  using native_type = VkGeneratedCommandsMemoryRequirementsInfoNV;

  GeneratedCommandsMemoryRequirementsInfoNV(const void *next = {},
                                            PipelineBindPoint pipeline_bind_point = {},
                                            VkPipeline pipeline = {},
                                            VkIndirectCommandsLayoutNV indirect_commands_layout = {},
                                            uint32_t max_sequences_count = {})
    : next_(next), pipeline_bind_point_(pipeline_bind_point), pipeline_(pipeline), indirect_commands_layout_(indirect_commands_layout),
      max_sequences_count_(max_sequences_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV;
  const void *next_;
  PipelineBindPoint pipeline_bind_point_;
  VkPipeline pipeline_;
  VkIndirectCommandsLayoutNV indirect_commands_layout_;
  uint32_t max_sequences_count_;
};

struct CopyMemoryToAccelerationStructureInfoKHR {

  using native_type = VkCopyMemoryToAccelerationStructureInfoKHR;

  CopyMemoryToAccelerationStructureInfoKHR(const void *next = {},
                                           VkDeviceOrHostAddressConstKHR src = {},
                                           VkAccelerationStructureKHR dst = {},
                                           CopyAccelerationStructureMode mode = {})
    : next_(next), src_(src), dst_(dst), mode_(mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR;
  const void *next_;
  VkDeviceOrHostAddressConstKHR src_;
  VkAccelerationStructureKHR dst_;
  CopyAccelerationStructureMode mode_;
};

struct DepthBiasRepresentationInfoEXT {

  using native_type = VkDepthBiasRepresentationInfoEXT;

  DepthBiasRepresentationInfoEXT(const void *next = {},
                                 DepthBiasRepresentation depth_bias_representation = {},
                                 bool32 depth_bias_exact = {})
    : next_(next), depth_bias_representation_(depth_bias_representation), depth_bias_exact_(depth_bias_exact) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEPTH_BIAS_REPRESENTATION_INFO_EXT;
  const void *next_;
  DepthBiasRepresentation depth_bias_representation_;
  bool32 depth_bias_exact_;
};

struct SparseImageFormatProperties {

  using native_type = VkSparseImageFormatProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ImageAspectMask aspect_mask_;
  Extent3D image_granularity_;
  SparseImageFormatMask flags_;
};

struct SparseImageMemoryRequirements {

  using native_type = VkSparseImageMemoryRequirements;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  SparseImageFormatProperties format_properties_;
  uint32_t image_mip_tail_first_lod_;
  DeviceSize image_mip_tail_size_;
  DeviceSize image_mip_tail_offset_;
  DeviceSize image_mip_tail_stride_;
};

struct DeviceGroupBindSparseInfo {

  using native_type = VkDeviceGroupBindSparseInfo;

  DeviceGroupBindSparseInfo(const void *next = {}, uint32_t resource_device_index = {}, uint32_t memory_device_index = {})
    : next_(next), resource_device_index_(resource_device_index), memory_device_index_(memory_device_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_GROUP_BIND_SPARSE_INFO;
  const void *next_;
  uint32_t resource_device_index_;
  uint32_t memory_device_index_;
};

struct DeviceBufferMemoryRequirements {

  using native_type = VkDeviceBufferMemoryRequirements;

  DeviceBufferMemoryRequirements(const void *next = {}, const BufferCreateInfo *p_create_info = {})
    : next_(next), p_create_info_(p_create_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_BUFFER_MEMORY_REQUIREMENTS;
  const void *next_;
  const BufferCreateInfo *p_create_info_;
};

struct BindImageMemoryDeviceGroupInfo {

  using native_type = VkBindImageMemoryDeviceGroupInfo;

  BindImageMemoryDeviceGroupInfo(const void *next = {},
                                 uint32_t device_index_count = {},
                                 const uint32_t *p_device_indices = {},
                                 uint32_t split_instance_bind_region_count = {},
                                 const Rect2D *p_split_instance_bind_regions = {})
    : next_(next), device_index_count_(device_index_count), p_device_indices_(p_device_indices),
      split_instance_bind_region_count_(split_instance_bind_region_count), p_split_instance_bind_regions_(p_split_instance_bind_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;
  const void *next_;
  uint32_t device_index_count_;
  const uint32_t *p_device_indices_;
  uint32_t split_instance_bind_region_count_;
  const Rect2D *p_split_instance_bind_regions_;
};

struct SubpassDependency2 {

  using native_type = VkSubpassDependency2;

  SubpassDependency2(const void *next = {},
                     uint32_t src_subpass = {},
                     uint32_t dst_subpass = {},
                     PipelineStageMask src_stage_mask = {},
                     PipelineStageMask dst_stage_mask = {},
                     AccessMask src_access_mask = {},
                     AccessMask dst_access_mask = {},
                     DependencyMask dependency_flags = {},
                     int32_t view_offset = {})
    : next_(next), src_subpass_(src_subpass), dst_subpass_(dst_subpass), src_stage_mask_(src_stage_mask), dst_stage_mask_(dst_stage_mask),
      src_access_mask_(src_access_mask), dst_access_mask_(dst_access_mask), dependency_flags_(dependency_flags), view_offset_(view_offset) {
  }

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBPASS_DEPENDENCY_2;
  const void *next_;
  uint32_t src_subpass_;
  uint32_t dst_subpass_;
  PipelineStageMask src_stage_mask_;
  PipelineStageMask dst_stage_mask_;
  AccessMask src_access_mask_;
  AccessMask dst_access_mask_;
  DependencyMask dependency_flags_;
  int32_t view_offset_;
};

struct DeviceGroupCommandBufferBeginInfo {

  using native_type = VkDeviceGroupCommandBufferBeginInfo;

  DeviceGroupCommandBufferBeginInfo(const void *next = {}, uint32_t device_mask = {}) : next_(next), device_mask_(device_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;
  const void *next_;
  uint32_t device_mask_;
};

struct PhysicalDeviceImageRobustnessFeatures {

  using native_type = VkPhysicalDeviceImageRobustnessFeatures;

  PhysicalDeviceImageRobustnessFeatures(void *next = {}, bool32 robust_image_access = {})
    : next_(next), robust_image_access_(robust_image_access) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES;
  void *next_;
  bool32 robust_image_access_;
};

struct PipelineCoverageModulationStateCreateInfoNV {

  using native_type = VkPipelineCoverageModulationStateCreateInfoNV;

  PipelineCoverageModulationStateCreateInfoNV(const void *next = {},
                                              PipelineCoverageModulationStateCreateMask flags = {},
                                              CoverageModulationMode coverage_modulation_mode = {},
                                              bool32 coverage_modulation_table_enable = {},
                                              uint32_t coverage_modulation_table_count = {},
                                              const float *p_coverage_modulation_table = {})
    : next_(next), flags_(flags), coverage_modulation_mode_(coverage_modulation_mode),
      coverage_modulation_table_enable_(coverage_modulation_table_enable),
      coverage_modulation_table_count_(coverage_modulation_table_count), p_coverage_modulation_table_(p_coverage_modulation_table) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV;
  const void *next_;
  PipelineCoverageModulationStateCreateMask flags_;
  CoverageModulationMode coverage_modulation_mode_;
  bool32 coverage_modulation_table_enable_;
  uint32_t coverage_modulation_table_count_;
  const float *p_coverage_modulation_table_;
};

struct PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR;

  PhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR(void *next = {}, bool32 shader_relaxed_extended_instruction = {})
    : next_(next), shader_relaxed_extended_instruction_(shader_relaxed_extended_instruction) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR;
  void *next_;
  bool32 shader_relaxed_extended_instruction_;
};

struct CommandBufferAllocateInfo {

  using native_type = VkCommandBufferAllocateInfo;

  CommandBufferAllocateInfo(const void *next = {},
                            VkCommandPool command_pool = {},
                            CommandBufferLevel level = {},
                            uint32_t command_buffer_count = {})
    : next_(next), command_pool_(command_pool), level_(level), command_buffer_count_(command_buffer_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMMAND_BUFFER_ALLOCATE_INFO;
  const void *next_;
  VkCommandPool command_pool_;
  CommandBufferLevel level_;
  uint32_t command_buffer_count_;
};

struct BaseInStructure {

  using native_type = VkBaseInStructure;

  BaseInStructure(StructureType s_type = {}, const struct BaseInStructure *next = {}) : structure_type_(s_type), next_(next) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_;
  const struct BaseInStructure *next_;
};

struct FenceGetFdInfoKHR {

  using native_type = VkFenceGetFdInfoKHR;

  FenceGetFdInfoKHR(const void *next = {}, VkFence fence = {}, ExternalFenceHandleTypeMaskBit handle_type = {})
    : next_(next), fence_(fence), handle_type_(handle_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FENCE_GET_FD_INFO_KHR;
  const void *next_;
  VkFence fence_;
  ExternalFenceHandleTypeMaskBit handle_type_;
};

struct AccelerationStructureBuildGeometryInfoKHR {

  using native_type = VkAccelerationStructureBuildGeometryInfoKHR;

  AccelerationStructureBuildGeometryInfoKHR(const void *next = {},
                                            AccelerationStructureType type = {},
                                            BuildAccelerationStructureMask flags = {},
                                            BuildAccelerationStructureMode mode = {},
                                            VkAccelerationStructureKHR src_acceleration_structure = {},
                                            VkAccelerationStructureKHR dst_acceleration_structure = {},
                                            uint32_t geometry_count = {},
                                            const AccelerationStructureGeometryKHR *p_geometries = {},
                                            const AccelerationStructureGeometryKHR *const *pp_geometries = {},
                                            VkDeviceOrHostAddressKHR scratch_data = {})
    : next_(next), type_(type), flags_(flags), mode_(mode), src_acceleration_structure_(src_acceleration_structure),
      dst_acceleration_structure_(dst_acceleration_structure), geometry_count_(geometry_count), p_geometries_(p_geometries),
      pp_geometries_(pp_geometries), scratch_data_(scratch_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR;
  const void *next_;
  AccelerationStructureType type_;
  BuildAccelerationStructureMask flags_;
  BuildAccelerationStructureMode mode_;
  VkAccelerationStructureKHR src_acceleration_structure_;
  VkAccelerationStructureKHR dst_acceleration_structure_;
  uint32_t geometry_count_;
  const AccelerationStructureGeometryKHR *p_geometries_;
  const AccelerationStructureGeometryKHR *const *pp_geometries_;
  VkDeviceOrHostAddressKHR scratch_data_;
};

struct DisplayPresentInfoKHR {

  using native_type = VkDisplayPresentInfoKHR;

  DisplayPresentInfoKHR(const void *next = {}, Rect2D src_rect = {}, Rect2D dst_rect = {}, bool32 persistent = {})
    : next_(next), src_rect_(src_rect), dst_rect_(dst_rect), persistent_(persistent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_PRESENT_INFO_KHR;
  const void *next_;
  Rect2D src_rect_;
  Rect2D dst_rect_;
  bool32 persistent_;
};

struct DescriptorSetVariableDescriptorCountAllocateInfo {

  using native_type = VkDescriptorSetVariableDescriptorCountAllocateInfo;

  DescriptorSetVariableDescriptorCountAllocateInfo(const void *next = {},
                                                   uint32_t descriptor_set_count = {},
                                                   const uint32_t *p_descriptor_counts = {})
    : next_(next), descriptor_set_count_(descriptor_set_count), p_descriptor_counts_(p_descriptor_counts) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO;
  const void *next_;
  uint32_t descriptor_set_count_;
  const uint32_t *p_descriptor_counts_;
};

struct ApplicationInfo {

  using native_type = VkApplicationInfo;

  ApplicationInfo(const char *application_name = {},
                  uint32_t application_version = {},
                  const char *engine_name = nullptr,
                  uint32_t engine_version = {},
                  uint32_t api_version = {},
                  const void *next = nullptr)
    : next_(next), application_name_(application_name), application_version_(application_version), engine_name_(engine_name),
      engine_version_(engine_version), api_version_(api_version) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::APPLICATION_INFO;
  const void *next_;
  const char *application_name_;
  uint32_t application_version_;
  const char *engine_name_;
  uint32_t engine_version_;
  uint32_t api_version_;
};

struct InstanceCreateInfo {

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

  StructureType structure_type_ = StructureType::INSTANCE_CREATE_INFO;
  const void *next_;
  InstanceCreateMask mask_;
  const ApplicationInfo *application_info_;
  uint32_t enabled_layer_count_;
  const char *const *enabled_layer_names_;
  uint32_t enabled_extension_count_;
  const char *const *enabled_extension_names_;
};

struct PhysicalDeviceLayeredApiPropertiesKHR {

  using native_type = VkPhysicalDeviceLayeredApiPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR;
  void *next_;
  uint32_t vendor_id_;
  uint32_t device_id_;
  PhysicalDeviceLayeredApi layered_api_;
  std::array<char, VK_MAX_PHYSICAL_DEVICE_NAME_SIZE> device_name_;
};

struct PipelineColorBlendAttachmentState {

  using native_type = VkPipelineColorBlendAttachmentState;

  PipelineColorBlendAttachmentState(bool32 blend_enable = {},
                                    BlendFactor src_color_blend_factor = {},
                                    BlendFactor dst_color_blend_factor = {},
                                    BlendOp color_blend_op = {},
                                    BlendFactor src_alpha_blend_factor = {},
                                    BlendFactor dst_alpha_blend_factor = {},
                                    BlendOp alpha_blend_op = {},
                                    ColorComponentMask color_write_mask = {})
    : blend_enable_(blend_enable), src_color_blend_factor_(src_color_blend_factor), dst_color_blend_factor_(dst_color_blend_factor),
      color_blend_op_(color_blend_op), src_alpha_blend_factor_(src_alpha_blend_factor), dst_alpha_blend_factor_(dst_alpha_blend_factor),
      alpha_blend_op_(alpha_blend_op), color_write_mask_(color_write_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  bool32 blend_enable_;
  BlendFactor src_color_blend_factor_;
  BlendFactor dst_color_blend_factor_;
  BlendOp color_blend_op_;
  BlendFactor src_alpha_blend_factor_;
  BlendFactor dst_alpha_blend_factor_;
  BlendOp alpha_blend_op_;
  ColorComponentMask color_write_mask_;
};

struct PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures {

  using native_type = VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;

  PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(void *next = {}, bool32 shader_zero_initialize_workgroup_memory = {})
    : next_(next), shader_zero_initialize_workgroup_memory_(shader_zero_initialize_workgroup_memory) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES;
  void *next_;
  bool32 shader_zero_initialize_workgroup_memory_;
};

struct FramebufferCreateInfo {

  using native_type = VkFramebufferCreateInfo;

  FramebufferCreateInfo(const void *next = {},
                        FramebufferCreateMask flags = {},
                        VkRenderPass render_pass = {},
                        uint32_t attachment_count = {},
                        const VkImageView *p_attachments = {},
                        uint32_t width = {},
                        uint32_t height = {},
                        uint32_t layers = {})
    : next_(next), flags_(flags), render_pass_(render_pass), attachment_count_(attachment_count), p_attachments_(p_attachments),
      width_(width), height_(height), layers_(layers) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FRAMEBUFFER_CREATE_INFO;
  const void *next_;
  FramebufferCreateMask flags_;
  VkRenderPass render_pass_;
  uint32_t attachment_count_;
  const VkImageView *p_attachments_;
  uint32_t width_;
  uint32_t height_;
  uint32_t layers_;
};

struct PhysicalDeviceAccelerationStructureFeaturesKHR {

  using native_type = VkPhysicalDeviceAccelerationStructureFeaturesKHR;

  PhysicalDeviceAccelerationStructureFeaturesKHR(void *next = {},
                                                 bool32 acceleration_structure = {},
                                                 bool32 acceleration_structure_capture_replay = {},
                                                 bool32 acceleration_structure_indirect_build = {},
                                                 bool32 acceleration_structure_host_commands = {},
                                                 bool32 descriptor_binding_acceleration_structure_update_after_bind = {})
    : next_(next), acceleration_structure_(acceleration_structure),
      acceleration_structure_capture_replay_(acceleration_structure_capture_replay),
      acceleration_structure_indirect_build_(acceleration_structure_indirect_build),
      acceleration_structure_host_commands_(acceleration_structure_host_commands),
      descriptor_binding_acceleration_structure_update_after_bind_(descriptor_binding_acceleration_structure_update_after_bind) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR;
  void *next_;
  bool32 acceleration_structure_;
  bool32 acceleration_structure_capture_replay_;
  bool32 acceleration_structure_indirect_build_;
  bool32 acceleration_structure_host_commands_;
  bool32 descriptor_binding_acceleration_structure_update_after_bind_;
};

struct PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT {

  using native_type = VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT;

  PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(void *next = {},
                                                    bool32 primitives_generated_query = {},
                                                    bool32 primitives_generated_query_with_rasterizer_discard = {},
                                                    bool32 primitives_generated_query_with_non_zero_streams = {})
    : next_(next), primitives_generated_query_(primitives_generated_query),
      primitives_generated_query_with_rasterizer_discard_(primitives_generated_query_with_rasterizer_discard),
      primitives_generated_query_with_non_zero_streams_(primitives_generated_query_with_non_zero_streams) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT;
  void *next_;
  bool32 primitives_generated_query_;
  bool32 primitives_generated_query_with_rasterizer_discard_;
  bool32 primitives_generated_query_with_non_zero_streams_;
};

struct SamplerYcbcrConversionCreateInfo {

  using native_type = VkSamplerYcbcrConversionCreateInfo;

  SamplerYcbcrConversionCreateInfo(const void *next = {},
                                   Format format = {},
                                   SamplerYcbcrModelConversion ycbcr_model = {},
                                   SamplerYcbcrRange ycbcr_range = {},
                                   ComponentMapping components = {},
                                   ChromaLocation x_chroma_offset = {},
                                   ChromaLocation y_chroma_offset = {},
                                   Filter chroma_filter = {},
                                   bool32 force_explicit_reconstruction = {})
    : next_(next), format_(format), ycbcr_model_(ycbcr_model), ycbcr_range_(ycbcr_range), components_(components),
      x_chroma_offset_(x_chroma_offset), y_chroma_offset_(y_chroma_offset), chroma_filter_(chroma_filter),
      force_explicit_reconstruction_(force_explicit_reconstruction) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_YCBCR_CONVERSION_CREATE_INFO;
  const void *next_;
  Format format_;
  SamplerYcbcrModelConversion ycbcr_model_;
  SamplerYcbcrRange ycbcr_range_;
  ComponentMapping components_;
  ChromaLocation x_chroma_offset_;
  ChromaLocation y_chroma_offset_;
  Filter chroma_filter_;
  bool32 force_explicit_reconstruction_;
};

struct PhysicalDeviceShaderSMBuiltinsPropertiesNV {

  using native_type = VkPhysicalDeviceShaderSMBuiltinsPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV;
  void *next_;
  uint32_t shader_smcount_;
  uint32_t shader_warps_per_sm_;
};

struct MultiDrawIndexedInfoEXT {

  using native_type = VkMultiDrawIndexedInfoEXT;

  MultiDrawIndexedInfoEXT(uint32_t first_index = {}, uint32_t index_count = {}, int32_t vertex_offset = {})
    : first_index_(first_index), index_count_(index_count), vertex_offset_(vertex_offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t first_index_;
  uint32_t index_count_;
  int32_t vertex_offset_;
};

struct ExternalSemaphoreProperties {

  using native_type = VkExternalSemaphoreProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXTERNAL_SEMAPHORE_PROPERTIES;
  void *next_;
  ExternalSemaphoreHandleTypeMask export_from_imported_handle_types_;
  ExternalSemaphoreHandleTypeMask compatible_handle_types_;
  ExternalSemaphoreFeatureMask external_semaphore_features_;
};

struct DescriptorUpdateTemplateEntry {

  using native_type = VkDescriptorUpdateTemplateEntry;

  DescriptorUpdateTemplateEntry(uint32_t dst_binding = {},
                                uint32_t dst_array_element = {},
                                uint32_t descriptor_count = {},
                                DescriptorType descriptor_type = {},
                                size_t offset = {},
                                size_t stride = {})
    : dst_binding_(dst_binding), dst_array_element_(dst_array_element), descriptor_count_(descriptor_count),
      descriptor_type_(descriptor_type), offset_(offset), stride_(stride) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t dst_binding_;
  uint32_t dst_array_element_;
  uint32_t descriptor_count_;
  DescriptorType descriptor_type_;
  size_t offset_;
  size_t stride_;
};

struct DescriptorUpdateTemplateCreateInfo {

  using native_type = VkDescriptorUpdateTemplateCreateInfo;

  DescriptorUpdateTemplateCreateInfo(const void *next = {},
                                     DescriptorUpdateTemplateCreateMask flags = {},
                                     uint32_t descriptor_update_entry_count = {},
                                     const DescriptorUpdateTemplateEntry *p_descriptor_update_entries = {},
                                     DescriptorUpdateTemplateType template_type = {},
                                     VkDescriptorSetLayout descriptor_set_layout = {},
                                     PipelineBindPoint pipeline_bind_point = {},
                                     VkPipelineLayout pipeline_layout = {},
                                     uint32_t set = {})
    : next_(next), flags_(flags), descriptor_update_entry_count_(descriptor_update_entry_count),
      p_descriptor_update_entries_(p_descriptor_update_entries), template_type_(template_type),
      descriptor_set_layout_(descriptor_set_layout), pipeline_bind_point_(pipeline_bind_point), pipeline_layout_(pipeline_layout),
      set_(set) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;
  const void *next_;
  DescriptorUpdateTemplateCreateMask flags_;
  uint32_t descriptor_update_entry_count_;
  const DescriptorUpdateTemplateEntry *p_descriptor_update_entries_;
  DescriptorUpdateTemplateType template_type_;
  VkDescriptorSetLayout descriptor_set_layout_;
  PipelineBindPoint pipeline_bind_point_;
  VkPipelineLayout pipeline_layout_;
  uint32_t set_;
};

struct WriteDescriptorSetAccelerationStructureNV {

  using native_type = VkWriteDescriptorSetAccelerationStructureNV;

  WriteDescriptorSetAccelerationStructureNV(const void *next = {},
                                            uint32_t acceleration_structure_count = {},
                                            const VkAccelerationStructureNV *p_acceleration_structures = {})
    : next_(next), acceleration_structure_count_(acceleration_structure_count), p_acceleration_structures_(p_acceleration_structures) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV;
  const void *next_;
  uint32_t acceleration_structure_count_;
  const VkAccelerationStructureNV *p_acceleration_structures_;
};

struct PhysicalDeviceTimelineSemaphoreProperties {

  using native_type = VkPhysicalDeviceTimelineSemaphoreProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES;
  void *next_;
  uint64_t max_timeline_semaphore_value_difference_;
};

struct CommandBufferInheritanceInfo {

  using native_type = VkCommandBufferInheritanceInfo;

  CommandBufferInheritanceInfo(const void *next = {},
                               VkRenderPass render_pass = {},
                               uint32_t subpass = {},
                               VkFramebuffer framebuffer = {},
                               bool32 occlusion_query_enable = {},
                               QueryControlMask query_flags = {},
                               QueryPipelineStatisticMask pipeline_statistics = {})
    : next_(next), render_pass_(render_pass), subpass_(subpass), framebuffer_(framebuffer), occlusion_query_enable_(occlusion_query_enable),
      query_flags_(query_flags), pipeline_statistics_(pipeline_statistics) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMMAND_BUFFER_INHERITANCE_INFO;
  const void *next_;
  VkRenderPass render_pass_;
  uint32_t subpass_;
  VkFramebuffer framebuffer_;
  bool32 occlusion_query_enable_;
  QueryControlMask query_flags_;
  QueryPipelineStatisticMask pipeline_statistics_;
};

struct MappedMemoryRange {

  using native_type = VkMappedMemoryRange;

  MappedMemoryRange(const void *next = {}, VkDeviceMemory memory = {}, DeviceSize offset = {}, DeviceSize size = {})
    : next_(next), memory_(memory), offset_(offset), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MAPPED_MEMORY_RANGE;
  const void *next_;
  VkDeviceMemory memory_;
  DeviceSize offset_;
  DeviceSize size_;
};

struct RayTracingShaderGroupCreateInfoKHR {

  using native_type = VkRayTracingShaderGroupCreateInfoKHR;

  RayTracingShaderGroupCreateInfoKHR(const void *next = {},
                                     RayTracingShaderGroupType type = {},
                                     uint32_t general_shader = {},
                                     uint32_t closest_hit_shader = {},
                                     uint32_t any_hit_shader = {},
                                     uint32_t intersection_shader = {},
                                     const void *p_shader_group_capture_replay_handle = {})
    : next_(next), type_(type), general_shader_(general_shader), closest_hit_shader_(closest_hit_shader), any_hit_shader_(any_hit_shader),
      intersection_shader_(intersection_shader), p_shader_group_capture_replay_handle_(p_shader_group_capture_replay_handle) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR;
  const void *next_;
  RayTracingShaderGroupType type_;
  uint32_t general_shader_;
  uint32_t closest_hit_shader_;
  uint32_t any_hit_shader_;
  uint32_t intersection_shader_;
  const void *p_shader_group_capture_replay_handle_;
};

struct PipelineViewportStateCreateInfo {

  using native_type = VkPipelineViewportStateCreateInfo;

  PipelineViewportStateCreateInfo(const void *next = {},
                                  PipelineViewportStateCreateMask flags = {},
                                  uint32_t viewport_count = {},
                                  const Viewport *p_viewports = {},
                                  uint32_t scissor_count = {},
                                  const Rect2D *p_scissors = {})
    : next_(next), flags_(flags), viewport_count_(viewport_count), p_viewports_(p_viewports), scissor_count_(scissor_count),
      p_scissors_(p_scissors) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_VIEWPORT_STATE_CREATE_INFO;
  const void *next_;
  PipelineViewportStateCreateMask flags_;
  uint32_t viewport_count_;
  const Viewport *p_viewports_;
  uint32_t scissor_count_;
  const Rect2D *p_scissors_;
};

struct PipelineRasterizationStateCreateInfo {

  using native_type = VkPipelineRasterizationStateCreateInfo;

  PipelineRasterizationStateCreateInfo(const void *next = {},
                                       PipelineRasterizationStateCreateMask flags = {},
                                       bool32 depth_clamp_enable = {},
                                       bool32 rasterizer_discard_enable = {},
                                       PolygonMode polygon_mode = {},
                                       CullModeMask cull_mode = {},
                                       FrontFace front_face = {},
                                       bool32 depth_bias_enable = {},
                                       float depth_bias_constant_factor = {},
                                       float depth_bias_clamp = {},
                                       float depth_bias_slope_factor = {},
                                       float line_width = {})
    : next_(next), flags_(flags), depth_clamp_enable_(depth_clamp_enable), rasterizer_discard_enable_(rasterizer_discard_enable),
      polygon_mode_(polygon_mode), cull_mode_(cull_mode), front_face_(front_face), depth_bias_enable_(depth_bias_enable),
      depth_bias_constant_factor_(depth_bias_constant_factor), depth_bias_clamp_(depth_bias_clamp),
      depth_bias_slope_factor_(depth_bias_slope_factor), line_width_(line_width) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
  const void *next_;
  PipelineRasterizationStateCreateMask flags_;
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

struct StencilOpState {

  using native_type = VkStencilOpState;

  StencilOpState(StencilOp fail_op = {},
                 StencilOp pass_op = {},
                 StencilOp depth_fail_op = {},
                 CompareOp compare_op = {},
                 uint32_t compare_mask = {},
                 uint32_t write_mask = {},
                 uint32_t reference = {})
    : fail_op_(fail_op), pass_op_(pass_op), depth_fail_op_(depth_fail_op), compare_op_(compare_op), compare_mask_(compare_mask),
      write_mask_(write_mask), reference_(reference) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StencilOp fail_op_;
  StencilOp pass_op_;
  StencilOp depth_fail_op_;
  CompareOp compare_op_;
  uint32_t compare_mask_;
  uint32_t write_mask_;
  uint32_t reference_;
};

struct PipelineDepthStencilStateCreateInfo {

  using native_type = VkPipelineDepthStencilStateCreateInfo;

  PipelineDepthStencilStateCreateInfo(const void *next = {},
                                      PipelineDepthStencilStateCreateMask flags = {},
                                      bool32 depth_test_enable = {},
                                      bool32 depth_write_enable = {},
                                      CompareOp depth_compare_op = {},
                                      bool32 depth_bounds_test_enable = {},
                                      bool32 stencil_test_enable = {},
                                      StencilOpState front = {},
                                      StencilOpState back = {},
                                      float min_depth_bounds = {},
                                      float max_depth_bounds = {})
    : next_(next), flags_(flags), depth_test_enable_(depth_test_enable), depth_write_enable_(depth_write_enable),
      depth_compare_op_(depth_compare_op), depth_bounds_test_enable_(depth_bounds_test_enable), stencil_test_enable_(stencil_test_enable),
      front_(front), back_(back), min_depth_bounds_(min_depth_bounds), max_depth_bounds_(max_depth_bounds) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
  const void *next_;
  PipelineDepthStencilStateCreateMask flags_;
  bool32 depth_test_enable_;
  bool32 depth_write_enable_;
  CompareOp depth_compare_op_;
  bool32 depth_bounds_test_enable_;
  bool32 stencil_test_enable_;
  StencilOpState front_;
  StencilOpState back_;
  float min_depth_bounds_;
  float max_depth_bounds_;
};

struct PipelineColorBlendStateCreateInfo {

  using native_type = VkPipelineColorBlendStateCreateInfo;

  PipelineColorBlendStateCreateInfo(const void *next = {},
                                    PipelineColorBlendStateCreateMask flags = {},
                                    bool32 logic_op_enable = {},
                                    LogicOp logic_op = {},
                                    uint32_t attachment_count = {},
                                    const PipelineColorBlendAttachmentState *p_attachments = {},
                                    const std::array<float, 4> &blend_constants = {})
    : next_(next), flags_(flags), logic_op_enable_(logic_op_enable), logic_op_(logic_op), attachment_count_(attachment_count),
      p_attachments_(p_attachments), blend_constants_(blend_constants) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
  const void *next_;
  PipelineColorBlendStateCreateMask flags_;
  bool32 logic_op_enable_;
  LogicOp logic_op_;
  uint32_t attachment_count_;
  const PipelineColorBlendAttachmentState *p_attachments_;
  std::array<float, 4> blend_constants_;
};

struct GraphicsPipelineCreateInfo {

  using native_type = VkGraphicsPipelineCreateInfo;

  GraphicsPipelineCreateInfo(const void *next = {},
                             PipelineCreateMask flags = {},
                             uint32_t stage_count = {},
                             const PipelineShaderStageCreateInfo *p_stages = {},
                             const PipelineVertexInputStateCreateInfo *p_vertex_input_state = {},
                             const PipelineInputAssemblyStateCreateInfo *p_input_assembly_state = {},
                             const PipelineTessellationStateCreateInfo *p_tessellation_state = {},
                             const PipelineViewportStateCreateInfo *p_viewport_state = {},
                             const PipelineRasterizationStateCreateInfo *p_rasterization_state = {},
                             const PipelineMultisampleStateCreateInfo *p_multisample_state = {},
                             const PipelineDepthStencilStateCreateInfo *p_depth_stencil_state = {},
                             const PipelineColorBlendStateCreateInfo *p_color_blend_state = {},
                             const PipelineDynamicStateCreateInfo *p_dynamic_state = {},
                             VkPipelineLayout layout = {},
                             VkRenderPass render_pass = {},
                             uint32_t subpass = {},
                             VkPipeline base_pipeline_handle = {},
                             int32_t base_pipeline_index = {})
    : next_(next), flags_(flags), stage_count_(stage_count), p_stages_(p_stages), p_vertex_input_state_(p_vertex_input_state),
      p_input_assembly_state_(p_input_assembly_state), p_tessellation_state_(p_tessellation_state), p_viewport_state_(p_viewport_state),
      p_rasterization_state_(p_rasterization_state), p_multisample_state_(p_multisample_state),
      p_depth_stencil_state_(p_depth_stencil_state), p_color_blend_state_(p_color_blend_state), p_dynamic_state_(p_dynamic_state),
      layout_(layout), render_pass_(render_pass), subpass_(subpass), base_pipeline_handle_(base_pipeline_handle),
      base_pipeline_index_(base_pipeline_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::GRAPHICS_PIPELINE_CREATE_INFO;
  const void *next_;
  PipelineCreateMask flags_;
  uint32_t stage_count_;
  const PipelineShaderStageCreateInfo *p_stages_;
  const PipelineVertexInputStateCreateInfo *p_vertex_input_state_;
  const PipelineInputAssemblyStateCreateInfo *p_input_assembly_state_;
  const PipelineTessellationStateCreateInfo *p_tessellation_state_;
  const PipelineViewportStateCreateInfo *p_viewport_state_;
  const PipelineRasterizationStateCreateInfo *p_rasterization_state_;
  const PipelineMultisampleStateCreateInfo *p_multisample_state_;
  const PipelineDepthStencilStateCreateInfo *p_depth_stencil_state_;
  const PipelineColorBlendStateCreateInfo *p_color_blend_state_;
  const PipelineDynamicStateCreateInfo *p_dynamic_state_;
  VkPipelineLayout layout_;
  VkRenderPass render_pass_;
  uint32_t subpass_;
  VkPipeline base_pipeline_handle_;
  int32_t base_pipeline_index_;
};

struct SparseImageFormatProperties2 {

  using native_type = VkSparseImageFormatProperties2;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SPARSE_IMAGE_FORMAT_PROPERTIES_2;
  void *next_;
  SparseImageFormatProperties properties_;
};

struct DisplaySurfaceCreateInfoKHR {

  using native_type = VkDisplaySurfaceCreateInfoKHR;

  DisplaySurfaceCreateInfoKHR(const void *next = {},
                              DisplaySurfaceCreateMask flags = {},
                              VkDisplayModeKHR display_mode = {},
                              uint32_t plane_index = {},
                              uint32_t plane_stack_index = {},
                              SurfaceTransformMaskBit transform = {},
                              float global_alpha = {},
                              DisplayPlaneAlphaMaskBit alpha_mode = {},
                              Extent2D image_extent = {})
    : next_(next), flags_(flags), display_mode_(display_mode), plane_index_(plane_index), plane_stack_index_(plane_stack_index),
      transform_(transform), global_alpha_(global_alpha), alpha_mode_(alpha_mode), image_extent_(image_extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_SURFACE_CREATE_INFO_KHR;
  const void *next_;
  DisplaySurfaceCreateMask flags_;
  VkDisplayModeKHR display_mode_;
  uint32_t plane_index_;
  uint32_t plane_stack_index_;
  SurfaceTransformMaskBit transform_;
  float global_alpha_;
  DisplayPlaneAlphaMaskBit alpha_mode_;
  Extent2D image_extent_;
};

struct PhysicalDeviceRayQueryFeaturesKHR {

  using native_type = VkPhysicalDeviceRayQueryFeaturesKHR;

  PhysicalDeviceRayQueryFeaturesKHR(void *next = {}, bool32 ray_query = {}) : next_(next), ray_query_(ray_query) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR;
  void *next_;
  bool32 ray_query_;
};

struct PipelineIndirectDeviceAddressInfoNV {

  using native_type = VkPipelineIndirectDeviceAddressInfoNV;

  PipelineIndirectDeviceAddressInfoNV(const void *next = {}, PipelineBindPoint pipeline_bind_point = {}, VkPipeline pipeline = {})
    : next_(next), pipeline_bind_point_(pipeline_bind_point), pipeline_(pipeline) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV;
  const void *next_;
  PipelineBindPoint pipeline_bind_point_;
  VkPipeline pipeline_;
};

struct PipelineCacheHeaderVersionOne {

  using native_type = VkPipelineCacheHeaderVersionOne;

  PipelineCacheHeaderVersionOne(uint32_t header_size = {},
                                PipelineCacheHeaderVersion header_version = {},
                                uint32_t vendor_id = {},
                                uint32_t device_id = {},
                                const std::array<uint8_t, VK_UUID_SIZE> &pipeline_cache_uuid = {})
    : header_size_(header_size), header_version_(header_version), vendor_id_(vendor_id), device_id_(device_id),
      pipeline_cache_uuid_(pipeline_cache_uuid) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t header_size_;
  PipelineCacheHeaderVersion header_version_;
  uint32_t vendor_id_;
  uint32_t device_id_;
  std::array<uint8_t, VK_UUID_SIZE> pipeline_cache_uuid_;
};

struct PhysicalDeviceSeparateDepthStencilLayoutsFeatures {

  using native_type = VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures;

  PhysicalDeviceSeparateDepthStencilLayoutsFeatures(void *next = {}, bool32 separate_depth_stencil_layouts = {})
    : next_(next), separate_depth_stencil_layouts_(separate_depth_stencil_layouts) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES;
  void *next_;
  bool32 separate_depth_stencil_layouts_;
};

struct PhysicalDeviceCooperativeMatrixPropertiesNV {

  using native_type = VkPhysicalDeviceCooperativeMatrixPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV;
  void *next_;
  ShaderStageMask cooperative_matrix_supported_stages_;
};

struct DescriptorPoolSize {

  using native_type = VkDescriptorPoolSize;

  DescriptorPoolSize(DescriptorType type = {}, uint32_t descriptor_count = {}) : type_(type), descriptor_count_(descriptor_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DescriptorType type_;
  uint32_t descriptor_count_;
};

struct DescriptorPoolCreateInfo {

  using native_type = VkDescriptorPoolCreateInfo;

  DescriptorPoolCreateInfo(const void *next = {},
                           DescriptorPoolCreateMask flags = {},
                           uint32_t max_sets = {},
                           uint32_t pool_size_count = {},
                           const DescriptorPoolSize *p_pool_sizes = {})
    : next_(next), flags_(flags), max_sets_(max_sets), pool_size_count_(pool_size_count), p_pool_sizes_(p_pool_sizes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_POOL_CREATE_INFO;
  const void *next_;
  DescriptorPoolCreateMask flags_;
  uint32_t max_sets_;
  uint32_t pool_size_count_;
  const DescriptorPoolSize *p_pool_sizes_;
};

struct ImportMemoryFdInfoKHR {

  using native_type = VkImportMemoryFdInfoKHR;

  ImportMemoryFdInfoKHR(const void *next = {}, ExternalMemoryHandleTypeMaskBit handle_type = {}, int fd = {})
    : next_(next), handle_type_(handle_type), fd_(fd) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMPORT_MEMORY_FD_INFO_KHR;
  const void *next_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
  int fd_;
};

struct PhysicalDeviceExternalMemoryHostPropertiesEXT {

  using native_type = VkPhysicalDeviceExternalMemoryHostPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;
  void *next_;
  DeviceSize min_imported_host_pointer_alignment_;
};

struct WriteDescriptorSetInlineUniformBlock {

  using native_type = VkWriteDescriptorSetInlineUniformBlock;

  WriteDescriptorSetInlineUniformBlock(const void *next = {}, uint32_t data_size = {}, const void *p_data = {})
    : next_(next), data_size_(data_size), p_data_(p_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK;
  const void *next_;
  uint32_t data_size_;
  const void *p_data_;
};

struct VideoEncodeH264GopRemainingFrameInfoKHR {

  using native_type = VkVideoEncodeH264GopRemainingFrameInfoKHR;

  VideoEncodeH264GopRemainingFrameInfoKHR(const void *next = {},
                                          bool32 use_gop_remaining_frames = {},
                                          uint32_t gop_remaining_i = {},
                                          uint32_t gop_remaining_p = {},
                                          uint32_t gop_remaining_b = {})
    : next_(next), use_gop_remaining_frames_(use_gop_remaining_frames), gop_remaining_i_(gop_remaining_i),
      gop_remaining_p_(gop_remaining_p), gop_remaining_b_(gop_remaining_b) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR;
  const void *next_;
  bool32 use_gop_remaining_frames_;
  uint32_t gop_remaining_i_;
  uint32_t gop_remaining_p_;
  uint32_t gop_remaining_b_;
};

struct GeometryAABBNV {

  using native_type = VkGeometryAABBNV;

  GeometryAABBNV(const void *next = {}, VkBuffer aabb_data = {}, uint32_t num_aabbs = {}, uint32_t stride = {}, DeviceSize offset = {})
    : next_(next), aabb_data_(aabb_data), num_aabbs_(num_aabbs), stride_(stride), offset_(offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::GEOMETRY_AABB_NV;
  const void *next_;
  VkBuffer aabb_data_;
  uint32_t num_aabbs_;
  uint32_t stride_;
  DeviceSize offset_;
};

struct GeometryDataNV {

  using native_type = VkGeometryDataNV;

  GeometryDataNV(GeometryTrianglesNV triangles = {}, GeometryAABBNV aabbs = {}) : triangles_(triangles), aabbs_(aabbs) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  GeometryTrianglesNV triangles_;
  GeometryAABBNV aabbs_;
};

struct GeometryNV {

  using native_type = VkGeometryNV;

  GeometryNV(const void *next = {}, GeometryType geometry_type = {}, GeometryDataNV geometry = {}, GeometryMask flags = {})
    : next_(next), geometry_type_(geometry_type), geometry_(geometry), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::GEOMETRY_NV;
  const void *next_;
  GeometryType geometry_type_;
  GeometryDataNV geometry_;
  GeometryMask flags_;
};

struct AccelerationStructureInfoNV {

  using native_type = VkAccelerationStructureInfoNV;

  AccelerationStructureInfoNV(const void *next = {},
                              VkAccelerationStructureTypeNV type = {},
                              VkBuildAccelerationStructureFlagsNV flags = {},
                              uint32_t instance_count = {},
                              uint32_t geometry_count = {},
                              const GeometryNV *p_geometries = {})
    : next_(next), type_(type), flags_(flags), instance_count_(instance_count), geometry_count_(geometry_count),
      p_geometries_(p_geometries) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_INFO_NV;
  const void *next_;
  VkAccelerationStructureTypeNV type_;
  VkBuildAccelerationStructureFlagsNV flags_;
  uint32_t instance_count_;
  uint32_t geometry_count_;
  const GeometryNV *p_geometries_;
};

struct AccelerationStructureCreateInfoNV {

  using native_type = VkAccelerationStructureCreateInfoNV;

  AccelerationStructureCreateInfoNV(const void *next = {}, DeviceSize compacted_size = {}, AccelerationStructureInfoNV info = {})
    : next_(next), compacted_size_(compacted_size), info_(info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_CREATE_INFO_NV;
  const void *next_;
  DeviceSize compacted_size_;
  AccelerationStructureInfoNV info_;
};

struct PhysicalDeviceFaultFeaturesEXT {

  using native_type = VkPhysicalDeviceFaultFeaturesEXT;

  PhysicalDeviceFaultFeaturesEXT(void *next = {}, bool32 device_fault = {}, bool32 device_fault_vendor_binary = {})
    : next_(next), device_fault_(device_fault), device_fault_vendor_binary_(device_fault_vendor_binary) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FAULT_FEATURES_EXT;
  void *next_;
  bool32 device_fault_;
  bool32 device_fault_vendor_binary_;
};

struct ImageDrmFormatModifierListCreateInfoEXT {

  using native_type = VkImageDrmFormatModifierListCreateInfoEXT;

  ImageDrmFormatModifierListCreateInfoEXT(const void *next = {},
                                          uint32_t drm_format_modifier_count = {},
                                          const uint64_t *p_drm_format_modifiers = {})
    : next_(next), drm_format_modifier_count_(drm_format_modifier_count), p_drm_format_modifiers_(p_drm_format_modifiers) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT;
  const void *next_;
  uint32_t drm_format_modifier_count_;
  const uint64_t *p_drm_format_modifiers_;
};

struct PhysicalDeviceTextureCompressionASTCHDRFeatures {

  using native_type = VkPhysicalDeviceTextureCompressionASTCHDRFeatures;

  PhysicalDeviceTextureCompressionASTCHDRFeatures(void *next = {}, bool32 texture_compression_astc_hdr = {})
    : next_(next), texture_compression_astc_hdr_(texture_compression_astc_hdr) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES;
  void *next_;
  bool32 texture_compression_astc_hdr_;
};

struct BaseOutStructure {

  using native_type = VkBaseOutStructure;

  BaseOutStructure(StructureType s_type = {}, struct BaseOutStructure *next = {}) : structure_type_(s_type), next_(next) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_;
  struct BaseOutStructure *next_;
};

struct MemoryToImageCopyEXT {

  using native_type = VkMemoryToImageCopyEXT;

  MemoryToImageCopyEXT(const void *next = {},
                       const void *p_host_pointer = {},
                       uint32_t memory_row_length = {},
                       uint32_t memory_image_height = {},
                       ImageSubresourceLayers image_subresource = {},
                       Offset3D image_offset = {},
                       Extent3D image_extent = {})
    : next_(next), p_host_pointer_(p_host_pointer), memory_row_length_(memory_row_length), memory_image_height_(memory_image_height),
      image_subresource_(image_subresource), image_offset_(image_offset), image_extent_(image_extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_TO_IMAGE_COPY_EXT;
  const void *next_;
  const void *p_host_pointer_;
  uint32_t memory_row_length_;
  uint32_t memory_image_height_;
  ImageSubresourceLayers image_subresource_;
  Offset3D image_offset_;
  Extent3D image_extent_;
};

struct PhysicalDeviceRawAccessChainsFeaturesNV {

  using native_type = VkPhysicalDeviceRawAccessChainsFeaturesNV;

  PhysicalDeviceRawAccessChainsFeaturesNV(void *next = {}, bool32 shader_raw_access_chains = {})
    : next_(next), shader_raw_access_chains_(shader_raw_access_chains) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV;
  void *next_;
  bool32 shader_raw_access_chains_;
};

struct PhysicalDeviceVideoFormatInfoKHR {

  using native_type = VkPhysicalDeviceVideoFormatInfoKHR;

  PhysicalDeviceVideoFormatInfoKHR(const void *next = {}, ImageUsageMask image_usage = {}) : next_(next), image_usage_(image_usage) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR;
  const void *next_;
  ImageUsageMask image_usage_;
};

struct SurfaceCapabilities2EXT {

  using native_type = VkSurfaceCapabilities2EXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SURFACE_CAPABILITIES_2_EXT;
  void *next_;
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
  SurfaceCounterMask supported_surface_counters_;
};

struct VideoDecodeCapabilitiesKHR {

  using native_type = VkVideoDecodeCapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_CAPABILITIES_KHR;
  void *next_;
  VideoDecodeCapabilityMask flags_;
};

struct VideoProfileListInfoKHR {

  using native_type = VkVideoProfileListInfoKHR;

  VideoProfileListInfoKHR(const void *next = {}, uint32_t profile_count = {}, const VideoProfileInfoKHR *p_profiles = {})
    : next_(next), profile_count_(profile_count), p_profiles_(p_profiles) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_PROFILE_LIST_INFO_KHR;
  const void *next_;
  uint32_t profile_count_;
  const VideoProfileInfoKHR *p_profiles_;
};

struct BindVideoSessionMemoryInfoKHR {

  using native_type = VkBindVideoSessionMemoryInfoKHR;

  BindVideoSessionMemoryInfoKHR(const void *next = {},
                                uint32_t memory_bind_index = {},
                                VkDeviceMemory memory = {},
                                DeviceSize memory_offset = {},
                                DeviceSize memory_size = {})
    : next_(next), memory_bind_index_(memory_bind_index), memory_(memory), memory_offset_(memory_offset), memory_size_(memory_size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_VIDEO_SESSION_MEMORY_INFO_KHR;
  const void *next_;
  uint32_t memory_bind_index_;
  VkDeviceMemory memory_;
  DeviceSize memory_offset_;
  DeviceSize memory_size_;
};

struct PhysicalDeviceConservativeRasterizationPropertiesEXT {

  using native_type = VkPhysicalDeviceConservativeRasterizationPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;
  void *next_;
  float primitive_overestimation_size_;
  float max_extra_primitive_overestimation_size_;
  float extra_primitive_overestimation_size_granularity_;
  bool32 primitive_underestimation_;
  bool32 conservative_point_and_line_rasterization_;
  bool32 degenerate_triangles_rasterized_;
  bool32 degenerate_lines_rasterized_;
  bool32 fully_covered_fragment_shader_input_variable_;
  bool32 conservative_rasterization_post_depth_coverage_;
};

struct FilterCubicImageViewImageFormatPropertiesEXT {

  using native_type = VkFilterCubicImageViewImageFormatPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT;
  void *next_;
  bool32 filter_cubic_;
  bool32 filter_cubic_minmax_;
};

struct DrawIndirectCommand {

  using native_type = VkDrawIndirectCommand;

  DrawIndirectCommand(uint32_t vertex_count = {}, uint32_t instance_count = {}, uint32_t first_vertex = {}, uint32_t first_instance = {})
    : vertex_count_(vertex_count), instance_count_(instance_count), first_vertex_(first_vertex), first_instance_(first_instance) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t vertex_count_;
  uint32_t instance_count_;
  uint32_t first_vertex_;
  uint32_t first_instance_;
};

struct ClearAttachment {

  using native_type = VkClearAttachment;

  ClearAttachment(ImageAspectMask aspect_mask = {}, uint32_t color_attachment = {}, VkClearValue clear_value = {})
    : aspect_mask_(aspect_mask), color_attachment_(color_attachment), clear_value_(clear_value) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ImageAspectMask aspect_mask_;
  uint32_t color_attachment_;
  VkClearValue clear_value_;
};

struct GetLatencyMarkerInfoNV {

  using native_type = VkGetLatencyMarkerInfoNV;

  GetLatencyMarkerInfoNV(const void *next = {}, uint32_t timing_count = {}, LatencyTimingsFrameReportNV *p_timings = {})
    : next_(next), timing_count_(timing_count), p_timings_(p_timings) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::GET_LATENCY_MARKER_INFO_NV;
  const void *next_;
  uint32_t timing_count_;
  LatencyTimingsFrameReportNV *p_timings_;
};

struct DeviceMemoryOverallocationCreateInfoAMD {

  using native_type = VkDeviceMemoryOverallocationCreateInfoAMD;

  DeviceMemoryOverallocationCreateInfoAMD(const void *next = {}, MemoryOverallocationBehavior overallocation_behavior = {})
    : next_(next), overallocation_behavior_(overallocation_behavior) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;
  const void *next_;
  MemoryOverallocationBehavior overallocation_behavior_;
};

struct OpaqueCaptureDescriptorDataCreateInfoEXT {

  using native_type = VkOpaqueCaptureDescriptorDataCreateInfoEXT;

  OpaqueCaptureDescriptorDataCreateInfoEXT(const void *next = {}, const void *opaque_capture_descriptor_data = {})
    : next_(next), opaque_capture_descriptor_data_(opaque_capture_descriptor_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT;
  const void *next_;
  const void *opaque_capture_descriptor_data_;
};

struct PipelineFragmentShadingRateStateCreateInfoKHR {

  using native_type = VkPipelineFragmentShadingRateStateCreateInfoKHR;

  PipelineFragmentShadingRateStateCreateInfoKHR(const void *next = {},
                                                Extent2D fragment_size = {},
                                                const std::array<FragmentShadingRateCombinerOp, 2> &combiner_ops = {})
    : next_(next), fragment_size_(fragment_size), combiner_ops_(combiner_ops) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR;
  const void *next_;
  Extent2D fragment_size_;
  std::array<FragmentShadingRateCombinerOp, 2> combiner_ops_;
};

struct PipelineRasterizationDepthClipStateCreateInfoEXT {

  using native_type = VkPipelineRasterizationDepthClipStateCreateInfoEXT;

  PipelineRasterizationDepthClipStateCreateInfoEXT(const void *next = {},
                                                   PipelineRasterizationDepthClipStateCreateMask flags = {},
                                                   bool32 depth_clip_enable = {})
    : next_(next), flags_(flags), depth_clip_enable_(depth_clip_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT;
  const void *next_;
  PipelineRasterizationDepthClipStateCreateMask flags_;
  bool32 depth_clip_enable_;
};

struct SamplerYcbcrConversionInfo {

  using native_type = VkSamplerYcbcrConversionInfo;

  SamplerYcbcrConversionInfo(const void *next = {}, VkSamplerYcbcrConversion conversion = {}) : next_(next), conversion_(conversion) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_YCBCR_CONVERSION_INFO;
  const void *next_;
  VkSamplerYcbcrConversion conversion_;
};

struct ProtectedSubmitInfo {

  using native_type = VkProtectedSubmitInfo;

  ProtectedSubmitInfo(const void *next = {}, bool32 protected_submit = {}) : next_(next), protected_submit_(protected_submit) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PROTECTED_SUBMIT_INFO;
  const void *next_;
  bool32 protected_submit_;
};

struct DisplayPowerInfoEXT {

  using native_type = VkDisplayPowerInfoEXT;

  DisplayPowerInfoEXT(const void *next = {}, DisplayPowerState power_state = {}) : next_(next), power_state_(power_state) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_POWER_INFO_EXT;
  const void *next_;
  DisplayPowerState power_state_;
};

struct ValidationFeaturesEXT {

  using native_type = VkValidationFeaturesEXT;

  ValidationFeaturesEXT(const void *next = {},
                        uint32_t enabled_validation_feature_count = {},
                        const ValidationFeatureEnable *p_enabled_validation_features = {},
                        uint32_t disabled_validation_feature_count = {},
                        const ValidationFeatureDisable *p_disabled_validation_features = {})
    : next_(next), enabled_validation_feature_count_(enabled_validation_feature_count),
      p_enabled_validation_features_(p_enabled_validation_features), disabled_validation_feature_count_(disabled_validation_feature_count),
      p_disabled_validation_features_(p_disabled_validation_features) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VALIDATION_FEATURES_EXT;
  const void *next_;
  uint32_t enabled_validation_feature_count_;
  const ValidationFeatureEnable *p_enabled_validation_features_;
  uint32_t disabled_validation_feature_count_;
  const ValidationFeatureDisable *p_disabled_validation_features_;
};

struct PerformanceCounterDescriptionKHR {

  using native_type = VkPerformanceCounterDescriptionKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PERFORMANCE_COUNTER_DESCRIPTION_KHR;
  void *next_;
  PerformanceCounterDescriptionMask flags_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> name_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> category_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> description_;
};

struct PipelineCacheCreateInfo {

  using native_type = VkPipelineCacheCreateInfo;

  PipelineCacheCreateInfo(const void *next = {},
                          PipelineCacheCreateMask flags = {},
                          size_t initial_data_size = {},
                          const void *p_initial_data = {})
    : next_(next), flags_(flags), initial_data_size_(initial_data_size), p_initial_data_(p_initial_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_CACHE_CREATE_INFO;
  const void *next_;
  PipelineCacheCreateMask flags_;
  size_t initial_data_size_;
  const void *p_initial_data_;
};

struct PhysicalDeviceMemoryProperties2 {

  using native_type = VkPhysicalDeviceMemoryProperties2;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;
  void *next_;
  PhysicalDeviceMemoryProperties memory_properties_;
};

struct CopyDescriptorSet {

  using native_type = VkCopyDescriptorSet;

  CopyDescriptorSet(const void *next = {},
                    VkDescriptorSet src_set = {},
                    uint32_t src_binding = {},
                    uint32_t src_array_element = {},
                    VkDescriptorSet dst_set = {},
                    uint32_t dst_binding = {},
                    uint32_t dst_array_element = {},
                    uint32_t descriptor_count = {})
    : next_(next), src_set_(src_set), src_binding_(src_binding), src_array_element_(src_array_element), dst_set_(dst_set),
      dst_binding_(dst_binding), dst_array_element_(dst_array_element), descriptor_count_(descriptor_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_DESCRIPTOR_SET;
  const void *next_;
  VkDescriptorSet src_set_;
  uint32_t src_binding_;
  uint32_t src_array_element_;
  VkDescriptorSet dst_set_;
  uint32_t dst_binding_;
  uint32_t dst_array_element_;
  uint32_t descriptor_count_;
};

struct ImageViewCaptureDescriptorDataInfoEXT {

  using native_type = VkImageViewCaptureDescriptorDataInfoEXT;

  ImageViewCaptureDescriptorDataInfoEXT(const void *next = {}, VkImageView image_view = {}) : next_(next), image_view_(image_view) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT;
  const void *next_;
  VkImageView image_view_;
};

struct DispatchIndirectCommand {

  using native_type = VkDispatchIndirectCommand;

  DispatchIndirectCommand(uint32_t x = {}, uint32_t y = {}, uint32_t z = {}) : x_(x), y_(y), z_(z) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t x_;
  uint32_t y_;
  uint32_t z_;
};

struct PushDescriptorSetWithTemplateInfoKHR {

  using native_type = VkPushDescriptorSetWithTemplateInfoKHR;

  PushDescriptorSetWithTemplateInfoKHR(const void *next = {},
                                       VkDescriptorUpdateTemplate descriptor_update_template = {},
                                       VkPipelineLayout layout = {},
                                       uint32_t set = {},
                                       const void *p_data = {})
    : next_(next), descriptor_update_template_(descriptor_update_template), layout_(layout), set_(set), p_data_(p_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO_KHR;
  const void *next_;
  VkDescriptorUpdateTemplate descriptor_update_template_;
  VkPipelineLayout layout_;
  uint32_t set_;
  const void *p_data_;
};

struct PhysicalDeviceShaderDemoteToHelperInvocationFeatures {

  using native_type = VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures;

  PhysicalDeviceShaderDemoteToHelperInvocationFeatures(void *next = {}, bool32 shader_demote_to_helper_invocation = {})
    : next_(next), shader_demote_to_helper_invocation_(shader_demote_to_helper_invocation) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES;
  void *next_;
  bool32 shader_demote_to_helper_invocation_;
};

struct PipelineLayoutCreateInfo {

  using native_type = VkPipelineLayoutCreateInfo;

  PipelineLayoutCreateInfo(const void *next = {},
                           PipelineLayoutCreateMask flags = {},
                           uint32_t set_layout_count = {},
                           const VkDescriptorSetLayout *p_set_layouts = {},
                           uint32_t push_constant_range_count = {},
                           const PushConstantRange *p_push_constant_ranges = {})
    : next_(next), flags_(flags), set_layout_count_(set_layout_count), p_set_layouts_(p_set_layouts),
      push_constant_range_count_(push_constant_range_count), p_push_constant_ranges_(p_push_constant_ranges) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_LAYOUT_CREATE_INFO;
  const void *next_;
  PipelineLayoutCreateMask flags_;
  uint32_t set_layout_count_;
  const VkDescriptorSetLayout *p_set_layouts_;
  uint32_t push_constant_range_count_;
  const PushConstantRange *p_push_constant_ranges_;
};

struct SamplerCreateInfo {

  using native_type = VkSamplerCreateInfo;

  SamplerCreateInfo(const void *next = {},
                    SamplerCreateMask flags = {},
                    Filter mag_filter = {},
                    Filter min_filter = {},
                    SamplerMipmapMode mipmap_mode = {},
                    SamplerAddressMode address_mode_u = {},
                    SamplerAddressMode address_mode_v = {},
                    SamplerAddressMode address_mode_w = {},
                    float mip_lod_bias = {},
                    bool32 anisotropy_enable = {},
                    float max_anisotropy = {},
                    bool32 compare_enable = {},
                    CompareOp compare_op = {},
                    float min_lod = {},
                    float max_lod = {},
                    BorderColor border_color = {},
                    bool32 unnormalized_coordinates = {})
    : next_(next), flags_(flags), mag_filter_(mag_filter), min_filter_(min_filter), mipmap_mode_(mipmap_mode),
      address_mode_u_(address_mode_u), address_mode_v_(address_mode_v), address_mode_w_(address_mode_w), mip_lod_bias_(mip_lod_bias),
      anisotropy_enable_(anisotropy_enable), max_anisotropy_(max_anisotropy), compare_enable_(compare_enable), compare_op_(compare_op),
      min_lod_(min_lod), max_lod_(max_lod), border_color_(border_color), unnormalized_coordinates_(unnormalized_coordinates) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_CREATE_INFO;
  const void *next_;
  SamplerCreateMask flags_;
  Filter mag_filter_;
  Filter min_filter_;
  SamplerMipmapMode mipmap_mode_;
  SamplerAddressMode address_mode_u_;
  SamplerAddressMode address_mode_v_;
  SamplerAddressMode address_mode_w_;
  float mip_lod_bias_;
  bool32 anisotropy_enable_;
  float max_anisotropy_;
  bool32 compare_enable_;
  CompareOp compare_op_;
  float min_lod_;
  float max_lod_;
  BorderColor border_color_;
  bool32 unnormalized_coordinates_;
};

struct PhysicalDeviceSubgroupSizeControlProperties {

  using native_type = VkPhysicalDeviceSubgroupSizeControlProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES;
  void *next_;
  uint32_t min_subgroup_size_;
  uint32_t max_subgroup_size_;
  uint32_t max_compute_workgroup_subgroups_;
  ShaderStageMask required_subgroup_size_stages_;
};

struct PhysicalDeviceFragmentDensityMapFeaturesEXT {

  using native_type = VkPhysicalDeviceFragmentDensityMapFeaturesEXT;

  PhysicalDeviceFragmentDensityMapFeaturesEXT(void *next = {},
                                              bool32 fragment_density_map = {},
                                              bool32 fragment_density_map_dynamic = {},
                                              bool32 fragment_density_map_non_subsampled_images = {})
    : next_(next), fragment_density_map_(fragment_density_map), fragment_density_map_dynamic_(fragment_density_map_dynamic),
      fragment_density_map_non_subsampled_images_(fragment_density_map_non_subsampled_images) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT;
  void *next_;
  bool32 fragment_density_map_;
  bool32 fragment_density_map_dynamic_;
  bool32 fragment_density_map_non_subsampled_images_;
};

struct VertexInputBindingDescription2EXT {

  using native_type = VkVertexInputBindingDescription2EXT;

  VertexInputBindingDescription2EXT(
    void *next = {}, uint32_t binding = {}, uint32_t stride = {}, VertexInputRate input_rate = {}, uint32_t divisor = {})
    : next_(next), binding_(binding), stride_(stride), input_rate_(input_rate), divisor_(divisor) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT;
  void *next_;
  uint32_t binding_;
  uint32_t stride_;
  VertexInputRate input_rate_;
  uint32_t divisor_;
};

struct CommandPoolCreateInfo {

  using native_type = VkCommandPoolCreateInfo;

  CommandPoolCreateInfo(const void *next = {}, CommandPoolCreateMask flags = {}, uint32_t queue_family_index = {})
    : next_(next), flags_(flags), queue_family_index_(queue_family_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMMAND_POOL_CREATE_INFO;
  const void *next_;
  CommandPoolCreateMask flags_;
  uint32_t queue_family_index_;
};

struct CommandBufferBeginInfo {

  using native_type = VkCommandBufferBeginInfo;

  CommandBufferBeginInfo(const void *next = {},
                         CommandBufferUsageMask flags = {},
                         const CommandBufferInheritanceInfo *p_inheritance_info = {})
    : next_(next), flags_(flags), p_inheritance_info_(p_inheritance_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMMAND_BUFFER_BEGIN_INFO;
  const void *next_;
  CommandBufferUsageMask flags_;
  const CommandBufferInheritanceInfo *p_inheritance_info_;
};

struct BindVertexBufferIndirectCommandNV {

  using native_type = VkBindVertexBufferIndirectCommandNV;

  BindVertexBufferIndirectCommandNV(DeviceAddress buffer_address = {}, uint32_t size = {}, uint32_t stride = {})
    : buffer_address_(buffer_address), size_(size), stride_(stride) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceAddress buffer_address_;
  uint32_t size_;
  uint32_t stride_;
};

struct DrmFormatModifierPropertiesEXT {

  using native_type = VkDrmFormatModifierPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint64_t drm_format_modifier_;
  uint32_t drm_format_modifier_plane_count_;
  FormatFeatureMask drm_format_modifier_tiling_features_;
};

struct PhysicalDeviceShaderSubgroupRotateFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR;

  PhysicalDeviceShaderSubgroupRotateFeaturesKHR(void *next = {},
                                                bool32 shader_subgroup_rotate = {},
                                                bool32 shader_subgroup_rotate_clustered = {})
    : next_(next), shader_subgroup_rotate_(shader_subgroup_rotate), shader_subgroup_rotate_clustered_(shader_subgroup_rotate_clustered) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR;
  void *next_;
  bool32 shader_subgroup_rotate_;
  bool32 shader_subgroup_rotate_clustered_;
};

struct SurfaceCapabilitiesPresentBarrierNV {

  using native_type = VkSurfaceCapabilitiesPresentBarrierNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SURFACE_CAPABILITIES_PRESENT_BARRIER_NV;
  void *next_;
  bool32 present_barrier_supported_;
};

struct BindBufferMemoryDeviceGroupInfo {

  using native_type = VkBindBufferMemoryDeviceGroupInfo;

  BindBufferMemoryDeviceGroupInfo(const void *next = {}, uint32_t device_index_count = {}, const uint32_t *p_device_indices = {})
    : next_(next), device_index_count_(device_index_count), p_device_indices_(p_device_indices) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;
  const void *next_;
  uint32_t device_index_count_;
  const uint32_t *p_device_indices_;
};

struct AttachmentDescription {

  using native_type = VkAttachmentDescription;

  AttachmentDescription(AttachmentDescriptionMask flags = {},
                        Format format = {},
                        SampleCountMaskBit samples = {},
                        AttachmentLoadOp load_op = {},
                        AttachmentStoreOp store_op = {},
                        AttachmentLoadOp stencil_load_op = {},
                        AttachmentStoreOp stencil_store_op = {},
                        ImageLayout initial_layout = {},
                        ImageLayout final_layout = {})
    : flags_(flags), format_(format), samples_(samples), load_op_(load_op), store_op_(store_op), stencil_load_op_(stencil_load_op),
      stencil_store_op_(stencil_store_op), initial_layout_(initial_layout), final_layout_(final_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  AttachmentDescriptionMask flags_;
  Format format_;
  SampleCountMaskBit samples_;
  AttachmentLoadOp load_op_;
  AttachmentStoreOp store_op_;
  AttachmentLoadOp stencil_load_op_;
  AttachmentStoreOp stencil_store_op_;
  ImageLayout initial_layout_;
  ImageLayout final_layout_;
};

struct PhysicalDeviceRayTracingInvocationReorderFeaturesNV {

  using native_type = VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV;

  PhysicalDeviceRayTracingInvocationReorderFeaturesNV(void *next = {}, bool32 ray_tracing_invocation_reorder = {})
    : next_(next), ray_tracing_invocation_reorder_(ray_tracing_invocation_reorder) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV;
  void *next_;
  bool32 ray_tracing_invocation_reorder_;
};

struct AccelerationStructureBuildSizesInfoKHR {

  using native_type = VkAccelerationStructureBuildSizesInfoKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR;
  const void *next_;
  DeviceSize acceleration_structure_size_;
  DeviceSize update_scratch_size_;
  DeviceSize build_scratch_size_;
};

struct CopyMemoryIndirectCommandNV {

  using native_type = VkCopyMemoryIndirectCommandNV;

  CopyMemoryIndirectCommandNV(DeviceAddress src_address = {}, DeviceAddress dst_address = {}, DeviceSize size = {})
    : src_address_(src_address), dst_address_(dst_address), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceAddress src_address_;
  DeviceAddress dst_address_;
  DeviceSize size_;
};

struct CalibratedTimestampInfoKHR {

  using native_type = VkCalibratedTimestampInfoKHR;

  CalibratedTimestampInfoKHR(const void *next = {}, TimeDomain time_domain = {}) : next_(next), time_domain_(time_domain) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::CALIBRATED_TIMESTAMP_INFO_KHR;
  const void *next_;
  TimeDomain time_domain_;
};

struct RenderPassBeginInfo {

  using native_type = VkRenderPassBeginInfo;

  RenderPassBeginInfo(const void *next = {},
                      VkRenderPass render_pass = {},
                      VkFramebuffer framebuffer = {},
                      Rect2D render_area = {},
                      uint32_t clear_value_count = {},
                      const VkClearValue *p_clear_values = {})
    : next_(next), render_pass_(render_pass), framebuffer_(framebuffer), render_area_(render_area), clear_value_count_(clear_value_count),
      p_clear_values_(p_clear_values) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_BEGIN_INFO;
  const void *next_;
  VkRenderPass render_pass_;
  VkFramebuffer framebuffer_;
  Rect2D render_area_;
  uint32_t clear_value_count_;
  const VkClearValue *p_clear_values_;
};

struct SubpassDependency {

  using native_type = VkSubpassDependency;

  SubpassDependency(uint32_t src_subpass = {},
                    uint32_t dst_subpass = {},
                    PipelineStageMask src_stage_mask = {},
                    PipelineStageMask dst_stage_mask = {},
                    AccessMask src_access_mask = {},
                    AccessMask dst_access_mask = {},
                    DependencyMask dependency_flags = {})
    : src_subpass_(src_subpass), dst_subpass_(dst_subpass), src_stage_mask_(src_stage_mask), dst_stage_mask_(dst_stage_mask),
      src_access_mask_(src_access_mask), dst_access_mask_(dst_access_mask), dependency_flags_(dependency_flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t src_subpass_;
  uint32_t dst_subpass_;
  PipelineStageMask src_stage_mask_;
  PipelineStageMask dst_stage_mask_;
  AccessMask src_access_mask_;
  AccessMask dst_access_mask_;
  DependencyMask dependency_flags_;
};

struct RenderPassCreateInfo {

  using native_type = VkRenderPassCreateInfo;

  RenderPassCreateInfo(const void *next = {},
                       RenderPassCreateMask flags = {},
                       uint32_t attachment_count = {},
                       const AttachmentDescription *p_attachments = {},
                       uint32_t subpass_count = {},
                       const SubpassDescription *p_subpasses = {},
                       uint32_t dependency_count = {},
                       const SubpassDependency *p_dependencies = {})
    : next_(next), flags_(flags), attachment_count_(attachment_count), p_attachments_(p_attachments), subpass_count_(subpass_count),
      p_subpasses_(p_subpasses), dependency_count_(dependency_count), p_dependencies_(p_dependencies) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_CREATE_INFO;
  const void *next_;
  RenderPassCreateMask flags_;
  uint32_t attachment_count_;
  const AttachmentDescription *p_attachments_;
  uint32_t subpass_count_;
  const SubpassDescription *p_subpasses_;
  uint32_t dependency_count_;
  const SubpassDependency *p_dependencies_;
};

struct SetLatencyMarkerInfoNV {

  using native_type = VkSetLatencyMarkerInfoNV;

  SetLatencyMarkerInfoNV(const void *next = {}, uint64_t present_id = {}, LatencyMarker marker = {})
    : next_(next), present_id_(present_id), marker_(marker) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SET_LATENCY_MARKER_INFO_NV;
  const void *next_;
  uint64_t present_id_;
  LatencyMarker marker_;
};

struct MultiviewPerViewAttributesInfoNVX {

  using native_type = VkMultiviewPerViewAttributesInfoNVX;

  MultiviewPerViewAttributesInfoNVX(const void *next = {}, bool32 per_view_attributes = {}, bool32 per_view_attributes_position_xonly = {})
    : next_(next), per_view_attributes_(per_view_attributes), per_view_attributes_position_xonly_(per_view_attributes_position_xonly) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX;
  const void *next_;
  bool32 per_view_attributes_;
  bool32 per_view_attributes_position_xonly_;
};

struct PipelineRasterizationStateStreamCreateInfoEXT {

  using native_type = VkPipelineRasterizationStateStreamCreateInfoEXT;

  PipelineRasterizationStateStreamCreateInfoEXT(const void *next = {},
                                                PipelineRasterizationStateStreamCreateMask flags = {},
                                                uint32_t rasterization_stream = {})
    : next_(next), flags_(flags), rasterization_stream_(rasterization_stream) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT;
  const void *next_;
  PipelineRasterizationStateStreamCreateMask flags_;
  uint32_t rasterization_stream_;
};

struct MemoryAllocateFlagsInfo {

  using native_type = VkMemoryAllocateFlagsInfo;

  MemoryAllocateFlagsInfo(const void *next = {}, MemoryAllocateMask flags = {}, uint32_t device_mask = {})
    : next_(next), flags_(flags), device_mask_(device_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_ALLOCATE_FLAGS_INFO;
  const void *next_;
  MemoryAllocateMask flags_;
  uint32_t device_mask_;
};

struct EventCreateInfo {

  using native_type = VkEventCreateInfo;

  EventCreateInfo(const void *next = {}, EventCreateMask flags = {}) : next_(next), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EVENT_CREATE_INFO;
  const void *next_;
  EventCreateMask flags_;
};

struct PhysicalDeviceDiscardRectanglePropertiesEXT {

  using native_type = VkPhysicalDeviceDiscardRectanglePropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;
  void *next_;
  uint32_t max_discard_rectangles_;
};

struct PhysicalDeviceVulkan12Features {

  using native_type = VkPhysicalDeviceVulkan12Features;

  PhysicalDeviceVulkan12Features(void *next = {},
                                 bool32 sampler_mirror_clamp_to_edge = {},
                                 bool32 draw_indirect_count = {},
                                 bool32 storage_buffer8bit_access = {},
                                 bool32 uniform_and_storage_buffer8bit_access = {},
                                 bool32 storage_push_constant8 = {},
                                 bool32 shader_buffer_int64atomics = {},
                                 bool32 shader_shared_int64atomics = {},
                                 bool32 shader_float16 = {},
                                 bool32 shader_int8 = {},
                                 bool32 descriptor_indexing = {},
                                 bool32 shader_input_attachment_array_dynamic_indexing = {},
                                 bool32 shader_uniform_texel_buffer_array_dynamic_indexing = {},
                                 bool32 shader_storage_texel_buffer_array_dynamic_indexing = {},
                                 bool32 shader_uniform_buffer_array_non_uniform_indexing = {},
                                 bool32 shader_sampled_image_array_non_uniform_indexing = {},
                                 bool32 shader_storage_buffer_array_non_uniform_indexing = {},
                                 bool32 shader_storage_image_array_non_uniform_indexing = {},
                                 bool32 shader_input_attachment_array_non_uniform_indexing = {},
                                 bool32 shader_uniform_texel_buffer_array_non_uniform_indexing = {},
                                 bool32 shader_storage_texel_buffer_array_non_uniform_indexing = {},
                                 bool32 descriptor_binding_uniform_buffer_update_after_bind = {},
                                 bool32 descriptor_binding_sampled_image_update_after_bind = {},
                                 bool32 descriptor_binding_storage_image_update_after_bind = {},
                                 bool32 descriptor_binding_storage_buffer_update_after_bind = {},
                                 bool32 descriptor_binding_uniform_texel_buffer_update_after_bind = {},
                                 bool32 descriptor_binding_storage_texel_buffer_update_after_bind = {},
                                 bool32 descriptor_binding_update_unused_while_pending = {},
                                 bool32 descriptor_binding_partially_bound = {},
                                 bool32 descriptor_binding_variable_descriptor_count = {},
                                 bool32 runtime_descriptor_array = {},
                                 bool32 sampler_filter_minmax = {},
                                 bool32 scalar_block_layout = {},
                                 bool32 imageless_framebuffer = {},
                                 bool32 uniform_buffer_standard_layout = {},
                                 bool32 shader_subgroup_extended_types = {},
                                 bool32 separate_depth_stencil_layouts = {},
                                 bool32 host_query_reset = {},
                                 bool32 timeline_semaphore = {},
                                 bool32 buffer_device_address = {},
                                 bool32 buffer_device_address_capture_replay = {},
                                 bool32 buffer_device_address_multi_device = {},
                                 bool32 vulkan_memory_model = {},
                                 bool32 vulkan_memory_model_device_scope = {},
                                 bool32 vulkan_memory_model_availability_visibility_chains = {},
                                 bool32 shader_output_viewport_index = {},
                                 bool32 shader_output_layer = {},
                                 bool32 subgroup_broadcast_dynamic_id = {})
    : next_(next), sampler_mirror_clamp_to_edge_(sampler_mirror_clamp_to_edge), draw_indirect_count_(draw_indirect_count),
      storage_buffer8bit_access_(storage_buffer8bit_access), uniform_and_storage_buffer8bit_access_(uniform_and_storage_buffer8bit_access),
      storage_push_constant8_(storage_push_constant8), shader_buffer_int64atomics_(shader_buffer_int64atomics),
      shader_shared_int64atomics_(shader_shared_int64atomics), shader_float16_(shader_float16), shader_int8_(shader_int8),
      descriptor_indexing_(descriptor_indexing),
      shader_input_attachment_array_dynamic_indexing_(shader_input_attachment_array_dynamic_indexing),
      shader_uniform_texel_buffer_array_dynamic_indexing_(shader_uniform_texel_buffer_array_dynamic_indexing),
      shader_storage_texel_buffer_array_dynamic_indexing_(shader_storage_texel_buffer_array_dynamic_indexing),
      shader_uniform_buffer_array_non_uniform_indexing_(shader_uniform_buffer_array_non_uniform_indexing),
      shader_sampled_image_array_non_uniform_indexing_(shader_sampled_image_array_non_uniform_indexing),
      shader_storage_buffer_array_non_uniform_indexing_(shader_storage_buffer_array_non_uniform_indexing),
      shader_storage_image_array_non_uniform_indexing_(shader_storage_image_array_non_uniform_indexing),
      shader_input_attachment_array_non_uniform_indexing_(shader_input_attachment_array_non_uniform_indexing),
      shader_uniform_texel_buffer_array_non_uniform_indexing_(shader_uniform_texel_buffer_array_non_uniform_indexing),
      shader_storage_texel_buffer_array_non_uniform_indexing_(shader_storage_texel_buffer_array_non_uniform_indexing),
      descriptor_binding_uniform_buffer_update_after_bind_(descriptor_binding_uniform_buffer_update_after_bind),
      descriptor_binding_sampled_image_update_after_bind_(descriptor_binding_sampled_image_update_after_bind),
      descriptor_binding_storage_image_update_after_bind_(descriptor_binding_storage_image_update_after_bind),
      descriptor_binding_storage_buffer_update_after_bind_(descriptor_binding_storage_buffer_update_after_bind),
      descriptor_binding_uniform_texel_buffer_update_after_bind_(descriptor_binding_uniform_texel_buffer_update_after_bind),
      descriptor_binding_storage_texel_buffer_update_after_bind_(descriptor_binding_storage_texel_buffer_update_after_bind),
      descriptor_binding_update_unused_while_pending_(descriptor_binding_update_unused_while_pending),
      descriptor_binding_partially_bound_(descriptor_binding_partially_bound),
      descriptor_binding_variable_descriptor_count_(descriptor_binding_variable_descriptor_count),
      runtime_descriptor_array_(runtime_descriptor_array), sampler_filter_minmax_(sampler_filter_minmax),
      scalar_block_layout_(scalar_block_layout), imageless_framebuffer_(imageless_framebuffer),
      uniform_buffer_standard_layout_(uniform_buffer_standard_layout), shader_subgroup_extended_types_(shader_subgroup_extended_types),
      separate_depth_stencil_layouts_(separate_depth_stencil_layouts), host_query_reset_(host_query_reset),
      timeline_semaphore_(timeline_semaphore), buffer_device_address_(buffer_device_address),
      buffer_device_address_capture_replay_(buffer_device_address_capture_replay),
      buffer_device_address_multi_device_(buffer_device_address_multi_device), vulkan_memory_model_(vulkan_memory_model),
      vulkan_memory_model_device_scope_(vulkan_memory_model_device_scope),
      vulkan_memory_model_availability_visibility_chains_(vulkan_memory_model_availability_visibility_chains),
      shader_output_viewport_index_(shader_output_viewport_index), shader_output_layer_(shader_output_layer),
      subgroup_broadcast_dynamic_id_(subgroup_broadcast_dynamic_id) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VULKAN_1_2_FEATURES;
  void *next_;
  bool32 sampler_mirror_clamp_to_edge_;
  bool32 draw_indirect_count_;
  bool32 storage_buffer8bit_access_;
  bool32 uniform_and_storage_buffer8bit_access_;
  bool32 storage_push_constant8_;
  bool32 shader_buffer_int64atomics_;
  bool32 shader_shared_int64atomics_;
  bool32 shader_float16_;
  bool32 shader_int8_;
  bool32 descriptor_indexing_;
  bool32 shader_input_attachment_array_dynamic_indexing_;
  bool32 shader_uniform_texel_buffer_array_dynamic_indexing_;
  bool32 shader_storage_texel_buffer_array_dynamic_indexing_;
  bool32 shader_uniform_buffer_array_non_uniform_indexing_;
  bool32 shader_sampled_image_array_non_uniform_indexing_;
  bool32 shader_storage_buffer_array_non_uniform_indexing_;
  bool32 shader_storage_image_array_non_uniform_indexing_;
  bool32 shader_input_attachment_array_non_uniform_indexing_;
  bool32 shader_uniform_texel_buffer_array_non_uniform_indexing_;
  bool32 shader_storage_texel_buffer_array_non_uniform_indexing_;
  bool32 descriptor_binding_uniform_buffer_update_after_bind_;
  bool32 descriptor_binding_sampled_image_update_after_bind_;
  bool32 descriptor_binding_storage_image_update_after_bind_;
  bool32 descriptor_binding_storage_buffer_update_after_bind_;
  bool32 descriptor_binding_uniform_texel_buffer_update_after_bind_;
  bool32 descriptor_binding_storage_texel_buffer_update_after_bind_;
  bool32 descriptor_binding_update_unused_while_pending_;
  bool32 descriptor_binding_partially_bound_;
  bool32 descriptor_binding_variable_descriptor_count_;
  bool32 runtime_descriptor_array_;
  bool32 sampler_filter_minmax_;
  bool32 scalar_block_layout_;
  bool32 imageless_framebuffer_;
  bool32 uniform_buffer_standard_layout_;
  bool32 shader_subgroup_extended_types_;
  bool32 separate_depth_stencil_layouts_;
  bool32 host_query_reset_;
  bool32 timeline_semaphore_;
  bool32 buffer_device_address_;
  bool32 buffer_device_address_capture_replay_;
  bool32 buffer_device_address_multi_device_;
  bool32 vulkan_memory_model_;
  bool32 vulkan_memory_model_device_scope_;
  bool32 vulkan_memory_model_availability_visibility_chains_;
  bool32 shader_output_viewport_index_;
  bool32 shader_output_layer_;
  bool32 subgroup_broadcast_dynamic_id_;
};

struct FenceCreateInfo {

  using native_type = VkFenceCreateInfo;

  FenceCreateInfo(const void *next = {}, FenceCreateMask flags = {}) : next_(next), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FENCE_CREATE_INFO;
  const void *next_;
  FenceCreateMask flags_;
};

struct BufferDeviceAddressInfo {

  using native_type = VkBufferDeviceAddressInfo;

  BufferDeviceAddressInfo(const void *next = {}, VkBuffer buffer = {}) : next_(next), buffer_(buffer) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_DEVICE_ADDRESS_INFO;
  const void *next_;
  VkBuffer buffer_;
};

struct QueryPoolCreateInfo {

  using native_type = VkQueryPoolCreateInfo;

  QueryPoolCreateInfo(const void *next = {},
                      QueryPoolCreateMask flags = {},
                      QueryType query_type = {},
                      uint32_t query_count = {},
                      QueryPipelineStatisticMask pipeline_statistics = {})
    : next_(next), flags_(flags), query_type_(query_type), query_count_(query_count), pipeline_statistics_(pipeline_statistics) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUERY_POOL_CREATE_INFO;
  const void *next_;
  QueryPoolCreateMask flags_;
  QueryType query_type_;
  uint32_t query_count_;
  QueryPipelineStatisticMask pipeline_statistics_;
};

struct MultiDrawInfoEXT {

  using native_type = VkMultiDrawInfoEXT;

  MultiDrawInfoEXT(uint32_t first_vertex = {}, uint32_t vertex_count = {}) : first_vertex_(first_vertex), vertex_count_(vertex_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t first_vertex_;
  uint32_t vertex_count_;
};

struct ExportMemoryAllocateInfo {

  using native_type = VkExportMemoryAllocateInfo;

  ExportMemoryAllocateInfo(const void *next = {}, ExternalMemoryHandleTypeMask handle_types = {})
    : next_(next), handle_types_(handle_types) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXPORT_MEMORY_ALLOCATE_INFO;
  const void *next_;
  ExternalMemoryHandleTypeMask handle_types_;
};

struct AccelerationStructureSRTMotionInstanceNV {

  using native_type = VkAccelerationStructureSRTMotionInstanceNV;

  AccelerationStructureSRTMotionInstanceNV(SRTDataNV transform_t0 = {},
                                           SRTDataNV transform_t1 = {},
                                           uint32_t instance_custom_index = {},
                                           uint32_t mask = {},
                                           uint32_t instance_shader_binding_table_record_offset = {},
                                           VkGeometryInstanceFlagsKHR flags = {},
                                           uint64_t acceleration_structure_reference = {})
    : transform_t0_(transform_t0), transform_t1_(transform_t1), instance_custom_index_(instance_custom_index), mask_(mask),
      instance_shader_binding_table_record_offset_(instance_shader_binding_table_record_offset), flags_(flags),
      acceleration_structure_reference_(acceleration_structure_reference) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  SRTDataNV transform_t0_;
  SRTDataNV transform_t1_;
  uint32_t instance_custom_index_ : 24;
  uint32_t mask_ : 8;
  uint32_t instance_shader_binding_table_record_offset_ : 24;
  VkGeometryInstanceFlagsKHR flags_ : 8;
  uint64_t acceleration_structure_reference_;
};

struct PhysicalDeviceRobustness2FeaturesEXT {

  using native_type = VkPhysicalDeviceRobustness2FeaturesEXT;

  PhysicalDeviceRobustness2FeaturesEXT(void *next = {},
                                       bool32 robust_buffer_access2 = {},
                                       bool32 robust_image_access2 = {},
                                       bool32 null_descriptor = {})
    : next_(next), robust_buffer_access2_(robust_buffer_access2), robust_image_access2_(robust_image_access2),
      null_descriptor_(null_descriptor) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT;
  void *next_;
  bool32 robust_buffer_access2_;
  bool32 robust_image_access2_;
  bool32 null_descriptor_;
};

struct PipelineRasterizationStateRasterizationOrderAMD {

  using native_type = VkPipelineRasterizationStateRasterizationOrderAMD;

  PipelineRasterizationStateRasterizationOrderAMD(const void *next = {}, RasterizationOrder rasterization_order = {})
    : next_(next), rasterization_order_(rasterization_order) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;
  const void *next_;
  RasterizationOrder rasterization_order_;
};

struct VideoEncodeQualityLevelInfoKHR {

  using native_type = VkVideoEncodeQualityLevelInfoKHR;

  VideoEncodeQualityLevelInfoKHR(const void *next = {}, uint32_t quality_level = {}) : next_(next), quality_level_(quality_level) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR;
  const void *next_;
  uint32_t quality_level_;
};

struct DisplayModeParametersKHR {

  using native_type = VkDisplayModeParametersKHR;

  DisplayModeParametersKHR(Extent2D visible_region = {}, uint32_t refresh_rate = {})
    : visible_region_(visible_region), refresh_rate_(refresh_rate) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  Extent2D visible_region_;
  uint32_t refresh_rate_;
};

struct ShaderModuleIdentifierEXT {

  using native_type = VkShaderModuleIdentifierEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SHADER_MODULE_IDENTIFIER_EXT;
  void *next_;
  uint32_t identifier_size_;
  std::array<uint8_t, VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT> identifier_;
};

struct BindImageMemoryInfo {

  using native_type = VkBindImageMemoryInfo;

  BindImageMemoryInfo(const void *next = {}, VkImage image = {}, VkDeviceMemory memory = {}, DeviceSize memory_offset = {})
    : next_(next), image_(image), memory_(memory), memory_offset_(memory_offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_IMAGE_MEMORY_INFO;
  const void *next_;
  VkImage image_;
  VkDeviceMemory memory_;
  DeviceSize memory_offset_;
};

struct ExternalMemoryImageCreateInfoNV {

  using native_type = VkExternalMemoryImageCreateInfoNV;

  ExternalMemoryImageCreateInfoNV(const void *next = {}, ExternalMemoryHandleTypeMask handle_types = {})
    : next_(next), handle_types_(handle_types) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;
  const void *next_;
  ExternalMemoryHandleTypeMask handle_types_;
};

struct ValidationFlagsEXT {

  using native_type = VkValidationFlagsEXT;

  ValidationFlagsEXT(const void *next = {},
                     uint32_t disabled_validation_check_count = {},
                     const ValidationCheck *p_disabled_validation_checks = {})
    : next_(next), disabled_validation_check_count_(disabled_validation_check_count),
      p_disabled_validation_checks_(p_disabled_validation_checks) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VALIDATION_FLAGS_EXT;
  const void *next_;
  uint32_t disabled_validation_check_count_;
  const ValidationCheck *p_disabled_validation_checks_;
};

struct SwapchainDisplayNativeHdrCreateInfoAMD {

  using native_type = VkSwapchainDisplayNativeHdrCreateInfoAMD;

  SwapchainDisplayNativeHdrCreateInfoAMD(const void *next = {}, bool32 local_dimming_enable = {})
    : next_(next), local_dimming_enable_(local_dimming_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD;
  const void *next_;
  bool32 local_dimming_enable_;
};

struct XYColorEXT {

  using native_type = VkXYColorEXT;

  XYColorEXT(float x = {}, float y = {}) : x_(x), y_(y) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  float x_;
  float y_;
};

struct PhysicalDevicePresentIdFeaturesKHR {

  using native_type = VkPhysicalDevicePresentIdFeaturesKHR;

  PhysicalDevicePresentIdFeaturesKHR(void *next = {}, bool32 present_id = {}) : next_(next), present_id_(present_id) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR;
  void *next_;
  bool32 present_id_;
};

struct PhysicalDeviceShaderDrawParametersFeatures {

  using native_type = VkPhysicalDeviceShaderDrawParametersFeatures;

  PhysicalDeviceShaderDrawParametersFeatures(void *next = {}, bool32 shader_draw_parameters = {})
    : next_(next), shader_draw_parameters_(shader_draw_parameters) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES;
  void *next_;
  bool32 shader_draw_parameters_;
};

struct HdrMetadataEXT {

  using native_type = VkHdrMetadataEXT;

  HdrMetadataEXT(const void *next = {},
                 XYColorEXT display_primary_red = {},
                 XYColorEXT display_primary_green = {},
                 XYColorEXT display_primary_blue = {},
                 XYColorEXT white_point = {},
                 float max_luminance = {},
                 float min_luminance = {},
                 float max_content_light_level = {},
                 float max_frame_average_light_level = {})
    : next_(next), display_primary_red_(display_primary_red), display_primary_green_(display_primary_green),
      display_primary_blue_(display_primary_blue), white_point_(white_point), max_luminance_(max_luminance), min_luminance_(min_luminance),
      max_content_light_level_(max_content_light_level), max_frame_average_light_level_(max_frame_average_light_level) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::HDR_METADATA_EXT;
  const void *next_;
  XYColorEXT display_primary_red_;
  XYColorEXT display_primary_green_;
  XYColorEXT display_primary_blue_;
  XYColorEXT white_point_;
  float max_luminance_;
  float min_luminance_;
  float max_content_light_level_;
  float max_frame_average_light_level_;
};

struct PhysicalDeviceCopyMemoryIndirectPropertiesNV {

  using native_type = VkPhysicalDeviceCopyMemoryIndirectPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV;
  void *next_;
  QueueMask supported_queues_;
};

struct PhysicalDeviceSubpassShadingFeaturesHUAWEI {

  using native_type = VkPhysicalDeviceSubpassShadingFeaturesHUAWEI;

  PhysicalDeviceSubpassShadingFeaturesHUAWEI(void *next = {}, bool32 subpass_shading = {})
    : next_(next), subpass_shading_(subpass_shading) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI;
  void *next_;
  bool32 subpass_shading_;
};

struct PhysicalDevicePresentWaitFeaturesKHR {

  using native_type = VkPhysicalDevicePresentWaitFeaturesKHR;

  PhysicalDevicePresentWaitFeaturesKHR(void *next = {}, bool32 present_wait = {}) : next_(next), present_wait_(present_wait) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR;
  void *next_;
  bool32 present_wait_;
};

struct RefreshCycleDurationGOOGLE {

  using native_type = VkRefreshCycleDurationGOOGLE;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint64_t refresh_duration_;
};

struct DisplayNativeHdrSurfaceCapabilitiesAMD {

  using native_type = VkDisplayNativeHdrSurfaceCapabilitiesAMD;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD;
  void *next_;
  bool32 local_dimming_support_;
};

struct PhysicalDeviceDescriptorIndexingProperties {

  using native_type = VkPhysicalDeviceDescriptorIndexingProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES;
  void *next_;
  uint32_t max_update_after_bind_descriptors_in_all_pools_;
  bool32 shader_uniform_buffer_array_non_uniform_indexing_native_;
  bool32 shader_sampled_image_array_non_uniform_indexing_native_;
  bool32 shader_storage_buffer_array_non_uniform_indexing_native_;
  bool32 shader_storage_image_array_non_uniform_indexing_native_;
  bool32 shader_input_attachment_array_non_uniform_indexing_native_;
  bool32 robust_buffer_access_update_after_bind_;
  bool32 quad_divergent_implicit_lod_;
  uint32_t max_per_stage_descriptor_update_after_bind_samplers_;
  uint32_t max_per_stage_descriptor_update_after_bind_uniform_buffers_;
  uint32_t max_per_stage_descriptor_update_after_bind_storage_buffers_;
  uint32_t max_per_stage_descriptor_update_after_bind_sampled_images_;
  uint32_t max_per_stage_descriptor_update_after_bind_storage_images_;
  uint32_t max_per_stage_descriptor_update_after_bind_input_attachments_;
  uint32_t max_per_stage_update_after_bind_resources_;
  uint32_t max_descriptor_set_update_after_bind_samplers_;
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_;
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_;
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_sampled_images_;
  uint32_t max_descriptor_set_update_after_bind_storage_images_;
  uint32_t max_descriptor_set_update_after_bind_input_attachments_;
};

struct PastPresentationTimingGOOGLE {

  using native_type = VkPastPresentationTimingGOOGLE;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t present_id_;
  uint64_t desired_present_time_;
  uint64_t actual_present_time_;
  uint64_t earliest_present_time_;
  uint64_t present_margin_;
};

struct PhysicalDeviceImageAlignmentControlPropertiesMESA {

  using native_type = VkPhysicalDeviceImageAlignmentControlPropertiesMESA;

  PhysicalDeviceImageAlignmentControlPropertiesMESA(void *next = {}, uint32_t supported_image_alignment_mask = {})
    : next_(next), supported_image_alignment_mask_(supported_image_alignment_mask) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA;
  void *next_;
  uint32_t supported_image_alignment_mask_;
};

struct CudaLaunchInfoNV {

  using native_type = VkCudaLaunchInfoNV;

  CudaLaunchInfoNV(const void *next = {},
                   VkCudaFunctionNV function = {},
                   uint32_t grid_dim_x = {},
                   uint32_t grid_dim_y = {},
                   uint32_t grid_dim_z = {},
                   uint32_t block_dim_x = {},
                   uint32_t block_dim_y = {},
                   uint32_t block_dim_z = {},
                   uint32_t shared_mem_bytes = {},
                   size_t param_count = {},
                   const void *const *p_params = {},
                   size_t extra_count = {},
                   const void *const *p_extras = {})
    : next_(next), function_(function), grid_dim_x_(grid_dim_x), grid_dim_y_(grid_dim_y), grid_dim_z_(grid_dim_z),
      block_dim_x_(block_dim_x), block_dim_y_(block_dim_y), block_dim_z_(block_dim_z), shared_mem_bytes_(shared_mem_bytes),
      param_count_(param_count), p_params_(p_params), extra_count_(extra_count), p_extras_(p_extras) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::CUDA_LAUNCH_INFO_NV;
  const void *next_;
  VkCudaFunctionNV function_;
  uint32_t grid_dim_x_;
  uint32_t grid_dim_y_;
  uint32_t grid_dim_z_;
  uint32_t block_dim_x_;
  uint32_t block_dim_y_;
  uint32_t block_dim_z_;
  uint32_t shared_mem_bytes_;
  size_t param_count_;
  const void *const *p_params_;
  size_t extra_count_;
  const void *const *p_extras_;
};

struct SurfaceProtectedCapabilitiesKHR {

  using native_type = VkSurfaceProtectedCapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SURFACE_PROTECTED_CAPABILITIES_KHR;
  const void *next_;
  bool32 supports_protected_;
};

struct CuFunctionCreateInfoNVX {

  using native_type = VkCuFunctionCreateInfoNVX;

  CuFunctionCreateInfoNVX(const void *next = {}, VkCuModuleNVX module = {}, const char *p_name = {})
    : next_(next), module_(module), p_name_(p_name) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::CU_FUNCTION_CREATE_INFO_NVX;
  const void *next_;
  VkCuModuleNVX module_;
  const char *p_name_;
};

struct PhysicalDeviceCubicClampFeaturesQCOM {

  using native_type = VkPhysicalDeviceCubicClampFeaturesQCOM;

  PhysicalDeviceCubicClampFeaturesQCOM(void *next = {}, bool32 cubic_range_clamp = {})
    : next_(next), cubic_range_clamp_(cubic_range_clamp) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM;
  void *next_;
  bool32 cubic_range_clamp_;
};

struct AccelerationStructureCreateInfoKHR {

  using native_type = VkAccelerationStructureCreateInfoKHR;

  AccelerationStructureCreateInfoKHR(const void *next = {},
                                     AccelerationStructureCreateMask create_flags = {},
                                     VkBuffer buffer = {},
                                     DeviceSize offset = {},
                                     DeviceSize size = {},
                                     AccelerationStructureType type = {},
                                     DeviceAddress device_address = {})
    : next_(next), create_flags_(create_flags), buffer_(buffer), offset_(offset), size_(size), type_(type),
      device_address_(device_address) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_CREATE_INFO_KHR;
  const void *next_;
  AccelerationStructureCreateMask create_flags_;
  VkBuffer buffer_;
  DeviceSize offset_;
  DeviceSize size_;
  AccelerationStructureType type_;
  DeviceAddress device_address_;
};

struct BindImagePlaneMemoryInfo {

  using native_type = VkBindImagePlaneMemoryInfo;

  BindImagePlaneMemoryInfo(const void *next = {}, ImageAspectMaskBit plane_aspect = {}) : next_(next), plane_aspect_(plane_aspect) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BIND_IMAGE_PLANE_MEMORY_INFO;
  const void *next_;
  ImageAspectMaskBit plane_aspect_;
};

struct PipelineViewportSwizzleStateCreateInfoNV {

  using native_type = VkPipelineViewportSwizzleStateCreateInfoNV;

  PipelineViewportSwizzleStateCreateInfoNV(const void *next = {},
                                           PipelineViewportSwizzleStateCreateMask flags = {},
                                           uint32_t viewport_count = {},
                                           const ViewportSwizzleNV *p_viewport_swizzles = {})
    : next_(next), flags_(flags), viewport_count_(viewport_count), p_viewport_swizzles_(p_viewport_swizzles) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;
  const void *next_;
  PipelineViewportSwizzleStateCreateMask flags_;
  uint32_t viewport_count_;
  const ViewportSwizzleNV *p_viewport_swizzles_;
};

struct PipelineDiscardRectangleStateCreateInfoEXT {

  using native_type = VkPipelineDiscardRectangleStateCreateInfoEXT;

  PipelineDiscardRectangleStateCreateInfoEXT(const void *next = {},
                                             PipelineDiscardRectangleStateCreateMask flags = {},
                                             DiscardRectangleMode discard_rectangle_mode = {},
                                             uint32_t discard_rectangle_count = {},
                                             const Rect2D *p_discard_rectangles = {})
    : next_(next), flags_(flags), discard_rectangle_mode_(discard_rectangle_mode), discard_rectangle_count_(discard_rectangle_count),
      p_discard_rectangles_(p_discard_rectangles) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;
  const void *next_;
  PipelineDiscardRectangleStateCreateMask flags_;
  DiscardRectangleMode discard_rectangle_mode_;
  uint32_t discard_rectangle_count_;
  const Rect2D *p_discard_rectangles_;
};

struct PipelineCreationFeedback {

  using native_type = VkPipelineCreationFeedback;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  PipelineCreationFeedbackMask flags_;
  uint64_t duration_;
};

struct PipelineCreationFeedbackCreateInfo {

  using native_type = VkPipelineCreationFeedbackCreateInfo;

  PipelineCreationFeedbackCreateInfo(const void *next = {},
                                     PipelineCreationFeedback *p_pipeline_creation_feedback = {},
                                     uint32_t pipeline_stage_creation_feedback_count = {},
                                     PipelineCreationFeedback *p_pipeline_stage_creation_feedbacks = {})
    : next_(next), p_pipeline_creation_feedback_(p_pipeline_creation_feedback),
      pipeline_stage_creation_feedback_count_(pipeline_stage_creation_feedback_count),
      p_pipeline_stage_creation_feedbacks_(p_pipeline_stage_creation_feedbacks) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_CREATION_FEEDBACK_CREATE_INFO;
  const void *next_;
  PipelineCreationFeedback *p_pipeline_creation_feedback_;
  uint32_t pipeline_stage_creation_feedback_count_;
  PipelineCreationFeedback *p_pipeline_stage_creation_feedbacks_;
};

struct BlitImageCubicWeightsInfoQCOM {

  using native_type = VkBlitImageCubicWeightsInfoQCOM;

  BlitImageCubicWeightsInfoQCOM(const void *next = {}, CubicFilterWeights cubic_weights = {})
    : next_(next), cubic_weights_(cubic_weights) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM;
  const void *next_;
  CubicFilterWeights cubic_weights_;
};

struct PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {

  using native_type = VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;
  void *next_;
  bool32 per_view_position_all_components_;
};

struct SamplerBorderColorComponentMappingCreateInfoEXT {

  using native_type = VkSamplerBorderColorComponentMappingCreateInfoEXT;

  SamplerBorderColorComponentMappingCreateInfoEXT(const void *next = {}, ComponentMapping components = {}, bool32 srgb = {})
    : next_(next), components_(components), srgb_(srgb) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT;
  const void *next_;
  ComponentMapping components_;
  bool32 srgb_;
};

struct PhysicalDeviceShadingRateImageFeaturesNV {

  using native_type = VkPhysicalDeviceShadingRateImageFeaturesNV;

  PhysicalDeviceShadingRateImageFeaturesNV(void *next = {}, bool32 shading_rate_image = {}, bool32 shading_rate_coarse_sample_order = {})
    : next_(next), shading_rate_image_(shading_rate_image), shading_rate_coarse_sample_order_(shading_rate_coarse_sample_order) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV;
  void *next_;
  bool32 shading_rate_image_;
  bool32 shading_rate_coarse_sample_order_;
};

struct PhysicalDeviceSurfaceInfo2KHR {

  using native_type = VkPhysicalDeviceSurfaceInfo2KHR;

  PhysicalDeviceSurfaceInfo2KHR(const void *next = {}, VkSurfaceKHR surface = {}) : next_(next), surface_(surface) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SURFACE_INFO_2_KHR;
  const void *next_;
  VkSurfaceKHR surface_;
};

struct SurfaceCapabilities2KHR {

  using native_type = VkSurfaceCapabilities2KHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SURFACE_CAPABILITIES_2_KHR;
  void *next_;
  SurfaceCapabilitiesKHR surface_capabilities_;
};

struct AccelerationStructureGeometryMotionTrianglesDataNV {

  using native_type = VkAccelerationStructureGeometryMotionTrianglesDataNV;

  AccelerationStructureGeometryMotionTrianglesDataNV(const void *next = {}, VkDeviceOrHostAddressConstKHR vertex_data = {})
    : next_(next), vertex_data_(vertex_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV;
  const void *next_;
  VkDeviceOrHostAddressConstKHR vertex_data_;
};

struct PipelineCoverageToColorStateCreateInfoNV {

  using native_type = VkPipelineCoverageToColorStateCreateInfoNV;

  PipelineCoverageToColorStateCreateInfoNV(const void *next = {},
                                           PipelineCoverageToColorStateCreateMask flags = {},
                                           bool32 coverage_to_color_enable = {},
                                           uint32_t coverage_to_color_location = {})
    : next_(next), flags_(flags), coverage_to_color_enable_(coverage_to_color_enable),
      coverage_to_color_location_(coverage_to_color_location) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV;
  const void *next_;
  PipelineCoverageToColorStateCreateMask flags_;
  bool32 coverage_to_color_enable_;
  uint32_t coverage_to_color_location_;
};

struct SurfaceFormat2KHR {

  using native_type = VkSurfaceFormat2KHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SURFACE_FORMAT_2_KHR;
  void *next_;
  SurfaceFormatKHR surface_format_;
};

struct TimelineSemaphoreSubmitInfo {

  using native_type = VkTimelineSemaphoreSubmitInfo;

  TimelineSemaphoreSubmitInfo(const void *next = {},
                              uint32_t wait_semaphore_value_count = {},
                              const uint64_t *p_wait_semaphore_values = {},
                              uint32_t signal_semaphore_value_count = {},
                              const uint64_t *p_signal_semaphore_values = {})
    : next_(next), wait_semaphore_value_count_(wait_semaphore_value_count), p_wait_semaphore_values_(p_wait_semaphore_values),
      signal_semaphore_value_count_(signal_semaphore_value_count), p_signal_semaphore_values_(p_signal_semaphore_values) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::TIMELINE_SEMAPHORE_SUBMIT_INFO;
  const void *next_;
  uint32_t wait_semaphore_value_count_;
  const uint64_t *p_wait_semaphore_values_;
  uint32_t signal_semaphore_value_count_;
  const uint64_t *p_signal_semaphore_values_;
};

struct MemoryDedicatedAllocateInfo {

  using native_type = VkMemoryDedicatedAllocateInfo;

  MemoryDedicatedAllocateInfo(const void *next = {}, VkImage image = {}, VkBuffer buffer = {})
    : next_(next), image_(image), buffer_(buffer) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_DEDICATED_ALLOCATE_INFO;
  const void *next_;
  VkImage image_;
  VkBuffer buffer_;
};

struct DisplayModePropertiesKHR {

  using native_type = VkDisplayModePropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  VkDisplayModeKHR display_mode_;
  DisplayModeParametersKHR parameters_;
};

struct DisplayModeProperties2KHR {

  using native_type = VkDisplayModeProperties2KHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_MODE_PROPERTIES_2_KHR;
  void *next_;
  DisplayModePropertiesKHR display_mode_properties_;
};

struct PhysicalDeviceExclusiveScissorFeaturesNV {

  using native_type = VkPhysicalDeviceExclusiveScissorFeaturesNV;

  PhysicalDeviceExclusiveScissorFeaturesNV(void *next = {}, bool32 exclusive_scissor = {})
    : next_(next), exclusive_scissor_(exclusive_scissor) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;
  void *next_;
  bool32 exclusive_scissor_;
};

struct PhysicalDevicePushDescriptorPropertiesKHR {

  using native_type = VkPhysicalDevicePushDescriptorPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR;
  void *next_;
  uint32_t max_push_descriptors_;
};

struct CommandBufferInheritanceConditionalRenderingInfoEXT {

  using native_type = VkCommandBufferInheritanceConditionalRenderingInfoEXT;

  CommandBufferInheritanceConditionalRenderingInfoEXT(const void *next = {}, bool32 conditional_rendering_enable = {})
    : next_(next), conditional_rendering_enable_(conditional_rendering_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT;
  const void *next_;
  bool32 conditional_rendering_enable_;
};

struct DisplayPlaneInfo2KHR {

  using native_type = VkDisplayPlaneInfo2KHR;

  DisplayPlaneInfo2KHR(const void *next = {}, VkDisplayModeKHR mode = {}, uint32_t plane_index = {})
    : next_(next), mode_(mode), plane_index_(plane_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_PLANE_INFO_2_KHR;
  const void *next_;
  VkDisplayModeKHR mode_;
  uint32_t plane_index_;
};

struct DepthBiasInfoEXT {

  using native_type = VkDepthBiasInfoEXT;

  DepthBiasInfoEXT(const void *next = {},
                   float depth_bias_constant_factor = {},
                   float depth_bias_clamp = {},
                   float depth_bias_slope_factor = {})
    : next_(next), depth_bias_constant_factor_(depth_bias_constant_factor), depth_bias_clamp_(depth_bias_clamp),
      depth_bias_slope_factor_(depth_bias_slope_factor) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEPTH_BIAS_INFO_EXT;
  const void *next_;
  float depth_bias_constant_factor_;
  float depth_bias_clamp_;
  float depth_bias_slope_factor_;
};

struct PhysicalDeviceDiagnosticsConfigFeaturesNV {

  using native_type = VkPhysicalDeviceDiagnosticsConfigFeaturesNV;

  PhysicalDeviceDiagnosticsConfigFeaturesNV(void *next = {}, bool32 diagnostics_config = {})
    : next_(next), diagnostics_config_(diagnostics_config) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV;
  void *next_;
  bool32 diagnostics_config_;
};

struct ImageResolve {

  using native_type = VkImageResolve;

  ImageResolve(ImageSubresourceLayers src_subresource = {},
               Offset3D src_offset = {},
               ImageSubresourceLayers dst_subresource = {},
               Offset3D dst_offset = {},
               Extent3D extent = {})
    : src_subresource_(src_subresource), src_offset_(src_offset), dst_subresource_(dst_subresource), dst_offset_(dst_offset),
      extent_(extent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ImageSubresourceLayers src_subresource_;
  Offset3D src_offset_;
  ImageSubresourceLayers dst_subresource_;
  Offset3D dst_offset_;
  Extent3D extent_;
};

struct DisplayPlaneCapabilities2KHR {

  using native_type = VkDisplayPlaneCapabilities2KHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_PLANE_CAPABILITIES_2_KHR;
  void *next_;
  DisplayPlaneCapabilitiesKHR capabilities_;
};

struct SharedPresentSurfaceCapabilitiesKHR {

  using native_type = VkSharedPresentSurfaceCapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;
  void *next_;
  ImageUsageMask shared_present_supported_usage_flags_;
};

struct PhysicalDevice16BitStorageFeatures {

  using native_type = VkPhysicalDevice16BitStorageFeatures;

  PhysicalDevice16BitStorageFeatures(void *next = {},
                                     bool32 storage_buffer16bit_access = {},
                                     bool32 uniform_and_storage_buffer16bit_access = {},
                                     bool32 storage_push_constant16 = {},
                                     bool32 storage_input_output16 = {})
    : next_(next), storage_buffer16bit_access_(storage_buffer16bit_access),
      uniform_and_storage_buffer16bit_access_(uniform_and_storage_buffer16bit_access), storage_push_constant16_(storage_push_constant16),
      storage_input_output16_(storage_input_output16) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
  void *next_;
  bool32 storage_buffer16bit_access_;
  bool32 uniform_and_storage_buffer16bit_access_;
  bool32 storage_push_constant16_;
  bool32 storage_input_output16_;
};

struct StridedDeviceAddressRegionKHR {

  using native_type = VkStridedDeviceAddressRegionKHR;

  StridedDeviceAddressRegionKHR(DeviceAddress device_address = {}, DeviceSize stride = {}, DeviceSize size = {})
    : device_address_(device_address), stride_(stride), size_(size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  DeviceAddress device_address_;
  DeviceSize stride_;
  DeviceSize size_;
};

struct BufferMemoryRequirementsInfo2 {

  using native_type = VkBufferMemoryRequirementsInfo2;

  BufferMemoryRequirementsInfo2(const void *next = {}, VkBuffer buffer = {}) : next_(next), buffer_(buffer) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_MEMORY_REQUIREMENTS_INFO_2;
  const void *next_;
  VkBuffer buffer_;
};

struct ImageSparseMemoryRequirementsInfo2 {

  using native_type = VkImageSparseMemoryRequirementsInfo2;

  ImageSparseMemoryRequirementsInfo2(const void *next = {}, VkImage image = {}) : next_(next), image_(image) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;
  const void *next_;
  VkImage image_;
};

struct VideoDecodeAV1DpbSlotInfoKHR {

  using native_type = VkVideoDecodeAV1DpbSlotInfoKHR;

  VideoDecodeAV1DpbSlotInfoKHR(const void *next = {}, const StdVideoDecodeAV1ReferenceInfo *p_std_reference_info = {})
    : next_(next), p_std_reference_info_(p_std_reference_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR;
  const void *next_;
  const StdVideoDecodeAV1ReferenceInfo *p_std_reference_info_;
};

struct SamplerYcbcrConversionImageFormatProperties {

  using native_type = VkSamplerYcbcrConversionImageFormatProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES;
  void *next_;
  uint32_t combined_image_sampler_descriptor_count_;
};

struct PhysicalDeviceProvokingVertexFeaturesEXT {

  using native_type = VkPhysicalDeviceProvokingVertexFeaturesEXT;

  PhysicalDeviceProvokingVertexFeaturesEXT(void *next = {},
                                           bool32 provoking_vertex_last = {},
                                           bool32 transform_feedback_preserves_provoking_vertex = {})
    : next_(next), provoking_vertex_last_(provoking_vertex_last),
      transform_feedback_preserves_provoking_vertex_(transform_feedback_preserves_provoking_vertex) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT;
  void *next_;
  bool32 provoking_vertex_last_;
  bool32 transform_feedback_preserves_provoking_vertex_;
};

struct PipelineShaderStageRequiredSubgroupSizeCreateInfo {

  using native_type = VkPipelineShaderStageRequiredSubgroupSizeCreateInfo;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO;
  void *next_;
  uint32_t required_subgroup_size_;
};

struct DeviceGroupDeviceCreateInfo {

  using native_type = VkDeviceGroupDeviceCreateInfo;

  DeviceGroupDeviceCreateInfo(const void *next = {}, uint32_t physical_device_count = {}, const VkPhysicalDevice *p_physical_devices = {})
    : next_(next), physical_device_count_(physical_device_count), p_physical_devices_(p_physical_devices) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_GROUP_DEVICE_CREATE_INFO;
  const void *next_;
  uint32_t physical_device_count_;
  const VkPhysicalDevice *p_physical_devices_;
};

struct DeviceImageMemoryRequirements {

  using native_type = VkDeviceImageMemoryRequirements;

  DeviceImageMemoryRequirements(const void *next = {}, const ImageCreateInfo *p_create_info = {}, ImageAspectMaskBit plane_aspect = {})
    : next_(next), p_create_info_(p_create_info), plane_aspect_(plane_aspect) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_IMAGE_MEMORY_REQUIREMENTS;
  const void *next_;
  const ImageCreateInfo *p_create_info_;
  ImageAspectMaskBit plane_aspect_;
};

struct SparseImageMemoryRequirements2 {

  using native_type = VkSparseImageMemoryRequirements2;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SPARSE_IMAGE_MEMORY_REQUIREMENTS_2;
  void *next_;
  SparseImageMemoryRequirements memory_requirements_;
};

struct PhysicalDevicePointClippingProperties {

  using native_type = VkPhysicalDevicePointClippingProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES;
  void *next_;
  PointClippingBehavior point_clipping_behavior_;
};

struct MemoryDedicatedRequirements {

  using native_type = VkMemoryDedicatedRequirements;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_DEDICATED_REQUIREMENTS;
  void *next_;
  bool32 prefers_dedicated_allocation_;
  bool32 requires_dedicated_allocation_;
};

struct PhysicalDeviceMeshShaderPropertiesNV {

  using native_type = VkPhysicalDeviceMeshShaderPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV;
  void *next_;
  uint32_t max_draw_mesh_tasks_count_;
  uint32_t max_task_work_group_invocations_;
  std::array<uint32_t, 3> max_task_work_group_size_;
  uint32_t max_task_total_memory_size_;
  uint32_t max_task_output_count_;
  uint32_t max_mesh_work_group_invocations_;
  std::array<uint32_t, 3> max_mesh_work_group_size_;
  uint32_t max_mesh_total_memory_size_;
  uint32_t max_mesh_output_vertices_;
  uint32_t max_mesh_output_primitives_;
  uint32_t max_mesh_multiview_view_count_;
  uint32_t mesh_output_per_vertex_granularity_;
  uint32_t mesh_output_per_primitive_granularity_;
};

struct PhysicalDeviceMaintenance5PropertiesKHR {

  using native_type = VkPhysicalDeviceMaintenance5PropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR;
  void *next_;
  bool32 early_fragment_multisample_coverage_after_sample_counting_;
  bool32 early_fragment_sample_mask_test_before_sample_counting_;
  bool32 depth_stencil_swizzle_one_support_;
  bool32 polygon_mode_point_size_;
  bool32 non_strict_single_pixel_wide_lines_use_parallelogram_;
  bool32 non_strict_wide_lines_use_parallelogram_;
};

struct ImageViewSlicedCreateInfoEXT {

  using native_type = VkImageViewSlicedCreateInfoEXT;

  ImageViewSlicedCreateInfoEXT(const void *next = {}, uint32_t slice_offset = {}, uint32_t slice_count = {})
    : next_(next), slice_offset_(slice_offset), slice_count_(slice_count) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_VIEW_SLICED_CREATE_INFO_EXT;
  const void *next_;
  uint32_t slice_offset_;
  uint32_t slice_count_;
};

struct VideoEncodeH265GopRemainingFrameInfoKHR {

  using native_type = VkVideoEncodeH265GopRemainingFrameInfoKHR;

  VideoEncodeH265GopRemainingFrameInfoKHR(const void *next = {},
                                          bool32 use_gop_remaining_frames = {},
                                          uint32_t gop_remaining_i = {},
                                          uint32_t gop_remaining_p = {},
                                          uint32_t gop_remaining_b = {})
    : next_(next), use_gop_remaining_frames_(use_gop_remaining_frames), gop_remaining_i_(gop_remaining_i),
      gop_remaining_p_(gop_remaining_p), gop_remaining_b_(gop_remaining_b) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR;
  const void *next_;
  bool32 use_gop_remaining_frames_;
  uint32_t gop_remaining_i_;
  uint32_t gop_remaining_p_;
  uint32_t gop_remaining_b_;
};

struct PhysicalDeviceMaintenance7PropertiesKHR {

  using native_type = VkPhysicalDeviceMaintenance7PropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR;
  void *next_;
  bool32 robust_fragment_shading_rate_attachment_access_;
  bool32 separate_depth_stencil_attachment_access_;
  uint32_t max_descriptor_set_total_uniform_buffers_dynamic_;
  uint32_t max_descriptor_set_total_storage_buffers_dynamic_;
  uint32_t max_descriptor_set_total_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_total_uniform_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_total_storage_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_total_buffers_dynamic_;
};

struct PhysicalDeviceShaderAtomicInt64Features {

  using native_type = VkPhysicalDeviceShaderAtomicInt64Features;

  PhysicalDeviceShaderAtomicInt64Features(void *next = {}, bool32 shader_buffer_int64atomics = {}, bool32 shader_shared_int64atomics = {})
    : next_(next), shader_buffer_int64atomics_(shader_buffer_int64atomics), shader_shared_int64atomics_(shader_shared_int64atomics) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES;
  void *next_;
  bool32 shader_buffer_int64atomics_;
  bool32 shader_shared_int64atomics_;
};

struct PhysicalDeviceSamplerYcbcrConversionFeatures {

  using native_type = VkPhysicalDeviceSamplerYcbcrConversionFeatures;

  PhysicalDeviceSamplerYcbcrConversionFeatures(void *next = {}, bool32 sampler_ycbcr_conversion = {})
    : next_(next), sampler_ycbcr_conversion_(sampler_ycbcr_conversion) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
  void *next_;
  bool32 sampler_ycbcr_conversion_;
};

struct VideoDecodeAV1ProfileInfoKHR {

  using native_type = VkVideoDecodeAV1ProfileInfoKHR;

  VideoDecodeAV1ProfileInfoKHR(const void *next = {}, StdVideoAV1Profile std_profile = {}, bool32 film_grain_support = {})
    : next_(next), std_profile_(std_profile), film_grain_support_(film_grain_support) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_AV1_PROFILE_INFO_KHR;
  const void *next_;
  StdVideoAV1Profile std_profile_;
  bool32 film_grain_support_;
};

struct AttachmentDescription2 {

  using native_type = VkAttachmentDescription2;

  AttachmentDescription2(const void *next = {},
                         AttachmentDescriptionMask flags = {},
                         Format format = {},
                         SampleCountMaskBit samples = {},
                         AttachmentLoadOp load_op = {},
                         AttachmentStoreOp store_op = {},
                         AttachmentLoadOp stencil_load_op = {},
                         AttachmentStoreOp stencil_store_op = {},
                         ImageLayout initial_layout = {},
                         ImageLayout final_layout = {})
    : next_(next), flags_(flags), format_(format), samples_(samples), load_op_(load_op), store_op_(store_op),
      stencil_load_op_(stencil_load_op), stencil_store_op_(stencil_store_op), initial_layout_(initial_layout), final_layout_(final_layout) {
  }

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ATTACHMENT_DESCRIPTION_2;
  const void *next_;
  AttachmentDescriptionMask flags_;
  Format format_;
  SampleCountMaskBit samples_;
  AttachmentLoadOp load_op_;
  AttachmentStoreOp store_op_;
  AttachmentLoadOp stencil_load_op_;
  AttachmentStoreOp stencil_store_op_;
  ImageLayout initial_layout_;
  ImageLayout final_layout_;
};

struct VideoEncodeCapabilitiesKHR {

  using native_type = VkVideoEncodeCapabilitiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_CAPABILITIES_KHR;
  void *next_;
  VideoEncodeCapabilityMask flags_;
  VideoEncodeRateControlModeMask rate_control_modes_;
  uint32_t max_rate_control_layers_;
  uint64_t max_bitrate_;
  uint32_t max_quality_levels_;
  Extent2D encode_input_picture_granularity_;
  VideoEncodeFeedbackMask supported_encode_feedback_flags_;
};

struct TextureLODGatherFormatPropertiesAMD {

  using native_type = VkTextureLODGatherFormatPropertiesAMD;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD;
  void *next_;
  bool32 supports_texture_gather_lodbias_amd_;
};

struct SamplerCustomBorderColorCreateInfoEXT {

  using native_type = VkSamplerCustomBorderColorCreateInfoEXT;

  SamplerCustomBorderColorCreateInfoEXT(const void *next = {}, VkClearColorValue custom_border_color = {}, Format format = {})
    : next_(next), custom_border_color_(custom_border_color), format_(format) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT;
  const void *next_;
  VkClearColorValue custom_border_color_;
  Format format_;
};

struct ConditionalRenderingBeginInfoEXT {

  using native_type = VkConditionalRenderingBeginInfoEXT;

  ConditionalRenderingBeginInfoEXT(const void *next = {}, VkBuffer buffer = {}, DeviceSize offset = {}, ConditionalRenderingMask flags = {})
    : next_(next), buffer_(buffer), offset_(offset), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::CONDITIONAL_RENDERING_BEGIN_INFO_EXT;
  const void *next_;
  VkBuffer buffer_;
  DeviceSize offset_;
  ConditionalRenderingMask flags_;
};

struct PhysicalDeviceProtectedMemoryFeatures {

  using native_type = VkPhysicalDeviceProtectedMemoryFeatures;

  PhysicalDeviceProtectedMemoryFeatures(void *next = {}, bool32 protected_memory = {}) : next_(next), protected_memory_(protected_memory) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;
  void *next_;
  bool32 protected_memory_;
};

struct PhysicalDeviceShaderClockFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderClockFeaturesKHR;

  PhysicalDeviceShaderClockFeaturesKHR(void *next = {}, bool32 shader_subgroup_clock = {}, bool32 shader_device_clock = {})
    : next_(next), shader_subgroup_clock_(shader_subgroup_clock), shader_device_clock_(shader_device_clock) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR;
  void *next_;
  bool32 shader_subgroup_clock_;
  bool32 shader_device_clock_;
};

struct SemaphoreWaitInfo {

  using native_type = VkSemaphoreWaitInfo;

  SemaphoreWaitInfo(const void *next = {},
                    SemaphoreWaitMask flags = {},
                    uint32_t semaphore_count = {},
                    const VkSemaphore *p_semaphores = {},
                    const uint64_t *p_values = {})
    : next_(next), flags_(flags), semaphore_count_(semaphore_count), p_semaphores_(p_semaphores), p_values_(p_values) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SEMAPHORE_WAIT_INFO;
  const void *next_;
  SemaphoreWaitMask flags_;
  uint32_t semaphore_count_;
  const VkSemaphore *p_semaphores_;
  const uint64_t *p_values_;
};

struct SubmitInfo2 {

  using native_type = VkSubmitInfo2;

  SubmitInfo2(const void *next = {},
              SubmitMask flags = {},
              uint32_t wait_semaphore_info_count = {},
              const SemaphoreSubmitInfo *p_wait_semaphore_infos = {},
              uint32_t command_buffer_info_count = {},
              const CommandBufferSubmitInfo *p_command_buffer_infos = {},
              uint32_t signal_semaphore_info_count = {},
              const SemaphoreSubmitInfo *p_signal_semaphore_infos = {})
    : next_(next), flags_(flags), wait_semaphore_info_count_(wait_semaphore_info_count), p_wait_semaphore_infos_(p_wait_semaphore_infos),
      command_buffer_info_count_(command_buffer_info_count), p_command_buffer_infos_(p_command_buffer_infos),
      signal_semaphore_info_count_(signal_semaphore_info_count), p_signal_semaphore_infos_(p_signal_semaphore_infos) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBMIT_INFO_2;
  const void *next_;
  SubmitMask flags_;
  uint32_t wait_semaphore_info_count_;
  const SemaphoreSubmitInfo *p_wait_semaphore_infos_;
  uint32_t command_buffer_info_count_;
  const CommandBufferSubmitInfo *p_command_buffer_infos_;
  uint32_t signal_semaphore_info_count_;
  const SemaphoreSubmitInfo *p_signal_semaphore_infos_;
};

struct MemoryRequirements2 {

  using native_type = VkMemoryRequirements2;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_REQUIREMENTS_2;
  void *next_;
  MemoryRequirements memory_requirements_;
};

struct PhysicalDeviceComputeShaderDerivativesFeaturesNV {

  using native_type = VkPhysicalDeviceComputeShaderDerivativesFeaturesNV;

  PhysicalDeviceComputeShaderDerivativesFeaturesNV(void *next = {},
                                                   bool32 compute_derivative_group_quads = {},
                                                   bool32 compute_derivative_group_linear = {})
    : next_(next), compute_derivative_group_quads_(compute_derivative_group_quads),
      compute_derivative_group_linear_(compute_derivative_group_linear) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;
  void *next_;
  bool32 compute_derivative_group_quads_;
  bool32 compute_derivative_group_linear_;
};

struct PhysicalDeviceSampleLocationsPropertiesEXT {

  using native_type = VkPhysicalDeviceSampleLocationsPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;
  void *next_;
  SampleCountMask sample_location_sample_counts_;
  Extent2D max_sample_location_grid_size_;
  std::array<float, 2> sample_location_coordinate_range_;
  uint32_t sample_location_sub_pixel_bits_;
  bool32 variable_sample_locations_;
};

struct PipelineExecutableInfoKHR {

  using native_type = VkPipelineExecutableInfoKHR;

  PipelineExecutableInfoKHR(const void *next = {}, VkPipeline pipeline = {}, uint32_t executable_index = {})
    : next_(next), pipeline_(pipeline), executable_index_(executable_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_EXECUTABLE_INFO_KHR;
  const void *next_;
  VkPipeline pipeline_;
  uint32_t executable_index_;
};

struct MultisamplePropertiesEXT {

  using native_type = VkMultisamplePropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MULTISAMPLE_PROPERTIES_EXT;
  void *next_;
  Extent2D max_sample_location_grid_size_;
};

struct BufferViewCreateInfo {

  using native_type = VkBufferViewCreateInfo;

  BufferViewCreateInfo(const void *next = {},
                       BufferViewCreateMask flags = {},
                       VkBuffer buffer = {},
                       Format format = {},
                       DeviceSize offset = {},
                       DeviceSize range = {})
    : next_(next), flags_(flags), buffer_(buffer), format_(format), offset_(offset), range_(range) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_VIEW_CREATE_INFO;
  const void *next_;
  BufferViewCreateMask flags_;
  VkBuffer buffer_;
  Format format_;
  DeviceSize offset_;
  DeviceSize range_;
};

struct SamplerReductionModeCreateInfo {

  using native_type = VkSamplerReductionModeCreateInfo;

  SamplerReductionModeCreateInfo(const void *next = {}, SamplerReductionMode reduction_mode = {})
    : next_(next), reduction_mode_(reduction_mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SAMPLER_REDUCTION_MODE_CREATE_INFO;
  const void *next_;
  SamplerReductionMode reduction_mode_;
};

struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT {

  using native_type = VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;

  PhysicalDeviceBlendOperationAdvancedFeaturesEXT(void *next = {}, bool32 advanced_blend_coherent_operations = {})
    : next_(next), advanced_blend_coherent_operations_(advanced_blend_coherent_operations) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;
  void *next_;
  bool32 advanced_blend_coherent_operations_;
};

struct MemoryAllocateInfo {

  using native_type = VkMemoryAllocateInfo;

  MemoryAllocateInfo(const void *next = {}, DeviceSize allocation_size = {}, uint32_t memory_type_index = {})
    : next_(next), allocation_size_(allocation_size), memory_type_index_(memory_type_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_ALLOCATE_INFO;
  const void *next_;
  DeviceSize allocation_size_;
  uint32_t memory_type_index_;
};

struct ImageFormatProperties2 {

  using native_type = VkImageFormatProperties2;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_FORMAT_PROPERTIES_2;
  void *next_;
  ImageFormatProperties image_format_properties_;
};

struct RenderPassSampleLocationsBeginInfoEXT {

  using native_type = VkRenderPassSampleLocationsBeginInfoEXT;

  RenderPassSampleLocationsBeginInfoEXT(const void *next = {},
                                        uint32_t attachment_initial_sample_locations_count = {},
                                        const AttachmentSampleLocationsEXT *p_attachment_initial_sample_locations = {},
                                        uint32_t post_subpass_sample_locations_count = {},
                                        const SubpassSampleLocationsEXT *p_post_subpass_sample_locations = {})
    : next_(next), attachment_initial_sample_locations_count_(attachment_initial_sample_locations_count),
      p_attachment_initial_sample_locations_(p_attachment_initial_sample_locations),
      post_subpass_sample_locations_count_(post_subpass_sample_locations_count),
      p_post_subpass_sample_locations_(p_post_subpass_sample_locations) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT;
  const void *next_;
  uint32_t attachment_initial_sample_locations_count_;
  const AttachmentSampleLocationsEXT *p_attachment_initial_sample_locations_;
  uint32_t post_subpass_sample_locations_count_;
  const SubpassSampleLocationsEXT *p_post_subpass_sample_locations_;
};

struct PhysicalDeviceMultiDrawFeaturesEXT {

  using native_type = VkPhysicalDeviceMultiDrawFeaturesEXT;

  PhysicalDeviceMultiDrawFeaturesEXT(void *next = {}, bool32 multi_draw = {}) : next_(next), multi_draw_(multi_draw) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT;
  void *next_;
  bool32 multi_draw_;
};

struct PhysicalDeviceBlendOperationAdvancedPropertiesEXT {

  using native_type = VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT;
  void *next_;
  uint32_t advanced_blend_max_color_attachments_;
  bool32 advanced_blend_independent_blend_;
  bool32 advanced_blend_non_premultiplied_src_color_;
  bool32 advanced_blend_non_premultiplied_dst_color_;
  bool32 advanced_blend_correlated_overlap_;
  bool32 advanced_blend_all_operations_;
};

struct PhysicalDeviceDepthClipEnableFeaturesEXT {

  using native_type = VkPhysicalDeviceDepthClipEnableFeaturesEXT;

  PhysicalDeviceDepthClipEnableFeaturesEXT(void *next = {}, bool32 depth_clip_enable = {})
    : next_(next), depth_clip_enable_(depth_clip_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT;
  void *next_;
  bool32 depth_clip_enable_;
};

struct RenderPassSubpassFeedbackInfoEXT {

  using native_type = VkRenderPassSubpassFeedbackInfoEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  SubpassMergeStatus subpass_merge_status_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> description_;
  uint32_t post_merge_index_;
};

struct PipelineColorBlendAdvancedStateCreateInfoEXT {

  using native_type = VkPipelineColorBlendAdvancedStateCreateInfoEXT;

  PipelineColorBlendAdvancedStateCreateInfoEXT(const void *next = {},
                                               bool32 src_premultiplied = {},
                                               bool32 dst_premultiplied = {},
                                               BlendOverlap blend_overlap = {})
    : next_(next), src_premultiplied_(src_premultiplied), dst_premultiplied_(dst_premultiplied), blend_overlap_(blend_overlap) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT;
  const void *next_;
  bool32 src_premultiplied_;
  bool32 dst_premultiplied_;
  BlendOverlap blend_overlap_;
};

struct DeviceQueueInfo2 {

  using native_type = VkDeviceQueueInfo2;

  DeviceQueueInfo2(const void *next = {}, DeviceQueueCreateMask flags = {}, uint32_t queue_family_index = {}, uint32_t queue_index = {})
    : next_(next), flags_(flags), queue_family_index_(queue_family_index), queue_index_(queue_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_QUEUE_INFO_2;
  const void *next_;
  DeviceQueueCreateMask flags_;
  uint32_t queue_family_index_;
  uint32_t queue_index_;
};

struct PhysicalDeviceInlineUniformBlockProperties {

  using native_type = VkPhysicalDeviceInlineUniformBlockProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES;
  void *next_;
  uint32_t max_inline_uniform_block_size_;
  uint32_t max_per_stage_descriptor_inline_uniform_blocks_;
  uint32_t max_per_stage_descriptor_update_after_bind_inline_uniform_blocks_;
  uint32_t max_descriptor_set_inline_uniform_blocks_;
  uint32_t max_descriptor_set_update_after_bind_inline_uniform_blocks_;
};

struct SemaphoreTypeCreateInfo {

  using native_type = VkSemaphoreTypeCreateInfo;

  SemaphoreTypeCreateInfo(const void *next = {}, SemaphoreType semaphore_type = {}, uint64_t initial_value = {})
    : next_(next), semaphore_type_(semaphore_type), initial_value_(initial_value) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SEMAPHORE_TYPE_CREATE_INFO;
  const void *next_;
  SemaphoreType semaphore_type_;
  uint64_t initial_value_;
};

struct DescriptorPoolInlineUniformBlockCreateInfo {

  using native_type = VkDescriptorPoolInlineUniformBlockCreateInfo;

  DescriptorPoolInlineUniformBlockCreateInfo(const void *next = {}, uint32_t max_inline_uniform_block_bindings = {})
    : next_(next), max_inline_uniform_block_bindings_(max_inline_uniform_block_bindings) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO;
  const void *next_;
  uint32_t max_inline_uniform_block_bindings_;
};

struct ValidationCacheCreateInfoEXT {

  using native_type = VkValidationCacheCreateInfoEXT;

  ValidationCacheCreateInfoEXT(const void *next = {},
                               ValidationCacheCreateMask flags = {},
                               size_t initial_data_size = {},
                               const void *p_initial_data = {})
    : next_(next), flags_(flags), initial_data_size_(initial_data_size), p_initial_data_(p_initial_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VALIDATION_CACHE_CREATE_INFO_EXT;
  const void *next_;
  ValidationCacheCreateMask flags_;
  size_t initial_data_size_;
  const void *p_initial_data_;
};

struct ShaderModuleValidationCacheCreateInfoEXT {

  using native_type = VkShaderModuleValidationCacheCreateInfoEXT;

  ShaderModuleValidationCacheCreateInfoEXT(const void *next = {}, VkValidationCacheEXT validation_cache = {})
    : next_(next), validation_cache_(validation_cache) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT;
  const void *next_;
  VkValidationCacheEXT validation_cache_;
};

struct PhysicalDeviceVulkan12Properties {

  using native_type = VkPhysicalDeviceVulkan12Properties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES;
  void *next_;
  DriverId driver_id_;
  std::array<char, VK_MAX_DRIVER_NAME_SIZE> driver_name_;
  std::array<char, VK_MAX_DRIVER_INFO_SIZE> driver_info_;
  ConformanceVersion conformance_version_;
  ShaderFloatControlsIndependence denorm_behavior_independence_;
  ShaderFloatControlsIndependence rounding_mode_independence_;
  bool32 shader_signed_zero_inf_nan_preserve_float16_;
  bool32 shader_signed_zero_inf_nan_preserve_float32_;
  bool32 shader_signed_zero_inf_nan_preserve_float64_;
  bool32 shader_denorm_preserve_float16_;
  bool32 shader_denorm_preserve_float32_;
  bool32 shader_denorm_preserve_float64_;
  bool32 shader_denorm_flush_to_zero_float16_;
  bool32 shader_denorm_flush_to_zero_float32_;
  bool32 shader_denorm_flush_to_zero_float64_;
  bool32 shader_rounding_mode_rtefloat16_;
  bool32 shader_rounding_mode_rtefloat32_;
  bool32 shader_rounding_mode_rtefloat64_;
  bool32 shader_rounding_mode_rtzfloat16_;
  bool32 shader_rounding_mode_rtzfloat32_;
  bool32 shader_rounding_mode_rtzfloat64_;
  uint32_t max_update_after_bind_descriptors_in_all_pools_;
  bool32 shader_uniform_buffer_array_non_uniform_indexing_native_;
  bool32 shader_sampled_image_array_non_uniform_indexing_native_;
  bool32 shader_storage_buffer_array_non_uniform_indexing_native_;
  bool32 shader_storage_image_array_non_uniform_indexing_native_;
  bool32 shader_input_attachment_array_non_uniform_indexing_native_;
  bool32 robust_buffer_access_update_after_bind_;
  bool32 quad_divergent_implicit_lod_;
  uint32_t max_per_stage_descriptor_update_after_bind_samplers_;
  uint32_t max_per_stage_descriptor_update_after_bind_uniform_buffers_;
  uint32_t max_per_stage_descriptor_update_after_bind_storage_buffers_;
  uint32_t max_per_stage_descriptor_update_after_bind_sampled_images_;
  uint32_t max_per_stage_descriptor_update_after_bind_storage_images_;
  uint32_t max_per_stage_descriptor_update_after_bind_input_attachments_;
  uint32_t max_per_stage_update_after_bind_resources_;
  uint32_t max_descriptor_set_update_after_bind_samplers_;
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_;
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_;
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_dynamic_;
  uint32_t max_descriptor_set_update_after_bind_sampled_images_;
  uint32_t max_descriptor_set_update_after_bind_storage_images_;
  uint32_t max_descriptor_set_update_after_bind_input_attachments_;
  ResolveModeMask supported_depth_resolve_modes_;
  ResolveModeMask supported_stencil_resolve_modes_;
  bool32 independent_resolve_none_;
  bool32 independent_resolve_;
  bool32 filter_minmax_single_component_formats_;
  bool32 filter_minmax_image_component_mapping_;
  uint64_t max_timeline_semaphore_value_difference_;
  SampleCountMask framebuffer_integer_color_sample_counts_;
};

struct LayerProperties {

  using native_type = VkLayerProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  std::array<char, VK_MAX_EXTENSION_NAME_SIZE> layer_name_;
  uint32_t spec_version_;
  uint32_t implementation_version_;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> description_;
};

struct ImportMemoryHostPointerInfoEXT {

  using native_type = VkImportMemoryHostPointerInfoEXT;

  ImportMemoryHostPointerInfoEXT(const void *next = {}, ExternalMemoryHandleTypeMaskBit handle_type = {}, void *p_host_pointer = {})
    : next_(next), handle_type_(handle_type), p_host_pointer_(p_host_pointer) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMPORT_MEMORY_HOST_POINTER_INFO_EXT;
  const void *next_;
  ExternalMemoryHandleTypeMaskBit handle_type_;
  void *p_host_pointer_;
};

struct QueueFamilyCheckpointPropertiesNV {

  using native_type = VkQueueFamilyCheckpointPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV;
  void *next_;
  PipelineStageMask checkpoint_execution_stage_mask_;
};

struct PhysicalDeviceMaintenance4Properties {

  using native_type = VkPhysicalDeviceMaintenance4Properties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES;
  void *next_;
  DeviceSize max_buffer_size_;
};

struct PhysicalDeviceMaintenance5FeaturesKHR {

  using native_type = VkPhysicalDeviceMaintenance5FeaturesKHR;

  PhysicalDeviceMaintenance5FeaturesKHR(void *next = {}, bool32 maintenance5 = {}) : next_(next), maintenance5_(maintenance5) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR;
  void *next_;
  bool32 maintenance5_;
};

struct PhysicalDeviceMaintenance6FeaturesKHR {

  using native_type = VkPhysicalDeviceMaintenance6FeaturesKHR;

  PhysicalDeviceMaintenance6FeaturesKHR(void *next = {}, bool32 maintenance6 = {}) : next_(next), maintenance6_(maintenance6) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR;
  void *next_;
  bool32 maintenance6_;
};

struct CopyMicromapToMemoryInfoEXT {

  using native_type = VkCopyMicromapToMemoryInfoEXT;

  CopyMicromapToMemoryInfoEXT(const void *next = {}, VkMicromapEXT src = {}, VkDeviceOrHostAddressKHR dst = {}, CopyMicromapMode mode = {})
    : next_(next), src_(src), dst_(dst), mode_(mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_MICROMAP_TO_MEMORY_INFO_EXT;
  const void *next_;
  VkMicromapEXT src_;
  VkDeviceOrHostAddressKHR dst_;
  CopyMicromapMode mode_;
};

struct PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM {

  using native_type = VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM;

  PhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(void *next = {}, bool32 multiview_per_view_viewports = {})
    : next_(next), multiview_per_view_viewports_(multiview_per_view_viewports) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM;
  void *next_;
  bool32 multiview_per_view_viewports_;
};

struct PhysicalDeviceNonSeamlessCubeMapFeaturesEXT {

  using native_type = VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT;

  PhysicalDeviceNonSeamlessCubeMapFeaturesEXT(void *next = {}, bool32 non_seamless_cube_map = {})
    : next_(next), non_seamless_cube_map_(non_seamless_cube_map) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT;
  void *next_;
  bool32 non_seamless_cube_map_;
};

struct PhysicalDeviceMaintenance6PropertiesKHR {

  using native_type = VkPhysicalDeviceMaintenance6PropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES_KHR;
  void *next_;
  bool32 block_texel_view_compatible_multiple_layers_;
  uint32_t max_combined_image_sampler_descriptor_count_;
  bool32 fragment_shading_rate_clamp_combiner_inputs_;
};

struct PhysicalDeviceLayeredApiPropertiesListKHR {

  using native_type = VkPhysicalDeviceLayeredApiPropertiesListKHR;

  PhysicalDeviceLayeredApiPropertiesListKHR(void *next = {},
                                            uint32_t layered_api_count = {},
                                            PhysicalDeviceLayeredApiPropertiesKHR *p_layered_apis = {})
    : next_(next), layered_api_count_(layered_api_count), p_layered_apis_(p_layered_apis) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR;
  void *next_;
  uint32_t layered_api_count_;
  PhysicalDeviceLayeredApiPropertiesKHR *p_layered_apis_;
};

struct RenderingAreaInfoKHR {

  using native_type = VkRenderingAreaInfoKHR;

  RenderingAreaInfoKHR(const void *next = {},
                       uint32_t view_mask = {},
                       uint32_t color_attachment_count = {},
                       const Format *p_color_attachment_formats = {},
                       Format depth_attachment_format = {},
                       Format stencil_attachment_format = {})
    : next_(next), view_mask_(view_mask), color_attachment_count_(color_attachment_count),
      p_color_attachment_formats_(p_color_attachment_formats), depth_attachment_format_(depth_attachment_format),
      stencil_attachment_format_(stencil_attachment_format) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDERING_AREA_INFO_KHR;
  const void *next_;
  uint32_t view_mask_;
  uint32_t color_attachment_count_;
  const Format *p_color_attachment_formats_;
  Format depth_attachment_format_;
  Format stencil_attachment_format_;
};

struct ColorBlendEquationEXT {

  using native_type = VkColorBlendEquationEXT;

  ColorBlendEquationEXT(BlendFactor src_color_blend_factor = {},
                        BlendFactor dst_color_blend_factor = {},
                        BlendOp color_blend_op = {},
                        BlendFactor src_alpha_blend_factor = {},
                        BlendFactor dst_alpha_blend_factor = {},
                        BlendOp alpha_blend_op = {})
    : src_color_blend_factor_(src_color_blend_factor), dst_color_blend_factor_(dst_color_blend_factor), color_blend_op_(color_blend_op),
      src_alpha_blend_factor_(src_alpha_blend_factor), dst_alpha_blend_factor_(dst_alpha_blend_factor), alpha_blend_op_(alpha_blend_op) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  BlendFactor src_color_blend_factor_;
  BlendFactor dst_color_blend_factor_;
  BlendOp color_blend_op_;
  BlendFactor src_alpha_blend_factor_;
  BlendFactor dst_alpha_blend_factor_;
  BlendOp alpha_blend_op_;
};

struct PerformanceValueINTEL {

  using native_type = VkPerformanceValueINTEL;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  PerformanceValueType type_;
  VkPerformanceValueDataINTEL data_;
};

struct DescriptorSetLayoutSupport {

  using native_type = VkDescriptorSetLayoutSupport;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_SET_LAYOUT_SUPPORT;
  void *next_;
  bool32 supported_;
};

struct PhysicalDeviceFloatControlsProperties {

  using native_type = VkPhysicalDeviceFloatControlsProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES;
  void *next_;
  ShaderFloatControlsIndependence denorm_behavior_independence_;
  ShaderFloatControlsIndependence rounding_mode_independence_;
  bool32 shader_signed_zero_inf_nan_preserve_float16_;
  bool32 shader_signed_zero_inf_nan_preserve_float32_;
  bool32 shader_signed_zero_inf_nan_preserve_float64_;
  bool32 shader_denorm_preserve_float16_;
  bool32 shader_denorm_preserve_float32_;
  bool32 shader_denorm_preserve_float64_;
  bool32 shader_denorm_flush_to_zero_float16_;
  bool32 shader_denorm_flush_to_zero_float32_;
  bool32 shader_denorm_flush_to_zero_float64_;
  bool32 shader_rounding_mode_rtefloat16_;
  bool32 shader_rounding_mode_rtefloat32_;
  bool32 shader_rounding_mode_rtefloat64_;
  bool32 shader_rounding_mode_rtzfloat16_;
  bool32 shader_rounding_mode_rtzfloat32_;
  bool32 shader_rounding_mode_rtzfloat64_;
};

struct PhysicalDeviceDescriptorBufferDensityMapPropertiesEXT {

  using native_type = VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT;
  void *next_;
  size_t combined_image_sampler_density_map_descriptor_size_;
};

struct DeviceQueueGlobalPriorityCreateInfoKHR {

  using native_type = VkDeviceQueueGlobalPriorityCreateInfoKHR;

  DeviceQueueGlobalPriorityCreateInfoKHR(const void *next = {}, QueueGlobalPriority global_priority = {})
    : next_(next), global_priority_(global_priority) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR;
  const void *next_;
  QueueGlobalPriority global_priority_;
};

struct PhysicalDeviceHostQueryResetFeatures {

  using native_type = VkPhysicalDeviceHostQueryResetFeatures;

  PhysicalDeviceHostQueryResetFeatures(void *next = {}, bool32 host_query_reset = {}) : next_(next), host_query_reset_(host_query_reset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES;
  void *next_;
  bool32 host_query_reset_;
};

struct CommandBufferInheritanceViewportScissorInfoNV {

  using native_type = VkCommandBufferInheritanceViewportScissorInfoNV;

  CommandBufferInheritanceViewportScissorInfoNV(const void *next = {},
                                                bool32 viewport_scissor2d = {},
                                                uint32_t viewport_depth_count = {},
                                                const Viewport *p_viewport_depths = {})
    : next_(next), viewport_scissor2d_(viewport_scissor2d), viewport_depth_count_(viewport_depth_count),
      p_viewport_depths_(p_viewport_depths) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV;
  const void *next_;
  bool32 viewport_scissor2d_;
  uint32_t viewport_depth_count_;
  const Viewport *p_viewport_depths_;
};

struct PhysicalDeviceGlobalPriorityQueryFeaturesKHR {

  using native_type = VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR;

  PhysicalDeviceGlobalPriorityQueryFeaturesKHR(void *next = {}, bool32 global_priority_query = {})
    : next_(next), global_priority_query_(global_priority_query) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR;
  void *next_;
  bool32 global_priority_query_;
};

struct PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL {

  using native_type = VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;

  PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(void *next = {}, bool32 shader_integer_functions2 = {})
    : next_(next), shader_integer_functions2_(shader_integer_functions2) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL;
  void *next_;
  bool32 shader_integer_functions2_;
};

struct DebugUtilsObjectTagInfoEXT {

  using native_type = VkDebugUtilsObjectTagInfoEXT;

  DebugUtilsObjectTagInfoEXT(const void *next = {},
                             ObjectType object_type = {},
                             uint64_t object_handle = {},
                             uint64_t tag_name = {},
                             size_t tag_size = {},
                             const void *p_tag = {})
    : next_(next), object_type_(object_type), object_handle_(object_handle), tag_name_(tag_name), tag_size_(tag_size), p_tag_(p_tag) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEBUG_UTILS_OBJECT_TAG_INFO_EXT;
  const void *next_;
  ObjectType object_type_;
  uint64_t object_handle_;
  uint64_t tag_name_;
  size_t tag_size_;
  const void *p_tag_;
};

struct MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM {

  using native_type = VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM;

  MultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(const void *next = {},
                                                     uint32_t per_view_render_area_count = {},
                                                     const Rect2D *p_per_view_render_areas = {})
    : next_(next), per_view_render_area_count_(per_view_render_area_count), p_per_view_render_areas_(p_per_view_render_areas) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM;
  const void *next_;
  uint32_t per_view_render_area_count_;
  const Rect2D *p_per_view_render_areas_;
};

struct DebugUtilsLabelEXT {

  using native_type = VkDebugUtilsLabelEXT;

  DebugUtilsLabelEXT(const void *next = {}, const char *p_label_name = {}, const std::array<float, 4> &color = {})
    : next_(next), p_label_name_(p_label_name), color_(color) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEBUG_UTILS_LABEL_EXT;
  const void *next_;
  const char *p_label_name_;
  std::array<float, 4> color_;
};

struct PhysicalDeviceFragmentShadingRateKHR {

  using native_type = VkPhysicalDeviceFragmentShadingRateKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR;
  void *next_;
  SampleCountMask sample_counts_;
  Extent2D fragment_size_;
};

struct DebugUtilsObjectNameInfoEXT {

  using native_type = VkDebugUtilsObjectNameInfoEXT;

  DebugUtilsObjectNameInfoEXT(const void *next = {},
                              ObjectType object_type = {},
                              uint64_t object_handle = {},
                              const char *p_object_name = {})
    : next_(next), object_type_(object_type), object_handle_(object_handle), p_object_name_(p_object_name) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
  const void *next_;
  ObjectType object_type_;
  uint64_t object_handle_;
  const char *p_object_name_;
};

struct DebugUtilsMessengerCallbackDataEXT {

  using native_type = VkDebugUtilsMessengerCallbackDataEXT;

  DebugUtilsMessengerCallbackDataEXT(const void *next = {},
                                     DebugUtilsMessengerCallbackDataMask flags = {},
                                     const char *p_message_id_name = {},
                                     int32_t message_id_number = {},
                                     const char *p_message = {},
                                     uint32_t queue_label_count = {},
                                     const DebugUtilsLabelEXT *p_queue_labels = {},
                                     uint32_t cmd_buf_label_count = {},
                                     const DebugUtilsLabelEXT *p_cmd_buf_labels = {},
                                     uint32_t object_count = {},
                                     const DebugUtilsObjectNameInfoEXT *p_objects = {})
    : next_(next), flags_(flags), p_message_id_name_(p_message_id_name), message_id_number_(message_id_number), p_message_(p_message),
      queue_label_count_(queue_label_count), p_queue_labels_(p_queue_labels), cmd_buf_label_count_(cmd_buf_label_count),
      p_cmd_buf_labels_(p_cmd_buf_labels), object_count_(object_count), p_objects_(p_objects) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;
  const void *next_;
  DebugUtilsMessengerCallbackDataMask flags_;
  const char *p_message_id_name_;
  int32_t message_id_number_;
  const char *p_message_;
  uint32_t queue_label_count_;
  const DebugUtilsLabelEXT *p_queue_labels_;
  uint32_t cmd_buf_label_count_;
  const DebugUtilsLabelEXT *p_cmd_buf_labels_;
  uint32_t object_count_;
  const DebugUtilsObjectNameInfoEXT *p_objects_;
};

struct PhysicalDeviceShaderFloatControls2FeaturesKHR {

  using native_type = VkPhysicalDeviceShaderFloatControls2FeaturesKHR;

  PhysicalDeviceShaderFloatControls2FeaturesKHR(void *next = {}, bool32 shader_float_controls2 = {})
    : next_(next), shader_float_controls2_(shader_float_controls2) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR;
  void *next_;
  bool32 shader_float_controls2_;
};

struct DisplayProperties2KHR {

  using native_type = VkDisplayProperties2KHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_PROPERTIES_2_KHR;
  void *next_;
  DisplayPropertiesKHR display_properties_;
};

struct PhysicalDeviceTransformFeedbackFeaturesEXT {

  using native_type = VkPhysicalDeviceTransformFeedbackFeaturesEXT;

  PhysicalDeviceTransformFeedbackFeaturesEXT(void *next = {}, bool32 transform_feedback = {}, bool32 geometry_streams = {})
    : next_(next), transform_feedback_(transform_feedback), geometry_streams_(geometry_streams) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT;
  void *next_;
  bool32 transform_feedback_;
  bool32 geometry_streams_;
};

struct VideoSessionMemoryRequirementsKHR {

  using native_type = VkVideoSessionMemoryRequirementsKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR;
  void *next_;
  uint32_t memory_bind_index_;
  MemoryRequirements memory_requirements_;
};

struct DeviceMemoryReportCallbackDataEXT {

  using native_type = VkDeviceMemoryReportCallbackDataEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT;
  void *next_;
  DeviceMemoryReportMask flags_;
  DeviceMemoryReportEventType type_;
  uint64_t memory_object_id_;
  DeviceSize size_;
  ObjectType object_type_;
  uint64_t object_handle_;
  uint32_t heap_index_;
};

struct SubpassDescription2 {

  using native_type = VkSubpassDescription2;

  SubpassDescription2(const void *next = {},
                      SubpassDescriptionMask flags = {},
                      PipelineBindPoint pipeline_bind_point = {},
                      uint32_t view_mask = {},
                      uint32_t input_attachment_count = {},
                      const AttachmentReference2 *p_input_attachments = {},
                      uint32_t color_attachment_count = {},
                      const AttachmentReference2 *p_color_attachments = {},
                      const AttachmentReference2 *p_resolve_attachments = {},
                      const AttachmentReference2 *p_depth_stencil_attachment = {},
                      uint32_t preserve_attachment_count = {},
                      const uint32_t *p_preserve_attachments = {})
    : next_(next), flags_(flags), pipeline_bind_point_(pipeline_bind_point), view_mask_(view_mask),
      input_attachment_count_(input_attachment_count), p_input_attachments_(p_input_attachments),
      color_attachment_count_(color_attachment_count), p_color_attachments_(p_color_attachments),
      p_resolve_attachments_(p_resolve_attachments), p_depth_stencil_attachment_(p_depth_stencil_attachment),
      preserve_attachment_count_(preserve_attachment_count), p_preserve_attachments_(p_preserve_attachments) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBPASS_DESCRIPTION_2;
  const void *next_;
  SubpassDescriptionMask flags_;
  PipelineBindPoint pipeline_bind_point_;
  uint32_t view_mask_;
  uint32_t input_attachment_count_;
  const AttachmentReference2 *p_input_attachments_;
  uint32_t color_attachment_count_;
  const AttachmentReference2 *p_color_attachments_;
  const AttachmentReference2 *p_resolve_attachments_;
  const AttachmentReference2 *p_depth_stencil_attachment_;
  uint32_t preserve_attachment_count_;
  const uint32_t *p_preserve_attachments_;
};

struct RenderPassCreateInfo2 {

  using native_type = VkRenderPassCreateInfo2;

  RenderPassCreateInfo2(const void *next = {},
                        RenderPassCreateMask flags = {},
                        uint32_t attachment_count = {},
                        const AttachmentDescription2 *p_attachments = {},
                        uint32_t subpass_count = {},
                        const SubpassDescription2 *p_subpasses = {},
                        uint32_t dependency_count = {},
                        const SubpassDependency2 *p_dependencies = {},
                        uint32_t correlated_view_mask_count = {},
                        const uint32_t *p_correlated_view_masks = {})
    : next_(next), flags_(flags), attachment_count_(attachment_count), p_attachments_(p_attachments), subpass_count_(subpass_count),
      p_subpasses_(p_subpasses), dependency_count_(dependency_count), p_dependencies_(p_dependencies),
      correlated_view_mask_count_(correlated_view_mask_count), p_correlated_view_masks_(p_correlated_view_masks) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_CREATE_INFO_2;
  const void *next_;
  RenderPassCreateMask flags_;
  uint32_t attachment_count_;
  const AttachmentDescription2 *p_attachments_;
  uint32_t subpass_count_;
  const SubpassDescription2 *p_subpasses_;
  uint32_t dependency_count_;
  const SubpassDependency2 *p_dependencies_;
  uint32_t correlated_view_mask_count_;
  const uint32_t *p_correlated_view_masks_;
};

struct VideoDecodeH265SessionParametersCreateInfoKHR {

  using native_type = VkVideoDecodeH265SessionParametersCreateInfoKHR;

  VideoDecodeH265SessionParametersCreateInfoKHR(const void *next = {},
                                                uint32_t max_std_vpscount = {},
                                                uint32_t max_std_spscount = {},
                                                uint32_t max_std_ppscount = {},
                                                const VideoDecodeH265SessionParametersAddInfoKHR *p_parameters_add_info = {})
    : next_(next), max_std_vpscount_(max_std_vpscount), max_std_spscount_(max_std_spscount), max_std_ppscount_(max_std_ppscount),
      p_parameters_add_info_(p_parameters_add_info) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR;
  const void *next_;
  uint32_t max_std_vpscount_;
  uint32_t max_std_spscount_;
  uint32_t max_std_ppscount_;
  const VideoDecodeH265SessionParametersAddInfoKHR *p_parameters_add_info_;
};

struct PhysicalDeviceShaderCoreProperties2AMD {

  using native_type = VkPhysicalDeviceShaderCoreProperties2AMD;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD;
  void *next_;
  ShaderCorePropertiesMask shader_core_features_;
  uint32_t active_compute_unit_count_;
};

struct PipelineRasterizationConservativeStateCreateInfoEXT {

  using native_type = VkPipelineRasterizationConservativeStateCreateInfoEXT;

  PipelineRasterizationConservativeStateCreateInfoEXT(const void *next = {},
                                                      PipelineRasterizationConservativeStateCreateMask flags = {},
                                                      ConservativeRasterizationMode conservative_rasterization_mode = {},
                                                      float extra_primitive_overestimation_size = {})
    : next_(next), flags_(flags), conservative_rasterization_mode_(conservative_rasterization_mode),
      extra_primitive_overestimation_size_(extra_primitive_overestimation_size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT;
  const void *next_;
  PipelineRasterizationConservativeStateCreateMask flags_;
  ConservativeRasterizationMode conservative_rasterization_mode_;
  float extra_primitive_overestimation_size_;
};

struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT {

  using native_type = VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;
  void *next_;
  uint32_t max_vertex_attrib_divisor_;
};

struct PhysicalDeviceImageDrmFormatModifierInfoEXT {

  using native_type = VkPhysicalDeviceImageDrmFormatModifierInfoEXT;

  PhysicalDeviceImageDrmFormatModifierInfoEXT(const void *next = {},
                                              uint64_t drm_format_modifier = {},
                                              SharingMode sharing_mode = {},
                                              uint32_t queue_family_index_count = {},
                                              const uint32_t *p_queue_family_indices = {})
    : next_(next), drm_format_modifier_(drm_format_modifier), sharing_mode_(sharing_mode),
      queue_family_index_count_(queue_family_index_count), p_queue_family_indices_(p_queue_family_indices) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT;
  const void *next_;
  uint64_t drm_format_modifier_;
  SharingMode sharing_mode_;
  uint32_t queue_family_index_count_;
  const uint32_t *p_queue_family_indices_;
};

struct DescriptorSetLayoutBindingFlagsCreateInfo {

  using native_type = VkDescriptorSetLayoutBindingFlagsCreateInfo;

  DescriptorSetLayoutBindingFlagsCreateInfo(const void *next = {},
                                            uint32_t binding_count = {},
                                            const DescriptorBindingMask *p_binding_flags = {})
    : next_(next), binding_count_(binding_count), p_binding_flags_(p_binding_flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO;
  const void *next_;
  uint32_t binding_count_;
  const DescriptorBindingMask *p_binding_flags_;
};

struct DescriptorSetVariableDescriptorCountLayoutSupport {

  using native_type = VkDescriptorSetVariableDescriptorCountLayoutSupport;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT;
  void *next_;
  uint32_t max_variable_descriptor_count_;
};

struct ImageViewHandleInfoNVX {

  using native_type = VkImageViewHandleInfoNVX;

  ImageViewHandleInfoNVX(const void *next = {}, VkImageView image_view = {}, DescriptorType descriptor_type = {}, VkSampler sampler = {})
    : next_(next), image_view_(image_view), descriptor_type_(descriptor_type), sampler_(sampler) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_VIEW_HANDLE_INFO_NVX;
  const void *next_;
  VkImageView image_view_;
  DescriptorType descriptor_type_;
  VkSampler sampler_;
};

struct SubpassBeginInfo {

  using native_type = VkSubpassBeginInfo;

  SubpassBeginInfo(const void *next = {}, SubpassContents contents = {}) : next_(next), contents_(contents) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBPASS_BEGIN_INFO;
  const void *next_;
  SubpassContents contents_;
};

struct PhysicalDeviceCornerSampledImageFeaturesNV {

  using native_type = VkPhysicalDeviceCornerSampledImageFeaturesNV;

  PhysicalDeviceCornerSampledImageFeaturesNV(void *next = {}, bool32 corner_sampled_image = {})
    : next_(next), corner_sampled_image_(corner_sampled_image) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;
  void *next_;
  bool32 corner_sampled_image_;
};

struct PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM {

  using native_type = VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM;

  PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(void *next = {}, bool32 fragment_density_map_offset = {})
    : next_(next), fragment_density_map_offset_(fragment_density_map_offset) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM;
  void *next_;
  bool32 fragment_density_map_offset_;
};

struct PhysicalDeviceTimelineSemaphoreFeatures {

  using native_type = VkPhysicalDeviceTimelineSemaphoreFeatures;

  PhysicalDeviceTimelineSemaphoreFeatures(void *next = {}, bool32 timeline_semaphore = {})
    : next_(next), timeline_semaphore_(timeline_semaphore) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;
  void *next_;
  bool32 timeline_semaphore_;
};

struct SemaphoreSignalInfo {

  using native_type = VkSemaphoreSignalInfo;

  SemaphoreSignalInfo(const void *next = {}, VkSemaphore semaphore = {}, uint64_t value = {})
    : next_(next), semaphore_(semaphore), value_(value) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SEMAPHORE_SIGNAL_INFO;
  const void *next_;
  VkSemaphore semaphore_;
  uint64_t value_;
};

struct PhysicalDevicePresentBarrierFeaturesNV {

  using native_type = VkPhysicalDevicePresentBarrierFeaturesNV;

  PhysicalDevicePresentBarrierFeaturesNV(void *next = {}, bool32 present_barrier = {}) : next_(next), present_barrier_(present_barrier) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV;
  void *next_;
  bool32 present_barrier_;
};

struct DescriptorSetLayoutHostMappingInfoVALVE {

  using native_type = VkDescriptorSetLayoutHostMappingInfoVALVE;

  DescriptorSetLayoutHostMappingInfoVALVE(void *next = {}, size_t descriptor_offset = {}, uint32_t descriptor_size = {})
    : next_(next), descriptor_offset_(descriptor_offset), descriptor_size_(descriptor_size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE;
  void *next_;
  size_t descriptor_offset_;
  uint32_t descriptor_size_;
};

struct CopyImageToImageInfoEXT {

  using native_type = VkCopyImageToImageInfoEXT;

  CopyImageToImageInfoEXT(const void *next = {},
                          HostImageCopyMask flags = {},
                          VkImage src_image = {},
                          ImageLayout src_image_layout = {},
                          VkImage dst_image = {},
                          ImageLayout dst_image_layout = {},
                          uint32_t region_count = {},
                          const ImageCopy2 *p_regions = {})
    : next_(next), flags_(flags), src_image_(src_image), src_image_layout_(src_image_layout), dst_image_(dst_image),
      dst_image_layout_(dst_image_layout), region_count_(region_count), p_regions_(p_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_IMAGE_TO_IMAGE_INFO_EXT;
  const void *next_;
  HostImageCopyMask flags_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const ImageCopy2 *p_regions_;
};

struct PhysicalDeviceVertexAttributeDivisorPropertiesKHR {

  using native_type = VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR;
  void *next_;
  uint32_t max_vertex_attrib_divisor_;
  bool32 supports_non_zero_first_instance_;
};

struct PhysicalDeviceImageViewImageFormatInfoEXT {

  using native_type = VkPhysicalDeviceImageViewImageFormatInfoEXT;

  PhysicalDeviceImageViewImageFormatInfoEXT(void *next = {}, ImageViewType image_view_type = {})
    : next_(next), image_view_type_(image_view_type) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT;
  void *next_;
  ImageViewType image_view_type_;
};

struct PhysicalDeviceCoherentMemoryFeaturesAMD {

  using native_type = VkPhysicalDeviceCoherentMemoryFeaturesAMD;

  PhysicalDeviceCoherentMemoryFeaturesAMD(void *next = {}, bool32 device_coherent_memory = {})
    : next_(next), device_coherent_memory_(device_coherent_memory) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD;
  void *next_;
  bool32 device_coherent_memory_;
};

struct ImageFormatListCreateInfo {

  using native_type = VkImageFormatListCreateInfo;

  ImageFormatListCreateInfo(const void *next = {}, uint32_t view_format_count = {}, const Format *p_view_formats = {})
    : next_(next), view_format_count_(view_format_count), p_view_formats_(p_view_formats) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_FORMAT_LIST_CREATE_INFO;
  const void *next_;
  uint32_t view_format_count_;
  const Format *p_view_formats_;
};

struct ImageViewUsageCreateInfo {

  using native_type = VkImageViewUsageCreateInfo;

  ImageViewUsageCreateInfo(const void *next = {}, ImageUsageMask usage = {}) : next_(next), usage_(usage) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_VIEW_USAGE_CREATE_INFO;
  const void *next_;
  ImageUsageMask usage_;
};

struct PhysicalDevice8BitStorageFeatures {

  using native_type = VkPhysicalDevice8BitStorageFeatures;

  PhysicalDevice8BitStorageFeatures(void *next = {},
                                    bool32 storage_buffer8bit_access = {},
                                    bool32 uniform_and_storage_buffer8bit_access = {},
                                    bool32 storage_push_constant8 = {})
    : next_(next), storage_buffer8bit_access_(storage_buffer8bit_access),
      uniform_and_storage_buffer8bit_access_(uniform_and_storage_buffer8bit_access), storage_push_constant8_(storage_push_constant8) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES;
  void *next_;
  bool32 storage_buffer8bit_access_;
  bool32 uniform_and_storage_buffer8bit_access_;
  bool32 storage_push_constant8_;
};

struct CopyImageInfo2 {

  using native_type = VkCopyImageInfo2;

  CopyImageInfo2(const void *next = {},
                 VkImage src_image = {},
                 ImageLayout src_image_layout = {},
                 VkImage dst_image = {},
                 ImageLayout dst_image_layout = {},
                 uint32_t region_count = {},
                 const ImageCopy2 *p_regions = {})
    : next_(next), src_image_(src_image), src_image_layout_(src_image_layout), dst_image_(dst_image), dst_image_layout_(dst_image_layout),
      region_count_(region_count), p_regions_(p_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_IMAGE_INFO_2;
  const void *next_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const ImageCopy2 *p_regions_;
};

struct PhysicalDeviceConditionalRenderingFeaturesEXT {

  using native_type = VkPhysicalDeviceConditionalRenderingFeaturesEXT;

  PhysicalDeviceConditionalRenderingFeaturesEXT(void *next = {},
                                                bool32 conditional_rendering = {},
                                                bool32 inherited_conditional_rendering = {})
    : next_(next), conditional_rendering_(conditional_rendering), inherited_conditional_rendering_(inherited_conditional_rendering) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;
  void *next_;
  bool32 conditional_rendering_;
  bool32 inherited_conditional_rendering_;
};

struct SwapchainPresentModesCreateInfoEXT {

  using native_type = VkSwapchainPresentModesCreateInfoEXT;

  SwapchainPresentModesCreateInfoEXT(const void *next = {}, uint32_t present_mode_count = {}, const PresentMode *p_present_modes = {})
    : next_(next), present_mode_count_(present_mode_count), p_present_modes_(p_present_modes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT;
  const void *next_;
  uint32_t present_mode_count_;
  const PresentMode *p_present_modes_;
};

struct PhysicalDeviceDeviceMemoryReportFeaturesEXT {

  using native_type = VkPhysicalDeviceDeviceMemoryReportFeaturesEXT;

  PhysicalDeviceDeviceMemoryReportFeaturesEXT(void *next = {}, bool32 device_memory_report = {})
    : next_(next), device_memory_report_(device_memory_report) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT;
  void *next_;
  bool32 device_memory_report_;
};

struct PhysicalDeviceMeshShaderFeaturesEXT {

  using native_type = VkPhysicalDeviceMeshShaderFeaturesEXT;

  PhysicalDeviceMeshShaderFeaturesEXT(void *next = {},
                                      bool32 task_shader = {},
                                      bool32 mesh_shader = {},
                                      bool32 multiview_mesh_shader = {},
                                      bool32 primitive_fragment_shading_rate_mesh_shader = {},
                                      bool32 mesh_shader_queries = {})
    : next_(next), task_shader_(task_shader), mesh_shader_(mesh_shader), multiview_mesh_shader_(multiview_mesh_shader),
      primitive_fragment_shading_rate_mesh_shader_(primitive_fragment_shading_rate_mesh_shader), mesh_shader_queries_(mesh_shader_queries) {
  }

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT;
  void *next_;
  bool32 task_shader_;
  bool32 mesh_shader_;
  bool32 multiview_mesh_shader_;
  bool32 primitive_fragment_shading_rate_mesh_shader_;
  bool32 mesh_shader_queries_;
};

struct PerformanceMarkerInfoINTEL {

  using native_type = VkPerformanceMarkerInfoINTEL;

  PerformanceMarkerInfoINTEL(const void *next = {}, uint64_t marker = {}) : next_(next), marker_(marker) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PERFORMANCE_MARKER_INFO_INTEL;
  const void *next_;
  uint64_t marker_;
};

struct PhysicalDeviceSubgroupProperties {

  using native_type = VkPhysicalDeviceSubgroupProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;
  void *next_;
  uint32_t subgroup_size_;
  ShaderStageMask supported_stages_;
  SubgroupFeatureMask supported_operations_;
  bool32 quad_operations_in_all_stages_;
};

struct PhysicalDeviceShaderAtomicFloatFeaturesEXT {

  using native_type = VkPhysicalDeviceShaderAtomicFloatFeaturesEXT;

  PhysicalDeviceShaderAtomicFloatFeaturesEXT(void *next = {},
                                             bool32 shader_buffer_float32atomics = {},
                                             bool32 shader_buffer_float32atomic_add = {},
                                             bool32 shader_buffer_float64atomics = {},
                                             bool32 shader_buffer_float64atomic_add = {},
                                             bool32 shader_shared_float32atomics = {},
                                             bool32 shader_shared_float32atomic_add = {},
                                             bool32 shader_shared_float64atomics = {},
                                             bool32 shader_shared_float64atomic_add = {},
                                             bool32 shader_image_float32atomics = {},
                                             bool32 shader_image_float32atomic_add = {},
                                             bool32 sparse_image_float32atomics = {},
                                             bool32 sparse_image_float32atomic_add = {})
    : next_(next), shader_buffer_float32atomics_(shader_buffer_float32atomics),
      shader_buffer_float32atomic_add_(shader_buffer_float32atomic_add), shader_buffer_float64atomics_(shader_buffer_float64atomics),
      shader_buffer_float64atomic_add_(shader_buffer_float64atomic_add), shader_shared_float32atomics_(shader_shared_float32atomics),
      shader_shared_float32atomic_add_(shader_shared_float32atomic_add), shader_shared_float64atomics_(shader_shared_float64atomics),
      shader_shared_float64atomic_add_(shader_shared_float64atomic_add), shader_image_float32atomics_(shader_image_float32atomics),
      shader_image_float32atomic_add_(shader_image_float32atomic_add), sparse_image_float32atomics_(sparse_image_float32atomics),
      sparse_image_float32atomic_add_(sparse_image_float32atomic_add) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT;
  void *next_;
  bool32 shader_buffer_float32atomics_;
  bool32 shader_buffer_float32atomic_add_;
  bool32 shader_buffer_float64atomics_;
  bool32 shader_buffer_float64atomic_add_;
  bool32 shader_shared_float32atomics_;
  bool32 shader_shared_float32atomic_add_;
  bool32 shader_shared_float64atomics_;
  bool32 shader_shared_float64atomic_add_;
  bool32 shader_image_float32atomics_;
  bool32 shader_image_float32atomic_add_;
  bool32 sparse_image_float32atomics_;
  bool32 sparse_image_float32atomic_add_;
};

struct DedicatedAllocationImageCreateInfoNV {

  using native_type = VkDedicatedAllocationImageCreateInfoNV;

  DedicatedAllocationImageCreateInfoNV(const void *next = {}, bool32 dedicated_allocation = {})
    : next_(next), dedicated_allocation_(dedicated_allocation) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;
  const void *next_;
  bool32 dedicated_allocation_;
};

struct PhysicalDeviceVertexAttributeDivisorFeaturesKHR {

  using native_type = VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR;

  PhysicalDeviceVertexAttributeDivisorFeaturesKHR(void *next = {},
                                                  bool32 vertex_attribute_instance_rate_divisor = {},
                                                  bool32 vertex_attribute_instance_rate_zero_divisor = {})
    : next_(next), vertex_attribute_instance_rate_divisor_(vertex_attribute_instance_rate_divisor),
      vertex_attribute_instance_rate_zero_divisor_(vertex_attribute_instance_rate_zero_divisor) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR;
  void *next_;
  bool32 vertex_attribute_instance_rate_divisor_;
  bool32 vertex_attribute_instance_rate_zero_divisor_;
};

struct CheckpointDataNV {

  using native_type = VkCheckpointDataNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::CHECKPOINT_DATA_NV;
  void *next_;
  PipelineStageMaskBit stage_;
  void *p_checkpoint_marker_;
};

struct FrameBoundaryEXT {

  using native_type = VkFrameBoundaryEXT;

  FrameBoundaryEXT(const void *next = {},
                   FrameBoundaryMask flags = {},
                   uint64_t frame_id = {},
                   uint32_t image_count = {},
                   const VkImage *p_images = {},
                   uint32_t buffer_count = {},
                   const VkBuffer *p_buffers = {},
                   uint64_t tag_name = {},
                   size_t tag_size = {},
                   const void *p_tag = {})
    : next_(next), flags_(flags), frame_id_(frame_id), image_count_(image_count), p_images_(p_images), buffer_count_(buffer_count),
      p_buffers_(p_buffers), tag_name_(tag_name), tag_size_(tag_size), p_tag_(p_tag) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FRAME_BOUNDARY_EXT;
  const void *next_;
  FrameBoundaryMask flags_;
  uint64_t frame_id_;
  uint32_t image_count_;
  const VkImage *p_images_;
  uint32_t buffer_count_;
  const VkBuffer *p_buffers_;
  uint64_t tag_name_;
  size_t tag_size_;
  const void *p_tag_;
};

struct PhysicalDeviceDepthStencilResolveProperties {

  using native_type = VkPhysicalDeviceDepthStencilResolveProperties;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES;
  void *next_;
  ResolveModeMask supported_depth_resolve_modes_;
  ResolveModeMask supported_stencil_resolve_modes_;
  bool32 independent_resolve_none_;
  bool32 independent_resolve_;
};

struct RenderPassSubpassFeedbackCreateInfoEXT {

  using native_type = VkRenderPassSubpassFeedbackCreateInfoEXT;

  RenderPassSubpassFeedbackCreateInfoEXT(const void *next = {}, RenderPassSubpassFeedbackInfoEXT *p_subpass_feedback = {})
    : next_(next), p_subpass_feedback_(p_subpass_feedback) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT;
  const void *next_;
  RenderPassSubpassFeedbackInfoEXT *p_subpass_feedback_;
};

struct SubpassDescriptionDepthStencilResolve {

  using native_type = VkSubpassDescriptionDepthStencilResolve;

  SubpassDescriptionDepthStencilResolve(const void *next = {},
                                        ResolveModeMaskBit depth_resolve_mode = {},
                                        ResolveModeMaskBit stencil_resolve_mode = {},
                                        const AttachmentReference2 *p_depth_stencil_resolve_attachment = {})
    : next_(next), depth_resolve_mode_(depth_resolve_mode), stencil_resolve_mode_(stencil_resolve_mode),
      p_depth_stencil_resolve_attachment_(p_depth_stencil_resolve_attachment) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE;
  const void *next_;
  ResolveModeMaskBit depth_resolve_mode_;
  ResolveModeMaskBit stencil_resolve_mode_;
  const AttachmentReference2 *p_depth_stencil_resolve_attachment_;
};

struct SwapchainPresentFenceInfoEXT {

  using native_type = VkSwapchainPresentFenceInfoEXT;

  SwapchainPresentFenceInfoEXT(const void *next = {}, uint32_t swapchain_count = {}, const VkFence *p_fences = {})
    : next_(next), swapchain_count_(swapchain_count), p_fences_(p_fences) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SWAPCHAIN_PRESENT_FENCE_INFO_EXT;
  const void *next_;
  uint32_t swapchain_count_;
  const VkFence *p_fences_;
};

struct AcquireProfilingLockInfoKHR {

  using native_type = VkAcquireProfilingLockInfoKHR;

  AcquireProfilingLockInfoKHR(const void *next = {}, AcquireProfilingLockMask flags = {}, uint64_t timeout = {})
    : next_(next), flags_(flags), timeout_(timeout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACQUIRE_PROFILING_LOCK_INFO_KHR;
  const void *next_;
  AcquireProfilingLockMask flags_;
  uint64_t timeout_;
};

struct PhysicalDeviceRayTracingInvocationReorderPropertiesNV {

  using native_type = VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV;
  void *next_;
  RayTracingInvocationReorderMode ray_tracing_invocation_reorder_reordering_hint_;
};

struct SubpassEndInfo {

  using native_type = VkSubpassEndInfo;

  SubpassEndInfo(const void *next = {}) : next_(next) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBPASS_END_INFO;
  const void *next_;
};

struct ImageViewASTCDecodeModeEXT {

  using native_type = VkImageViewASTCDecodeModeEXT;

  ImageViewASTCDecodeModeEXT(const void *next = {}, Format decode_mode = {}) : next_(next), decode_mode_(decode_mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_VIEW_ASTC_DECODE_MODE_EXT;
  const void *next_;
  Format decode_mode_;
};

struct PhysicalDeviceASTCDecodeFeaturesEXT {

  using native_type = VkPhysicalDeviceASTCDecodeFeaturesEXT;

  PhysicalDeviceASTCDecodeFeaturesEXT(void *next = {}, bool32 decode_mode_shared_exponent = {})
    : next_(next), decode_mode_shared_exponent_(decode_mode_shared_exponent) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;
  void *next_;
  bool32 decode_mode_shared_exponent_;
};

struct PhysicalDeviceTransformFeedbackPropertiesEXT {

  using native_type = VkPhysicalDeviceTransformFeedbackPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT;
  void *next_;
  uint32_t max_transform_feedback_streams_;
  uint32_t max_transform_feedback_buffers_;
  DeviceSize max_transform_feedback_buffer_size_;
  uint32_t max_transform_feedback_stream_data_size_;
  uint32_t max_transform_feedback_buffer_data_size_;
  uint32_t max_transform_feedback_buffer_data_stride_;
  bool32 transform_feedback_queries_;
  bool32 transform_feedback_streams_lines_triangles_;
  bool32 transform_feedback_rasterization_stream_select_;
  bool32 transform_feedback_draw_;
};

struct PhysicalDeviceRayTracingMaintenance1FeaturesKHR {

  using native_type = VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR;

  PhysicalDeviceRayTracingMaintenance1FeaturesKHR(void *next = {},
                                                  bool32 ray_tracing_maintenance1 = {},
                                                  bool32 ray_tracing_pipeline_trace_rays_indirect2 = {})
    : next_(next), ray_tracing_maintenance1_(ray_tracing_maintenance1),
      ray_tracing_pipeline_trace_rays_indirect2_(ray_tracing_pipeline_trace_rays_indirect2) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR;
  void *next_;
  bool32 ray_tracing_maintenance1_;
  bool32 ray_tracing_pipeline_trace_rays_indirect2_;
};

struct PhysicalDeviceRepresentativeFragmentTestFeaturesNV {

  using native_type = VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;

  PhysicalDeviceRepresentativeFragmentTestFeaturesNV(void *next = {}, bool32 representative_fragment_test = {})
    : next_(next), representative_fragment_test_(representative_fragment_test) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;
  void *next_;
  bool32 representative_fragment_test_;
};

struct PipelineRepresentativeFragmentTestStateCreateInfoNV {

  using native_type = VkPipelineRepresentativeFragmentTestStateCreateInfoNV;

  PipelineRepresentativeFragmentTestStateCreateInfoNV(const void *next = {}, bool32 representative_fragment_test_enable = {})
    : next_(next), representative_fragment_test_enable_(representative_fragment_test_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV;
  const void *next_;
  bool32 representative_fragment_test_enable_;
};

struct PhysicalDeviceShaderImageFootprintFeaturesNV {

  using native_type = VkPhysicalDeviceShaderImageFootprintFeaturesNV;

  PhysicalDeviceShaderImageFootprintFeaturesNV(void *next = {}, bool32 image_footprint = {})
    : next_(next), image_footprint_(image_footprint) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;
  void *next_;
  bool32 image_footprint_;
};

struct ImageMemoryBarrier {

  using native_type = VkImageMemoryBarrier;

  ImageMemoryBarrier(const void *next = {},
                     AccessMask src_access_mask = {},
                     AccessMask dst_access_mask = {},
                     ImageLayout old_layout = {},
                     ImageLayout new_layout = {},
                     uint32_t src_queue_family_index = {},
                     uint32_t dst_queue_family_index = {},
                     VkImage image = {},
                     ImageSubresourceRange subresource_range = {})
    : next_(next), src_access_mask_(src_access_mask), dst_access_mask_(dst_access_mask), old_layout_(old_layout), new_layout_(new_layout),
      src_queue_family_index_(src_queue_family_index), dst_queue_family_index_(dst_queue_family_index), image_(image),
      subresource_range_(subresource_range) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_MEMORY_BARRIER;
  const void *next_;
  AccessMask src_access_mask_;
  AccessMask dst_access_mask_;
  ImageLayout old_layout_;
  ImageLayout new_layout_;
  uint32_t src_queue_family_index_;
  uint32_t dst_queue_family_index_;
  VkImage image_;
  ImageSubresourceRange subresource_range_;
};

struct DisplayModeCreateInfoKHR {

  using native_type = VkDisplayModeCreateInfoKHR;

  DisplayModeCreateInfoKHR(const void *next = {}, DisplayModeCreateMask flags = {}, DisplayModeParametersKHR parameters = {})
    : next_(next), flags_(flags), parameters_(parameters) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DISPLAY_MODE_CREATE_INFO_KHR;
  const void *next_;
  DisplayModeCreateMask flags_;
  DisplayModeParametersKHR parameters_;
};

struct ImageStencilUsageCreateInfo {

  using native_type = VkImageStencilUsageCreateInfo;

  ImageStencilUsageCreateInfo(const void *next = {}, ImageUsageMask stencil_usage = {}) : next_(next), stencil_usage_(stencil_usage) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_STENCIL_USAGE_CREATE_INFO;
  const void *next_;
  ImageUsageMask stencil_usage_;
};

struct PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV {

  using native_type = VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;

  PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(void *next = {}, bool32 dedicated_allocation_image_aliasing = {})
    : next_(next), dedicated_allocation_image_aliasing_(dedicated_allocation_image_aliasing) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV;
  void *next_;
  bool32 dedicated_allocation_image_aliasing_;
};

struct CopyMemoryToImageInfoEXT {

  using native_type = VkCopyMemoryToImageInfoEXT;

  CopyMemoryToImageInfoEXT(const void *next = {},
                           HostImageCopyMask flags = {},
                           VkImage dst_image = {},
                           ImageLayout dst_image_layout = {},
                           uint32_t region_count = {},
                           const MemoryToImageCopyEXT *p_regions = {})
    : next_(next), flags_(flags), dst_image_(dst_image), dst_image_layout_(dst_image_layout), region_count_(region_count),
      p_regions_(p_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_MEMORY_TO_IMAGE_INFO_EXT;
  const void *next_;
  HostImageCopyMask flags_;
  VkImage dst_image_;
  ImageLayout dst_image_layout_;
  uint32_t region_count_;
  const MemoryToImageCopyEXT *p_regions_;
};

struct PhysicalDeviceCopyMemoryIndirectFeaturesNV {

  using native_type = VkPhysicalDeviceCopyMemoryIndirectFeaturesNV;

  PhysicalDeviceCopyMemoryIndirectFeaturesNV(void *next = {}, bool32 indirect_copy = {}) : next_(next), indirect_copy_(indirect_copy) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV;
  void *next_;
  bool32 indirect_copy_;
};

struct PhysicalDeviceMemoryDecompressionFeaturesNV {

  using native_type = VkPhysicalDeviceMemoryDecompressionFeaturesNV;

  PhysicalDeviceMemoryDecompressionFeaturesNV(void *next = {}, bool32 memory_decompression = {})
    : next_(next), memory_decompression_(memory_decompression) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV;
  void *next_;
  bool32 memory_decompression_;
};

struct PhysicalDeviceRayTracingValidationFeaturesNV {

  using native_type = VkPhysicalDeviceRayTracingValidationFeaturesNV;

  PhysicalDeviceRayTracingValidationFeaturesNV(void *next = {}, bool32 ray_tracing_validation = {})
    : next_(next), ray_tracing_validation_(ray_tracing_validation) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV;
  void *next_;
  bool32 ray_tracing_validation_;
};

struct PhysicalDeviceCoverageReductionModeFeaturesNV {

  using native_type = VkPhysicalDeviceCoverageReductionModeFeaturesNV;

  PhysicalDeviceCoverageReductionModeFeaturesNV(void *next = {}, bool32 coverage_reduction_mode = {})
    : next_(next), coverage_reduction_mode_(coverage_reduction_mode) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV;
  void *next_;
  bool32 coverage_reduction_mode_;
};

struct PipelineViewportShadingRateImageStateCreateInfoNV {

  using native_type = VkPipelineViewportShadingRateImageStateCreateInfoNV;

  PipelineViewportShadingRateImageStateCreateInfoNV(const void *next = {},
                                                    bool32 shading_rate_image_enable = {},
                                                    uint32_t viewport_count = {},
                                                    const ShadingRatePaletteNV *p_shading_rate_palettes = {})
    : next_(next), shading_rate_image_enable_(shading_rate_image_enable), viewport_count_(viewport_count),
      p_shading_rate_palettes_(p_shading_rate_palettes) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV;
  const void *next_;
  bool32 shading_rate_image_enable_;
  uint32_t viewport_count_;
  const ShadingRatePaletteNV *p_shading_rate_palettes_;
};

struct PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV {

  using native_type = VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV;

  PhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(void *next = {}, bool32 shader_float16vector_atomics = {})
    : next_(next), shader_float16vector_atomics_(shader_float16vector_atomics) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV;
  void *next_;
  bool32 shader_float16vector_atomics_;
};

struct CoarseSampleLocationNV {

  using native_type = VkCoarseSampleLocationNV;

  CoarseSampleLocationNV(uint32_t pixel_x = {}, uint32_t pixel_y = {}, uint32_t sample = {})
    : pixel_x_(pixel_x), pixel_y_(pixel_y), sample_(sample) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t pixel_x_;
  uint32_t pixel_y_;
  uint32_t sample_;
};

struct PhysicalDeviceDepthBiasControlFeaturesEXT {

  using native_type = VkPhysicalDeviceDepthBiasControlFeaturesEXT;

  PhysicalDeviceDepthBiasControlFeaturesEXT(void *next = {},
                                            bool32 depth_bias_control = {},
                                            bool32 least_representable_value_force_unorm_representation = {},
                                            bool32 float_representation = {},
                                            bool32 depth_bias_exact = {})
    : next_(next), depth_bias_control_(depth_bias_control),
      least_representable_value_force_unorm_representation_(least_representable_value_force_unorm_representation),
      float_representation_(float_representation), depth_bias_exact_(depth_bias_exact) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT;
  void *next_;
  bool32 depth_bias_control_;
  bool32 least_representable_value_force_unorm_representation_;
  bool32 float_representation_;
  bool32 depth_bias_exact_;
};

struct CheckpointData2NV {

  using native_type = VkCheckpointData2NV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::CHECKPOINT_DATA_2_NV;
  void *next_;
  PipelineStageMask2 stage_;
  void *p_checkpoint_marker_;
};

struct CoarseSampleOrderCustomNV {

  using native_type = VkCoarseSampleOrderCustomNV;

  CoarseSampleOrderCustomNV(ShadingRatePaletteEntry shading_rate = {},
                            uint32_t sample_count = {},
                            uint32_t sample_location_count = {},
                            const CoarseSampleLocationNV *p_sample_locations = {})
    : shading_rate_(shading_rate), sample_count_(sample_count), sample_location_count_(sample_location_count),
      p_sample_locations_(p_sample_locations) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  ShadingRatePaletteEntry shading_rate_;
  uint32_t sample_count_;
  uint32_t sample_location_count_;
  const CoarseSampleLocationNV *p_sample_locations_;
};

struct ImageMemoryRequirementsInfo2 {

  using native_type = VkImageMemoryRequirementsInfo2;

  ImageMemoryRequirementsInfo2(const void *next = {}, VkImage image = {}) : next_(next), image_(image) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_MEMORY_REQUIREMENTS_INFO_2;
  const void *next_;
  VkImage image_;
};

struct PipelineViewportCoarseSampleOrderStateCreateInfoNV {

  using native_type = VkPipelineViewportCoarseSampleOrderStateCreateInfoNV;

  PipelineViewportCoarseSampleOrderStateCreateInfoNV(const void *next = {},
                                                     CoarseSampleOrderType sample_order_type = {},
                                                     uint32_t custom_sample_order_count = {},
                                                     const CoarseSampleOrderCustomNV *p_custom_sample_orders = {})
    : next_(next), sample_order_type_(sample_order_type), custom_sample_order_count_(custom_sample_order_count),
      p_custom_sample_orders_(p_custom_sample_orders) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV;
  const void *next_;
  CoarseSampleOrderType sample_order_type_;
  uint32_t custom_sample_order_count_;
  const CoarseSampleOrderCustomNV *p_custom_sample_orders_;
};

struct DrawMeshTasksIndirectCommandNV {

  using native_type = VkDrawMeshTasksIndirectCommandNV;

  DrawMeshTasksIndirectCommandNV(uint32_t task_count = {}, uint32_t first_task = {}) : task_count_(task_count), first_task_(first_task) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t task_count_;
  uint32_t first_task_;
};

struct DrawMeshTasksIndirectCommandEXT {

  using native_type = VkDrawMeshTasksIndirectCommandEXT;

  DrawMeshTasksIndirectCommandEXT(uint32_t group_count_x = {}, uint32_t group_count_y = {}, uint32_t group_count_z = {})
    : group_count_x_(group_count_x), group_count_y_(group_count_y), group_count_z_(group_count_z) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t group_count_x_;
  uint32_t group_count_y_;
  uint32_t group_count_z_;
};

struct ImageDrmFormatModifierPropertiesEXT {

  using native_type = VkImageDrmFormatModifierPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT;
  void *next_;
  uint64_t drm_format_modifier_;
};

struct RayTracingPipelineCreateInfoNV {

  using native_type = VkRayTracingPipelineCreateInfoNV;

  RayTracingPipelineCreateInfoNV(const void *next = {},
                                 PipelineCreateMask flags = {},
                                 uint32_t stage_count = {},
                                 const PipelineShaderStageCreateInfo *p_stages = {},
                                 uint32_t group_count = {},
                                 const RayTracingShaderGroupCreateInfoNV *p_groups = {},
                                 uint32_t max_recursion_depth = {},
                                 VkPipelineLayout layout = {},
                                 VkPipeline base_pipeline_handle = {},
                                 int32_t base_pipeline_index = {})
    : next_(next), flags_(flags), stage_count_(stage_count), p_stages_(p_stages), group_count_(group_count), p_groups_(p_groups),
      max_recursion_depth_(max_recursion_depth), layout_(layout), base_pipeline_handle_(base_pipeline_handle),
      base_pipeline_index_(base_pipeline_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RAY_TRACING_PIPELINE_CREATE_INFO_NV;
  const void *next_;
  PipelineCreateMask flags_;
  uint32_t stage_count_;
  const PipelineShaderStageCreateInfo *p_stages_;
  uint32_t group_count_;
  const RayTracingShaderGroupCreateInfoNV *p_groups_;
  uint32_t max_recursion_depth_;
  VkPipelineLayout layout_;
  VkPipeline base_pipeline_handle_;
  int32_t base_pipeline_index_;
};

struct CooperativeMatrixPropertiesKHR {

  using native_type = VkCooperativeMatrixPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COOPERATIVE_MATRIX_PROPERTIES_KHR;
  void *next_;
  uint32_t msize_;
  uint32_t nsize_;
  uint32_t ksize_;
  ComponentType atype_;
  ComponentType btype_;
  ComponentType ctype_;
  ComponentType result_type_;
  bool32 saturating_accumulation_;
  Scope scope_;
};

struct WriteDescriptorSetAccelerationStructureKHR {

  using native_type = VkWriteDescriptorSetAccelerationStructureKHR;

  WriteDescriptorSetAccelerationStructureKHR(const void *next = {},
                                             uint32_t acceleration_structure_count = {},
                                             const VkAccelerationStructureKHR *p_acceleration_structures = {})
    : next_(next), acceleration_structure_count_(acceleration_structure_count), p_acceleration_structures_(p_acceleration_structures) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR;
  const void *next_;
  uint32_t acceleration_structure_count_;
  const VkAccelerationStructureKHR *p_acceleration_structures_;
};

struct RayTracingPipelineCreateInfoKHR {

  using native_type = VkRayTracingPipelineCreateInfoKHR;

  RayTracingPipelineCreateInfoKHR(const void *next = {},
                                  PipelineCreateMask flags = {},
                                  uint32_t stage_count = {},
                                  const PipelineShaderStageCreateInfo *p_stages = {},
                                  uint32_t group_count = {},
                                  const RayTracingShaderGroupCreateInfoKHR *p_groups = {},
                                  uint32_t max_pipeline_ray_recursion_depth = {},
                                  const PipelineLibraryCreateInfoKHR *p_library_info = {},
                                  const RayTracingPipelineInterfaceCreateInfoKHR *p_library_interface = {},
                                  const PipelineDynamicStateCreateInfo *p_dynamic_state = {},
                                  VkPipelineLayout layout = {},
                                  VkPipeline base_pipeline_handle = {},
                                  int32_t base_pipeline_index = {})
    : next_(next), flags_(flags), stage_count_(stage_count), p_stages_(p_stages), group_count_(group_count), p_groups_(p_groups),
      max_pipeline_ray_recursion_depth_(max_pipeline_ray_recursion_depth), p_library_info_(p_library_info),
      p_library_interface_(p_library_interface), p_dynamic_state_(p_dynamic_state), layout_(layout),
      base_pipeline_handle_(base_pipeline_handle), base_pipeline_index_(base_pipeline_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RAY_TRACING_PIPELINE_CREATE_INFO_KHR;
  const void *next_;
  PipelineCreateMask flags_;
  uint32_t stage_count_;
  const PipelineShaderStageCreateInfo *p_stages_;
  uint32_t group_count_;
  const RayTracingShaderGroupCreateInfoKHR *p_groups_;
  uint32_t max_pipeline_ray_recursion_depth_;
  const PipelineLibraryCreateInfoKHR *p_library_info_;
  const RayTracingPipelineInterfaceCreateInfoKHR *p_library_interface_;
  const PipelineDynamicStateCreateInfo *p_dynamic_state_;
  VkPipelineLayout layout_;
  VkPipeline base_pipeline_handle_;
  int32_t base_pipeline_index_;
};

struct CopyImageToBufferInfo2 {

  using native_type = VkCopyImageToBufferInfo2;

  CopyImageToBufferInfo2(const void *next = {},
                         VkImage src_image = {},
                         ImageLayout src_image_layout = {},
                         VkBuffer dst_buffer = {},
                         uint32_t region_count = {},
                         const BufferImageCopy2 *p_regions = {})
    : next_(next), src_image_(src_image), src_image_layout_(src_image_layout), dst_buffer_(dst_buffer), region_count_(region_count),
      p_regions_(p_regions) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::COPY_IMAGE_TO_BUFFER_INFO_2;
  const void *next_;
  VkImage src_image_;
  ImageLayout src_image_layout_;
  VkBuffer dst_buffer_;
  uint32_t region_count_;
  const BufferImageCopy2 *p_regions_;
};

struct PhysicalDeviceRayTracingPipelineFeaturesKHR {

  using native_type = VkPhysicalDeviceRayTracingPipelineFeaturesKHR;

  PhysicalDeviceRayTracingPipelineFeaturesKHR(void *next = {},
                                              bool32 ray_tracing_pipeline = {},
                                              bool32 ray_tracing_pipeline_shader_group_handle_capture_replay = {},
                                              bool32 ray_tracing_pipeline_shader_group_handle_capture_replay_mixed = {},
                                              bool32 ray_tracing_pipeline_trace_rays_indirect = {},
                                              bool32 ray_traversal_primitive_culling = {})
    : next_(next), ray_tracing_pipeline_(ray_tracing_pipeline),
      ray_tracing_pipeline_shader_group_handle_capture_replay_(ray_tracing_pipeline_shader_group_handle_capture_replay),
      ray_tracing_pipeline_shader_group_handle_capture_replay_mixed_(ray_tracing_pipeline_shader_group_handle_capture_replay_mixed),
      ray_tracing_pipeline_trace_rays_indirect_(ray_tracing_pipeline_trace_rays_indirect),
      ray_traversal_primitive_culling_(ray_traversal_primitive_culling) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR;
  void *next_;
  bool32 ray_tracing_pipeline_;
  bool32 ray_tracing_pipeline_shader_group_handle_capture_replay_;
  bool32 ray_tracing_pipeline_shader_group_handle_capture_replay_mixed_;
  bool32 ray_tracing_pipeline_trace_rays_indirect_;
  bool32 ray_traversal_primitive_culling_;
};

struct VideoDecodeInfoKHR {

  using native_type = VkVideoDecodeInfoKHR;

  VideoDecodeInfoKHR(const void *next = {},
                     VideoDecodeMask flags = {},
                     VkBuffer src_buffer = {},
                     DeviceSize src_buffer_offset = {},
                     DeviceSize src_buffer_range = {},
                     VideoPictureResourceInfoKHR dst_picture_resource = {},
                     const VideoReferenceSlotInfoKHR *p_setup_reference_slot = {},
                     uint32_t reference_slot_count = {},
                     const VideoReferenceSlotInfoKHR *p_reference_slots = {})
    : next_(next), flags_(flags), src_buffer_(src_buffer), src_buffer_offset_(src_buffer_offset), src_buffer_range_(src_buffer_range),
      dst_picture_resource_(dst_picture_resource), p_setup_reference_slot_(p_setup_reference_slot),
      reference_slot_count_(reference_slot_count), p_reference_slots_(p_reference_slots) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_DECODE_INFO_KHR;
  const void *next_;
  VideoDecodeMask flags_;
  VkBuffer src_buffer_;
  DeviceSize src_buffer_offset_;
  DeviceSize src_buffer_range_;
  VideoPictureResourceInfoKHR dst_picture_resource_;
  const VideoReferenceSlotInfoKHR *p_setup_reference_slot_;
  uint32_t reference_slot_count_;
  const VideoReferenceSlotInfoKHR *p_reference_slots_;
};

struct PhysicalDeviceBufferDeviceAddressFeatures {

  using native_type = VkPhysicalDeviceBufferDeviceAddressFeatures;

  PhysicalDeviceBufferDeviceAddressFeatures(void *next = {},
                                            bool32 buffer_device_address = {},
                                            bool32 buffer_device_address_capture_replay = {},
                                            bool32 buffer_device_address_multi_device = {})
    : next_(next), buffer_device_address_(buffer_device_address),
      buffer_device_address_capture_replay_(buffer_device_address_capture_replay),
      buffer_device_address_multi_device_(buffer_device_address_multi_device) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES;
  void *next_;
  bool32 buffer_device_address_;
  bool32 buffer_device_address_capture_replay_;
  bool32 buffer_device_address_multi_device_;
};

struct PhysicalDeviceRayTracingPipelinePropertiesKHR {

  using native_type = VkPhysicalDeviceRayTracingPipelinePropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR;
  void *next_;
  uint32_t shader_group_handle_size_;
  uint32_t max_ray_recursion_depth_;
  uint32_t max_shader_group_stride_;
  uint32_t shader_group_base_alignment_;
  uint32_t shader_group_handle_capture_replay_size_;
  uint32_t max_ray_dispatch_invocation_count_;
  uint32_t shader_group_handle_alignment_;
  uint32_t max_ray_hit_attribute_size_;
};

struct TraceRaysIndirectCommandKHR {

  using native_type = VkTraceRaysIndirectCommandKHR;

  TraceRaysIndirectCommandKHR(uint32_t width = {}, uint32_t height = {}, uint32_t depth = {})
    : width_(width), height_(height), depth_(depth) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  uint32_t width_;
  uint32_t height_;
  uint32_t depth_;
};

struct PhysicalDeviceShaderQuadControlFeaturesKHR {

  using native_type = VkPhysicalDeviceShaderQuadControlFeaturesKHR;

  PhysicalDeviceShaderQuadControlFeaturesKHR(void *next = {}, bool32 shader_quad_control = {})
    : next_(next), shader_quad_control_(shader_quad_control) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR;
  void *next_;
  bool32 shader_quad_control_;
};

struct GraphicsPipelineLibraryCreateInfoEXT {

  using native_type = VkGraphicsPipelineLibraryCreateInfoEXT;

  GraphicsPipelineLibraryCreateInfoEXT(const void *next = {}, GraphicsPipelineLibraryMask flags = {}) : next_(next), flags_(flags) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT;
  const void *next_;
  GraphicsPipelineLibraryMask flags_;
};

struct DrmFormatModifierPropertiesListEXT {

  using native_type = VkDrmFormatModifierPropertiesListEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT;
  void *next_;
  uint32_t drm_format_modifier_count_;
  DrmFormatModifierPropertiesEXT *p_drm_format_modifier_properties_;
};

struct PhysicalDeviceFragmentDensityMap2FeaturesEXT {

  using native_type = VkPhysicalDeviceFragmentDensityMap2FeaturesEXT;

  PhysicalDeviceFragmentDensityMap2FeaturesEXT(void *next = {}, bool32 fragment_density_map_deferred = {})
    : next_(next), fragment_density_map_deferred_(fragment_density_map_deferred) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT;
  void *next_;
  bool32 fragment_density_map_deferred_;
};

struct PhysicalDeviceFragmentDensityMapPropertiesEXT {

  using native_type = VkPhysicalDeviceFragmentDensityMapPropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT;
  void *next_;
  Extent2D min_fragment_density_texel_size_;
  Extent2D max_fragment_density_texel_size_;
  bool32 fragment_density_invocations_;
};

struct PhysicalDeviceFragmentDensityMap2PropertiesEXT {

  using native_type = VkPhysicalDeviceFragmentDensityMap2PropertiesEXT;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT;
  void *next_;
  bool32 subsampled_loads_;
  bool32 subsampled_coarse_reconstruction_early_access_;
  uint32_t max_subsampled_array_layers_;
  uint32_t max_descriptor_set_subsampled_samplers_;
};

struct PhysicalDevicePrivateDataFeatures {

  using native_type = VkPhysicalDevicePrivateDataFeatures;

  PhysicalDevicePrivateDataFeatures(void *next = {}, bool32 private_data = {}) : next_(next), private_data_(private_data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES;
  void *next_;
  bool32 private_data_;
};

struct RenderPassFragmentDensityMapCreateInfoEXT {

  using native_type = VkRenderPassFragmentDensityMapCreateInfoEXT;

  RenderPassFragmentDensityMapCreateInfoEXT(const void *next = {}, AttachmentReference fragment_density_map_attachment = {})
    : next_(next), fragment_density_map_attachment_(fragment_density_map_attachment) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT;
  const void *next_;
  AttachmentReference fragment_density_map_attachment_;
};

struct PresentInfoKHR {

  using native_type = VkPresentInfoKHR;

  PresentInfoKHR(const void *next = {},
                 uint32_t wait_semaphore_count = {},
                 const VkSemaphore *p_wait_semaphores = {},
                 uint32_t swapchain_count = {},
                 const VkSwapchainKHR *p_swapchains = {},
                 const uint32_t *p_image_indices = {},
                 Result *p_results = {})
    : next_(next), wait_semaphore_count_(wait_semaphore_count), p_wait_semaphores_(p_wait_semaphores), swapchain_count_(swapchain_count),
      p_swapchains_(p_swapchains), p_image_indices_(p_image_indices), p_results_(p_results) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PRESENT_INFO_KHR;
  const void *next_;
  uint32_t wait_semaphore_count_;
  const VkSemaphore *p_wait_semaphores_;
  uint32_t swapchain_count_;
  const VkSwapchainKHR *p_swapchains_;
  const uint32_t *p_image_indices_;
  Result *p_results_;
};

struct QueueFamilyProperties2 {

  using native_type = VkQueueFamilyProperties2;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::QUEUE_FAMILY_PROPERTIES_2;
  void *next_;
  QueueFamilyProperties queue_family_properties_;
};

struct SubpassFragmentDensityMapOffsetEndInfoQCOM {

  using native_type = VkSubpassFragmentDensityMapOffsetEndInfoQCOM;

  SubpassFragmentDensityMapOffsetEndInfoQCOM(const void *next = {},
                                             uint32_t fragment_density_offset_count = {},
                                             const Offset2D *p_fragment_density_offsets = {})
    : next_(next), fragment_density_offset_count_(fragment_density_offset_count), p_fragment_density_offsets_(p_fragment_density_offsets) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM;
  const void *next_;
  uint32_t fragment_density_offset_count_;
  const Offset2D *p_fragment_density_offsets_;
};

struct PhysicalDeviceScalarBlockLayoutFeatures {

  using native_type = VkPhysicalDeviceScalarBlockLayoutFeatures;

  PhysicalDeviceScalarBlockLayoutFeatures(void *next = {}, bool32 scalar_block_layout = {})
    : next_(next), scalar_block_layout_(scalar_block_layout) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
  void *next_;
  bool32 scalar_block_layout_;
};

struct VideoEncodeH264QualityLevelPropertiesKHR {

  using native_type = VkVideoEncodeH264QualityLevelPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR;
  void *next_;
  VideoEncodeH264RateControlMask preferred_rate_control_flags_;
  uint32_t preferred_gop_frame_count_;
  uint32_t preferred_idr_period_;
  uint32_t preferred_consecutive_bframe_count_;
  uint32_t preferred_temporal_layer_count_;
  VideoEncodeH264QpKHR preferred_constant_qp_;
  uint32_t preferred_max_l0reference_count_;
  uint32_t preferred_max_l1reference_count_;
  bool32 preferred_std_entropy_coding_mode_flag_;
};

struct PhysicalDeviceMemoryPriorityFeaturesEXT {

  using native_type = VkPhysicalDeviceMemoryPriorityFeaturesEXT;

  PhysicalDeviceMemoryPriorityFeaturesEXT(void *next = {}, bool32 memory_priority = {}) : next_(next), memory_priority_(memory_priority) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT;
  void *next_;
  bool32 memory_priority_;
};

struct ImageDrmFormatModifierExplicitCreateInfoEXT {

  using native_type = VkImageDrmFormatModifierExplicitCreateInfoEXT;

  ImageDrmFormatModifierExplicitCreateInfoEXT(const void *next = {},
                                              uint64_t drm_format_modifier = {},
                                              uint32_t drm_format_modifier_plane_count = {},
                                              const SubresourceLayout *p_plane_layouts = {})
    : next_(next), drm_format_modifier_(drm_format_modifier), drm_format_modifier_plane_count_(drm_format_modifier_plane_count),
      p_plane_layouts_(p_plane_layouts) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT;
  const void *next_;
  uint64_t drm_format_modifier_;
  uint32_t drm_format_modifier_plane_count_;
  const SubresourceLayout *p_plane_layouts_;
};

struct PerformanceQuerySubmitInfoKHR {

  using native_type = VkPerformanceQuerySubmitInfoKHR;

  PerformanceQuerySubmitInfoKHR(const void *next = {}, uint32_t counter_pass_index = {})
    : next_(next), counter_pass_index_(counter_pass_index) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PERFORMANCE_QUERY_SUBMIT_INFO_KHR;
  const void *next_;
  uint32_t counter_pass_index_;
};

struct RenderingFragmentShadingRateAttachmentInfoKHR {

  using native_type = VkRenderingFragmentShadingRateAttachmentInfoKHR;

  RenderingFragmentShadingRateAttachmentInfoKHR(const void *next = {},
                                                VkImageView image_view = {},
                                                ImageLayout image_layout = {},
                                                Extent2D shading_rate_attachment_texel_size = {})
    : next_(next), image_view_(image_view), image_layout_(image_layout),
      shading_rate_attachment_texel_size_(shading_rate_attachment_texel_size) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR;
  const void *next_;
  VkImageView image_view_;
  ImageLayout image_layout_;
  Extent2D shading_rate_attachment_texel_size_;
};

struct MemoryPriorityAllocateInfoEXT {

  using native_type = VkMemoryPriorityAllocateInfoEXT;

  MemoryPriorityAllocateInfoEXT(const void *next = {}, float priority = {}) : next_(next), priority_(priority) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::MEMORY_PRIORITY_ALLOCATE_INFO_EXT;
  const void *next_;
  float priority_;
};

struct PhysicalDeviceBufferDeviceAddressFeaturesEXT {

  using native_type = VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;

  PhysicalDeviceBufferDeviceAddressFeaturesEXT(void *next = {},
                                               bool32 buffer_device_address = {},
                                               bool32 buffer_device_address_capture_replay = {},
                                               bool32 buffer_device_address_multi_device = {})
    : next_(next), buffer_device_address_(buffer_device_address),
      buffer_device_address_capture_replay_(buffer_device_address_capture_replay),
      buffer_device_address_multi_device_(buffer_device_address_multi_device) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT;
  void *next_;
  bool32 buffer_device_address_;
  bool32 buffer_device_address_capture_replay_;
  bool32 buffer_device_address_multi_device_;
};

struct RenderPassMultiviewCreateInfo {

  using native_type = VkRenderPassMultiviewCreateInfo;

  RenderPassMultiviewCreateInfo(const void *next = {},
                                uint32_t subpass_count = {},
                                const uint32_t *p_view_masks = {},
                                uint32_t dependency_count = {},
                                const int32_t *p_view_offsets = {},
                                uint32_t correlation_mask_count = {},
                                const uint32_t *p_correlation_masks = {})
    : next_(next), subpass_count_(subpass_count), p_view_masks_(p_view_masks), dependency_count_(dependency_count),
      p_view_offsets_(p_view_offsets), correlation_mask_count_(correlation_mask_count), p_correlation_masks_(p_correlation_masks) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::RENDER_PASS_MULTIVIEW_CREATE_INFO;
  const void *next_;
  uint32_t subpass_count_;
  const uint32_t *p_view_masks_;
  uint32_t dependency_count_;
  const int32_t *p_view_offsets_;
  uint32_t correlation_mask_count_;
  const uint32_t *p_correlation_masks_;
};

struct BufferOpaqueCaptureAddressCreateInfo {

  using native_type = VkBufferOpaqueCaptureAddressCreateInfo;

  BufferOpaqueCaptureAddressCreateInfo(const void *next = {}, uint64_t opaque_capture_address = {})
    : next_(next), opaque_capture_address_(opaque_capture_address) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO;
  const void *next_;
  uint64_t opaque_capture_address_;
};

struct PhysicalDeviceImagelessFramebufferFeatures {

  using native_type = VkPhysicalDeviceImagelessFramebufferFeatures;

  PhysicalDeviceImagelessFramebufferFeatures(void *next = {}, bool32 imageless_framebuffer = {})
    : next_(next), imageless_framebuffer_(imageless_framebuffer) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES;
  void *next_;
  bool32 imageless_framebuffer_;
};

struct ClearDepthStencilValue {

  using native_type = VkClearDepthStencilValue;

  ClearDepthStencilValue(float depth = {}, uint32_t stencil = {}) : depth_(depth), stencil_(stencil) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  float depth_;
  uint32_t stencil_;
};

struct SwapchainPresentBarrierCreateInfoNV {

  using native_type = VkSwapchainPresentBarrierCreateInfoNV;

  SwapchainPresentBarrierCreateInfoNV(void *next = {}, bool32 present_barrier_enable = {})
    : next_(next), present_barrier_enable_(present_barrier_enable) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV;
  void *next_;
  bool32 present_barrier_enable_;
};

struct PhysicalDeviceCooperativeMatrixFeaturesNV {

  using native_type = VkPhysicalDeviceCooperativeMatrixFeaturesNV;

  PhysicalDeviceCooperativeMatrixFeaturesNV(void *next = {},
                                            bool32 cooperative_matrix = {},
                                            bool32 cooperative_matrix_robust_buffer_access = {})
    : next_(next), cooperative_matrix_(cooperative_matrix),
      cooperative_matrix_robust_buffer_access_(cooperative_matrix_robust_buffer_access) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV;
  void *next_;
  bool32 cooperative_matrix_;
  bool32 cooperative_matrix_robust_buffer_access_;
};

struct ImageViewAddressPropertiesNVX {

  using native_type = VkImageViewAddressPropertiesNVX;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::IMAGE_VIEW_ADDRESS_PROPERTIES_NVX;
  void *next_;
  DeviceAddress device_address_;
  DeviceSize size_;
};

struct AccelerationStructureDeviceAddressInfoKHR {

  using native_type = VkAccelerationStructureDeviceAddressInfoKHR;

  AccelerationStructureDeviceAddressInfoKHR(const void *next = {}, VkAccelerationStructureKHR acceleration_structure = {})
    : next_(next), acceleration_structure_(acceleration_structure) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR;
  const void *next_;
  VkAccelerationStructureKHR acceleration_structure_;
};

struct PhysicalDeviceAccelerationStructurePropertiesKHR {

  using native_type = VkPhysicalDeviceAccelerationStructurePropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR;
  void *next_;
  uint64_t max_geometry_count_;
  uint64_t max_instance_count_;
  uint64_t max_primitive_count_;
  uint32_t max_per_stage_descriptor_acceleration_structures_;
  uint32_t max_per_stage_descriptor_update_after_bind_acceleration_structures_;
  uint32_t max_descriptor_set_acceleration_structures_;
  uint32_t max_descriptor_set_update_after_bind_acceleration_structures_;
  uint32_t min_acceleration_structure_scratch_offset_alignment_;
};

struct PhysicalDevicePerformanceQueryPropertiesKHR {

  using native_type = VkPhysicalDevicePerformanceQueryPropertiesKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR;
  void *next_;
  bool32 allow_command_buffer_query_copies_;
};

struct DescriptorGetInfoEXT {

  using native_type = VkDescriptorGetInfoEXT;

  DescriptorGetInfoEXT(const void *next = {}, DescriptorType type = {}, VkDescriptorDataEXT data = {})
    : next_(next), type_(type), data_(data) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::DESCRIPTOR_GET_INFO_EXT;
  const void *next_;
  DescriptorType type_;
  VkDescriptorDataEXT data_;
};

struct PerformanceCounterKHR {

  using native_type = VkPerformanceCounterKHR;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PERFORMANCE_COUNTER_KHR;
  void *next_;
  PerformanceCounterUnit unit_;
  PerformanceCounterScope scope_;
  PerformanceCounterStorage storage_;
  std::array<uint8_t, VK_UUID_SIZE> uuid_;
};

struct PhysicalDeviceMeshShaderFeaturesNV {

  using native_type = VkPhysicalDeviceMeshShaderFeaturesNV;

  PhysicalDeviceMeshShaderFeaturesNV(void *next = {}, bool32 task_shader = {}, bool32 mesh_shader = {})
    : next_(next), task_shader_(task_shader), mesh_shader_(mesh_shader) {}

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;
  void *next_;
  bool32 task_shader_;
  bool32 mesh_shader_;
};

struct FramebufferMixedSamplesCombinationNV {

  using native_type = VkFramebufferMixedSamplesCombinationNV;

  auto *get() { return reinterpret_cast<native_type *>(this); }

  StructureType structure_type_ = StructureType::FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV;
  void *next_;
  CoverageReductionMode coverage_reduction_mode_;
  SampleCountMaskBit rasterization_samples_;
  SampleCountMask depth_stencil_samples_;
  SampleCountMask color_samples_;
};

} // namespace Walle

#endif