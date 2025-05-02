#include "graphics_string_tools.h"

namespace Walle {

std::string_view ToString(MemoryUnmapMaskBit input) {
  switch (input) {
  case MemoryUnmapMaskBit::E_RESERVE_BIT_EXT:
    return "MemoryUnmapMaskBit::E_RESERVE_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(TessellationDomainOrigin input) {
  switch (input) {
  case TessellationDomainOrigin::E_UPPER_LEFT:
    return "TessellationDomainOrigin::E_UPPER_LEFT";
  case TessellationDomainOrigin::E_LOWER_LEFT:
    return "TessellationDomainOrigin::E_LOWER_LEFT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DescriptorPoolCreateMaskBit input) {
  switch (input) {
  case DescriptorPoolCreateMaskBit::E_FREE_DESCRIPTOR_SET_BIT:
    return "DescriptorPoolCreateMaskBit::E_FREE_DESCRIPTOR_SET_BIT";
  case DescriptorPoolCreateMaskBit::E_ALLOW_OVERALLOCATION_SETS_BIT_NV:
    return "DescriptorPoolCreateMaskBit::E_ALLOW_OVERALLOCATION_SETS_BIT_NV";
  case DescriptorPoolCreateMaskBit::E_ALLOW_OVERALLOCATION_POOLS_BIT_NV:
    return "DescriptorPoolCreateMaskBit::E_ALLOW_OVERALLOCATION_POOLS_BIT_NV";
  case DescriptorPoolCreateMaskBit::E_HOST_ONLY_BIT_EXT:
    return "DescriptorPoolCreateMaskBit::E_HOST_ONLY_BIT_EXT";
  case DescriptorPoolCreateMaskBit::E_UPDATE_AFTER_BIND_BIT:
    return "DescriptorPoolCreateMaskBit::E_UPDATE_AFTER_BIND_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SamplerYcbcrModelConversion input) {
  switch (input) {
  case SamplerYcbcrModelConversion::E_RGB_IDENTITY:
    return "SamplerYcbcrModelConversion::E_RGB_IDENTITY";
  case SamplerYcbcrModelConversion::E_YCBCR_IDENTITY:
    return "SamplerYcbcrModelConversion::E_YCBCR_IDENTITY";
  case SamplerYcbcrModelConversion::E_YCBCR_709:
    return "SamplerYcbcrModelConversion::E_YCBCR_709";
  case SamplerYcbcrModelConversion::E_YCBCR_601:
    return "SamplerYcbcrModelConversion::E_YCBCR_601";
  case SamplerYcbcrModelConversion::E_YCBCR_2020:
    return "SamplerYcbcrModelConversion::E_YCBCR_2020";
  default:
    std::unreachable();
  }
}

std::string_view ToString(MicromapType input) {
  switch (input) {
  case MicromapType::E_OPACITY_MICROMAP_EXT:
    return "MicromapType::E_OPACITY_MICROMAP_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ViewportCoordinateSwizzle input) {
  switch (input) {
  case ViewportCoordinateSwizzle::E_POSITIVE_X_NV:
    return "ViewportCoordinateSwizzle::E_POSITIVE_X_NV";
  case ViewportCoordinateSwizzle::E_NEGATIVE_X_NV:
    return "ViewportCoordinateSwizzle::E_NEGATIVE_X_NV";
  case ViewportCoordinateSwizzle::E_POSITIVE_Y_NV:
    return "ViewportCoordinateSwizzle::E_POSITIVE_Y_NV";
  case ViewportCoordinateSwizzle::E_NEGATIVE_Y_NV:
    return "ViewportCoordinateSwizzle::E_NEGATIVE_Y_NV";
  case ViewportCoordinateSwizzle::E_POSITIVE_Z_NV:
    return "ViewportCoordinateSwizzle::E_POSITIVE_Z_NV";
  case ViewportCoordinateSwizzle::E_NEGATIVE_Z_NV:
    return "ViewportCoordinateSwizzle::E_NEGATIVE_Z_NV";
  case ViewportCoordinateSwizzle::E_POSITIVE_W_NV:
    return "ViewportCoordinateSwizzle::E_POSITIVE_W_NV";
  case ViewportCoordinateSwizzle::E_NEGATIVE_W_NV:
    return "ViewportCoordinateSwizzle::E_NEGATIVE_W_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(MemoryAllocateMaskBit input) {
  switch (input) {
  case MemoryAllocateMaskBit::E_DEVICE_MASK_BIT:
    return "MemoryAllocateMaskBit::E_DEVICE_MASK_BIT";
  case MemoryAllocateMaskBit::E_DEVICE_ADDRESS_BIT:
    return "MemoryAllocateMaskBit::E_DEVICE_ADDRESS_BIT";
  case MemoryAllocateMaskBit::E_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT:
    return "MemoryAllocateMaskBit::E_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PeerMemoryFeatureMaskBit input) {
  switch (input) {
  case PeerMemoryFeatureMaskBit::E_COPY_SRC_BIT:
    return "PeerMemoryFeatureMaskBit::E_COPY_SRC_BIT";
  case PeerMemoryFeatureMaskBit::E_COPY_DST_BIT:
    return "PeerMemoryFeatureMaskBit::E_COPY_DST_BIT";
  case PeerMemoryFeatureMaskBit::E_GENERIC_SRC_BIT:
    return "PeerMemoryFeatureMaskBit::E_GENERIC_SRC_BIT";
  case PeerMemoryFeatureMaskBit::E_GENERIC_DST_BIT:
    return "PeerMemoryFeatureMaskBit::E_GENERIC_DST_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DisplayPlaneAlphaMaskBit input) {
  switch (input) {
  case DisplayPlaneAlphaMaskBit::E_OPAQUE_BIT_KHR:
    return "DisplayPlaneAlphaMaskBit::E_OPAQUE_BIT_KHR";
  case DisplayPlaneAlphaMaskBit::E_GLOBAL_BIT_KHR:
    return "DisplayPlaneAlphaMaskBit::E_GLOBAL_BIT_KHR";
  case DisplayPlaneAlphaMaskBit::E_PER_PIXEL_BIT_KHR:
    return "DisplayPlaneAlphaMaskBit::E_PER_PIXEL_BIT_KHR";
  case DisplayPlaneAlphaMaskBit::E_PER_PIXEL_PREMULTIPLIED_BIT_KHR:
    return "DisplayPlaneAlphaMaskBit::E_PER_PIXEL_PREMULTIPLIED_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BlendOp input) {
  switch (input) {
  case BlendOp::E_ADD:
    return "BlendOp::E_ADD";
  case BlendOp::E_SUBTRACT:
    return "BlendOp::E_SUBTRACT";
  case BlendOp::E_REVERSE_SUBTRACT:
    return "BlendOp::E_REVERSE_SUBTRACT";
  case BlendOp::E_MIN:
    return "BlendOp::E_MIN";
  case BlendOp::E_MAX:
    return "BlendOp::E_MAX";
  case BlendOp::E_ZERO_EXT:
    return "BlendOp::E_ZERO_EXT";
  case BlendOp::E_SRC_EXT:
    return "BlendOp::E_SRC_EXT";
  case BlendOp::E_DST_EXT:
    return "BlendOp::E_DST_EXT";
  case BlendOp::E_SRC_OVER_EXT:
    return "BlendOp::E_SRC_OVER_EXT";
  case BlendOp::E_DST_OVER_EXT:
    return "BlendOp::E_DST_OVER_EXT";
  case BlendOp::E_SRC_IN_EXT:
    return "BlendOp::E_SRC_IN_EXT";
  case BlendOp::E_DST_IN_EXT:
    return "BlendOp::E_DST_IN_EXT";
  case BlendOp::E_SRC_OUT_EXT:
    return "BlendOp::E_SRC_OUT_EXT";
  case BlendOp::E_DST_OUT_EXT:
    return "BlendOp::E_DST_OUT_EXT";
  case BlendOp::E_SRC_ATOP_EXT:
    return "BlendOp::E_SRC_ATOP_EXT";
  case BlendOp::E_DST_ATOP_EXT:
    return "BlendOp::E_DST_ATOP_EXT";
  case BlendOp::E_XOR_EXT:
    return "BlendOp::E_XOR_EXT";
  case BlendOp::E_MULTIPLY_EXT:
    return "BlendOp::E_MULTIPLY_EXT";
  case BlendOp::E_SCREEN_EXT:
    return "BlendOp::E_SCREEN_EXT";
  case BlendOp::E_OVERLAY_EXT:
    return "BlendOp::E_OVERLAY_EXT";
  case BlendOp::E_DARKEN_EXT:
    return "BlendOp::E_DARKEN_EXT";
  case BlendOp::E_LIGHTEN_EXT:
    return "BlendOp::E_LIGHTEN_EXT";
  case BlendOp::E_COLORDODGE_EXT:
    return "BlendOp::E_COLORDODGE_EXT";
  case BlendOp::E_COLORBURN_EXT:
    return "BlendOp::E_COLORBURN_EXT";
  case BlendOp::E_HARDLIGHT_EXT:
    return "BlendOp::E_HARDLIGHT_EXT";
  case BlendOp::E_SOFTLIGHT_EXT:
    return "BlendOp::E_SOFTLIGHT_EXT";
  case BlendOp::E_DIFFERENCE_EXT:
    return "BlendOp::E_DIFFERENCE_EXT";
  case BlendOp::E_EXCLUSION_EXT:
    return "BlendOp::E_EXCLUSION_EXT";
  case BlendOp::E_INVERT_EXT:
    return "BlendOp::E_INVERT_EXT";
  case BlendOp::E_INVERT_RGB_EXT:
    return "BlendOp::E_INVERT_RGB_EXT";
  case BlendOp::E_LINEARDODGE_EXT:
    return "BlendOp::E_LINEARDODGE_EXT";
  case BlendOp::E_LINEARBURN_EXT:
    return "BlendOp::E_LINEARBURN_EXT";
  case BlendOp::E_VIVIDLIGHT_EXT:
    return "BlendOp::E_VIVIDLIGHT_EXT";
  case BlendOp::E_LINEARLIGHT_EXT:
    return "BlendOp::E_LINEARLIGHT_EXT";
  case BlendOp::E_PINLIGHT_EXT:
    return "BlendOp::E_PINLIGHT_EXT";
  case BlendOp::E_HARDMIX_EXT:
    return "BlendOp::E_HARDMIX_EXT";
  case BlendOp::E_HSL_HUE_EXT:
    return "BlendOp::E_HSL_HUE_EXT";
  case BlendOp::E_HSL_SATURATION_EXT:
    return "BlendOp::E_HSL_SATURATION_EXT";
  case BlendOp::E_HSL_COLOR_EXT:
    return "BlendOp::E_HSL_COLOR_EXT";
  case BlendOp::E_HSL_LUMINOSITY_EXT:
    return "BlendOp::E_HSL_LUMINOSITY_EXT";
  case BlendOp::E_PLUS_EXT:
    return "BlendOp::E_PLUS_EXT";
  case BlendOp::E_PLUS_CLAMPED_EXT:
    return "BlendOp::E_PLUS_CLAMPED_EXT";
  case BlendOp::E_PLUS_CLAMPED_ALPHA_EXT:
    return "BlendOp::E_PLUS_CLAMPED_ALPHA_EXT";
  case BlendOp::E_PLUS_DARKER_EXT:
    return "BlendOp::E_PLUS_DARKER_EXT";
  case BlendOp::E_MINUS_EXT:
    return "BlendOp::E_MINUS_EXT";
  case BlendOp::E_MINUS_CLAMPED_EXT:
    return "BlendOp::E_MINUS_CLAMPED_EXT";
  case BlendOp::E_CONTRAST_EXT:
    return "BlendOp::E_CONTRAST_EXT";
  case BlendOp::E_INVERT_OVG_EXT:
    return "BlendOp::E_INVERT_OVG_EXT";
  case BlendOp::E_RED_EXT:
    return "BlendOp::E_RED_EXT";
  case BlendOp::E_GREEN_EXT:
    return "BlendOp::E_GREEN_EXT";
  case BlendOp::E_BLUE_EXT:
    return "BlendOp::E_BLUE_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ConservativeRasterizationMode input) {
  switch (input) {
  case ConservativeRasterizationMode::E_DISABLED_EXT:
    return "ConservativeRasterizationMode::E_DISABLED_EXT";
  case ConservativeRasterizationMode::E_OVERESTIMATE_EXT:
    return "ConservativeRasterizationMode::E_OVERESTIMATE_EXT";
  case ConservativeRasterizationMode::E_UNDERESTIMATE_EXT:
    return "ConservativeRasterizationMode::E_UNDERESTIMATE_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DeviceEventType input) {
  switch (input) {
  case DeviceEventType::E_DISPLAY_HOTPLUG_EXT:
    return "DeviceEventType::E_DISPLAY_HOTPLUG_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DisplayPowerState input) {
  switch (input) {
  case DisplayPowerState::E_OFF_EXT:
    return "DisplayPowerState::E_OFF_EXT";
  case DisplayPowerState::E_SUSPEND_EXT:
    return "DisplayPowerState::E_SUSPEND_EXT";
  case DisplayPowerState::E_ON_EXT:
    return "DisplayPowerState::E_ON_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(LatencyMarker input) {
  switch (input) {
  case LatencyMarker::E_SIMULATION_START_NV:
    return "LatencyMarker::E_SIMULATION_START_NV";
  case LatencyMarker::E_SIMULATION_END_NV:
    return "LatencyMarker::E_SIMULATION_END_NV";
  case LatencyMarker::E_RENDERSUBMIT_START_NV:
    return "LatencyMarker::E_RENDERSUBMIT_START_NV";
  case LatencyMarker::E_RENDERSUBMIT_END_NV:
    return "LatencyMarker::E_RENDERSUBMIT_END_NV";
  case LatencyMarker::E_PRESENT_START_NV:
    return "LatencyMarker::E_PRESENT_START_NV";
  case LatencyMarker::E_PRESENT_END_NV:
    return "LatencyMarker::E_PRESENT_END_NV";
  case LatencyMarker::E_INPUT_SAMPLE_NV:
    return "LatencyMarker::E_INPUT_SAMPLE_NV";
  case LatencyMarker::E_TRIGGER_FLASH_NV:
    return "LatencyMarker::E_TRIGGER_FLASH_NV";
  case LatencyMarker::E_OUT_OF_BAND_RENDERSUBMIT_START_NV:
    return "LatencyMarker::E_OUT_OF_BAND_RENDERSUBMIT_START_NV";
  case LatencyMarker::E_OUT_OF_BAND_RENDERSUBMIT_END_NV:
    return "LatencyMarker::E_OUT_OF_BAND_RENDERSUBMIT_END_NV";
  case LatencyMarker::E_OUT_OF_BAND_PRESENT_START_NV:
    return "LatencyMarker::E_OUT_OF_BAND_PRESENT_START_NV";
  case LatencyMarker::E_OUT_OF_BAND_PRESENT_END_NV:
    return "LatencyMarker::E_OUT_OF_BAND_PRESENT_END_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ExternalFenceFeatureMaskBit input) {
  switch (input) {
  case ExternalFenceFeatureMaskBit::E_EXPORTABLE_BIT:
    return "ExternalFenceFeatureMaskBit::E_EXPORTABLE_BIT";
  case ExternalFenceFeatureMaskBit::E_IMPORTABLE_BIT:
    return "ExternalFenceFeatureMaskBit::E_IMPORTABLE_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ExternalFenceHandleTypeMaskBit input) {
  switch (input) {
  case ExternalFenceHandleTypeMaskBit::E_OPAQUE_FD_BIT:
    return "ExternalFenceHandleTypeMaskBit::E_OPAQUE_FD_BIT";
  case ExternalFenceHandleTypeMaskBit::E_OPAQUE_WIN32_BIT:
    return "ExternalFenceHandleTypeMaskBit::E_OPAQUE_WIN32_BIT";
  case ExternalFenceHandleTypeMaskBit::E_OPAQUE_WIN32_KMT_BIT:
    return "ExternalFenceHandleTypeMaskBit::E_OPAQUE_WIN32_KMT_BIT";
  case ExternalFenceHandleTypeMaskBit::E_SYNC_FD_BIT:
    return "ExternalFenceHandleTypeMaskBit::E_SYNC_FD_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DiscardRectangleMode input) {
  switch (input) {
  case DiscardRectangleMode::E_INCLUSIVE_EXT:
    return "DiscardRectangleMode::E_INCLUSIVE_EXT";
  case DiscardRectangleMode::E_EXCLUSIVE_EXT:
    return "DiscardRectangleMode::E_EXCLUSIVE_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ColorComponentMaskBit input) {
  switch (input) {
  case ColorComponentMaskBit::E_R_BIT:
    return "ColorComponentMaskBit::E_R_BIT";
  case ColorComponentMaskBit::E_G_BIT:
    return "ColorComponentMaskBit::E_G_BIT";
  case ColorComponentMaskBit::E_B_BIT:
    return "ColorComponentMaskBit::E_B_BIT";
  case ColorComponentMaskBit::E_A_BIT:
    return "ColorComponentMaskBit::E_A_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ExternalMemoryHandleTypeMaskBit input) {
  switch (input) {
  case ExternalMemoryHandleTypeMaskBit::E_OPAQUE_FD_BIT:
    return "ExternalMemoryHandleTypeMaskBit::E_OPAQUE_FD_BIT";
  case ExternalMemoryHandleTypeMaskBit::E_OPAQUE_WIN32_BIT:
    return "ExternalMemoryHandleTypeMaskBit::E_OPAQUE_WIN32_BIT";
  case ExternalMemoryHandleTypeMaskBit::E_OPAQUE_WIN32_KMT_BIT:
    return "ExternalMemoryHandleTypeMaskBit::E_OPAQUE_WIN32_KMT_BIT";
  case ExternalMemoryHandleTypeMaskBit::E_D3D11_TEXTURE_BIT:
    return "ExternalMemoryHandleTypeMaskBit::E_D3D11_TEXTURE_BIT";
  case ExternalMemoryHandleTypeMaskBit::E_D3D11_TEXTURE_KMT_BIT:
    return "ExternalMemoryHandleTypeMaskBit::E_D3D11_TEXTURE_KMT_BIT";
  case ExternalMemoryHandleTypeMaskBit::E_D3D12_HEAP_BIT:
    return "ExternalMemoryHandleTypeMaskBit::E_D3D12_HEAP_BIT";
  case ExternalMemoryHandleTypeMaskBit::E_D3D12_RESOURCE_BIT:
    return "ExternalMemoryHandleTypeMaskBit::E_D3D12_RESOURCE_BIT";
  case ExternalMemoryHandleTypeMaskBit::E_RDMA_ADDRESS_BIT_NV:
    return "ExternalMemoryHandleTypeMaskBit::E_RDMA_ADDRESS_BIT_NV";
  case ExternalMemoryHandleTypeMaskBit::E_HOST_ALLOCATION_BIT_EXT:
    return "ExternalMemoryHandleTypeMaskBit::E_HOST_ALLOCATION_BIT_EXT";
  case ExternalMemoryHandleTypeMaskBit::E_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT:
    return "ExternalMemoryHandleTypeMaskBit::E_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT";
  case ExternalMemoryHandleTypeMaskBit::E_DMA_BUF_BIT_EXT:
    return "ExternalMemoryHandleTypeMaskBit::E_DMA_BUF_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VendorId input) {
  switch (input) {
  case VendorId::E_KHRONOS:
    return "VendorId::E_KHRONOS";
  case VendorId::E_VIV:
    return "VendorId::E_VIV";
  case VendorId::E_VSI:
    return "VendorId::E_VSI";
  case VendorId::E_KAZAN:
    return "VendorId::E_KAZAN";
  case VendorId::E_CODEPLAY:
    return "VendorId::E_CODEPLAY";
  case VendorId::E_MESA:
    return "VendorId::E_MESA";
  case VendorId::E_POCL:
    return "VendorId::E_POCL";
  case VendorId::E_MOBILEYE:
    return "VendorId::E_MOBILEYE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DeviceDiagnosticsConfigMaskBit input) {
  switch (input) {
  case DeviceDiagnosticsConfigMaskBit::E_ENABLE_SHADER_DEBUG_INFO_BIT_NV:
    return "DeviceDiagnosticsConfigMaskBit::E_ENABLE_SHADER_DEBUG_INFO_BIT_NV";
  case DeviceDiagnosticsConfigMaskBit::E_ENABLE_RESOURCE_TRACKING_BIT_NV:
    return "DeviceDiagnosticsConfigMaskBit::E_ENABLE_RESOURCE_TRACKING_BIT_NV";
  case DeviceDiagnosticsConfigMaskBit::E_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV:
    return "DeviceDiagnosticsConfigMaskBit::E_ENABLE_AUTOMATIC_CHECKPOINTS_BIT_NV";
  case DeviceDiagnosticsConfigMaskBit::E_ENABLE_SHADER_ERROR_REPORTING_BIT_NV:
    return "DeviceDiagnosticsConfigMaskBit::E_ENABLE_SHADER_ERROR_REPORTING_BIT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PresentMode input) {
  switch (input) {
  case PresentMode::E_IMMEDIATE_KHR:
    return "PresentMode::E_IMMEDIATE_KHR";
  case PresentMode::E_MAILBOX_KHR:
    return "PresentMode::E_MAILBOX_KHR";
  case PresentMode::E_FIFO_KHR:
    return "PresentMode::E_FIFO_KHR";
  case PresentMode::E_FIFO_RELAXED_KHR:
    return "PresentMode::E_FIFO_RELAXED_KHR";
  case PresentMode::E_SHARED_DEMAND_REFRESH_KHR:
    return "PresentMode::E_SHARED_DEMAND_REFRESH_KHR";
  case PresentMode::E_SHARED_CONTINUOUS_REFRESH_KHR:
    return "PresentMode::E_SHARED_CONTINUOUS_REFRESH_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DescriptorSetLayoutCreateMaskBit input) {
  switch (input) {
  case DescriptorSetLayoutCreateMaskBit::E_PER_STAGE_BIT_NV:
    return "DescriptorSetLayoutCreateMaskBit::E_PER_STAGE_BIT_NV";
  case DescriptorSetLayoutCreateMaskBit::E_PUSH_DESCRIPTOR_BIT_KHR:
    return "DescriptorSetLayoutCreateMaskBit::E_PUSH_DESCRIPTOR_BIT_KHR";
  case DescriptorSetLayoutCreateMaskBit::E_INDIRECT_BINDABLE_BIT_NV:
    return "DescriptorSetLayoutCreateMaskBit::E_INDIRECT_BINDABLE_BIT_NV";
  case DescriptorSetLayoutCreateMaskBit::E_HOST_ONLY_POOL_BIT_EXT:
    return "DescriptorSetLayoutCreateMaskBit::E_HOST_ONLY_POOL_BIT_EXT";
  case DescriptorSetLayoutCreateMaskBit::E_DESCRIPTOR_BUFFER_BIT_EXT:
    return "DescriptorSetLayoutCreateMaskBit::E_DESCRIPTOR_BUFFER_BIT_EXT";
  case DescriptorSetLayoutCreateMaskBit::E_EMBEDDED_IMMUTABLE_SAMPLERS_BIT_EXT:
    return "DescriptorSetLayoutCreateMaskBit::E_EMBEDDED_IMMUTABLE_SAMPLERS_BIT_EXT";
  case DescriptorSetLayoutCreateMaskBit::E_UPDATE_AFTER_BIND_POOL_BIT:
    return "DescriptorSetLayoutCreateMaskBit::E_UPDATE_AFTER_BIND_POOL_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeH265StdMaskBit input) {
  switch (input) {
  case VideoEncodeH265StdMaskBit::E_SEPARATE_COLOR_PLANE_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_SEPARATE_COLOR_PLANE_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_SAMPLE_ADAPTIVE_OFFSET_ENABLED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_SAMPLE_ADAPTIVE_OFFSET_ENABLED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_SCALING_LIST_DATA_PRESENT_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_SCALING_LIST_DATA_PRESENT_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_PCM_ENABLED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_PCM_ENABLED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_SPS_TEMPORAL_MVP_ENABLED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_SPS_TEMPORAL_MVP_ENABLED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_INIT_QP_MINUS26_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_INIT_QP_MINUS26_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_WEIGHTED_PRED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_WEIGHTED_PRED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_WEIGHTED_BIPRED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_WEIGHTED_BIPRED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_LOG2_PARALLEL_MERGE_LEVEL_MINUS2_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_LOG2_PARALLEL_MERGE_LEVEL_MINUS2_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_SIGN_DATA_HIDING_ENABLED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_SIGN_DATA_HIDING_ENABLED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_TRANSFORM_SKIP_ENABLED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_TRANSFORM_SKIP_ENABLED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_TRANSFORM_SKIP_ENABLED_FLAG_UNSET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_TRANSFORM_SKIP_ENABLED_FLAG_UNSET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_PPS_SLICE_CHROMA_QP_OFFSETS_PRESENT_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_PPS_SLICE_CHROMA_QP_OFFSETS_PRESENT_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_TRANSQUANT_BYPASS_ENABLED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_TRANSQUANT_BYPASS_ENABLED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_CONSTRAINED_INTRA_PRED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_CONSTRAINED_INTRA_PRED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_ENTROPY_CODING_SYNC_ENABLED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_ENTROPY_CODING_SYNC_ENABLED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_DEBLOCKING_FILTER_OVERRIDE_ENABLED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_DEBLOCKING_FILTER_OVERRIDE_ENABLED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_DEPENDENT_SLICE_SEGMENTS_ENABLED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_DEPENDENT_SLICE_SEGMENTS_ENABLED_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_DEPENDENT_SLICE_SEGMENT_FLAG_SET_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_DEPENDENT_SLICE_SEGMENT_FLAG_SET_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_SLICE_QP_DELTA_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_SLICE_QP_DELTA_BIT_KHR";
  case VideoEncodeH265StdMaskBit::E_DIFFERENT_SLICE_QP_DELTA_BIT_KHR:
    return "VideoEncodeH265StdMaskBit::E_DIFFERENT_SLICE_QP_DELTA_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PrivateDataSlotCreateMaskBit input) {
  switch (input) {
  default:
    std::unreachable();
  }
}

std::string_view ToString(ShaderModuleCreateMaskBit input) {
  switch (input) {
  default:
    std::unreachable();
  }
}

std::string_view ToString(ValidationFeatureDisable input) {
  switch (input) {
  case ValidationFeatureDisable::E_ALL_EXT:
    return "ValidationFeatureDisable::E_ALL_EXT";
  case ValidationFeatureDisable::E_SHADERS_EXT:
    return "ValidationFeatureDisable::E_SHADERS_EXT";
  case ValidationFeatureDisable::E_THREAD_SAFETY_EXT:
    return "ValidationFeatureDisable::E_THREAD_SAFETY_EXT";
  case ValidationFeatureDisable::E_API_PARAMETERS_EXT:
    return "ValidationFeatureDisable::E_API_PARAMETERS_EXT";
  case ValidationFeatureDisable::E_OBJECT_LIFETIMES_EXT:
    return "ValidationFeatureDisable::E_OBJECT_LIFETIMES_EXT";
  case ValidationFeatureDisable::E_CORE_CHECKS_EXT:
    return "ValidationFeatureDisable::E_CORE_CHECKS_EXT";
  case ValidationFeatureDisable::E_UNIQUE_HANDLES_EXT:
    return "ValidationFeatureDisable::E_UNIQUE_HANDLES_EXT";
  case ValidationFeatureDisable::E_SHADER_VALIDATION_CACHE_EXT:
    return "ValidationFeatureDisable::E_SHADER_VALIDATION_CACHE_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DescriptorUpdateTemplateType input) {
  switch (input) {
  case DescriptorUpdateTemplateType::E_DESCRIPTOR_SET:
    return "DescriptorUpdateTemplateType::E_DESCRIPTOR_SET";
  case DescriptorUpdateTemplateType::E_PUSH_DESCRIPTORS_KHR:
    return "DescriptorUpdateTemplateType::E_PUSH_DESCRIPTORS_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ValidationFeatureEnable input) {
  switch (input) {
  case ValidationFeatureEnable::E_GPU_ASSISTED_EXT:
    return "ValidationFeatureEnable::E_GPU_ASSISTED_EXT";
  case ValidationFeatureEnable::E_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT:
    return "ValidationFeatureEnable::E_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT";
  case ValidationFeatureEnable::E_BEST_PRACTICES_EXT:
    return "ValidationFeatureEnable::E_BEST_PRACTICES_EXT";
  case ValidationFeatureEnable::E_DEBUG_PRINTF_EXT:
    return "ValidationFeatureEnable::E_DEBUG_PRINTF_EXT";
  case ValidationFeatureEnable::E_SYNCHRONIZATION_VALIDATION_EXT:
    return "ValidationFeatureEnable::E_SYNCHRONIZATION_VALIDATION_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DebugUtilsMessageTypeMaskBit input) {
  switch (input) {
  case DebugUtilsMessageTypeMaskBit::E_GENERAL_BIT_EXT:
    return "DebugUtilsMessageTypeMaskBit::E_GENERAL_BIT_EXT";
  case DebugUtilsMessageTypeMaskBit::E_VALIDATION_BIT_EXT:
    return "DebugUtilsMessageTypeMaskBit::E_VALIDATION_BIT_EXT";
  case DebugUtilsMessageTypeMaskBit::E_PERFORMANCE_BIT_EXT:
    return "DebugUtilsMessageTypeMaskBit::E_PERFORMANCE_BIT_EXT";
  case DebugUtilsMessageTypeMaskBit::E_DEVICE_ADDRESS_BINDING_BIT_EXT:
    return "DebugUtilsMessageTypeMaskBit::E_DEVICE_ADDRESS_BINDING_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SubgroupFeatureMaskBit input) {
  switch (input) {
  case SubgroupFeatureMaskBit::E_BASIC_BIT:
    return "SubgroupFeatureMaskBit::E_BASIC_BIT";
  case SubgroupFeatureMaskBit::E_VOTE_BIT:
    return "SubgroupFeatureMaskBit::E_VOTE_BIT";
  case SubgroupFeatureMaskBit::E_ARITHMETIC_BIT:
    return "SubgroupFeatureMaskBit::E_ARITHMETIC_BIT";
  case SubgroupFeatureMaskBit::E_BALLOT_BIT:
    return "SubgroupFeatureMaskBit::E_BALLOT_BIT";
  case SubgroupFeatureMaskBit::E_SHUFFLE_BIT:
    return "SubgroupFeatureMaskBit::E_SHUFFLE_BIT";
  case SubgroupFeatureMaskBit::E_SHUFFLE_RELATIVE_BIT:
    return "SubgroupFeatureMaskBit::E_SHUFFLE_RELATIVE_BIT";
  case SubgroupFeatureMaskBit::E_CLUSTERED_BIT:
    return "SubgroupFeatureMaskBit::E_CLUSTERED_BIT";
  case SubgroupFeatureMaskBit::E_QUAD_BIT:
    return "SubgroupFeatureMaskBit::E_QUAD_BIT";
  case SubgroupFeatureMaskBit::E_ROTATE_BIT_KHR:
    return "SubgroupFeatureMaskBit::E_ROTATE_BIT_KHR";
  case SubgroupFeatureMaskBit::E_ROTATE_CLUSTERED_BIT_KHR:
    return "SubgroupFeatureMaskBit::E_ROTATE_CLUSTERED_BIT_KHR";
  case SubgroupFeatureMaskBit::E_PARTITIONED_BIT_NV:
    return "SubgroupFeatureMaskBit::E_PARTITIONED_BIT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ValidationCheck input) {
  switch (input) {
  case ValidationCheck::E_ALL_EXT:
    return "ValidationCheck::E_ALL_EXT";
  case ValidationCheck::E_SHADERS_EXT:
    return "ValidationCheck::E_SHADERS_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SparseMemoryBindMaskBit input) {
  switch (input) {
  case SparseMemoryBindMaskBit::E_METADATA_BIT:
    return "SparseMemoryBindMaskBit::E_METADATA_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(RasterizationOrder input) {
  switch (input) {
  case RasterizationOrder::E_STRICT_AMD:
    return "RasterizationOrder::E_STRICT_AMD";
  case RasterizationOrder::E_RELAXED_AMD:
    return "RasterizationOrder::E_RELAXED_AMD";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DeviceMemoryReportEventType input) {
  switch (input) {
  case DeviceMemoryReportEventType::E_ALLOCATE_EXT:
    return "DeviceMemoryReportEventType::E_ALLOCATE_EXT";
  case DeviceMemoryReportEventType::E_FREE_EXT:
    return "DeviceMemoryReportEventType::E_FREE_EXT";
  case DeviceMemoryReportEventType::E_IMPORT_EXT:
    return "DeviceMemoryReportEventType::E_IMPORT_EXT";
  case DeviceMemoryReportEventType::E_UNIMPORT_EXT:
    return "DeviceMemoryReportEventType::E_UNIMPORT_EXT";
  case DeviceMemoryReportEventType::E_ALLOCATION_FAILED_EXT:
    return "DeviceMemoryReportEventType::E_ALLOCATION_FAILED_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeRateControlModeMaskBit input) {
  switch (input) {
  case VideoEncodeRateControlModeMaskBit::E_DEFAULT_KHR:
    return "VideoEncodeRateControlModeMaskBit::E_DEFAULT_KHR";
  case VideoEncodeRateControlModeMaskBit::E_DISABLED_BIT_KHR:
    return "VideoEncodeRateControlModeMaskBit::E_DISABLED_BIT_KHR";
  case VideoEncodeRateControlModeMaskBit::E_CBR_BIT_KHR:
    return "VideoEncodeRateControlModeMaskBit::E_CBR_BIT_KHR";
  case VideoEncodeRateControlModeMaskBit::E_VBR_BIT_KHR:
    return "VideoEncodeRateControlModeMaskBit::E_VBR_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(OpticalFlowGridSizeMaskBit input) {
  switch (input) {
  case OpticalFlowGridSizeMaskBit::E_UNKNOWN_NV:
    return "OpticalFlowGridSizeMaskBit::E_UNKNOWN_NV";
  case OpticalFlowGridSizeMaskBit::E_1X1_BIT_NV:
    return "OpticalFlowGridSizeMaskBit::E_1X1_BIT_NV";
  case OpticalFlowGridSizeMaskBit::E_2X2_BIT_NV:
    return "OpticalFlowGridSizeMaskBit::E_2X2_BIT_NV";
  case OpticalFlowGridSizeMaskBit::E_4X4_BIT_NV:
    return "OpticalFlowGridSizeMaskBit::E_4X4_BIT_NV";
  case OpticalFlowGridSizeMaskBit::E_8X8_BIT_NV:
    return "OpticalFlowGridSizeMaskBit::E_8X8_BIT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PointClippingBehavior input) {
  switch (input) {
  case PointClippingBehavior::E_ALL_CLIP_PLANES:
    return "PointClippingBehavior::E_ALL_CLIP_PLANES";
  case PointClippingBehavior::E_USER_CLIP_PLANES_ONLY:
    return "PointClippingBehavior::E_USER_CLIP_PLANES_ONLY";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CompositeAlphaMaskBit input) {
  switch (input) {
  case CompositeAlphaMaskBit::E_OPAQUE_BIT_KHR:
    return "CompositeAlphaMaskBit::E_OPAQUE_BIT_KHR";
  case CompositeAlphaMaskBit::E_PRE_MULTIPLIED_BIT_KHR:
    return "CompositeAlphaMaskBit::E_PRE_MULTIPLIED_BIT_KHR";
  case CompositeAlphaMaskBit::E_POST_MULTIPLIED_BIT_KHR:
    return "CompositeAlphaMaskBit::E_POST_MULTIPLIED_BIT_KHR";
  case CompositeAlphaMaskBit::E_INHERIT_BIT_KHR:
    return "CompositeAlphaMaskBit::E_INHERIT_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DependencyMaskBit input) {
  switch (input) {
  case DependencyMaskBit::E_BY_REGION_BIT:
    return "DependencyMaskBit::E_BY_REGION_BIT";
  case DependencyMaskBit::E_FEEDBACK_LOOP_BIT_EXT:
    return "DependencyMaskBit::E_FEEDBACK_LOOP_BIT_EXT";
  case DependencyMaskBit::E_DEVICE_GROUP_BIT:
    return "DependencyMaskBit::E_DEVICE_GROUP_BIT";
  case DependencyMaskBit::E_VIEW_LOCAL_BIT:
    return "DependencyMaskBit::E_VIEW_LOCAL_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SemaphoreType input) {
  switch (input) {
  case SemaphoreType::E_BINARY:
    return "SemaphoreType::E_BINARY";
  case SemaphoreType::E_TIMELINE:
    return "SemaphoreType::E_TIMELINE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(LayerSettingType input) {
  switch (input) {
  case LayerSettingType::E_BOOL32_EXT:
    return "LayerSettingType::E_BOOL32_EXT";
  case LayerSettingType::E_INT32_EXT:
    return "LayerSettingType::E_INT32_EXT";
  case LayerSettingType::E_INT64_EXT:
    return "LayerSettingType::E_INT64_EXT";
  case LayerSettingType::E_UINT32_EXT:
    return "LayerSettingType::E_UINT32_EXT";
  case LayerSettingType::E_UINT64_EXT:
    return "LayerSettingType::E_UINT64_EXT";
  case LayerSettingType::E_FLOAT32_EXT:
    return "LayerSettingType::E_FLOAT32_EXT";
  case LayerSettingType::E_FLOAT64_EXT:
    return "LayerSettingType::E_FLOAT64_EXT";
  case LayerSettingType::E_STRING_EXT:
    return "LayerSettingType::E_STRING_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SwapchainCreateMaskBit input) {
  switch (input) {
  case SwapchainCreateMaskBit::E_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR:
    return "SwapchainCreateMaskBit::E_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR";
  case SwapchainCreateMaskBit::E_MUTABLE_FORMAT_BIT_KHR:
    return "SwapchainCreateMaskBit::E_MUTABLE_FORMAT_BIT_KHR";
  case SwapchainCreateMaskBit::E_DEFERRED_MEMORY_ALLOCATION_BIT_EXT:
    return "SwapchainCreateMaskBit::E_DEFERRED_MEMORY_ALLOCATION_BIT_EXT";
  case SwapchainCreateMaskBit::E_PROTECTED_BIT_KHR:
    return "SwapchainCreateMaskBit::E_PROTECTED_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(LineRasterizationMode input) {
  switch (input) {
  case LineRasterizationMode::E_DEFAULT_KHR:
    return "LineRasterizationMode::E_DEFAULT_KHR";
  case LineRasterizationMode::E_RECTANGULAR_KHR:
    return "LineRasterizationMode::E_RECTANGULAR_KHR";
  case LineRasterizationMode::E_BRESENHAM_KHR:
    return "LineRasterizationMode::E_BRESENHAM_KHR";
  case LineRasterizationMode::E_RECTANGULAR_SMOOTH_KHR:
    return "LineRasterizationMode::E_RECTANGULAR_SMOOTH_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AttachmentDescriptionMaskBit input) {
  switch (input) {
  case AttachmentDescriptionMaskBit::E_MAY_ALIAS_BIT:
    return "AttachmentDescriptionMaskBit::E_MAY_ALIAS_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SampleCountMaskBit input) {
  switch (input) {
  case SampleCountMaskBit::E_1_BIT:
    return "SampleCountMaskBit::E_1_BIT";
  case SampleCountMaskBit::E_2_BIT:
    return "SampleCountMaskBit::E_2_BIT";
  case SampleCountMaskBit::E_4_BIT:
    return "SampleCountMaskBit::E_4_BIT";
  case SampleCountMaskBit::E_8_BIT:
    return "SampleCountMaskBit::E_8_BIT";
  case SampleCountMaskBit::E_16_BIT:
    return "SampleCountMaskBit::E_16_BIT";
  case SampleCountMaskBit::E_32_BIT:
    return "SampleCountMaskBit::E_32_BIT";
  case SampleCountMaskBit::E_64_BIT:
    return "SampleCountMaskBit::E_64_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ComponentType input) {
  switch (input) {
  case ComponentType::E_FLOAT16_KHR:
    return "ComponentType::E_FLOAT16_KHR";
  case ComponentType::E_FLOAT32_KHR:
    return "ComponentType::E_FLOAT32_KHR";
  case ComponentType::E_FLOAT64_KHR:
    return "ComponentType::E_FLOAT64_KHR";
  case ComponentType::E_SINT8_KHR:
    return "ComponentType::E_SINT8_KHR";
  case ComponentType::E_SINT16_KHR:
    return "ComponentType::E_SINT16_KHR";
  case ComponentType::E_SINT32_KHR:
    return "ComponentType::E_SINT32_KHR";
  case ComponentType::E_SINT64_KHR:
    return "ComponentType::E_SINT64_KHR";
  case ComponentType::E_UINT8_KHR:
    return "ComponentType::E_UINT8_KHR";
  case ComponentType::E_UINT16_KHR:
    return "ComponentType::E_UINT16_KHR";
  case ComponentType::E_UINT32_KHR:
    return "ComponentType::E_UINT32_KHR";
  case ComponentType::E_UINT64_KHR:
    return "ComponentType::E_UINT64_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CommandPoolResetMaskBit input) {
  switch (input) {
  case CommandPoolResetMaskBit::E_RELEASE_RESOURCES_BIT:
    return "CommandPoolResetMaskBit::E_RELEASE_RESOURCES_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CommandBufferLevel input) {
  switch (input) {
  case CommandBufferLevel::E_PRIMARY:
    return "CommandBufferLevel::E_PRIMARY";
  case CommandBufferLevel::E_SECONDARY:
    return "CommandBufferLevel::E_SECONDARY";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DirectDriverLoadingMode input) {
  switch (input) {
  case DirectDriverLoadingMode::E_EXCLUSIVE_LUNARG:
    return "DirectDriverLoadingMode::E_EXCLUSIVE_LUNARG";
  case DirectDriverLoadingMode::E_INCLUSIVE_LUNARG:
    return "DirectDriverLoadingMode::E_INCLUSIVE_LUNARG";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AccessMaskBit input) {
  switch (input) {
  case AccessMaskBit::E_INDIRECT_COMMAND_READ_BIT:
    return "AccessMaskBit::E_INDIRECT_COMMAND_READ_BIT";
  case AccessMaskBit::E_INDEX_READ_BIT:
    return "AccessMaskBit::E_INDEX_READ_BIT";
  case AccessMaskBit::E_VERTEX_ATTRIBUTE_READ_BIT:
    return "AccessMaskBit::E_VERTEX_ATTRIBUTE_READ_BIT";
  case AccessMaskBit::E_UNIFORM_READ_BIT:
    return "AccessMaskBit::E_UNIFORM_READ_BIT";
  case AccessMaskBit::E_INPUT_ATTACHMENT_READ_BIT:
    return "AccessMaskBit::E_INPUT_ATTACHMENT_READ_BIT";
  case AccessMaskBit::E_SHADER_READ_BIT:
    return "AccessMaskBit::E_SHADER_READ_BIT";
  case AccessMaskBit::E_SHADER_WRITE_BIT:
    return "AccessMaskBit::E_SHADER_WRITE_BIT";
  case AccessMaskBit::E_COLOR_ATTACHMENT_READ_BIT:
    return "AccessMaskBit::E_COLOR_ATTACHMENT_READ_BIT";
  case AccessMaskBit::E_COLOR_ATTACHMENT_WRITE_BIT:
    return "AccessMaskBit::E_COLOR_ATTACHMENT_WRITE_BIT";
  case AccessMaskBit::E_DEPTH_STENCIL_ATTACHMENT_READ_BIT:
    return "AccessMaskBit::E_DEPTH_STENCIL_ATTACHMENT_READ_BIT";
  case AccessMaskBit::E_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT:
    return "AccessMaskBit::E_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT";
  case AccessMaskBit::E_TRANSFER_READ_BIT:
    return "AccessMaskBit::E_TRANSFER_READ_BIT";
  case AccessMaskBit::E_TRANSFER_WRITE_BIT:
    return "AccessMaskBit::E_TRANSFER_WRITE_BIT";
  case AccessMaskBit::E_HOST_READ_BIT:
    return "AccessMaskBit::E_HOST_READ_BIT";
  case AccessMaskBit::E_HOST_WRITE_BIT:
    return "AccessMaskBit::E_HOST_WRITE_BIT";
  case AccessMaskBit::E_MEMORY_READ_BIT:
    return "AccessMaskBit::E_MEMORY_READ_BIT";
  case AccessMaskBit::E_MEMORY_WRITE_BIT:
    return "AccessMaskBit::E_MEMORY_WRITE_BIT";
  case AccessMaskBit::E_ACCELERATION_STRUCTURE_READ_BIT_KHR:
    return "AccessMaskBit::E_ACCELERATION_STRUCTURE_READ_BIT_KHR";
  case AccessMaskBit::E_ACCELERATION_STRUCTURE_WRITE_BIT_KHR:
    return "AccessMaskBit::E_ACCELERATION_STRUCTURE_WRITE_BIT_KHR";
  case AccessMaskBit::E_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT:
    return "AccessMaskBit::E_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT";
  case AccessMaskBit::E_CONDITIONAL_RENDERING_READ_BIT_EXT:
    return "AccessMaskBit::E_CONDITIONAL_RENDERING_READ_BIT_EXT";
  case AccessMaskBit::E_TRANSFORM_FEEDBACK_WRITE_BIT_EXT:
    return "AccessMaskBit::E_TRANSFORM_FEEDBACK_WRITE_BIT_EXT";
  case AccessMaskBit::E_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT:
    return "AccessMaskBit::E_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT";
  case AccessMaskBit::E_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT:
    return "AccessMaskBit::E_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT";
  case AccessMaskBit::E_FRAGMENT_DENSITY_MAP_READ_BIT_EXT:
    return "AccessMaskBit::E_FRAGMENT_DENSITY_MAP_READ_BIT_EXT";
  case AccessMaskBit::E_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR:
    return "AccessMaskBit::E_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR";
  case AccessMaskBit::E_COMMAND_PREPROCESS_READ_BIT_NV:
    return "AccessMaskBit::E_COMMAND_PREPROCESS_READ_BIT_NV";
  case AccessMaskBit::E_COMMAND_PREPROCESS_WRITE_BIT_NV:
    return "AccessMaskBit::E_COMMAND_PREPROCESS_WRITE_BIT_NV";
  case AccessMaskBit::E_NONE:
    return "AccessMaskBit::E_NONE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DeviceGroupPresentModeMaskBit input) {
  switch (input) {
  case DeviceGroupPresentModeMaskBit::E_LOCAL_BIT_KHR:
    return "DeviceGroupPresentModeMaskBit::E_LOCAL_BIT_KHR";
  case DeviceGroupPresentModeMaskBit::E_REMOTE_BIT_KHR:
    return "DeviceGroupPresentModeMaskBit::E_REMOTE_BIT_KHR";
  case DeviceGroupPresentModeMaskBit::E_SUM_BIT_KHR:
    return "DeviceGroupPresentModeMaskBit::E_SUM_BIT_KHR";
  case DeviceGroupPresentModeMaskBit::E_LOCAL_MULTI_DEVICE_BIT_KHR:
    return "DeviceGroupPresentModeMaskBit::E_LOCAL_MULTI_DEVICE_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SparseImageFormatMaskBit input) {
  switch (input) {
  case SparseImageFormatMaskBit::E_SINGLE_MIPTAIL_BIT:
    return "SparseImageFormatMaskBit::E_SINGLE_MIPTAIL_BIT";
  case SparseImageFormatMaskBit::E_ALIGNED_MIP_SIZE_BIT:
    return "SparseImageFormatMaskBit::E_ALIGNED_MIP_SIZE_BIT";
  case SparseImageFormatMaskBit::E_NONSTANDARD_BLOCK_SIZE_BIT:
    return "SparseImageFormatMaskBit::E_NONSTANDARD_BLOCK_SIZE_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PresentScalingMaskBit input) {
  switch (input) {
  case PresentScalingMaskBit::E_ONE_TO_ONE_BIT_EXT:
    return "PresentScalingMaskBit::E_ONE_TO_ONE_BIT_EXT";
  case PresentScalingMaskBit::E_ASPECT_RATIO_STRETCH_BIT_EXT:
    return "PresentScalingMaskBit::E_ASPECT_RATIO_STRETCH_BIT_EXT";
  case PresentScalingMaskBit::E_STRETCH_BIT_EXT:
    return "PresentScalingMaskBit::E_STRETCH_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(IndirectStateMaskBit input) {
  switch (input) {
  case IndirectStateMaskBit::E_FLAG_FRONTFACE_BIT_NV:
    return "IndirectStateMaskBit::E_FLAG_FRONTFACE_BIT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(MemoryMapMaskBit input) {
  switch (input) {
  case MemoryMapMaskBit::E_PLACED_BIT_EXT:
    return "MemoryMapMaskBit::E_PLACED_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(QueryPipelineStatisticMaskBit input) {
  switch (input) {
  case QueryPipelineStatisticMaskBit::E_INPUT_ASSEMBLY_VERTICES_BIT:
    return "QueryPipelineStatisticMaskBit::E_INPUT_ASSEMBLY_VERTICES_BIT";
  case QueryPipelineStatisticMaskBit::E_INPUT_ASSEMBLY_PRIMITIVES_BIT:
    return "QueryPipelineStatisticMaskBit::E_INPUT_ASSEMBLY_PRIMITIVES_BIT";
  case QueryPipelineStatisticMaskBit::E_VERTEX_SHADER_INVOCATIONS_BIT:
    return "QueryPipelineStatisticMaskBit::E_VERTEX_SHADER_INVOCATIONS_BIT";
  case QueryPipelineStatisticMaskBit::E_GEOMETRY_SHADER_INVOCATIONS_BIT:
    return "QueryPipelineStatisticMaskBit::E_GEOMETRY_SHADER_INVOCATIONS_BIT";
  case QueryPipelineStatisticMaskBit::E_GEOMETRY_SHADER_PRIMITIVES_BIT:
    return "QueryPipelineStatisticMaskBit::E_GEOMETRY_SHADER_PRIMITIVES_BIT";
  case QueryPipelineStatisticMaskBit::E_CLIPPING_INVOCATIONS_BIT:
    return "QueryPipelineStatisticMaskBit::E_CLIPPING_INVOCATIONS_BIT";
  case QueryPipelineStatisticMaskBit::E_CLIPPING_PRIMITIVES_BIT:
    return "QueryPipelineStatisticMaskBit::E_CLIPPING_PRIMITIVES_BIT";
  case QueryPipelineStatisticMaskBit::E_FRAGMENT_SHADER_INVOCATIONS_BIT:
    return "QueryPipelineStatisticMaskBit::E_FRAGMENT_SHADER_INVOCATIONS_BIT";
  case QueryPipelineStatisticMaskBit::E_TESSELLATION_CONTROL_SHADER_PATCHES_BIT:
    return "QueryPipelineStatisticMaskBit::E_TESSELLATION_CONTROL_SHADER_PATCHES_BIT";
  case QueryPipelineStatisticMaskBit::E_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT:
    return "QueryPipelineStatisticMaskBit::E_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT";
  case QueryPipelineStatisticMaskBit::E_COMPUTE_SHADER_INVOCATIONS_BIT:
    return "QueryPipelineStatisticMaskBit::E_COMPUTE_SHADER_INVOCATIONS_BIT";
  case QueryPipelineStatisticMaskBit::E_CLUSTER_CULLING_SHADER_INVOCATIONS_BIT_HUAWEI:
    return "QueryPipelineStatisticMaskBit::E_CLUSTER_CULLING_SHADER_INVOCATIONS_BIT_HUAWEI";
  case QueryPipelineStatisticMaskBit::E_TASK_SHADER_INVOCATIONS_BIT_EXT:
    return "QueryPipelineStatisticMaskBit::E_TASK_SHADER_INVOCATIONS_BIT_EXT";
  case QueryPipelineStatisticMaskBit::E_MESH_SHADER_INVOCATIONS_BIT_EXT:
    return "QueryPipelineStatisticMaskBit::E_MESH_SHADER_INVOCATIONS_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AccelerationStructureCompatibility input) {
  switch (input) {
  case AccelerationStructureCompatibility::E_COMPATIBLE_KHR:
    return "AccelerationStructureCompatibility::E_COMPATIBLE_KHR";
  case AccelerationStructureCompatibility::E_INCOMPATIBLE_KHR:
    return "AccelerationStructureCompatibility::E_INCOMPATIBLE_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(FenceCreateMaskBit input) {
  switch (input) {
  case FenceCreateMaskBit::E_SIGNALED_BIT:
    return "FenceCreateMaskBit::E_SIGNALED_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineStageMaskBit input) {
  switch (input) {
  case PipelineStageMaskBit::E_TOP_OF_PIPE_BIT:
    return "PipelineStageMaskBit::E_TOP_OF_PIPE_BIT";
  case PipelineStageMaskBit::E_DRAW_INDIRECT_BIT:
    return "PipelineStageMaskBit::E_DRAW_INDIRECT_BIT";
  case PipelineStageMaskBit::E_VERTEX_INPUT_BIT:
    return "PipelineStageMaskBit::E_VERTEX_INPUT_BIT";
  case PipelineStageMaskBit::E_VERTEX_SHADER_BIT:
    return "PipelineStageMaskBit::E_VERTEX_SHADER_BIT";
  case PipelineStageMaskBit::E_TESSELLATION_CONTROL_SHADER_BIT:
    return "PipelineStageMaskBit::E_TESSELLATION_CONTROL_SHADER_BIT";
  case PipelineStageMaskBit::E_TESSELLATION_EVALUATION_SHADER_BIT:
    return "PipelineStageMaskBit::E_TESSELLATION_EVALUATION_SHADER_BIT";
  case PipelineStageMaskBit::E_GEOMETRY_SHADER_BIT:
    return "PipelineStageMaskBit::E_GEOMETRY_SHADER_BIT";
  case PipelineStageMaskBit::E_FRAGMENT_SHADER_BIT:
    return "PipelineStageMaskBit::E_FRAGMENT_SHADER_BIT";
  case PipelineStageMaskBit::E_EARLY_FRAGMENT_TESTS_BIT:
    return "PipelineStageMaskBit::E_EARLY_FRAGMENT_TESTS_BIT";
  case PipelineStageMaskBit::E_LATE_FRAGMENT_TESTS_BIT:
    return "PipelineStageMaskBit::E_LATE_FRAGMENT_TESTS_BIT";
  case PipelineStageMaskBit::E_COLOR_ATTACHMENT_OUTPUT_BIT:
    return "PipelineStageMaskBit::E_COLOR_ATTACHMENT_OUTPUT_BIT";
  case PipelineStageMaskBit::E_COMPUTE_SHADER_BIT:
    return "PipelineStageMaskBit::E_COMPUTE_SHADER_BIT";
  case PipelineStageMaskBit::E_TRANSFER_BIT:
    return "PipelineStageMaskBit::E_TRANSFER_BIT";
  case PipelineStageMaskBit::E_BOTTOM_OF_PIPE_BIT:
    return "PipelineStageMaskBit::E_BOTTOM_OF_PIPE_BIT";
  case PipelineStageMaskBit::E_HOST_BIT:
    return "PipelineStageMaskBit::E_HOST_BIT";
  case PipelineStageMaskBit::E_ALL_GRAPHICS_BIT:
    return "PipelineStageMaskBit::E_ALL_GRAPHICS_BIT";
  case PipelineStageMaskBit::E_ALL_COMMANDS_BIT:
    return "PipelineStageMaskBit::E_ALL_COMMANDS_BIT";
  case PipelineStageMaskBit::E_ACCELERATION_STRUCTURE_BUILD_BIT_KHR:
    return "PipelineStageMaskBit::E_ACCELERATION_STRUCTURE_BUILD_BIT_KHR";
  case PipelineStageMaskBit::E_CONDITIONAL_RENDERING_BIT_EXT:
    return "PipelineStageMaskBit::E_CONDITIONAL_RENDERING_BIT_EXT";
  case PipelineStageMaskBit::E_RAY_TRACING_SHADER_BIT_KHR:
    return "PipelineStageMaskBit::E_RAY_TRACING_SHADER_BIT_KHR";
  case PipelineStageMaskBit::E_TRANSFORM_FEEDBACK_BIT_EXT:
    return "PipelineStageMaskBit::E_TRANSFORM_FEEDBACK_BIT_EXT";
  case PipelineStageMaskBit::E_TASK_SHADER_BIT_EXT:
    return "PipelineStageMaskBit::E_TASK_SHADER_BIT_EXT";
  case PipelineStageMaskBit::E_MESH_SHADER_BIT_EXT:
    return "PipelineStageMaskBit::E_MESH_SHADER_BIT_EXT";
  case PipelineStageMaskBit::E_FRAGMENT_DENSITY_PROCESS_BIT_EXT:
    return "PipelineStageMaskBit::E_FRAGMENT_DENSITY_PROCESS_BIT_EXT";
  case PipelineStageMaskBit::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR:
    return "PipelineStageMaskBit::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
  case PipelineStageMaskBit::E_COMMAND_PREPROCESS_BIT_NV:
    return "PipelineStageMaskBit::E_COMMAND_PREPROCESS_BIT_NV";
  case PipelineStageMaskBit::E_NONE:
    return "PipelineStageMaskBit::E_NONE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ExternalSemaphoreFeatureMaskBit input) {
  switch (input) {
  case ExternalSemaphoreFeatureMaskBit::E_EXPORTABLE_BIT:
    return "ExternalSemaphoreFeatureMaskBit::E_EXPORTABLE_BIT";
  case ExternalSemaphoreFeatureMaskBit::E_IMPORTABLE_BIT:
    return "ExternalSemaphoreFeatureMaskBit::E_IMPORTABLE_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ImageCreateMaskBit input) {
  switch (input) {
  case ImageCreateMaskBit::E_SPARSE_BINDING_BIT:
    return "ImageCreateMaskBit::E_SPARSE_BINDING_BIT";
  case ImageCreateMaskBit::E_SPARSE_RESIDENCY_BIT:
    return "ImageCreateMaskBit::E_SPARSE_RESIDENCY_BIT";
  case ImageCreateMaskBit::E_SPARSE_ALIASED_BIT:
    return "ImageCreateMaskBit::E_SPARSE_ALIASED_BIT";
  case ImageCreateMaskBit::E_MUTABLE_FORMAT_BIT:
    return "ImageCreateMaskBit::E_MUTABLE_FORMAT_BIT";
  case ImageCreateMaskBit::E_CUBE_COMPATIBLE_BIT:
    return "ImageCreateMaskBit::E_CUBE_COMPATIBLE_BIT";
  case ImageCreateMaskBit::E_2D_VIEW_COMPATIBLE_BIT_EXT:
    return "ImageCreateMaskBit::E_2D_VIEW_COMPATIBLE_BIT_EXT";
  case ImageCreateMaskBit::E_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_BIT_EXT:
    return "ImageCreateMaskBit::E_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_BIT_EXT";
  case ImageCreateMaskBit::E_VIDEO_PROFILE_INDEPENDENT_BIT_KHR:
    return "ImageCreateMaskBit::E_VIDEO_PROFILE_INDEPENDENT_BIT_KHR";
  case ImageCreateMaskBit::E_CORNER_SAMPLED_BIT_NV:
    return "ImageCreateMaskBit::E_CORNER_SAMPLED_BIT_NV";
  case ImageCreateMaskBit::E_SUBSAMPLED_BIT_EXT:
    return "ImageCreateMaskBit::E_SUBSAMPLED_BIT_EXT";
  case ImageCreateMaskBit::E_FRAGMENT_DENSITY_MAP_OFFSET_BIT_QCOM:
    return "ImageCreateMaskBit::E_FRAGMENT_DENSITY_MAP_OFFSET_BIT_QCOM";
  case ImageCreateMaskBit::E_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT:
    return "ImageCreateMaskBit::E_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT";
  case ImageCreateMaskBit::E_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT:
    return "ImageCreateMaskBit::E_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT";
  case ImageCreateMaskBit::E_ALIAS_BIT:
    return "ImageCreateMaskBit::E_ALIAS_BIT";
  case ImageCreateMaskBit::E_SPLIT_INSTANCE_BIND_REGIONS_BIT:
    return "ImageCreateMaskBit::E_SPLIT_INSTANCE_BIND_REGIONS_BIT";
  case ImageCreateMaskBit::E_2D_ARRAY_COMPATIBLE_BIT:
    return "ImageCreateMaskBit::E_2D_ARRAY_COMPATIBLE_BIT";
  case ImageCreateMaskBit::E_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT:
    return "ImageCreateMaskBit::E_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT";
  case ImageCreateMaskBit::E_EXTENDED_USAGE_BIT:
    return "ImageCreateMaskBit::E_EXTENDED_USAGE_BIT";
  case ImageCreateMaskBit::E_PROTECTED_BIT:
    return "ImageCreateMaskBit::E_PROTECTED_BIT";
  case ImageCreateMaskBit::E_DISJOINT_BIT:
    return "ImageCreateMaskBit::E_DISJOINT_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CommandBufferUsageMaskBit input) {
  switch (input) {
  case CommandBufferUsageMaskBit::E_ONE_TIME_SUBMIT_BIT:
    return "CommandBufferUsageMaskBit::E_ONE_TIME_SUBMIT_BIT";
  case CommandBufferUsageMaskBit::E_RENDER_PASS_CONTINUE_BIT:
    return "CommandBufferUsageMaskBit::E_RENDER_PASS_CONTINUE_BIT";
  case CommandBufferUsageMaskBit::E_SIMULTANEOUS_USE_BIT:
    return "CommandBufferUsageMaskBit::E_SIMULTANEOUS_USE_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(InternalAllocationType input) {
  switch (input) {
  case InternalAllocationType::E_EXECUTABLE:
    return "InternalAllocationType::E_EXECUTABLE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BlockMatchWindowCompareMode input) {
  switch (input) {
  case BlockMatchWindowCompareMode::E_MIN_QCOM:
    return "BlockMatchWindowCompareMode::E_MIN_QCOM";
  case BlockMatchWindowCompareMode::E_MAX_QCOM:
    return "BlockMatchWindowCompareMode::E_MAX_QCOM";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ShaderCorePropertiesMaskBit input) {
  switch (input) {
  default:
    std::unreachable();
  }
}

std::string_view ToString(EventCreateMaskBit input) {
  switch (input) {
  case EventCreateMaskBit::E_DEVICE_ONLY_BIT:
    return "EventCreateMaskBit::E_DEVICE_ONLY_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CompareOp input) {
  switch (input) {
  case CompareOp::E_NEVER:
    return "CompareOp::E_NEVER";
  case CompareOp::E_LESS:
    return "CompareOp::E_LESS";
  case CompareOp::E_EQUAL:
    return "CompareOp::E_EQUAL";
  case CompareOp::E_LESS_OR_EQUAL:
    return "CompareOp::E_LESS_OR_EQUAL";
  case CompareOp::E_GREATER:
    return "CompareOp::E_GREATER";
  case CompareOp::E_NOT_EQUAL:
    return "CompareOp::E_NOT_EQUAL";
  case CompareOp::E_GREATER_OR_EQUAL:
    return "CompareOp::E_GREATER_OR_EQUAL";
  case CompareOp::E_ALWAYS:
    return "CompareOp::E_ALWAYS";
  default:
    std::unreachable();
  }
}

std::string_view ToString(GraphicsPipelineLibraryMaskBit input) {
  switch (input) {
  case GraphicsPipelineLibraryMaskBit::E_VERTEX_INPUT_INTERFACE_BIT_EXT:
    return "GraphicsPipelineLibraryMaskBit::E_VERTEX_INPUT_INTERFACE_BIT_EXT";
  case GraphicsPipelineLibraryMaskBit::E_PRE_RASTERIZATION_SHADERS_BIT_EXT:
    return "GraphicsPipelineLibraryMaskBit::E_PRE_RASTERIZATION_SHADERS_BIT_EXT";
  case GraphicsPipelineLibraryMaskBit::E_FRAGMENT_SHADER_BIT_EXT:
    return "GraphicsPipelineLibraryMaskBit::E_FRAGMENT_SHADER_BIT_EXT";
  case GraphicsPipelineLibraryMaskBit::E_FRAGMENT_OUTPUT_INTERFACE_BIT_EXT:
    return "GraphicsPipelineLibraryMaskBit::E_FRAGMENT_OUTPUT_INTERFACE_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ToolPurposeMaskBit input) {
  switch (input) {
  case ToolPurposeMaskBit::E_VALIDATION_BIT:
    return "ToolPurposeMaskBit::E_VALIDATION_BIT";
  case ToolPurposeMaskBit::E_PROFILING_BIT:
    return "ToolPurposeMaskBit::E_PROFILING_BIT";
  case ToolPurposeMaskBit::E_TRACING_BIT:
    return "ToolPurposeMaskBit::E_TRACING_BIT";
  case ToolPurposeMaskBit::E_ADDITIONAL_FEATURES_BIT:
    return "ToolPurposeMaskBit::E_ADDITIONAL_FEATURES_BIT";
  case ToolPurposeMaskBit::E_MODIFYING_FEATURES_BIT:
    return "ToolPurposeMaskBit::E_MODIFYING_FEATURES_BIT";
  case ToolPurposeMaskBit::E_DEBUG_REPORTING_BIT_EXT:
    return "ToolPurposeMaskBit::E_DEBUG_REPORTING_BIT_EXT";
  case ToolPurposeMaskBit::E_DEBUG_MARKERS_BIT_EXT:
    return "ToolPurposeMaskBit::E_DEBUG_MARKERS_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SamplerAddressMode input) {
  switch (input) {
  case SamplerAddressMode::E_REPEAT:
    return "SamplerAddressMode::E_REPEAT";
  case SamplerAddressMode::E_MIRRORED_REPEAT:
    return "SamplerAddressMode::E_MIRRORED_REPEAT";
  case SamplerAddressMode::E_CLAMP_TO_EDGE:
    return "SamplerAddressMode::E_CLAMP_TO_EDGE";
  case SamplerAddressMode::E_CLAMP_TO_BORDER:
    return "SamplerAddressMode::E_CLAMP_TO_BORDER";
  case SamplerAddressMode::E_MIRROR_CLAMP_TO_EDGE:
    return "SamplerAddressMode::E_MIRROR_CLAMP_TO_EDGE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DynamicState input) {
  switch (input) {
  case DynamicState::E_VIEWPORT:
    return "DynamicState::E_VIEWPORT";
  case DynamicState::E_SCISSOR:
    return "DynamicState::E_SCISSOR";
  case DynamicState::E_LINE_WIDTH:
    return "DynamicState::E_LINE_WIDTH";
  case DynamicState::E_DEPTH_BIAS:
    return "DynamicState::E_DEPTH_BIAS";
  case DynamicState::E_BLEND_CONSTANTS:
    return "DynamicState::E_BLEND_CONSTANTS";
  case DynamicState::E_DEPTH_BOUNDS:
    return "DynamicState::E_DEPTH_BOUNDS";
  case DynamicState::E_STENCIL_COMPARE_MASK:
    return "DynamicState::E_STENCIL_COMPARE_MASK";
  case DynamicState::E_STENCIL_WRITE_MASK:
    return "DynamicState::E_STENCIL_WRITE_MASK";
  case DynamicState::E_STENCIL_REFERENCE:
    return "DynamicState::E_STENCIL_REFERENCE";
  case DynamicState::E_ATTACHMENT_FEEDBACK_LOOP_ENABLE_EXT:
    return "DynamicState::E_ATTACHMENT_FEEDBACK_LOOP_ENABLE_EXT";
  case DynamicState::E_DEPTH_CLAMP_ENABLE_EXT:
    return "DynamicState::E_DEPTH_CLAMP_ENABLE_EXT";
  case DynamicState::E_POLYGON_MODE_EXT:
    return "DynamicState::E_POLYGON_MODE_EXT";
  case DynamicState::E_RASTERIZATION_SAMPLES_EXT:
    return "DynamicState::E_RASTERIZATION_SAMPLES_EXT";
  case DynamicState::E_SAMPLE_MASK_EXT:
    return "DynamicState::E_SAMPLE_MASK_EXT";
  case DynamicState::E_ALPHA_TO_COVERAGE_ENABLE_EXT:
    return "DynamicState::E_ALPHA_TO_COVERAGE_ENABLE_EXT";
  case DynamicState::E_ALPHA_TO_ONE_ENABLE_EXT:
    return "DynamicState::E_ALPHA_TO_ONE_ENABLE_EXT";
  case DynamicState::E_LOGIC_OP_ENABLE_EXT:
    return "DynamicState::E_LOGIC_OP_ENABLE_EXT";
  case DynamicState::E_COLOR_BLEND_ENABLE_EXT:
    return "DynamicState::E_COLOR_BLEND_ENABLE_EXT";
  case DynamicState::E_COLOR_BLEND_EQUATION_EXT:
    return "DynamicState::E_COLOR_BLEND_EQUATION_EXT";
  case DynamicState::E_COLOR_WRITE_MASK_EXT:
    return "DynamicState::E_COLOR_WRITE_MASK_EXT";
  case DynamicState::E_TESSELLATION_DOMAIN_ORIGIN_EXT:
    return "DynamicState::E_TESSELLATION_DOMAIN_ORIGIN_EXT";
  case DynamicState::E_RASTERIZATION_STREAM_EXT:
    return "DynamicState::E_RASTERIZATION_STREAM_EXT";
  case DynamicState::E_CONSERVATIVE_RASTERIZATION_MODE_EXT:
    return "DynamicState::E_CONSERVATIVE_RASTERIZATION_MODE_EXT";
  case DynamicState::E_EXTRA_PRIMITIVE_OVERESTIMATION_SIZE_EXT:
    return "DynamicState::E_EXTRA_PRIMITIVE_OVERESTIMATION_SIZE_EXT";
  case DynamicState::E_DEPTH_CLIP_ENABLE_EXT:
    return "DynamicState::E_DEPTH_CLIP_ENABLE_EXT";
  case DynamicState::E_SAMPLE_LOCATIONS_ENABLE_EXT:
    return "DynamicState::E_SAMPLE_LOCATIONS_ENABLE_EXT";
  case DynamicState::E_COLOR_BLEND_ADVANCED_EXT:
    return "DynamicState::E_COLOR_BLEND_ADVANCED_EXT";
  case DynamicState::E_PROVOKING_VERTEX_MODE_EXT:
    return "DynamicState::E_PROVOKING_VERTEX_MODE_EXT";
  case DynamicState::E_LINE_RASTERIZATION_MODE_EXT:
    return "DynamicState::E_LINE_RASTERIZATION_MODE_EXT";
  case DynamicState::E_LINE_STIPPLE_ENABLE_EXT:
    return "DynamicState::E_LINE_STIPPLE_ENABLE_EXT";
  case DynamicState::E_DEPTH_CLIP_NEGATIVE_ONE_TO_ONE_EXT:
    return "DynamicState::E_DEPTH_CLIP_NEGATIVE_ONE_TO_ONE_EXT";
  case DynamicState::E_VIEWPORT_W_SCALING_ENABLE_NV:
    return "DynamicState::E_VIEWPORT_W_SCALING_ENABLE_NV";
  case DynamicState::E_VIEWPORT_SWIZZLE_NV:
    return "DynamicState::E_VIEWPORT_SWIZZLE_NV";
  case DynamicState::E_COVERAGE_TO_COLOR_ENABLE_NV:
    return "DynamicState::E_COVERAGE_TO_COLOR_ENABLE_NV";
  case DynamicState::E_COVERAGE_TO_COLOR_LOCATION_NV:
    return "DynamicState::E_COVERAGE_TO_COLOR_LOCATION_NV";
  case DynamicState::E_COVERAGE_MODULATION_MODE_NV:
    return "DynamicState::E_COVERAGE_MODULATION_MODE_NV";
  case DynamicState::E_COVERAGE_MODULATION_TABLE_ENABLE_NV:
    return "DynamicState::E_COVERAGE_MODULATION_TABLE_ENABLE_NV";
  case DynamicState::E_COVERAGE_MODULATION_TABLE_NV:
    return "DynamicState::E_COVERAGE_MODULATION_TABLE_NV";
  case DynamicState::E_SHADING_RATE_IMAGE_ENABLE_NV:
    return "DynamicState::E_SHADING_RATE_IMAGE_ENABLE_NV";
  case DynamicState::E_REPRESENTATIVE_FRAGMENT_TEST_ENABLE_NV:
    return "DynamicState::E_REPRESENTATIVE_FRAGMENT_TEST_ENABLE_NV";
  case DynamicState::E_COVERAGE_REDUCTION_MODE_NV:
    return "DynamicState::E_COVERAGE_REDUCTION_MODE_NV";
  case DynamicState::E_COLOR_WRITE_ENABLE_EXT:
    return "DynamicState::E_COLOR_WRITE_ENABLE_EXT";
  case DynamicState::E_VERTEX_INPUT_EXT:
    return "DynamicState::E_VERTEX_INPUT_EXT";
  case DynamicState::E_PATCH_CONTROL_POINTS_EXT:
    return "DynamicState::E_PATCH_CONTROL_POINTS_EXT";
  case DynamicState::E_LOGIC_OP_EXT:
    return "DynamicState::E_LOGIC_OP_EXT";
  case DynamicState::E_VIEWPORT_W_SCALING_NV:
    return "DynamicState::E_VIEWPORT_W_SCALING_NV";
  case DynamicState::E_EXCLUSIVE_SCISSOR_ENABLE_NV:
    return "DynamicState::E_EXCLUSIVE_SCISSOR_ENABLE_NV";
  case DynamicState::E_EXCLUSIVE_SCISSOR_NV:
    return "DynamicState::E_EXCLUSIVE_SCISSOR_NV";
  case DynamicState::E_LINE_STIPPLE_KHR:
    return "DynamicState::E_LINE_STIPPLE_KHR";
  case DynamicState::E_DISCARD_RECTANGLE_EXT:
    return "DynamicState::E_DISCARD_RECTANGLE_EXT";
  case DynamicState::E_DISCARD_RECTANGLE_ENABLE_EXT:
    return "DynamicState::E_DISCARD_RECTANGLE_ENABLE_EXT";
  case DynamicState::E_DISCARD_RECTANGLE_MODE_EXT:
    return "DynamicState::E_DISCARD_RECTANGLE_MODE_EXT";
  case DynamicState::E_RAY_TRACING_PIPELINE_STACK_SIZE_KHR:
    return "DynamicState::E_RAY_TRACING_PIPELINE_STACK_SIZE_KHR";
  case DynamicState::E_VIEWPORT_SHADING_RATE_PALETTE_NV:
    return "DynamicState::E_VIEWPORT_SHADING_RATE_PALETTE_NV";
  case DynamicState::E_VIEWPORT_COARSE_SAMPLE_ORDER_NV:
    return "DynamicState::E_VIEWPORT_COARSE_SAMPLE_ORDER_NV";
  case DynamicState::E_SAMPLE_LOCATIONS_EXT:
    return "DynamicState::E_SAMPLE_LOCATIONS_EXT";
  case DynamicState::E_FRAGMENT_SHADING_RATE_KHR:
    return "DynamicState::E_FRAGMENT_SHADING_RATE_KHR";
  case DynamicState::E_CULL_MODE:
    return "DynamicState::E_CULL_MODE";
  case DynamicState::E_FRONT_FACE:
    return "DynamicState::E_FRONT_FACE";
  case DynamicState::E_PRIMITIVE_TOPOLOGY:
    return "DynamicState::E_PRIMITIVE_TOPOLOGY";
  case DynamicState::E_VIEWPORT_WITH_COUNT:
    return "DynamicState::E_VIEWPORT_WITH_COUNT";
  case DynamicState::E_SCISSOR_WITH_COUNT:
    return "DynamicState::E_SCISSOR_WITH_COUNT";
  case DynamicState::E_VERTEX_INPUT_BINDING_STRIDE:
    return "DynamicState::E_VERTEX_INPUT_BINDING_STRIDE";
  case DynamicState::E_DEPTH_TEST_ENABLE:
    return "DynamicState::E_DEPTH_TEST_ENABLE";
  case DynamicState::E_DEPTH_WRITE_ENABLE:
    return "DynamicState::E_DEPTH_WRITE_ENABLE";
  case DynamicState::E_DEPTH_COMPARE_OP:
    return "DynamicState::E_DEPTH_COMPARE_OP";
  case DynamicState::E_DEPTH_BOUNDS_TEST_ENABLE:
    return "DynamicState::E_DEPTH_BOUNDS_TEST_ENABLE";
  case DynamicState::E_STENCIL_TEST_ENABLE:
    return "DynamicState::E_STENCIL_TEST_ENABLE";
  case DynamicState::E_STENCIL_OP:
    return "DynamicState::E_STENCIL_OP";
  case DynamicState::E_RASTERIZER_DISCARD_ENABLE:
    return "DynamicState::E_RASTERIZER_DISCARD_ENABLE";
  case DynamicState::E_DEPTH_BIAS_ENABLE:
    return "DynamicState::E_DEPTH_BIAS_ENABLE";
  case DynamicState::E_PRIMITIVE_RESTART_ENABLE:
    return "DynamicState::E_PRIMITIVE_RESTART_ENABLE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DeviceFaultAddressType input) {
  switch (input) {
  case DeviceFaultAddressType::E_NONE_EXT:
    return "DeviceFaultAddressType::E_NONE_EXT";
  case DeviceFaultAddressType::E_READ_INVALID_EXT:
    return "DeviceFaultAddressType::E_READ_INVALID_EXT";
  case DeviceFaultAddressType::E_WRITE_INVALID_EXT:
    return "DeviceFaultAddressType::E_WRITE_INVALID_EXT";
  case DeviceFaultAddressType::E_EXECUTE_INVALID_EXT:
    return "DeviceFaultAddressType::E_EXECUTE_INVALID_EXT";
  case DeviceFaultAddressType::E_INSTRUCTION_POINTER_UNKNOWN_EXT:
    return "DeviceFaultAddressType::E_INSTRUCTION_POINTER_UNKNOWN_EXT";
  case DeviceFaultAddressType::E_INSTRUCTION_POINTER_INVALID_EXT:
    return "DeviceFaultAddressType::E_INSTRUCTION_POINTER_INVALID_EXT";
  case DeviceFaultAddressType::E_INSTRUCTION_POINTER_FAULT_EXT:
    return "DeviceFaultAddressType::E_INSTRUCTION_POINTER_FAULT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CubicFilterWeights input) {
  switch (input) {
  case CubicFilterWeights::E_CATMULL_ROM_QCOM:
    return "CubicFilterWeights::E_CATMULL_ROM_QCOM";
  case CubicFilterWeights::E_ZERO_TANGENT_CARDINAL_QCOM:
    return "CubicFilterWeights::E_ZERO_TANGENT_CARDINAL_QCOM";
  case CubicFilterWeights::E_B_SPLINE_QCOM:
    return "CubicFilterWeights::E_B_SPLINE_QCOM";
  case CubicFilterWeights::E_MITCHELL_NETRAVALI_QCOM:
    return "CubicFilterWeights::E_MITCHELL_NETRAVALI_QCOM";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VertexInputRate input) {
  switch (input) {
  case VertexInputRate::E_VERTEX:
    return "VertexInputRate::E_VERTEX";
  case VertexInputRate::E_INSTANCE:
    return "VertexInputRate::E_INSTANCE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ConditionalRenderingMaskBit input) {
  switch (input) {
  case ConditionalRenderingMaskBit::E_INVERTED_BIT_EXT:
    return "ConditionalRenderingMaskBit::E_INVERTED_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SamplerYcbcrRange input) {
  switch (input) {
  case SamplerYcbcrRange::E_ITU_FULL:
    return "SamplerYcbcrRange::E_ITU_FULL";
  case SamplerYcbcrRange::E_ITU_NARROW:
    return "SamplerYcbcrRange::E_ITU_NARROW";
  default:
    std::unreachable();
  }
}

std::string_view ToString(Filter input) {
  switch (input) {
  case Filter::E_NEAREST:
    return "Filter::E_NEAREST";
  case Filter::E_LINEAR:
    return "Filter::E_LINEAR";
  case Filter::E_CUBIC_EXT:
    return "Filter::E_CUBIC_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CommandPoolCreateMaskBit input) {
  switch (input) {
  case CommandPoolCreateMaskBit::E_TRANSIENT_BIT:
    return "CommandPoolCreateMaskBit::E_TRANSIENT_BIT";
  case CommandPoolCreateMaskBit::E_RESET_COMMAND_BUFFER_BIT:
    return "CommandPoolCreateMaskBit::E_RESET_COMMAND_BUFFER_BIT";
  case CommandPoolCreateMaskBit::E_PROTECTED_BIT:
    return "CommandPoolCreateMaskBit::E_PROTECTED_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(LogicOp input) {
  switch (input) {
  case LogicOp::E_CLEAR:
    return "LogicOp::E_CLEAR";
  case LogicOp::E_AND:
    return "LogicOp::E_AND";
  case LogicOp::E_AND_REVERSE:
    return "LogicOp::E_AND_REVERSE";
  case LogicOp::E_COPY:
    return "LogicOp::E_COPY";
  case LogicOp::E_AND_INVERTED:
    return "LogicOp::E_AND_INVERTED";
  case LogicOp::E_NO_OP:
    return "LogicOp::E_NO_OP";
  case LogicOp::E_XOR:
    return "LogicOp::E_XOR";
  case LogicOp::E_OR:
    return "LogicOp::E_OR";
  case LogicOp::E_NOR:
    return "LogicOp::E_NOR";
  case LogicOp::E_EQUIVALENT:
    return "LogicOp::E_EQUIVALENT";
  case LogicOp::E_INVERT:
    return "LogicOp::E_INVERT";
  case LogicOp::E_OR_REVERSE:
    return "LogicOp::E_OR_REVERSE";
  case LogicOp::E_COPY_INVERTED:
    return "LogicOp::E_COPY_INVERTED";
  case LogicOp::E_OR_INVERTED:
    return "LogicOp::E_OR_INVERTED";
  case LogicOp::E_NAND:
    return "LogicOp::E_NAND";
  case LogicOp::E_SET:
    return "LogicOp::E_SET";
  default:
    std::unreachable();
  }
}

std::string_view ToString(LayeredDriverUnderlyingApi input) {
  switch (input) {
  case LayeredDriverUnderlyingApi::E_NONE_MSFT:
    return "LayeredDriverUnderlyingApi::E_NONE_MSFT";
  case LayeredDriverUnderlyingApi::E_D3D12_MSFT:
    return "LayeredDriverUnderlyingApi::E_D3D12_MSFT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(IndexType input) {
  switch (input) {
  case IndexType::E_UINT16:
    return "IndexType::E_UINT16";
  case IndexType::E_UINT32:
    return "IndexType::E_UINT32";
  case IndexType::E_UINT8_KHR:
    return "IndexType::E_UINT8_KHR";
  case IndexType::E_NONE_KHR:
    return "IndexType::E_NONE_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineCreateMaskBit2 input) {
  switch (input) {
  case PipelineCreateMaskBit2::E_DISABLE_OPTIMIZATION_BIT_KHR:
    return "PipelineCreateMaskBit2::E_DISABLE_OPTIMIZATION_BIT_KHR";
  case PipelineCreateMaskBit2::E_ALLOW_DERIVATIVES_BIT_KHR:
    return "PipelineCreateMaskBit2::E_ALLOW_DERIVATIVES_BIT_KHR";
  case PipelineCreateMaskBit2::E_DERIVATIVE_BIT_KHR:
    return "PipelineCreateMaskBit2::E_DERIVATIVE_BIT_KHR";
  case PipelineCreateMaskBit2::E_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR:
    return "PipelineCreateMaskBit2::E_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR";
  case PipelineCreateMaskBit2::E_DISPATCH_BASE_BIT_KHR:
    return "PipelineCreateMaskBit2::E_DISPATCH_BASE_BIT_KHR";
  case PipelineCreateMaskBit2::E_DEFER_COMPILE_BIT_NV:
    return "PipelineCreateMaskBit2::E_DEFER_COMPILE_BIT_NV";
  case PipelineCreateMaskBit2::E_CAPTURE_STATISTICS_BIT_KHR:
    return "PipelineCreateMaskBit2::E_CAPTURE_STATISTICS_BIT_KHR";
  case PipelineCreateMaskBit2::E_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR:
    return "PipelineCreateMaskBit2::E_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR";
  case PipelineCreateMaskBit2::E_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_KHR:
    return "PipelineCreateMaskBit2::E_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT_KHR";
  case PipelineCreateMaskBit2::E_EARLY_RETURN_ON_FAILURE_BIT_KHR:
    return "PipelineCreateMaskBit2::E_EARLY_RETURN_ON_FAILURE_BIT_KHR";
  case PipelineCreateMaskBit2::E_LINK_TIME_OPTIMIZATION_BIT_EXT:
    return "PipelineCreateMaskBit2::E_LINK_TIME_OPTIMIZATION_BIT_EXT";
  case PipelineCreateMaskBit2::E_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT:
    return "PipelineCreateMaskBit2::E_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT";
  case PipelineCreateMaskBit2::E_LIBRARY_BIT_KHR:
    return "PipelineCreateMaskBit2::E_LIBRARY_BIT_KHR";
  case PipelineCreateMaskBit2::E_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR:
    return "PipelineCreateMaskBit2::E_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR";
  case PipelineCreateMaskBit2::E_RAY_TRACING_SKIP_AABBS_BIT_KHR:
    return "PipelineCreateMaskBit2::E_RAY_TRACING_SKIP_AABBS_BIT_KHR";
  case PipelineCreateMaskBit2::E_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR:
    return "PipelineCreateMaskBit2::E_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR";
  case PipelineCreateMaskBit2::E_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR:
    return "PipelineCreateMaskBit2::E_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR";
  case PipelineCreateMaskBit2::E_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR:
    return "PipelineCreateMaskBit2::E_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR";
  case PipelineCreateMaskBit2::E_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR:
    return "PipelineCreateMaskBit2::E_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR";
  case PipelineCreateMaskBit2::E_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR:
    return "PipelineCreateMaskBit2::E_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR";
  case PipelineCreateMaskBit2::E_INDIRECT_BINDABLE_BIT_NV:
    return "PipelineCreateMaskBit2::E_INDIRECT_BINDABLE_BIT_NV";
  case PipelineCreateMaskBit2::E_RAY_TRACING_ALLOW_MOTION_BIT_NV:
    return "PipelineCreateMaskBit2::E_RAY_TRACING_ALLOW_MOTION_BIT_NV";
  case PipelineCreateMaskBit2::E_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR:
    return "PipelineCreateMaskBit2::E_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
  case PipelineCreateMaskBit2::E_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT:
    return "PipelineCreateMaskBit2::E_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT";
  case PipelineCreateMaskBit2::E_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT:
    return "PipelineCreateMaskBit2::E_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT";
  case PipelineCreateMaskBit2::E_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT:
    return "PipelineCreateMaskBit2::E_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT";
  case PipelineCreateMaskBit2::E_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT:
    return "PipelineCreateMaskBit2::E_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT";
  case PipelineCreateMaskBit2::E_NO_PROTECTED_ACCESS_BIT_EXT:
    return "PipelineCreateMaskBit2::E_NO_PROTECTED_ACCESS_BIT_EXT";
  case PipelineCreateMaskBit2::E_PROTECTED_ACCESS_ONLY_BIT_EXT:
    return "PipelineCreateMaskBit2::E_PROTECTED_ACCESS_ONLY_BIT_EXT";
  case PipelineCreateMaskBit2::E_RAY_TRACING_DISPLACEMENT_MICROMAP_BIT_NV:
    return "PipelineCreateMaskBit2::E_RAY_TRACING_DISPLACEMENT_MICROMAP_BIT_NV";
  case PipelineCreateMaskBit2::E_DESCRIPTOR_BUFFER_BIT_EXT:
    return "PipelineCreateMaskBit2::E_DESCRIPTOR_BUFFER_BIT_EXT";
  case PipelineCreateMaskBit2::E_ENABLE_LEGACY_DITHERING_BIT_EXT:
    return "PipelineCreateMaskBit2::E_ENABLE_LEGACY_DITHERING_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoChromaSubsamplingMaskBit input) {
  switch (input) {
  case VideoChromaSubsamplingMaskBit::E_INVALID_KHR:
    return "VideoChromaSubsamplingMaskBit::E_INVALID_KHR";
  case VideoChromaSubsamplingMaskBit::E_MONOCHROME_BIT_KHR:
    return "VideoChromaSubsamplingMaskBit::E_MONOCHROME_BIT_KHR";
  case VideoChromaSubsamplingMaskBit::E_420_BIT_KHR:
    return "VideoChromaSubsamplingMaskBit::E_420_BIT_KHR";
  case VideoChromaSubsamplingMaskBit::E_422_BIT_KHR:
    return "VideoChromaSubsamplingMaskBit::E_422_BIT_KHR";
  case VideoChromaSubsamplingMaskBit::E_444_BIT_KHR:
    return "VideoChromaSubsamplingMaskBit::E_444_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(FenceImportMaskBit input) {
  switch (input) {
  case FenceImportMaskBit::E_TEMPORARY_BIT:
    return "FenceImportMaskBit::E_TEMPORARY_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DeviceAddressBindingMaskBit input) {
  switch (input) {
  case DeviceAddressBindingMaskBit::E_INTERNAL_OBJECT_BIT_EXT:
    return "DeviceAddressBindingMaskBit::E_INTERNAL_OBJECT_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AttachmentLoadOp input) {
  switch (input) {
  case AttachmentLoadOp::E_LOAD:
    return "AttachmentLoadOp::E_LOAD";
  case AttachmentLoadOp::E_CLEAR:
    return "AttachmentLoadOp::E_CLEAR";
  case AttachmentLoadOp::E_DONT_CARE:
    return "AttachmentLoadOp::E_DONT_CARE";
  case AttachmentLoadOp::E_NONE_KHR:
    return "AttachmentLoadOp::E_NONE_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BufferUsageMaskBit2 input) {
  switch (input) {
  case BufferUsageMaskBit2::E_TRANSFER_SRC_BIT_KHR:
    return "BufferUsageMaskBit2::E_TRANSFER_SRC_BIT_KHR";
  case BufferUsageMaskBit2::E_TRANSFER_DST_BIT_KHR:
    return "BufferUsageMaskBit2::E_TRANSFER_DST_BIT_KHR";
  case BufferUsageMaskBit2::E_UNIFORM_TEXEL_BUFFER_BIT_KHR:
    return "BufferUsageMaskBit2::E_UNIFORM_TEXEL_BUFFER_BIT_KHR";
  case BufferUsageMaskBit2::E_STORAGE_TEXEL_BUFFER_BIT_KHR:
    return "BufferUsageMaskBit2::E_STORAGE_TEXEL_BUFFER_BIT_KHR";
  case BufferUsageMaskBit2::E_UNIFORM_BUFFER_BIT_KHR:
    return "BufferUsageMaskBit2::E_UNIFORM_BUFFER_BIT_KHR";
  case BufferUsageMaskBit2::E_STORAGE_BUFFER_BIT_KHR:
    return "BufferUsageMaskBit2::E_STORAGE_BUFFER_BIT_KHR";
  case BufferUsageMaskBit2::E_INDEX_BUFFER_BIT_KHR:
    return "BufferUsageMaskBit2::E_INDEX_BUFFER_BIT_KHR";
  case BufferUsageMaskBit2::E_VERTEX_BUFFER_BIT_KHR:
    return "BufferUsageMaskBit2::E_VERTEX_BUFFER_BIT_KHR";
  case BufferUsageMaskBit2::E_INDIRECT_BUFFER_BIT_KHR:
    return "BufferUsageMaskBit2::E_INDIRECT_BUFFER_BIT_KHR";
  case BufferUsageMaskBit2::E_CONDITIONAL_RENDERING_BIT_EXT:
    return "BufferUsageMaskBit2::E_CONDITIONAL_RENDERING_BIT_EXT";
  case BufferUsageMaskBit2::E_SHADER_BINDING_TABLE_BIT_KHR:
    return "BufferUsageMaskBit2::E_SHADER_BINDING_TABLE_BIT_KHR";
  case BufferUsageMaskBit2::E_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT:
    return "BufferUsageMaskBit2::E_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT";
  case BufferUsageMaskBit2::E_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT:
    return "BufferUsageMaskBit2::E_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT";
  case BufferUsageMaskBit2::E_VIDEO_DECODE_SRC_BIT_KHR:
    return "BufferUsageMaskBit2::E_VIDEO_DECODE_SRC_BIT_KHR";
  case BufferUsageMaskBit2::E_VIDEO_DECODE_DST_BIT_KHR:
    return "BufferUsageMaskBit2::E_VIDEO_DECODE_DST_BIT_KHR";
  case BufferUsageMaskBit2::E_VIDEO_ENCODE_DST_BIT_KHR:
    return "BufferUsageMaskBit2::E_VIDEO_ENCODE_DST_BIT_KHR";
  case BufferUsageMaskBit2::E_VIDEO_ENCODE_SRC_BIT_KHR:
    return "BufferUsageMaskBit2::E_VIDEO_ENCODE_SRC_BIT_KHR";
  case BufferUsageMaskBit2::E_SHADER_DEVICE_ADDRESS_BIT_KHR:
    return "BufferUsageMaskBit2::E_SHADER_DEVICE_ADDRESS_BIT_KHR";
  case BufferUsageMaskBit2::E_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR:
    return "BufferUsageMaskBit2::E_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR";
  case BufferUsageMaskBit2::E_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR:
    return "BufferUsageMaskBit2::E_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR";
  case BufferUsageMaskBit2::E_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT:
    return "BufferUsageMaskBit2::E_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT";
  case BufferUsageMaskBit2::E_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT:
    return "BufferUsageMaskBit2::E_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT";
  case BufferUsageMaskBit2::E_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT:
    return "BufferUsageMaskBit2::E_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT";
  case BufferUsageMaskBit2::E_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT:
    return "BufferUsageMaskBit2::E_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT";
  case BufferUsageMaskBit2::E_MICROMAP_STORAGE_BIT_EXT:
    return "BufferUsageMaskBit2::E_MICROMAP_STORAGE_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineCacheCreateMaskBit input) {
  switch (input) {
  case PipelineCacheCreateMaskBit::E_EXTERNALLY_SYNCHRONIZED_BIT:
    return "PipelineCacheCreateMaskBit::E_EXTERNALLY_SYNCHRONIZED_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DeviceAddressBindingType input) {
  switch (input) {
  case DeviceAddressBindingType::E_BIND_EXT:
    return "DeviceAddressBindingType::E_BIND_EXT";
  case DeviceAddressBindingType::E_UNBIND_EXT:
    return "DeviceAddressBindingType::E_UNBIND_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BufferUsageMaskBit input) {
  switch (input) {
  case BufferUsageMaskBit::E_TRANSFER_SRC_BIT:
    return "BufferUsageMaskBit::E_TRANSFER_SRC_BIT";
  case BufferUsageMaskBit::E_TRANSFER_DST_BIT:
    return "BufferUsageMaskBit::E_TRANSFER_DST_BIT";
  case BufferUsageMaskBit::E_UNIFORM_TEXEL_BUFFER_BIT:
    return "BufferUsageMaskBit::E_UNIFORM_TEXEL_BUFFER_BIT";
  case BufferUsageMaskBit::E_STORAGE_TEXEL_BUFFER_BIT:
    return "BufferUsageMaskBit::E_STORAGE_TEXEL_BUFFER_BIT";
  case BufferUsageMaskBit::E_UNIFORM_BUFFER_BIT:
    return "BufferUsageMaskBit::E_UNIFORM_BUFFER_BIT";
  case BufferUsageMaskBit::E_STORAGE_BUFFER_BIT:
    return "BufferUsageMaskBit::E_STORAGE_BUFFER_BIT";
  case BufferUsageMaskBit::E_INDEX_BUFFER_BIT:
    return "BufferUsageMaskBit::E_INDEX_BUFFER_BIT";
  case BufferUsageMaskBit::E_VERTEX_BUFFER_BIT:
    return "BufferUsageMaskBit::E_VERTEX_BUFFER_BIT";
  case BufferUsageMaskBit::E_INDIRECT_BUFFER_BIT:
    return "BufferUsageMaskBit::E_INDIRECT_BUFFER_BIT";
  case BufferUsageMaskBit::E_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT:
    return "BufferUsageMaskBit::E_MICROMAP_BUILD_INPUT_READ_ONLY_BIT_EXT";
  case BufferUsageMaskBit::E_MICROMAP_STORAGE_BIT_EXT:
    return "BufferUsageMaskBit::E_MICROMAP_STORAGE_BIT_EXT";
  case BufferUsageMaskBit::E_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR:
    return "BufferUsageMaskBit::E_ACCELERATION_STRUCTURE_BUILD_INPUT_READ_ONLY_BIT_KHR";
  case BufferUsageMaskBit::E_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR:
    return "BufferUsageMaskBit::E_ACCELERATION_STRUCTURE_STORAGE_BIT_KHR";
  case BufferUsageMaskBit::E_CONDITIONAL_RENDERING_BIT_EXT:
    return "BufferUsageMaskBit::E_CONDITIONAL_RENDERING_BIT_EXT";
  case BufferUsageMaskBit::E_VIDEO_DECODE_SRC_BIT_KHR:
    return "BufferUsageMaskBit::E_VIDEO_DECODE_SRC_BIT_KHR";
  case BufferUsageMaskBit::E_VIDEO_DECODE_DST_BIT_KHR:
    return "BufferUsageMaskBit::E_VIDEO_DECODE_DST_BIT_KHR";
  case BufferUsageMaskBit::E_SHADER_BINDING_TABLE_BIT_KHR:
    return "BufferUsageMaskBit::E_SHADER_BINDING_TABLE_BIT_KHR";
  case BufferUsageMaskBit::E_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT:
    return "BufferUsageMaskBit::E_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT";
  case BufferUsageMaskBit::E_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT:
    return "BufferUsageMaskBit::E_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT";
  case BufferUsageMaskBit::E_VIDEO_ENCODE_DST_BIT_KHR:
    return "BufferUsageMaskBit::E_VIDEO_ENCODE_DST_BIT_KHR";
  case BufferUsageMaskBit::E_VIDEO_ENCODE_SRC_BIT_KHR:
    return "BufferUsageMaskBit::E_VIDEO_ENCODE_SRC_BIT_KHR";
  case BufferUsageMaskBit::E_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT:
    return "BufferUsageMaskBit::E_SAMPLER_DESCRIPTOR_BUFFER_BIT_EXT";
  case BufferUsageMaskBit::E_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT:
    return "BufferUsageMaskBit::E_RESOURCE_DESCRIPTOR_BUFFER_BIT_EXT";
  case BufferUsageMaskBit::E_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT:
    return "BufferUsageMaskBit::E_PUSH_DESCRIPTORS_DESCRIPTOR_BUFFER_BIT_EXT";
  case BufferUsageMaskBit::E_SHADER_DEVICE_ADDRESS_BIT:
    return "BufferUsageMaskBit::E_SHADER_DEVICE_ADDRESS_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BorderColor input) {
  switch (input) {
  case BorderColor::E_FLOAT_TRANSPARENT_BLACK:
    return "BorderColor::E_FLOAT_TRANSPARENT_BLACK";
  case BorderColor::E_INT_TRANSPARENT_BLACK:
    return "BorderColor::E_INT_TRANSPARENT_BLACK";
  case BorderColor::E_FLOAT_OPAQUE_BLACK:
    return "BorderColor::E_FLOAT_OPAQUE_BLACK";
  case BorderColor::E_INT_OPAQUE_BLACK:
    return "BorderColor::E_INT_OPAQUE_BLACK";
  case BorderColor::E_FLOAT_OPAQUE_WHITE:
    return "BorderColor::E_FLOAT_OPAQUE_WHITE";
  case BorderColor::E_INT_OPAQUE_WHITE:
    return "BorderColor::E_INT_OPAQUE_WHITE";
  case BorderColor::E_FLOAT_CUSTOM_EXT:
    return "BorderColor::E_FLOAT_CUSTOM_EXT";
  case BorderColor::E_INT_CUSTOM_EXT:
    return "BorderColor::E_INT_CUSTOM_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ObjectType input) {
  switch (input) {
  case ObjectType::E_UNKNOWN:
    return "ObjectType::E_UNKNOWN";
  case ObjectType::E_INSTANCE:
    return "ObjectType::E_INSTANCE";
  case ObjectType::E_PHYSICAL_DEVICE:
    return "ObjectType::E_PHYSICAL_DEVICE";
  case ObjectType::E_DEVICE:
    return "ObjectType::E_DEVICE";
  case ObjectType::E_QUEUE:
    return "ObjectType::E_QUEUE";
  case ObjectType::E_SEMAPHORE:
    return "ObjectType::E_SEMAPHORE";
  case ObjectType::E_COMMAND_BUFFER:
    return "ObjectType::E_COMMAND_BUFFER";
  case ObjectType::E_FENCE:
    return "ObjectType::E_FENCE";
  case ObjectType::E_DEVICE_MEMORY:
    return "ObjectType::E_DEVICE_MEMORY";
  case ObjectType::E_BUFFER:
    return "ObjectType::E_BUFFER";
  case ObjectType::E_IMAGE:
    return "ObjectType::E_IMAGE";
  case ObjectType::E_EVENT:
    return "ObjectType::E_EVENT";
  case ObjectType::E_QUERY_POOL:
    return "ObjectType::E_QUERY_POOL";
  case ObjectType::E_BUFFER_VIEW:
    return "ObjectType::E_BUFFER_VIEW";
  case ObjectType::E_IMAGE_VIEW:
    return "ObjectType::E_IMAGE_VIEW";
  case ObjectType::E_SHADER_MODULE:
    return "ObjectType::E_SHADER_MODULE";
  case ObjectType::E_PIPELINE_CACHE:
    return "ObjectType::E_PIPELINE_CACHE";
  case ObjectType::E_PIPELINE_LAYOUT:
    return "ObjectType::E_PIPELINE_LAYOUT";
  case ObjectType::E_RENDER_PASS:
    return "ObjectType::E_RENDER_PASS";
  case ObjectType::E_PIPELINE:
    return "ObjectType::E_PIPELINE";
  case ObjectType::E_DESCRIPTOR_SET_LAYOUT:
    return "ObjectType::E_DESCRIPTOR_SET_LAYOUT";
  case ObjectType::E_SAMPLER:
    return "ObjectType::E_SAMPLER";
  case ObjectType::E_DESCRIPTOR_POOL:
    return "ObjectType::E_DESCRIPTOR_POOL";
  case ObjectType::E_DESCRIPTOR_SET:
    return "ObjectType::E_DESCRIPTOR_SET";
  case ObjectType::E_FRAMEBUFFER:
    return "ObjectType::E_FRAMEBUFFER";
  case ObjectType::E_COMMAND_POOL:
    return "ObjectType::E_COMMAND_POOL";
  case ObjectType::E_OPTICAL_FLOW_SESSION_NV:
    return "ObjectType::E_OPTICAL_FLOW_SESSION_NV";
  case ObjectType::E_MICROMAP_EXT:
    return "ObjectType::E_MICROMAP_EXT";
  case ObjectType::E_ACCELERATION_STRUCTURE_KHR:
    return "ObjectType::E_ACCELERATION_STRUCTURE_KHR";
  case ObjectType::E_CU_MODULE_NVX:
    return "ObjectType::E_CU_MODULE_NVX";
  case ObjectType::E_CU_FUNCTION_NVX:
    return "ObjectType::E_CU_FUNCTION_NVX";
  case ObjectType::E_DEBUG_UTILS_MESSENGER_EXT:
    return "ObjectType::E_DEBUG_UTILS_MESSENGER_EXT";
  case ObjectType::E_DISPLAY_KHR:
    return "ObjectType::E_DISPLAY_KHR";
  case ObjectType::E_DISPLAY_MODE_KHR:
    return "ObjectType::E_DISPLAY_MODE_KHR";
  case ObjectType::E_VIDEO_SESSION_KHR:
    return "ObjectType::E_VIDEO_SESSION_KHR";
  case ObjectType::E_VIDEO_SESSION_PARAMETERS_KHR:
    return "ObjectType::E_VIDEO_SESSION_PARAMETERS_KHR";
  case ObjectType::E_ACCELERATION_STRUCTURE_NV:
    return "ObjectType::E_ACCELERATION_STRUCTURE_NV";
  case ObjectType::E_DEBUG_REPORT_CALLBACK_EXT:
    return "ObjectType::E_DEBUG_REPORT_CALLBACK_EXT";
  case ObjectType::E_CUDA_MODULE_NV:
    return "ObjectType::E_CUDA_MODULE_NV";
  case ObjectType::E_CUDA_FUNCTION_NV:
    return "ObjectType::E_CUDA_FUNCTION_NV";
  case ObjectType::E_SURFACE_KHR:
    return "ObjectType::E_SURFACE_KHR";
  case ObjectType::E_VALIDATION_CACHE_EXT:
    return "ObjectType::E_VALIDATION_CACHE_EXT";
  case ObjectType::E_DEFERRED_OPERATION_KHR:
    return "ObjectType::E_DEFERRED_OPERATION_KHR";
  case ObjectType::E_SHADER_EXT:
    return "ObjectType::E_SHADER_EXT";
  case ObjectType::E_PERFORMANCE_CONFIGURATION_INTEL:
    return "ObjectType::E_PERFORMANCE_CONFIGURATION_INTEL";
  case ObjectType::E_INDIRECT_COMMANDS_LAYOUT_NV:
    return "ObjectType::E_INDIRECT_COMMANDS_LAYOUT_NV";
  case ObjectType::E_SWAPCHAIN_KHR:
    return "ObjectType::E_SWAPCHAIN_KHR";
  case ObjectType::E_PRIVATE_DATA_SLOT:
    return "ObjectType::E_PRIVATE_DATA_SLOT";
  case ObjectType::E_SAMPLER_YCBCR_CONVERSION:
    return "ObjectType::E_SAMPLER_YCBCR_CONVERSION";
  case ObjectType::E_DESCRIPTOR_UPDATE_TEMPLATE:
    return "ObjectType::E_DESCRIPTOR_UPDATE_TEMPLATE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PerformanceOverrideType input) {
  switch (input) {
  case PerformanceOverrideType::E_NULL_HARDWARE_INTEL:
    return "PerformanceOverrideType::E_NULL_HARDWARE_INTEL";
  case PerformanceOverrideType::E_FLUSH_GPU_CACHES_INTEL:
    return "PerformanceOverrideType::E_FLUSH_GPU_CACHES_INTEL";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SamplerReductionMode input) {
  switch (input) {
  case SamplerReductionMode::E_WEIGHTED_AVERAGE:
    return "SamplerReductionMode::E_WEIGHTED_AVERAGE";
  case SamplerReductionMode::E_MIN:
    return "SamplerReductionMode::E_MIN";
  case SamplerReductionMode::E_MAX:
    return "SamplerReductionMode::E_MAX";
  case SamplerReductionMode::E_WEIGHTED_AVERAGE_RANGECLAMP_QCOM:
    return "SamplerReductionMode::E_WEIGHTED_AVERAGE_RANGECLAMP_QCOM";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DebugReportObjectType input) {
  switch (input) {
  case DebugReportObjectType::E_UNKNOWN_EXT:
    return "DebugReportObjectType::E_UNKNOWN_EXT";
  case DebugReportObjectType::E_INSTANCE_EXT:
    return "DebugReportObjectType::E_INSTANCE_EXT";
  case DebugReportObjectType::E_PHYSICAL_DEVICE_EXT:
    return "DebugReportObjectType::E_PHYSICAL_DEVICE_EXT";
  case DebugReportObjectType::E_DEVICE_EXT:
    return "DebugReportObjectType::E_DEVICE_EXT";
  case DebugReportObjectType::E_QUEUE_EXT:
    return "DebugReportObjectType::E_QUEUE_EXT";
  case DebugReportObjectType::E_SEMAPHORE_EXT:
    return "DebugReportObjectType::E_SEMAPHORE_EXT";
  case DebugReportObjectType::E_COMMAND_BUFFER_EXT:
    return "DebugReportObjectType::E_COMMAND_BUFFER_EXT";
  case DebugReportObjectType::E_FENCE_EXT:
    return "DebugReportObjectType::E_FENCE_EXT";
  case DebugReportObjectType::E_DEVICE_MEMORY_EXT:
    return "DebugReportObjectType::E_DEVICE_MEMORY_EXT";
  case DebugReportObjectType::E_BUFFER_EXT:
    return "DebugReportObjectType::E_BUFFER_EXT";
  case DebugReportObjectType::E_IMAGE_EXT:
    return "DebugReportObjectType::E_IMAGE_EXT";
  case DebugReportObjectType::E_EVENT_EXT:
    return "DebugReportObjectType::E_EVENT_EXT";
  case DebugReportObjectType::E_QUERY_POOL_EXT:
    return "DebugReportObjectType::E_QUERY_POOL_EXT";
  case DebugReportObjectType::E_BUFFER_VIEW_EXT:
    return "DebugReportObjectType::E_BUFFER_VIEW_EXT";
  case DebugReportObjectType::E_IMAGE_VIEW_EXT:
    return "DebugReportObjectType::E_IMAGE_VIEW_EXT";
  case DebugReportObjectType::E_SHADER_MODULE_EXT:
    return "DebugReportObjectType::E_SHADER_MODULE_EXT";
  case DebugReportObjectType::E_PIPELINE_CACHE_EXT:
    return "DebugReportObjectType::E_PIPELINE_CACHE_EXT";
  case DebugReportObjectType::E_PIPELINE_LAYOUT_EXT:
    return "DebugReportObjectType::E_PIPELINE_LAYOUT_EXT";
  case DebugReportObjectType::E_RENDER_PASS_EXT:
    return "DebugReportObjectType::E_RENDER_PASS_EXT";
  case DebugReportObjectType::E_PIPELINE_EXT:
    return "DebugReportObjectType::E_PIPELINE_EXT";
  case DebugReportObjectType::E_DESCRIPTOR_SET_LAYOUT_EXT:
    return "DebugReportObjectType::E_DESCRIPTOR_SET_LAYOUT_EXT";
  case DebugReportObjectType::E_SAMPLER_EXT:
    return "DebugReportObjectType::E_SAMPLER_EXT";
  case DebugReportObjectType::E_DESCRIPTOR_POOL_EXT:
    return "DebugReportObjectType::E_DESCRIPTOR_POOL_EXT";
  case DebugReportObjectType::E_DESCRIPTOR_SET_EXT:
    return "DebugReportObjectType::E_DESCRIPTOR_SET_EXT";
  case DebugReportObjectType::E_FRAMEBUFFER_EXT:
    return "DebugReportObjectType::E_FRAMEBUFFER_EXT";
  case DebugReportObjectType::E_COMMAND_POOL_EXT:
    return "DebugReportObjectType::E_COMMAND_POOL_EXT";
  case DebugReportObjectType::E_SURFACE_KHR_EXT:
    return "DebugReportObjectType::E_SURFACE_KHR_EXT";
  case DebugReportObjectType::E_SWAPCHAIN_KHR_EXT:
    return "DebugReportObjectType::E_SWAPCHAIN_KHR_EXT";
  case DebugReportObjectType::E_DEBUG_REPORT_CALLBACK_EXT_EXT:
    return "DebugReportObjectType::E_DEBUG_REPORT_CALLBACK_EXT_EXT";
  case DebugReportObjectType::E_DISPLAY_KHR_EXT:
    return "DebugReportObjectType::E_DISPLAY_KHR_EXT";
  case DebugReportObjectType::E_DISPLAY_MODE_KHR_EXT:
    return "DebugReportObjectType::E_DISPLAY_MODE_KHR_EXT";
  case DebugReportObjectType::E_VALIDATION_CACHE_EXT_EXT:
    return "DebugReportObjectType::E_VALIDATION_CACHE_EXT_EXT";
  case DebugReportObjectType::E_ACCELERATION_STRUCTURE_KHR_EXT:
    return "DebugReportObjectType::E_ACCELERATION_STRUCTURE_KHR_EXT";
  case DebugReportObjectType::E_CU_MODULE_NVX_EXT:
    return "DebugReportObjectType::E_CU_MODULE_NVX_EXT";
  case DebugReportObjectType::E_CU_FUNCTION_NVX_EXT:
    return "DebugReportObjectType::E_CU_FUNCTION_NVX_EXT";
  case DebugReportObjectType::E_ACCELERATION_STRUCTURE_NV_EXT:
    return "DebugReportObjectType::E_ACCELERATION_STRUCTURE_NV_EXT";
  case DebugReportObjectType::E_SAMPLER_YCBCR_CONVERSION_EXT:
    return "DebugReportObjectType::E_SAMPLER_YCBCR_CONVERSION_EXT";
  case DebugReportObjectType::E_DESCRIPTOR_UPDATE_TEMPLATE_EXT:
    return "DebugReportObjectType::E_DESCRIPTOR_UPDATE_TEMPLATE_EXT";
  case DebugReportObjectType::E_CUDA_MODULE_NV_EXT:
    return "DebugReportObjectType::E_CUDA_MODULE_NV_EXT";
  case DebugReportObjectType::E_CUDA_FUNCTION_NV_EXT:
    return "DebugReportObjectType::E_CUDA_FUNCTION_NV_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PrimitiveTopology input) {
  switch (input) {
  case PrimitiveTopology::E_POINT_LIST:
    return "PrimitiveTopology::E_POINT_LIST";
  case PrimitiveTopology::E_LINE_LIST:
    return "PrimitiveTopology::E_LINE_LIST";
  case PrimitiveTopology::E_LINE_STRIP:
    return "PrimitiveTopology::E_LINE_STRIP";
  case PrimitiveTopology::E_TRIANGLE_LIST:
    return "PrimitiveTopology::E_TRIANGLE_LIST";
  case PrimitiveTopology::E_TRIANGLE_STRIP:
    return "PrimitiveTopology::E_TRIANGLE_STRIP";
  case PrimitiveTopology::E_TRIANGLE_FAN:
    return "PrimitiveTopology::E_TRIANGLE_FAN";
  case PrimitiveTopology::E_LINE_LIST_WITH_ADJACENCY:
    return "PrimitiveTopology::E_LINE_LIST_WITH_ADJACENCY";
  case PrimitiveTopology::E_LINE_STRIP_WITH_ADJACENCY:
    return "PrimitiveTopology::E_LINE_STRIP_WITH_ADJACENCY";
  case PrimitiveTopology::E_TRIANGLE_LIST_WITH_ADJACENCY:
    return "PrimitiveTopology::E_TRIANGLE_LIST_WITH_ADJACENCY";
  case PrimitiveTopology::E_TRIANGLE_STRIP_WITH_ADJACENCY:
    return "PrimitiveTopology::E_TRIANGLE_STRIP_WITH_ADJACENCY";
  case PrimitiveTopology::E_PATCH_LIST:
    return "PrimitiveTopology::E_PATCH_LIST";
  default:
    std::unreachable();
  }
}

std::string_view ToString(StencilOp input) {
  switch (input) {
  case StencilOp::E_KEEP:
    return "StencilOp::E_KEEP";
  case StencilOp::E_ZERO:
    return "StencilOp::E_ZERO";
  case StencilOp::E_REPLACE:
    return "StencilOp::E_REPLACE";
  case StencilOp::E_INCREMENT_AND_CLAMP:
    return "StencilOp::E_INCREMENT_AND_CLAMP";
  case StencilOp::E_DECREMENT_AND_CLAMP:
    return "StencilOp::E_DECREMENT_AND_CLAMP";
  case StencilOp::E_INVERT:
    return "StencilOp::E_INVERT";
  case StencilOp::E_INCREMENT_AND_WRAP:
    return "StencilOp::E_INCREMENT_AND_WRAP";
  case StencilOp::E_DECREMENT_AND_WRAP:
    return "StencilOp::E_DECREMENT_AND_WRAP";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SamplerMipmapMode input) {
  switch (input) {
  case SamplerMipmapMode::E_NEAREST:
    return "SamplerMipmapMode::E_NEAREST";
  case SamplerMipmapMode::E_LINEAR:
    return "SamplerMipmapMode::E_LINEAR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ImageLayout input) {
  switch (input) {
  case ImageLayout::E_UNDEFINED:
    return "ImageLayout::E_UNDEFINED";
  case ImageLayout::E_GENERAL:
    return "ImageLayout::E_GENERAL";
  case ImageLayout::E_COLOR_ATTACHMENT_OPTIMAL:
    return "ImageLayout::E_COLOR_ATTACHMENT_OPTIMAL";
  case ImageLayout::E_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
    return "ImageLayout::E_DEPTH_STENCIL_ATTACHMENT_OPTIMAL";
  case ImageLayout::E_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
    return "ImageLayout::E_DEPTH_STENCIL_READ_ONLY_OPTIMAL";
  case ImageLayout::E_SHADER_READ_ONLY_OPTIMAL:
    return "ImageLayout::E_SHADER_READ_ONLY_OPTIMAL";
  case ImageLayout::E_TRANSFER_SRC_OPTIMAL:
    return "ImageLayout::E_TRANSFER_SRC_OPTIMAL";
  case ImageLayout::E_TRANSFER_DST_OPTIMAL:
    return "ImageLayout::E_TRANSFER_DST_OPTIMAL";
  case ImageLayout::E_PREINITIALIZED:
    return "ImageLayout::E_PREINITIALIZED";
  case ImageLayout::E_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT:
    return "ImageLayout::E_ATTACHMENT_FEEDBACK_LOOP_OPTIMAL_EXT";
  case ImageLayout::E_SHARED_PRESENT_KHR:
    return "ImageLayout::E_SHARED_PRESENT_KHR";
  case ImageLayout::E_VIDEO_DECODE_DST_KHR:
    return "ImageLayout::E_VIDEO_DECODE_DST_KHR";
  case ImageLayout::E_VIDEO_DECODE_SRC_KHR:
    return "ImageLayout::E_VIDEO_DECODE_SRC_KHR";
  case ImageLayout::E_VIDEO_DECODE_DPB_KHR:
    return "ImageLayout::E_VIDEO_DECODE_DPB_KHR";
  case ImageLayout::E_RENDERING_LOCAL_READ_KHR:
    return "ImageLayout::E_RENDERING_LOCAL_READ_KHR";
  case ImageLayout::E_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT:
    return "ImageLayout::E_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT";
  case ImageLayout::E_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR:
    return "ImageLayout::E_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR";
  case ImageLayout::E_VIDEO_ENCODE_DST_KHR:
    return "ImageLayout::E_VIDEO_ENCODE_DST_KHR";
  case ImageLayout::E_VIDEO_ENCODE_SRC_KHR:
    return "ImageLayout::E_VIDEO_ENCODE_SRC_KHR";
  case ImageLayout::E_VIDEO_ENCODE_DPB_KHR:
    return "ImageLayout::E_VIDEO_ENCODE_DPB_KHR";
  case ImageLayout::E_PRESENT_SRC_KHR:
    return "ImageLayout::E_PRESENT_SRC_KHR";
  case ImageLayout::E_DEPTH_ATTACHMENT_OPTIMAL:
    return "ImageLayout::E_DEPTH_ATTACHMENT_OPTIMAL";
  case ImageLayout::E_DEPTH_READ_ONLY_OPTIMAL:
    return "ImageLayout::E_DEPTH_READ_ONLY_OPTIMAL";
  case ImageLayout::E_STENCIL_ATTACHMENT_OPTIMAL:
    return "ImageLayout::E_STENCIL_ATTACHMENT_OPTIMAL";
  case ImageLayout::E_STENCIL_READ_ONLY_OPTIMAL:
    return "ImageLayout::E_STENCIL_READ_ONLY_OPTIMAL";
  case ImageLayout::E_READ_ONLY_OPTIMAL:
    return "ImageLayout::E_READ_ONLY_OPTIMAL";
  case ImageLayout::E_ATTACHMENT_OPTIMAL:
    return "ImageLayout::E_ATTACHMENT_OPTIMAL";
  case ImageLayout::E_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL:
    return "ImageLayout::E_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL";
  case ImageLayout::E_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL:
    return "ImageLayout::E_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL";
  default:
    std::unreachable();
  }
}

std::string_view ToString(MicromapCreateMaskBit input) {
  switch (input) {
  case MicromapCreateMaskBit::E_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT:
    return "MicromapCreateMaskBit::E_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SubpassContents input) {
  switch (input) {
  case SubpassContents::E_INLINE:
    return "SubpassContents::E_INLINE";
  case SubpassContents::E_SECONDARY_COMMAND_BUFFERS:
    return "SubpassContents::E_SECONDARY_COMMAND_BUFFERS";
  case SubpassContents::E_INLINE_AND_SECONDARY_COMMAND_BUFFERS_KHR:
    return "SubpassContents::E_INLINE_AND_SECONDARY_COMMAND_BUFFERS_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DebugReportMaskBit input) {
  switch (input) {
  case DebugReportMaskBit::E_INFORMATION_BIT_EXT:
    return "DebugReportMaskBit::E_INFORMATION_BIT_EXT";
  case DebugReportMaskBit::E_WARNING_BIT_EXT:
    return "DebugReportMaskBit::E_WARNING_BIT_EXT";
  case DebugReportMaskBit::E_PERFORMANCE_WARNING_BIT_EXT:
    return "DebugReportMaskBit::E_PERFORMANCE_WARNING_BIT_EXT";
  case DebugReportMaskBit::E_ERROR_BIT_EXT:
    return "DebugReportMaskBit::E_ERROR_BIT_EXT";
  case DebugReportMaskBit::E_DEBUG_BIT_EXT:
    return "DebugReportMaskBit::E_DEBUG_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(QueryControlMaskBit input) {
  switch (input) {
  case QueryControlMaskBit::E_PRECISE_BIT:
    return "QueryControlMaskBit::E_PRECISE_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AttachmentStoreOp input) {
  switch (input) {
  case AttachmentStoreOp::E_STORE:
    return "AttachmentStoreOp::E_STORE";
  case AttachmentStoreOp::E_DONT_CARE:
    return "AttachmentStoreOp::E_DONT_CARE";
  case AttachmentStoreOp::E_NONE:
    return "AttachmentStoreOp::E_NONE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineStageMaskBit2 input) {
  switch (input) {
  case PipelineStageMaskBit2::E_NONE:
    return "PipelineStageMaskBit2::E_NONE";
  case PipelineStageMaskBit2::E_TOP_OF_PIPE_BIT:
    return "PipelineStageMaskBit2::E_TOP_OF_PIPE_BIT";
  case PipelineStageMaskBit2::E_DRAW_INDIRECT_BIT:
    return "PipelineStageMaskBit2::E_DRAW_INDIRECT_BIT";
  case PipelineStageMaskBit2::E_VERTEX_INPUT_BIT:
    return "PipelineStageMaskBit2::E_VERTEX_INPUT_BIT";
  case PipelineStageMaskBit2::E_VERTEX_SHADER_BIT:
    return "PipelineStageMaskBit2::E_VERTEX_SHADER_BIT";
  case PipelineStageMaskBit2::E_TESSELLATION_CONTROL_SHADER_BIT:
    return "PipelineStageMaskBit2::E_TESSELLATION_CONTROL_SHADER_BIT";
  case PipelineStageMaskBit2::E_TESSELLATION_EVALUATION_SHADER_BIT:
    return "PipelineStageMaskBit2::E_TESSELLATION_EVALUATION_SHADER_BIT";
  case PipelineStageMaskBit2::E_GEOMETRY_SHADER_BIT:
    return "PipelineStageMaskBit2::E_GEOMETRY_SHADER_BIT";
  case PipelineStageMaskBit2::E_FRAGMENT_SHADER_BIT:
    return "PipelineStageMaskBit2::E_FRAGMENT_SHADER_BIT";
  case PipelineStageMaskBit2::E_EARLY_FRAGMENT_TESTS_BIT:
    return "PipelineStageMaskBit2::E_EARLY_FRAGMENT_TESTS_BIT";
  case PipelineStageMaskBit2::E_LATE_FRAGMENT_TESTS_BIT:
    return "PipelineStageMaskBit2::E_LATE_FRAGMENT_TESTS_BIT";
  case PipelineStageMaskBit2::E_COLOR_ATTACHMENT_OUTPUT_BIT:
    return "PipelineStageMaskBit2::E_COLOR_ATTACHMENT_OUTPUT_BIT";
  case PipelineStageMaskBit2::E_COMPUTE_SHADER_BIT:
    return "PipelineStageMaskBit2::E_COMPUTE_SHADER_BIT";
  case PipelineStageMaskBit2::E_TRANSFER_BIT:
    return "PipelineStageMaskBit2::E_TRANSFER_BIT";
  case PipelineStageMaskBit2::E_BOTTOM_OF_PIPE_BIT:
    return "PipelineStageMaskBit2::E_BOTTOM_OF_PIPE_BIT";
  case PipelineStageMaskBit2::E_HOST_BIT:
    return "PipelineStageMaskBit2::E_HOST_BIT";
  case PipelineStageMaskBit2::E_ALL_GRAPHICS_BIT:
    return "PipelineStageMaskBit2::E_ALL_GRAPHICS_BIT";
  case PipelineStageMaskBit2::E_ALL_COMMANDS_BIT:
    return "PipelineStageMaskBit2::E_ALL_COMMANDS_BIT";
  case PipelineStageMaskBit2::E_COPY_BIT:
    return "PipelineStageMaskBit2::E_COPY_BIT";
  case PipelineStageMaskBit2::E_RESOLVE_BIT:
    return "PipelineStageMaskBit2::E_RESOLVE_BIT";
  case PipelineStageMaskBit2::E_BLIT_BIT:
    return "PipelineStageMaskBit2::E_BLIT_BIT";
  case PipelineStageMaskBit2::E_CLEAR_BIT:
    return "PipelineStageMaskBit2::E_CLEAR_BIT";
  case PipelineStageMaskBit2::E_INDEX_INPUT_BIT:
    return "PipelineStageMaskBit2::E_INDEX_INPUT_BIT";
  case PipelineStageMaskBit2::E_VERTEX_ATTRIBUTE_INPUT_BIT:
    return "PipelineStageMaskBit2::E_VERTEX_ATTRIBUTE_INPUT_BIT";
  case PipelineStageMaskBit2::E_PRE_RASTERIZATION_SHADERS_BIT:
    return "PipelineStageMaskBit2::E_PRE_RASTERIZATION_SHADERS_BIT";
  case PipelineStageMaskBit2::E_OPTICAL_FLOW_BIT_NV:
    return "PipelineStageMaskBit2::E_OPTICAL_FLOW_BIT_NV";
  case PipelineStageMaskBit2::E_CLUSTER_CULLING_SHADER_BIT_HUAWEI:
    return "PipelineStageMaskBit2::E_CLUSTER_CULLING_SHADER_BIT_HUAWEI";
  case PipelineStageMaskBit2::E_MICROMAP_BUILD_BIT_EXT:
    return "PipelineStageMaskBit2::E_MICROMAP_BUILD_BIT_EXT";
  case PipelineStageMaskBit2::E_ACCELERATION_STRUCTURE_COPY_BIT_KHR:
    return "PipelineStageMaskBit2::E_ACCELERATION_STRUCTURE_COPY_BIT_KHR";
  case PipelineStageMaskBit2::E_VIDEO_DECODE_BIT_KHR:
    return "PipelineStageMaskBit2::E_VIDEO_DECODE_BIT_KHR";
  case PipelineStageMaskBit2::E_SUBPASS_SHADER_BIT_HUAWEI:
    return "PipelineStageMaskBit2::E_SUBPASS_SHADER_BIT_HUAWEI";
  case PipelineStageMaskBit2::E_INVOCATION_MASK_BIT_HUAWEI:
    return "PipelineStageMaskBit2::E_INVOCATION_MASK_BIT_HUAWEI";
  case PipelineStageMaskBit2::E_TRANSFORM_FEEDBACK_BIT_EXT:
    return "PipelineStageMaskBit2::E_TRANSFORM_FEEDBACK_BIT_EXT";
  case PipelineStageMaskBit2::E_CONDITIONAL_RENDERING_BIT_EXT:
    return "PipelineStageMaskBit2::E_CONDITIONAL_RENDERING_BIT_EXT";
  case PipelineStageMaskBit2::E_COMMAND_PREPROCESS_BIT_NV:
    return "PipelineStageMaskBit2::E_COMMAND_PREPROCESS_BIT_NV";
  case PipelineStageMaskBit2::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR:
    return "PipelineStageMaskBit2::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
  case PipelineStageMaskBit2::E_ACCELERATION_STRUCTURE_BUILD_BIT_KHR:
    return "PipelineStageMaskBit2::E_ACCELERATION_STRUCTURE_BUILD_BIT_KHR";
  case PipelineStageMaskBit2::E_RAY_TRACING_SHADER_BIT_KHR:
    return "PipelineStageMaskBit2::E_RAY_TRACING_SHADER_BIT_KHR";
  case PipelineStageMaskBit2::E_FRAGMENT_DENSITY_PROCESS_BIT_EXT:
    return "PipelineStageMaskBit2::E_FRAGMENT_DENSITY_PROCESS_BIT_EXT";
  case PipelineStageMaskBit2::E_TASK_SHADER_BIT_EXT:
    return "PipelineStageMaskBit2::E_TASK_SHADER_BIT_EXT";
  case PipelineStageMaskBit2::E_MESH_SHADER_BIT_EXT:
    return "PipelineStageMaskBit2::E_MESH_SHADER_BIT_EXT";
  case PipelineStageMaskBit2::E_VIDEO_ENCODE_BIT_KHR:
    return "PipelineStageMaskBit2::E_VIDEO_ENCODE_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ComponentSwizzle input) {
  switch (input) {
  case ComponentSwizzle::E_IDENTITY:
    return "ComponentSwizzle::E_IDENTITY";
  case ComponentSwizzle::E_ZERO:
    return "ComponentSwizzle::E_ZERO";
  case ComponentSwizzle::E_ONE:
    return "ComponentSwizzle::E_ONE";
  case ComponentSwizzle::E_R:
    return "ComponentSwizzle::E_R";
  case ComponentSwizzle::E_G:
    return "ComponentSwizzle::E_G";
  case ComponentSwizzle::E_B:
    return "ComponentSwizzle::E_B";
  case ComponentSwizzle::E_A:
    return "ComponentSwizzle::E_A";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ImageViewType input) {
  switch (input) {
  case ImageViewType::E_1D:
    return "ImageViewType::E_1D";
  case ImageViewType::E_2D:
    return "ImageViewType::E_2D";
  case ImageViewType::E_3D:
    return "ImageViewType::E_3D";
  case ImageViewType::E_CUBE:
    return "ImageViewType::E_CUBE";
  case ImageViewType::E_1D_ARRAY:
    return "ImageViewType::E_1D_ARRAY";
  case ImageViewType::E_2D_ARRAY:
    return "ImageViewType::E_2D_ARRAY";
  case ImageViewType::E_CUBE_ARRAY:
    return "ImageViewType::E_CUBE_ARRAY";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PhysicalDeviceLayeredApi input) {
  switch (input) {
  case PhysicalDeviceLayeredApi::E_VULKAN_KHR:
    return "PhysicalDeviceLayeredApi::E_VULKAN_KHR";
  case PhysicalDeviceLayeredApi::E_D3D12_KHR:
    return "PhysicalDeviceLayeredApi::E_D3D12_KHR";
  case PhysicalDeviceLayeredApi::E_METAL_KHR:
    return "PhysicalDeviceLayeredApi::E_METAL_KHR";
  case PhysicalDeviceLayeredApi::E_OPENGL_KHR:
    return "PhysicalDeviceLayeredApi::E_OPENGL_KHR";
  case PhysicalDeviceLayeredApi::E_OPENGLES_KHR:
    return "PhysicalDeviceLayeredApi::E_OPENGLES_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SubpassDescriptionMaskBit input) {
  switch (input) {
  case SubpassDescriptionMaskBit::E_ENABLE_LEGACY_DITHERING_BIT_EXT:
    return "SubpassDescriptionMaskBit::E_ENABLE_LEGACY_DITHERING_BIT_EXT";
  case SubpassDescriptionMaskBit::E_PER_VIEW_ATTRIBUTES_BIT_NVX:
    return "SubpassDescriptionMaskBit::E_PER_VIEW_ATTRIBUTES_BIT_NVX";
  case SubpassDescriptionMaskBit::E_PER_VIEW_POSITION_X_ONLY_BIT_NVX:
    return "SubpassDescriptionMaskBit::E_PER_VIEW_POSITION_X_ONLY_BIT_NVX";
  case SubpassDescriptionMaskBit::E_FRAGMENT_REGION_BIT_QCOM:
    return "SubpassDescriptionMaskBit::E_FRAGMENT_REGION_BIT_QCOM";
  case SubpassDescriptionMaskBit::E_SHADER_RESOLVE_BIT_QCOM:
    return "SubpassDescriptionMaskBit::E_SHADER_RESOLVE_BIT_QCOM";
  case SubpassDescriptionMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_COLOR_ACCESS_BIT_EXT:
    return "SubpassDescriptionMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_COLOR_ACCESS_BIT_EXT";
  case SubpassDescriptionMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT:
    return "SubpassDescriptionMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT";
  case SubpassDescriptionMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT:
    return "SubpassDescriptionMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(IndirectCommandsTokenType input) {
  switch (input) {
  case IndirectCommandsTokenType::E_SHADER_GROUP_NV:
    return "IndirectCommandsTokenType::E_SHADER_GROUP_NV";
  case IndirectCommandsTokenType::E_STATE_FLAGS_NV:
    return "IndirectCommandsTokenType::E_STATE_FLAGS_NV";
  case IndirectCommandsTokenType::E_INDEX_BUFFER_NV:
    return "IndirectCommandsTokenType::E_INDEX_BUFFER_NV";
  case IndirectCommandsTokenType::E_VERTEX_BUFFER_NV:
    return "IndirectCommandsTokenType::E_VERTEX_BUFFER_NV";
  case IndirectCommandsTokenType::E_PUSH_CONSTANT_NV:
    return "IndirectCommandsTokenType::E_PUSH_CONSTANT_NV";
  case IndirectCommandsTokenType::E_DRAW_INDEXED_NV:
    return "IndirectCommandsTokenType::E_DRAW_INDEXED_NV";
  case IndirectCommandsTokenType::E_DRAW_NV:
    return "IndirectCommandsTokenType::E_DRAW_NV";
  case IndirectCommandsTokenType::E_DRAW_TASKS_NV:
    return "IndirectCommandsTokenType::E_DRAW_TASKS_NV";
  case IndirectCommandsTokenType::E_PIPELINE_NV:
    return "IndirectCommandsTokenType::E_PIPELINE_NV";
  case IndirectCommandsTokenType::E_DISPATCH_NV:
    return "IndirectCommandsTokenType::E_DISPATCH_NV";
  case IndirectCommandsTokenType::E_DRAW_MESH_TASKS_NV:
    return "IndirectCommandsTokenType::E_DRAW_MESH_TASKS_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(FormatFeatureMaskBit input) {
  switch (input) {
  case FormatFeatureMaskBit::E_SAMPLED_IMAGE_BIT:
    return "FormatFeatureMaskBit::E_SAMPLED_IMAGE_BIT";
  case FormatFeatureMaskBit::E_STORAGE_IMAGE_BIT:
    return "FormatFeatureMaskBit::E_STORAGE_IMAGE_BIT";
  case FormatFeatureMaskBit::E_STORAGE_IMAGE_ATOMIC_BIT:
    return "FormatFeatureMaskBit::E_STORAGE_IMAGE_ATOMIC_BIT";
  case FormatFeatureMaskBit::E_UNIFORM_TEXEL_BUFFER_BIT:
    return "FormatFeatureMaskBit::E_UNIFORM_TEXEL_BUFFER_BIT";
  case FormatFeatureMaskBit::E_STORAGE_TEXEL_BUFFER_BIT:
    return "FormatFeatureMaskBit::E_STORAGE_TEXEL_BUFFER_BIT";
  case FormatFeatureMaskBit::E_STORAGE_TEXEL_BUFFER_ATOMIC_BIT:
    return "FormatFeatureMaskBit::E_STORAGE_TEXEL_BUFFER_ATOMIC_BIT";
  case FormatFeatureMaskBit::E_VERTEX_BUFFER_BIT:
    return "FormatFeatureMaskBit::E_VERTEX_BUFFER_BIT";
  case FormatFeatureMaskBit::E_COLOR_ATTACHMENT_BIT:
    return "FormatFeatureMaskBit::E_COLOR_ATTACHMENT_BIT";
  case FormatFeatureMaskBit::E_COLOR_ATTACHMENT_BLEND_BIT:
    return "FormatFeatureMaskBit::E_COLOR_ATTACHMENT_BLEND_BIT";
  case FormatFeatureMaskBit::E_DEPTH_STENCIL_ATTACHMENT_BIT:
    return "FormatFeatureMaskBit::E_DEPTH_STENCIL_ATTACHMENT_BIT";
  case FormatFeatureMaskBit::E_BLIT_SRC_BIT:
    return "FormatFeatureMaskBit::E_BLIT_SRC_BIT";
  case FormatFeatureMaskBit::E_BLIT_DST_BIT:
    return "FormatFeatureMaskBit::E_BLIT_DST_BIT";
  case FormatFeatureMaskBit::E_SAMPLED_IMAGE_FILTER_LINEAR_BIT:
    return "FormatFeatureMaskBit::E_SAMPLED_IMAGE_FILTER_LINEAR_BIT";
  case FormatFeatureMaskBit::E_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR:
    return "FormatFeatureMaskBit::E_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR";
  case FormatFeatureMaskBit::E_VIDEO_DECODE_OUTPUT_BIT_KHR:
    return "FormatFeatureMaskBit::E_VIDEO_DECODE_OUTPUT_BIT_KHR";
  case FormatFeatureMaskBit::E_VIDEO_DECODE_DPB_BIT_KHR:
    return "FormatFeatureMaskBit::E_VIDEO_DECODE_DPB_BIT_KHR";
  case FormatFeatureMaskBit::E_FRAGMENT_DENSITY_MAP_BIT_EXT:
    return "FormatFeatureMaskBit::E_FRAGMENT_DENSITY_MAP_BIT_EXT";
  case FormatFeatureMaskBit::E_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT:
    return "FormatFeatureMaskBit::E_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT";
  case FormatFeatureMaskBit::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR:
    return "FormatFeatureMaskBit::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
  case FormatFeatureMaskBit::E_VIDEO_ENCODE_INPUT_BIT_KHR:
    return "FormatFeatureMaskBit::E_VIDEO_ENCODE_INPUT_BIT_KHR";
  case FormatFeatureMaskBit::E_VIDEO_ENCODE_DPB_BIT_KHR:
    return "FormatFeatureMaskBit::E_VIDEO_ENCODE_DPB_BIT_KHR";
  case FormatFeatureMaskBit::E_SAMPLED_IMAGE_FILTER_MINMAX_BIT:
    return "FormatFeatureMaskBit::E_SAMPLED_IMAGE_FILTER_MINMAX_BIT";
  case FormatFeatureMaskBit::E_TRANSFER_SRC_BIT:
    return "FormatFeatureMaskBit::E_TRANSFER_SRC_BIT";
  case FormatFeatureMaskBit::E_TRANSFER_DST_BIT:
    return "FormatFeatureMaskBit::E_TRANSFER_DST_BIT";
  case FormatFeatureMaskBit::E_MIDPOINT_CHROMA_SAMPLES_BIT:
    return "FormatFeatureMaskBit::E_MIDPOINT_CHROMA_SAMPLES_BIT";
  case FormatFeatureMaskBit::E_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT:
    return "FormatFeatureMaskBit::E_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT";
  case FormatFeatureMaskBit::E_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT:
    return "FormatFeatureMaskBit::E_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT";
  case FormatFeatureMaskBit::E_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT:
    return "FormatFeatureMaskBit::E_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT";
  case FormatFeatureMaskBit::E_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT:
    return "FormatFeatureMaskBit::E_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT";
  case FormatFeatureMaskBit::E_DISJOINT_BIT:
    return "FormatFeatureMaskBit::E_DISJOINT_BIT";
  case FormatFeatureMaskBit::E_COSITED_CHROMA_SAMPLES_BIT:
    return "FormatFeatureMaskBit::E_COSITED_CHROMA_SAMPLES_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(OpticalFlowExecuteMaskBit input) {
  switch (input) {
  case OpticalFlowExecuteMaskBit::E_DISABLE_TEMPORAL_HINTS_BIT_NV:
    return "OpticalFlowExecuteMaskBit::E_DISABLE_TEMPORAL_HINTS_BIT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(QueryResultMaskBit input) {
  switch (input) {
  case QueryResultMaskBit::E_64_BIT:
    return "QueryResultMaskBit::E_64_BIT";
  case QueryResultMaskBit::E_WAIT_BIT:
    return "QueryResultMaskBit::E_WAIT_BIT";
  case QueryResultMaskBit::E_WITH_AVAILABILITY_BIT:
    return "QueryResultMaskBit::E_WITH_AVAILABILITY_BIT";
  case QueryResultMaskBit::E_PARTIAL_BIT:
    return "QueryResultMaskBit::E_PARTIAL_BIT";
  case QueryResultMaskBit::E_WITH_STATUS_BIT_KHR:
    return "QueryResultMaskBit::E_WITH_STATUS_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CommandBufferResetMaskBit input) {
  switch (input) {
  case CommandBufferResetMaskBit::E_RELEASE_RESOURCES_BIT:
    return "CommandBufferResetMaskBit::E_RELEASE_RESOURCES_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(OpacityMicromapSpecialIndex input) {
  switch (input) {
  case OpacityMicromapSpecialIndex::E_FULLY_TRANSPARENT_EXT:
    return "OpacityMicromapSpecialIndex::E_FULLY_TRANSPARENT_EXT";
  case OpacityMicromapSpecialIndex::E_FULLY_OPAQUE_EXT:
    return "OpacityMicromapSpecialIndex::E_FULLY_OPAQUE_EXT";
  case OpacityMicromapSpecialIndex::E_FULLY_UNKNOWN_TRANSPARENT_EXT:
    return "OpacityMicromapSpecialIndex::E_FULLY_UNKNOWN_TRANSPARENT_EXT";
  case OpacityMicromapSpecialIndex::E_FULLY_UNKNOWN_OPAQUE_EXT:
    return "OpacityMicromapSpecialIndex::E_FULLY_UNKNOWN_OPAQUE_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SharingMode input) {
  switch (input) {
  case SharingMode::E_EXCLUSIVE:
    return "SharingMode::E_EXCLUSIVE";
  case SharingMode::E_CONCURRENT:
    return "SharingMode::E_CONCURRENT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DescriptorType input) {
  switch (input) {
  case DescriptorType::E_SAMPLER:
    return "DescriptorType::E_SAMPLER";
  case DescriptorType::E_COMBINED_IMAGE_SAMPLER:
    return "DescriptorType::E_COMBINED_IMAGE_SAMPLER";
  case DescriptorType::E_SAMPLED_IMAGE:
    return "DescriptorType::E_SAMPLED_IMAGE";
  case DescriptorType::E_STORAGE_IMAGE:
    return "DescriptorType::E_STORAGE_IMAGE";
  case DescriptorType::E_UNIFORM_TEXEL_BUFFER:
    return "DescriptorType::E_UNIFORM_TEXEL_BUFFER";
  case DescriptorType::E_STORAGE_TEXEL_BUFFER:
    return "DescriptorType::E_STORAGE_TEXEL_BUFFER";
  case DescriptorType::E_UNIFORM_BUFFER:
    return "DescriptorType::E_UNIFORM_BUFFER";
  case DescriptorType::E_STORAGE_BUFFER:
    return "DescriptorType::E_STORAGE_BUFFER";
  case DescriptorType::E_UNIFORM_BUFFER_DYNAMIC:
    return "DescriptorType::E_UNIFORM_BUFFER_DYNAMIC";
  case DescriptorType::E_STORAGE_BUFFER_DYNAMIC:
    return "DescriptorType::E_STORAGE_BUFFER_DYNAMIC";
  case DescriptorType::E_INPUT_ATTACHMENT:
    return "DescriptorType::E_INPUT_ATTACHMENT";
  case DescriptorType::E_SAMPLE_WEIGHT_IMAGE_QCOM:
    return "DescriptorType::E_SAMPLE_WEIGHT_IMAGE_QCOM";
  case DescriptorType::E_BLOCK_MATCH_IMAGE_QCOM:
    return "DescriptorType::E_BLOCK_MATCH_IMAGE_QCOM";
  case DescriptorType::E_ACCELERATION_STRUCTURE_KHR:
    return "DescriptorType::E_ACCELERATION_STRUCTURE_KHR";
  case DescriptorType::E_ACCELERATION_STRUCTURE_NV:
    return "DescriptorType::E_ACCELERATION_STRUCTURE_NV";
  case DescriptorType::E_MUTABLE_EXT:
    return "DescriptorType::E_MUTABLE_EXT";
  case DescriptorType::E_INLINE_UNIFORM_BLOCK:
    return "DescriptorType::E_INLINE_UNIFORM_BLOCK";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PhysicalDeviceType input) {
  switch (input) {
  case PhysicalDeviceType::E_OTHER:
    return "PhysicalDeviceType::E_OTHER";
  case PhysicalDeviceType::E_INTEGRATED_GPU:
    return "PhysicalDeviceType::E_INTEGRATED_GPU";
  case PhysicalDeviceType::E_DISCRETE_GPU:
    return "PhysicalDeviceType::E_DISCRETE_GPU";
  case PhysicalDeviceType::E_VIRTUAL_GPU:
    return "PhysicalDeviceType::E_VIRTUAL_GPU";
  case PhysicalDeviceType::E_CPU:
    return "PhysicalDeviceType::E_CPU";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ImageUsageMaskBit input) {
  switch (input) {
  case ImageUsageMaskBit::E_TRANSFER_SRC_BIT:
    return "ImageUsageMaskBit::E_TRANSFER_SRC_BIT";
  case ImageUsageMaskBit::E_TRANSFER_DST_BIT:
    return "ImageUsageMaskBit::E_TRANSFER_DST_BIT";
  case ImageUsageMaskBit::E_SAMPLED_BIT:
    return "ImageUsageMaskBit::E_SAMPLED_BIT";
  case ImageUsageMaskBit::E_STORAGE_BIT:
    return "ImageUsageMaskBit::E_STORAGE_BIT";
  case ImageUsageMaskBit::E_COLOR_ATTACHMENT_BIT:
    return "ImageUsageMaskBit::E_COLOR_ATTACHMENT_BIT";
  case ImageUsageMaskBit::E_DEPTH_STENCIL_ATTACHMENT_BIT:
    return "ImageUsageMaskBit::E_DEPTH_STENCIL_ATTACHMENT_BIT";
  case ImageUsageMaskBit::E_TRANSIENT_ATTACHMENT_BIT:
    return "ImageUsageMaskBit::E_TRANSIENT_ATTACHMENT_BIT";
  case ImageUsageMaskBit::E_INPUT_ATTACHMENT_BIT:
    return "ImageUsageMaskBit::E_INPUT_ATTACHMENT_BIT";
  case ImageUsageMaskBit::E_SAMPLE_WEIGHT_BIT_QCOM:
    return "ImageUsageMaskBit::E_SAMPLE_WEIGHT_BIT_QCOM";
  case ImageUsageMaskBit::E_SAMPLE_BLOCK_MATCH_BIT_QCOM:
    return "ImageUsageMaskBit::E_SAMPLE_BLOCK_MATCH_BIT_QCOM";
  case ImageUsageMaskBit::E_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT:
    return "ImageUsageMaskBit::E_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT";
  case ImageUsageMaskBit::E_VIDEO_DECODE_DST_BIT_KHR:
    return "ImageUsageMaskBit::E_VIDEO_DECODE_DST_BIT_KHR";
  case ImageUsageMaskBit::E_VIDEO_DECODE_SRC_BIT_KHR:
    return "ImageUsageMaskBit::E_VIDEO_DECODE_SRC_BIT_KHR";
  case ImageUsageMaskBit::E_VIDEO_DECODE_DPB_BIT_KHR:
    return "ImageUsageMaskBit::E_VIDEO_DECODE_DPB_BIT_KHR";
  case ImageUsageMaskBit::E_FRAGMENT_DENSITY_MAP_BIT_EXT:
    return "ImageUsageMaskBit::E_FRAGMENT_DENSITY_MAP_BIT_EXT";
  case ImageUsageMaskBit::E_HOST_TRANSFER_BIT_EXT:
    return "ImageUsageMaskBit::E_HOST_TRANSFER_BIT_EXT";
  case ImageUsageMaskBit::E_INVOCATION_MASK_BIT_HUAWEI:
    return "ImageUsageMaskBit::E_INVOCATION_MASK_BIT_HUAWEI";
  case ImageUsageMaskBit::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR:
    return "ImageUsageMaskBit::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
  case ImageUsageMaskBit::E_VIDEO_ENCODE_DST_BIT_KHR:
    return "ImageUsageMaskBit::E_VIDEO_ENCODE_DST_BIT_KHR";
  case ImageUsageMaskBit::E_VIDEO_ENCODE_SRC_BIT_KHR:
    return "ImageUsageMaskBit::E_VIDEO_ENCODE_SRC_BIT_KHR";
  case ImageUsageMaskBit::E_VIDEO_ENCODE_DPB_BIT_KHR:
    return "ImageUsageMaskBit::E_VIDEO_ENCODE_DPB_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(MemoryHeapMaskBit input) {
  switch (input) {
  case MemoryHeapMaskBit::E_DEVICE_LOCAL_BIT:
    return "MemoryHeapMaskBit::E_DEVICE_LOCAL_BIT";
  case MemoryHeapMaskBit::E_MULTI_INSTANCE_BIT:
    return "MemoryHeapMaskBit::E_MULTI_INSTANCE_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AccelerationStructureBuildType input) {
  switch (input) {
  case AccelerationStructureBuildType::E_HOST_KHR:
    return "AccelerationStructureBuildType::E_HOST_KHR";
  case AccelerationStructureBuildType::E_DEVICE_KHR:
    return "AccelerationStructureBuildType::E_DEVICE_KHR";
  case AccelerationStructureBuildType::E_HOST_OR_DEVICE_KHR:
    return "AccelerationStructureBuildType::E_HOST_OR_DEVICE_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SamplerCreateMaskBit input) {
  switch (input) {
  case SamplerCreateMaskBit::E_IMAGE_PROCESSING_BIT_QCOM:
    return "SamplerCreateMaskBit::E_IMAGE_PROCESSING_BIT_QCOM";
  case SamplerCreateMaskBit::E_NON_SEAMLESS_CUBE_MAP_BIT_EXT:
    return "SamplerCreateMaskBit::E_NON_SEAMLESS_CUBE_MAP_BIT_EXT";
  case SamplerCreateMaskBit::E_SUBSAMPLED_BIT_EXT:
    return "SamplerCreateMaskBit::E_SUBSAMPLED_BIT_EXT";
  case SamplerCreateMaskBit::E_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT:
    return "SamplerCreateMaskBit::E_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT";
  case SamplerCreateMaskBit::E_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT:
    return "SamplerCreateMaskBit::E_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineCacheHeaderVersion input) {
  switch (input) {
  case PipelineCacheHeaderVersion::E_ONE:
    return "PipelineCacheHeaderVersion::E_ONE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(FormatFeatureMaskBit2 input) {
  switch (input) {
  case FormatFeatureMaskBit2::E_SAMPLED_IMAGE_BIT:
    return "FormatFeatureMaskBit2::E_SAMPLED_IMAGE_BIT";
  case FormatFeatureMaskBit2::E_STORAGE_IMAGE_BIT:
    return "FormatFeatureMaskBit2::E_STORAGE_IMAGE_BIT";
  case FormatFeatureMaskBit2::E_STORAGE_IMAGE_ATOMIC_BIT:
    return "FormatFeatureMaskBit2::E_STORAGE_IMAGE_ATOMIC_BIT";
  case FormatFeatureMaskBit2::E_UNIFORM_TEXEL_BUFFER_BIT:
    return "FormatFeatureMaskBit2::E_UNIFORM_TEXEL_BUFFER_BIT";
  case FormatFeatureMaskBit2::E_STORAGE_TEXEL_BUFFER_BIT:
    return "FormatFeatureMaskBit2::E_STORAGE_TEXEL_BUFFER_BIT";
  case FormatFeatureMaskBit2::E_STORAGE_TEXEL_BUFFER_ATOMIC_BIT:
    return "FormatFeatureMaskBit2::E_STORAGE_TEXEL_BUFFER_ATOMIC_BIT";
  case FormatFeatureMaskBit2::E_VERTEX_BUFFER_BIT:
    return "FormatFeatureMaskBit2::E_VERTEX_BUFFER_BIT";
  case FormatFeatureMaskBit2::E_COLOR_ATTACHMENT_BIT:
    return "FormatFeatureMaskBit2::E_COLOR_ATTACHMENT_BIT";
  case FormatFeatureMaskBit2::E_COLOR_ATTACHMENT_BLEND_BIT:
    return "FormatFeatureMaskBit2::E_COLOR_ATTACHMENT_BLEND_BIT";
  case FormatFeatureMaskBit2::E_DEPTH_STENCIL_ATTACHMENT_BIT:
    return "FormatFeatureMaskBit2::E_DEPTH_STENCIL_ATTACHMENT_BIT";
  case FormatFeatureMaskBit2::E_BLIT_SRC_BIT:
    return "FormatFeatureMaskBit2::E_BLIT_SRC_BIT";
  case FormatFeatureMaskBit2::E_BLIT_DST_BIT:
    return "FormatFeatureMaskBit2::E_BLIT_DST_BIT";
  case FormatFeatureMaskBit2::E_SAMPLED_IMAGE_FILTER_LINEAR_BIT:
    return "FormatFeatureMaskBit2::E_SAMPLED_IMAGE_FILTER_LINEAR_BIT";
  case FormatFeatureMaskBit2::E_SAMPLED_IMAGE_FILTER_CUBIC_BIT:
    return "FormatFeatureMaskBit2::E_SAMPLED_IMAGE_FILTER_CUBIC_BIT";
  case FormatFeatureMaskBit2::E_TRANSFER_SRC_BIT:
    return "FormatFeatureMaskBit2::E_TRANSFER_SRC_BIT";
  case FormatFeatureMaskBit2::E_TRANSFER_DST_BIT:
    return "FormatFeatureMaskBit2::E_TRANSFER_DST_BIT";
  case FormatFeatureMaskBit2::E_SAMPLED_IMAGE_FILTER_MINMAX_BIT:
    return "FormatFeatureMaskBit2::E_SAMPLED_IMAGE_FILTER_MINMAX_BIT";
  case FormatFeatureMaskBit2::E_MIDPOINT_CHROMA_SAMPLES_BIT:
    return "FormatFeatureMaskBit2::E_MIDPOINT_CHROMA_SAMPLES_BIT";
  case FormatFeatureMaskBit2::E_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT:
    return "FormatFeatureMaskBit2::E_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT";
  case FormatFeatureMaskBit2::E_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT:
    return "FormatFeatureMaskBit2::E_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT";
  case FormatFeatureMaskBit2::E_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT:
    return "FormatFeatureMaskBit2::E_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT";
  case FormatFeatureMaskBit2::E_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT:
    return "FormatFeatureMaskBit2::E_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT";
  case FormatFeatureMaskBit2::E_DISJOINT_BIT:
    return "FormatFeatureMaskBit2::E_DISJOINT_BIT";
  case FormatFeatureMaskBit2::E_COSITED_CHROMA_SAMPLES_BIT:
    return "FormatFeatureMaskBit2::E_COSITED_CHROMA_SAMPLES_BIT";
  case FormatFeatureMaskBit2::E_STORAGE_READ_WITHOUT_FORMAT_BIT:
    return "FormatFeatureMaskBit2::E_STORAGE_READ_WITHOUT_FORMAT_BIT";
  case FormatFeatureMaskBit2::E_STORAGE_WRITE_WITHOUT_FORMAT_BIT:
    return "FormatFeatureMaskBit2::E_STORAGE_WRITE_WITHOUT_FORMAT_BIT";
  case FormatFeatureMaskBit2::E_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT:
    return "FormatFeatureMaskBit2::E_SAMPLED_IMAGE_DEPTH_COMPARISON_BIT";
  case FormatFeatureMaskBit2::E_OPTICAL_FLOW_IMAGE_BIT_NV:
    return "FormatFeatureMaskBit2::E_OPTICAL_FLOW_IMAGE_BIT_NV";
  case FormatFeatureMaskBit2::E_OPTICAL_FLOW_VECTOR_BIT_NV:
    return "FormatFeatureMaskBit2::E_OPTICAL_FLOW_VECTOR_BIT_NV";
  case FormatFeatureMaskBit2::E_OPTICAL_FLOW_COST_BIT_NV:
    return "FormatFeatureMaskBit2::E_OPTICAL_FLOW_COST_BIT_NV";
  case FormatFeatureMaskBit2::E_WEIGHT_IMAGE_BIT_QCOM:
    return "FormatFeatureMaskBit2::E_WEIGHT_IMAGE_BIT_QCOM";
  case FormatFeatureMaskBit2::E_WEIGHT_SAMPLED_IMAGE_BIT_QCOM:
    return "FormatFeatureMaskBit2::E_WEIGHT_SAMPLED_IMAGE_BIT_QCOM";
  case FormatFeatureMaskBit2::E_BLOCK_MATCHING_BIT_QCOM:
    return "FormatFeatureMaskBit2::E_BLOCK_MATCHING_BIT_QCOM";
  case FormatFeatureMaskBit2::E_BOX_FILTER_SAMPLED_BIT_QCOM:
    return "FormatFeatureMaskBit2::E_BOX_FILTER_SAMPLED_BIT_QCOM";
  case FormatFeatureMaskBit2::E_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR:
    return "FormatFeatureMaskBit2::E_ACCELERATION_STRUCTURE_VERTEX_BUFFER_BIT_KHR";
  case FormatFeatureMaskBit2::E_VIDEO_DECODE_OUTPUT_BIT_KHR:
    return "FormatFeatureMaskBit2::E_VIDEO_DECODE_OUTPUT_BIT_KHR";
  case FormatFeatureMaskBit2::E_VIDEO_DECODE_DPB_BIT_KHR:
    return "FormatFeatureMaskBit2::E_VIDEO_DECODE_DPB_BIT_KHR";
  case FormatFeatureMaskBit2::E_FRAGMENT_DENSITY_MAP_BIT_EXT:
    return "FormatFeatureMaskBit2::E_FRAGMENT_DENSITY_MAP_BIT_EXT";
  case FormatFeatureMaskBit2::E_HOST_IMAGE_TRANSFER_BIT_EXT:
    return "FormatFeatureMaskBit2::E_HOST_IMAGE_TRANSFER_BIT_EXT";
  case FormatFeatureMaskBit2::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR:
    return "FormatFeatureMaskBit2::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
  case FormatFeatureMaskBit2::E_LINEAR_COLOR_ATTACHMENT_BIT_NV:
    return "FormatFeatureMaskBit2::E_LINEAR_COLOR_ATTACHMENT_BIT_NV";
  case FormatFeatureMaskBit2::E_VIDEO_ENCODE_INPUT_BIT_KHR:
    return "FormatFeatureMaskBit2::E_VIDEO_ENCODE_INPUT_BIT_KHR";
  case FormatFeatureMaskBit2::E_VIDEO_ENCODE_DPB_BIT_KHR:
    return "FormatFeatureMaskBit2::E_VIDEO_ENCODE_DPB_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(OutOfBandQueueType input) {
  switch (input) {
  case OutOfBandQueueType::E_RENDER_NV:
    return "OutOfBandQueueType::E_RENDER_NV";
  case OutOfBandQueueType::E_PRESENT_NV:
    return "OutOfBandQueueType::E_PRESENT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CullModeMaskBit input) {
  switch (input) {
  case CullModeMaskBit::E_NONE:
    return "CullModeMaskBit::E_NONE";
  case CullModeMaskBit::E_FRONT_BIT:
    return "CullModeMaskBit::E_FRONT_BIT";
  case CullModeMaskBit::E_BACK_BIT:
    return "CullModeMaskBit::E_BACK_BIT";
  case CullModeMaskBit::E_FRONT_AND_BACK:
    return "CullModeMaskBit::E_FRONT_AND_BACK";
  default:
    std::unreachable();
  }
}

std::string_view ToString(FrontFace input) {
  switch (input) {
  case FrontFace::E_COUNTER_CLOCKWISE:
    return "FrontFace::E_COUNTER_CLOCKWISE";
  case FrontFace::E_CLOCKWISE:
    return "FrontFace::E_CLOCKWISE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(RenderPassCreateMaskBit input) {
  switch (input) {
  case RenderPassCreateMaskBit::E_TRANSFORM_BIT_QCOM:
    return "RenderPassCreateMaskBit::E_TRANSFORM_BIT_QCOM";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DeviceQueueCreateMaskBit input) {
  switch (input) {
  case DeviceQueueCreateMaskBit::E_PROTECTED_BIT:
    return "DeviceQueueCreateMaskBit::E_PROTECTED_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoDecodeUsageMaskBit input) {
  switch (input) {
  case VideoDecodeUsageMaskBit::E_DEFAULT_KHR:
    return "VideoDecodeUsageMaskBit::E_DEFAULT_KHR";
  case VideoDecodeUsageMaskBit::E_TRANSCODING_BIT_KHR:
    return "VideoDecodeUsageMaskBit::E_TRANSCODING_BIT_KHR";
  case VideoDecodeUsageMaskBit::E_OFFLINE_BIT_KHR:
    return "VideoDecodeUsageMaskBit::E_OFFLINE_BIT_KHR";
  case VideoDecodeUsageMaskBit::E_STREAMING_BIT_KHR:
    return "VideoDecodeUsageMaskBit::E_STREAMING_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeCapabilityMaskBit input) {
  switch (input) {
  case VideoEncodeCapabilityMaskBit::E_PRECEDING_EXTERNALLY_ENCODED_BYTES_BIT_KHR:
    return "VideoEncodeCapabilityMaskBit::E_PRECEDING_EXTERNALLY_ENCODED_BYTES_BIT_KHR";
  case VideoEncodeCapabilityMaskBit::E_INSUFFICIENT_BITSTREAM_BUFFER_RANGE_DETECTION_BIT_KHR:
    return "VideoEncodeCapabilityMaskBit::E_INSUFFICIENT_BITSTREAM_BUFFER_RANGE_DETECTION_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ShaderCreateMaskBit input) {
  switch (input) {
  case ShaderCreateMaskBit::E_LINK_STAGE_BIT_EXT:
    return "ShaderCreateMaskBit::E_LINK_STAGE_BIT_EXT";
  case ShaderCreateMaskBit::E_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT:
    return "ShaderCreateMaskBit::E_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT";
  case ShaderCreateMaskBit::E_REQUIRE_FULL_SUBGROUPS_BIT_EXT:
    return "ShaderCreateMaskBit::E_REQUIRE_FULL_SUBGROUPS_BIT_EXT";
  case ShaderCreateMaskBit::E_NO_TASK_SHADER_BIT_EXT:
    return "ShaderCreateMaskBit::E_NO_TASK_SHADER_BIT_EXT";
  case ShaderCreateMaskBit::E_DISPATCH_BASE_BIT_EXT:
    return "ShaderCreateMaskBit::E_DISPATCH_BASE_BIT_EXT";
  case ShaderCreateMaskBit::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_EXT:
    return "ShaderCreateMaskBit::E_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_EXT";
  case ShaderCreateMaskBit::E_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT:
    return "ShaderCreateMaskBit::E_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(OpticalFlowSessionCreateMaskBit input) {
  switch (input) {
  case OpticalFlowSessionCreateMaskBit::E_ENABLE_HINT_BIT_NV:
    return "OpticalFlowSessionCreateMaskBit::E_ENABLE_HINT_BIT_NV";
  case OpticalFlowSessionCreateMaskBit::E_ENABLE_COST_BIT_NV:
    return "OpticalFlowSessionCreateMaskBit::E_ENABLE_COST_BIT_NV";
  case OpticalFlowSessionCreateMaskBit::E_ENABLE_GLOBAL_FLOW_BIT_NV:
    return "OpticalFlowSessionCreateMaskBit::E_ENABLE_GLOBAL_FLOW_BIT_NV";
  case OpticalFlowSessionCreateMaskBit::E_ALLOW_REGIONS_BIT_NV:
    return "OpticalFlowSessionCreateMaskBit::E_ALLOW_REGIONS_BIT_NV";
  case OpticalFlowSessionCreateMaskBit::E_BOTH_DIRECTIONS_BIT_NV:
    return "OpticalFlowSessionCreateMaskBit::E_BOTH_DIRECTIONS_BIT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(MemoryPropertyMaskBit input) {
  switch (input) {
  case MemoryPropertyMaskBit::E_DEVICE_LOCAL_BIT:
    return "MemoryPropertyMaskBit::E_DEVICE_LOCAL_BIT";
  case MemoryPropertyMaskBit::E_HOST_VISIBLE_BIT:
    return "MemoryPropertyMaskBit::E_HOST_VISIBLE_BIT";
  case MemoryPropertyMaskBit::E_HOST_COHERENT_BIT:
    return "MemoryPropertyMaskBit::E_HOST_COHERENT_BIT";
  case MemoryPropertyMaskBit::E_HOST_CACHED_BIT:
    return "MemoryPropertyMaskBit::E_HOST_CACHED_BIT";
  case MemoryPropertyMaskBit::E_LAZILY_ALLOCATED_BIT:
    return "MemoryPropertyMaskBit::E_LAZILY_ALLOCATED_BIT";
  case MemoryPropertyMaskBit::E_RDMA_CAPABLE_BIT_NV:
    return "MemoryPropertyMaskBit::E_RDMA_CAPABLE_BIT_NV";
  case MemoryPropertyMaskBit::E_DEVICE_COHERENT_BIT_AMD:
    return "MemoryPropertyMaskBit::E_DEVICE_COHERENT_BIT_AMD";
  case MemoryPropertyMaskBit::E_DEVICE_UNCACHED_BIT_AMD:
    return "MemoryPropertyMaskBit::E_DEVICE_UNCACHED_BIT_AMD";
  case MemoryPropertyMaskBit::E_PROTECTED_BIT:
    return "MemoryPropertyMaskBit::E_PROTECTED_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeH265CtbSizeMaskBit input) {
  switch (input) {
  case VideoEncodeH265CtbSizeMaskBit::E_16_BIT_KHR:
    return "VideoEncodeH265CtbSizeMaskBit::E_16_BIT_KHR";
  case VideoEncodeH265CtbSizeMaskBit::E_32_BIT_KHR:
    return "VideoEncodeH265CtbSizeMaskBit::E_32_BIT_KHR";
  case VideoEncodeH265CtbSizeMaskBit::E_64_BIT_KHR:
    return "VideoEncodeH265CtbSizeMaskBit::E_64_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(Format input) {
  switch (input) {
  case Format::E_UNDEFINED:
    return "Format::E_UNDEFINED";
  case Format::E_R4G4_UNORM_PACK8:
    return "Format::E_R4G4_UNORM_PACK8";
  case Format::E_R4G4B4A4_UNORM_PACK16:
    return "Format::E_R4G4B4A4_UNORM_PACK16";
  case Format::E_B4G4R4A4_UNORM_PACK16:
    return "Format::E_B4G4R4A4_UNORM_PACK16";
  case Format::E_R5G6B5_UNORM_PACK16:
    return "Format::E_R5G6B5_UNORM_PACK16";
  case Format::E_B5G6R5_UNORM_PACK16:
    return "Format::E_B5G6R5_UNORM_PACK16";
  case Format::E_R5G5B5A1_UNORM_PACK16:
    return "Format::E_R5G5B5A1_UNORM_PACK16";
  case Format::E_B5G5R5A1_UNORM_PACK16:
    return "Format::E_B5G5R5A1_UNORM_PACK16";
  case Format::E_A1R5G5B5_UNORM_PACK16:
    return "Format::E_A1R5G5B5_UNORM_PACK16";
  case Format::E_R8_UNORM:
    return "Format::E_R8_UNORM";
  case Format::E_R8_SNORM:
    return "Format::E_R8_SNORM";
  case Format::E_R8_USCALED:
    return "Format::E_R8_USCALED";
  case Format::E_R8_SSCALED:
    return "Format::E_R8_SSCALED";
  case Format::E_R8_UINT:
    return "Format::E_R8_UINT";
  case Format::E_R8_SINT:
    return "Format::E_R8_SINT";
  case Format::E_R8_SRGB:
    return "Format::E_R8_SRGB";
  case Format::E_R8G8_UNORM:
    return "Format::E_R8G8_UNORM";
  case Format::E_R8G8_SNORM:
    return "Format::E_R8G8_SNORM";
  case Format::E_R8G8_USCALED:
    return "Format::E_R8G8_USCALED";
  case Format::E_R8G8_SSCALED:
    return "Format::E_R8G8_SSCALED";
  case Format::E_R8G8_UINT:
    return "Format::E_R8G8_UINT";
  case Format::E_R8G8_SINT:
    return "Format::E_R8G8_SINT";
  case Format::E_R8G8_SRGB:
    return "Format::E_R8G8_SRGB";
  case Format::E_R8G8B8_UNORM:
    return "Format::E_R8G8B8_UNORM";
  case Format::E_R8G8B8_SNORM:
    return "Format::E_R8G8B8_SNORM";
  case Format::E_R8G8B8_USCALED:
    return "Format::E_R8G8B8_USCALED";
  case Format::E_R8G8B8_SSCALED:
    return "Format::E_R8G8B8_SSCALED";
  case Format::E_R8G8B8_UINT:
    return "Format::E_R8G8B8_UINT";
  case Format::E_R8G8B8_SINT:
    return "Format::E_R8G8B8_SINT";
  case Format::E_R8G8B8_SRGB:
    return "Format::E_R8G8B8_SRGB";
  case Format::E_B8G8R8_UNORM:
    return "Format::E_B8G8R8_UNORM";
  case Format::E_B8G8R8_SNORM:
    return "Format::E_B8G8R8_SNORM";
  case Format::E_B8G8R8_USCALED:
    return "Format::E_B8G8R8_USCALED";
  case Format::E_B8G8R8_SSCALED:
    return "Format::E_B8G8R8_SSCALED";
  case Format::E_B8G8R8_UINT:
    return "Format::E_B8G8R8_UINT";
  case Format::E_B8G8R8_SINT:
    return "Format::E_B8G8R8_SINT";
  case Format::E_B8G8R8_SRGB:
    return "Format::E_B8G8R8_SRGB";
  case Format::E_R8G8B8A8_UNORM:
    return "Format::E_R8G8B8A8_UNORM";
  case Format::E_R8G8B8A8_SNORM:
    return "Format::E_R8G8B8A8_SNORM";
  case Format::E_R8G8B8A8_USCALED:
    return "Format::E_R8G8B8A8_USCALED";
  case Format::E_R8G8B8A8_SSCALED:
    return "Format::E_R8G8B8A8_SSCALED";
  case Format::E_R8G8B8A8_UINT:
    return "Format::E_R8G8B8A8_UINT";
  case Format::E_R8G8B8A8_SINT:
    return "Format::E_R8G8B8A8_SINT";
  case Format::E_R8G8B8A8_SRGB:
    return "Format::E_R8G8B8A8_SRGB";
  case Format::E_B8G8R8A8_UNORM:
    return "Format::E_B8G8R8A8_UNORM";
  case Format::E_B8G8R8A8_SNORM:
    return "Format::E_B8G8R8A8_SNORM";
  case Format::E_B8G8R8A8_USCALED:
    return "Format::E_B8G8R8A8_USCALED";
  case Format::E_B8G8R8A8_SSCALED:
    return "Format::E_B8G8R8A8_SSCALED";
  case Format::E_B8G8R8A8_UINT:
    return "Format::E_B8G8R8A8_UINT";
  case Format::E_B8G8R8A8_SINT:
    return "Format::E_B8G8R8A8_SINT";
  case Format::E_B8G8R8A8_SRGB:
    return "Format::E_B8G8R8A8_SRGB";
  case Format::E_A8B8G8R8_UNORM_PACK32:
    return "Format::E_A8B8G8R8_UNORM_PACK32";
  case Format::E_A8B8G8R8_SNORM_PACK32:
    return "Format::E_A8B8G8R8_SNORM_PACK32";
  case Format::E_A8B8G8R8_USCALED_PACK32:
    return "Format::E_A8B8G8R8_USCALED_PACK32";
  case Format::E_A8B8G8R8_SSCALED_PACK32:
    return "Format::E_A8B8G8R8_SSCALED_PACK32";
  case Format::E_A8B8G8R8_UINT_PACK32:
    return "Format::E_A8B8G8R8_UINT_PACK32";
  case Format::E_A8B8G8R8_SINT_PACK32:
    return "Format::E_A8B8G8R8_SINT_PACK32";
  case Format::E_A8B8G8R8_SRGB_PACK32:
    return "Format::E_A8B8G8R8_SRGB_PACK32";
  case Format::E_A2R10G10B10_UNORM_PACK32:
    return "Format::E_A2R10G10B10_UNORM_PACK32";
  case Format::E_A2R10G10B10_SNORM_PACK32:
    return "Format::E_A2R10G10B10_SNORM_PACK32";
  case Format::E_A2R10G10B10_USCALED_PACK32:
    return "Format::E_A2R10G10B10_USCALED_PACK32";
  case Format::E_A2R10G10B10_SSCALED_PACK32:
    return "Format::E_A2R10G10B10_SSCALED_PACK32";
  case Format::E_A2R10G10B10_UINT_PACK32:
    return "Format::E_A2R10G10B10_UINT_PACK32";
  case Format::E_A2R10G10B10_SINT_PACK32:
    return "Format::E_A2R10G10B10_SINT_PACK32";
  case Format::E_A2B10G10R10_UNORM_PACK32:
    return "Format::E_A2B10G10R10_UNORM_PACK32";
  case Format::E_A2B10G10R10_SNORM_PACK32:
    return "Format::E_A2B10G10R10_SNORM_PACK32";
  case Format::E_A2B10G10R10_USCALED_PACK32:
    return "Format::E_A2B10G10R10_USCALED_PACK32";
  case Format::E_A2B10G10R10_SSCALED_PACK32:
    return "Format::E_A2B10G10R10_SSCALED_PACK32";
  case Format::E_A2B10G10R10_UINT_PACK32:
    return "Format::E_A2B10G10R10_UINT_PACK32";
  case Format::E_A2B10G10R10_SINT_PACK32:
    return "Format::E_A2B10G10R10_SINT_PACK32";
  case Format::E_R16_UNORM:
    return "Format::E_R16_UNORM";
  case Format::E_R16_SNORM:
    return "Format::E_R16_SNORM";
  case Format::E_R16_USCALED:
    return "Format::E_R16_USCALED";
  case Format::E_R16_SSCALED:
    return "Format::E_R16_SSCALED";
  case Format::E_R16_UINT:
    return "Format::E_R16_UINT";
  case Format::E_R16_SINT:
    return "Format::E_R16_SINT";
  case Format::E_R16_SFLOAT:
    return "Format::E_R16_SFLOAT";
  case Format::E_R16G16_UNORM:
    return "Format::E_R16G16_UNORM";
  case Format::E_R16G16_SNORM:
    return "Format::E_R16G16_SNORM";
  case Format::E_R16G16_USCALED:
    return "Format::E_R16G16_USCALED";
  case Format::E_R16G16_SSCALED:
    return "Format::E_R16G16_SSCALED";
  case Format::E_R16G16_UINT:
    return "Format::E_R16G16_UINT";
  case Format::E_R16G16_SINT:
    return "Format::E_R16G16_SINT";
  case Format::E_R16G16_SFLOAT:
    return "Format::E_R16G16_SFLOAT";
  case Format::E_R16G16B16_UNORM:
    return "Format::E_R16G16B16_UNORM";
  case Format::E_R16G16B16_SNORM:
    return "Format::E_R16G16B16_SNORM";
  case Format::E_R16G16B16_USCALED:
    return "Format::E_R16G16B16_USCALED";
  case Format::E_R16G16B16_SSCALED:
    return "Format::E_R16G16B16_SSCALED";
  case Format::E_R16G16B16_UINT:
    return "Format::E_R16G16B16_UINT";
  case Format::E_R16G16B16_SINT:
    return "Format::E_R16G16B16_SINT";
  case Format::E_R16G16B16_SFLOAT:
    return "Format::E_R16G16B16_SFLOAT";
  case Format::E_R16G16B16A16_UNORM:
    return "Format::E_R16G16B16A16_UNORM";
  case Format::E_R16G16B16A16_SNORM:
    return "Format::E_R16G16B16A16_SNORM";
  case Format::E_R16G16B16A16_USCALED:
    return "Format::E_R16G16B16A16_USCALED";
  case Format::E_R16G16B16A16_SSCALED:
    return "Format::E_R16G16B16A16_SSCALED";
  case Format::E_R16G16B16A16_UINT:
    return "Format::E_R16G16B16A16_UINT";
  case Format::E_R16G16B16A16_SINT:
    return "Format::E_R16G16B16A16_SINT";
  case Format::E_R16G16B16A16_SFLOAT:
    return "Format::E_R16G16B16A16_SFLOAT";
  case Format::E_R32_UINT:
    return "Format::E_R32_UINT";
  case Format::E_R32_SINT:
    return "Format::E_R32_SINT";
  case Format::E_R32_SFLOAT:
    return "Format::E_R32_SFLOAT";
  case Format::E_R32G32_UINT:
    return "Format::E_R32G32_UINT";
  case Format::E_R32G32_SINT:
    return "Format::E_R32G32_SINT";
  case Format::E_R32G32_SFLOAT:
    return "Format::E_R32G32_SFLOAT";
  case Format::E_R32G32B32_UINT:
    return "Format::E_R32G32B32_UINT";
  case Format::E_R32G32B32_SINT:
    return "Format::E_R32G32B32_SINT";
  case Format::E_R32G32B32_SFLOAT:
    return "Format::E_R32G32B32_SFLOAT";
  case Format::E_R32G32B32A32_UINT:
    return "Format::E_R32G32B32A32_UINT";
  case Format::E_R32G32B32A32_SINT:
    return "Format::E_R32G32B32A32_SINT";
  case Format::E_R32G32B32A32_SFLOAT:
    return "Format::E_R32G32B32A32_SFLOAT";
  case Format::E_R64_UINT:
    return "Format::E_R64_UINT";
  case Format::E_R64_SINT:
    return "Format::E_R64_SINT";
  case Format::E_R64_SFLOAT:
    return "Format::E_R64_SFLOAT";
  case Format::E_R64G64_UINT:
    return "Format::E_R64G64_UINT";
  case Format::E_R64G64_SINT:
    return "Format::E_R64G64_SINT";
  case Format::E_R64G64_SFLOAT:
    return "Format::E_R64G64_SFLOAT";
  case Format::E_R64G64B64_UINT:
    return "Format::E_R64G64B64_UINT";
  case Format::E_R64G64B64_SINT:
    return "Format::E_R64G64B64_SINT";
  case Format::E_R64G64B64_SFLOAT:
    return "Format::E_R64G64B64_SFLOAT";
  case Format::E_R64G64B64A64_UINT:
    return "Format::E_R64G64B64A64_UINT";
  case Format::E_R64G64B64A64_SINT:
    return "Format::E_R64G64B64A64_SINT";
  case Format::E_R64G64B64A64_SFLOAT:
    return "Format::E_R64G64B64A64_SFLOAT";
  case Format::E_B10G11R11_UFLOAT_PACK32:
    return "Format::E_B10G11R11_UFLOAT_PACK32";
  case Format::E_E5B9G9R9_UFLOAT_PACK32:
    return "Format::E_E5B9G9R9_UFLOAT_PACK32";
  case Format::E_D16_UNORM:
    return "Format::E_D16_UNORM";
  case Format::E_X8_D24_UNORM_PACK32:
    return "Format::E_X8_D24_UNORM_PACK32";
  case Format::E_D32_SFLOAT:
    return "Format::E_D32_SFLOAT";
  case Format::E_S8_UINT:
    return "Format::E_S8_UINT";
  case Format::E_D16_UNORM_S8_UINT:
    return "Format::E_D16_UNORM_S8_UINT";
  case Format::E_D24_UNORM_S8_UINT:
    return "Format::E_D24_UNORM_S8_UINT";
  case Format::E_D32_SFLOAT_S8_UINT:
    return "Format::E_D32_SFLOAT_S8_UINT";
  case Format::E_BC1_RGB_UNORM_BLOCK:
    return "Format::E_BC1_RGB_UNORM_BLOCK";
  case Format::E_BC1_RGB_SRGB_BLOCK:
    return "Format::E_BC1_RGB_SRGB_BLOCK";
  case Format::E_BC1_RGBA_UNORM_BLOCK:
    return "Format::E_BC1_RGBA_UNORM_BLOCK";
  case Format::E_BC1_RGBA_SRGB_BLOCK:
    return "Format::E_BC1_RGBA_SRGB_BLOCK";
  case Format::E_BC2_UNORM_BLOCK:
    return "Format::E_BC2_UNORM_BLOCK";
  case Format::E_BC2_SRGB_BLOCK:
    return "Format::E_BC2_SRGB_BLOCK";
  case Format::E_BC3_UNORM_BLOCK:
    return "Format::E_BC3_UNORM_BLOCK";
  case Format::E_BC3_SRGB_BLOCK:
    return "Format::E_BC3_SRGB_BLOCK";
  case Format::E_BC4_UNORM_BLOCK:
    return "Format::E_BC4_UNORM_BLOCK";
  case Format::E_BC4_SNORM_BLOCK:
    return "Format::E_BC4_SNORM_BLOCK";
  case Format::E_BC5_UNORM_BLOCK:
    return "Format::E_BC5_UNORM_BLOCK";
  case Format::E_BC5_SNORM_BLOCK:
    return "Format::E_BC5_SNORM_BLOCK";
  case Format::E_BC6H_UFLOAT_BLOCK:
    return "Format::E_BC6H_UFLOAT_BLOCK";
  case Format::E_BC6H_SFLOAT_BLOCK:
    return "Format::E_BC6H_SFLOAT_BLOCK";
  case Format::E_BC7_UNORM_BLOCK:
    return "Format::E_BC7_UNORM_BLOCK";
  case Format::E_BC7_SRGB_BLOCK:
    return "Format::E_BC7_SRGB_BLOCK";
  case Format::E_ETC2_R8G8B8_UNORM_BLOCK:
    return "Format::E_ETC2_R8G8B8_UNORM_BLOCK";
  case Format::E_ETC2_R8G8B8_SRGB_BLOCK:
    return "Format::E_ETC2_R8G8B8_SRGB_BLOCK";
  case Format::E_ETC2_R8G8B8A1_UNORM_BLOCK:
    return "Format::E_ETC2_R8G8B8A1_UNORM_BLOCK";
  case Format::E_ETC2_R8G8B8A1_SRGB_BLOCK:
    return "Format::E_ETC2_R8G8B8A1_SRGB_BLOCK";
  case Format::E_ETC2_R8G8B8A8_UNORM_BLOCK:
    return "Format::E_ETC2_R8G8B8A8_UNORM_BLOCK";
  case Format::E_ETC2_R8G8B8A8_SRGB_BLOCK:
    return "Format::E_ETC2_R8G8B8A8_SRGB_BLOCK";
  case Format::E_EAC_R11_UNORM_BLOCK:
    return "Format::E_EAC_R11_UNORM_BLOCK";
  case Format::E_EAC_R11_SNORM_BLOCK:
    return "Format::E_EAC_R11_SNORM_BLOCK";
  case Format::E_EAC_R11G11_UNORM_BLOCK:
    return "Format::E_EAC_R11G11_UNORM_BLOCK";
  case Format::E_EAC_R11G11_SNORM_BLOCK:
    return "Format::E_EAC_R11G11_SNORM_BLOCK";
  case Format::E_ASTC_4x4_UNORM_BLOCK:
    return "Format::E_ASTC_4x4_UNORM_BLOCK";
  case Format::E_ASTC_4x4_SRGB_BLOCK:
    return "Format::E_ASTC_4x4_SRGB_BLOCK";
  case Format::E_ASTC_5x4_UNORM_BLOCK:
    return "Format::E_ASTC_5x4_UNORM_BLOCK";
  case Format::E_ASTC_5x4_SRGB_BLOCK:
    return "Format::E_ASTC_5x4_SRGB_BLOCK";
  case Format::E_ASTC_5x5_UNORM_BLOCK:
    return "Format::E_ASTC_5x5_UNORM_BLOCK";
  case Format::E_ASTC_5x5_SRGB_BLOCK:
    return "Format::E_ASTC_5x5_SRGB_BLOCK";
  case Format::E_ASTC_6x5_UNORM_BLOCK:
    return "Format::E_ASTC_6x5_UNORM_BLOCK";
  case Format::E_ASTC_6x5_SRGB_BLOCK:
    return "Format::E_ASTC_6x5_SRGB_BLOCK";
  case Format::E_ASTC_6x6_UNORM_BLOCK:
    return "Format::E_ASTC_6x6_UNORM_BLOCK";
  case Format::E_ASTC_6x6_SRGB_BLOCK:
    return "Format::E_ASTC_6x6_SRGB_BLOCK";
  case Format::E_ASTC_8x5_UNORM_BLOCK:
    return "Format::E_ASTC_8x5_UNORM_BLOCK";
  case Format::E_ASTC_8x5_SRGB_BLOCK:
    return "Format::E_ASTC_8x5_SRGB_BLOCK";
  case Format::E_ASTC_8x6_UNORM_BLOCK:
    return "Format::E_ASTC_8x6_UNORM_BLOCK";
  case Format::E_ASTC_8x6_SRGB_BLOCK:
    return "Format::E_ASTC_8x6_SRGB_BLOCK";
  case Format::E_ASTC_8x8_UNORM_BLOCK:
    return "Format::E_ASTC_8x8_UNORM_BLOCK";
  case Format::E_ASTC_8x8_SRGB_BLOCK:
    return "Format::E_ASTC_8x8_SRGB_BLOCK";
  case Format::E_ASTC_10x5_UNORM_BLOCK:
    return "Format::E_ASTC_10x5_UNORM_BLOCK";
  case Format::E_ASTC_10x5_SRGB_BLOCK:
    return "Format::E_ASTC_10x5_SRGB_BLOCK";
  case Format::E_ASTC_10x6_UNORM_BLOCK:
    return "Format::E_ASTC_10x6_UNORM_BLOCK";
  case Format::E_ASTC_10x6_SRGB_BLOCK:
    return "Format::E_ASTC_10x6_SRGB_BLOCK";
  case Format::E_ASTC_10x8_UNORM_BLOCK:
    return "Format::E_ASTC_10x8_UNORM_BLOCK";
  case Format::E_ASTC_10x8_SRGB_BLOCK:
    return "Format::E_ASTC_10x8_SRGB_BLOCK";
  case Format::E_ASTC_10x10_UNORM_BLOCK:
    return "Format::E_ASTC_10x10_UNORM_BLOCK";
  case Format::E_ASTC_10x10_SRGB_BLOCK:
    return "Format::E_ASTC_10x10_SRGB_BLOCK";
  case Format::E_ASTC_12x10_UNORM_BLOCK:
    return "Format::E_ASTC_12x10_UNORM_BLOCK";
  case Format::E_ASTC_12x10_SRGB_BLOCK:
    return "Format::E_ASTC_12x10_SRGB_BLOCK";
  case Format::E_ASTC_12x12_UNORM_BLOCK:
    return "Format::E_ASTC_12x12_UNORM_BLOCK";
  case Format::E_ASTC_12x12_SRGB_BLOCK:
    return "Format::E_ASTC_12x12_SRGB_BLOCK";
  case Format::E_A1B5G5R5_UNORM_PACK16_KHR:
    return "Format::E_A1B5G5R5_UNORM_PACK16_KHR";
  case Format::E_A8_UNORM_KHR:
    return "Format::E_A8_UNORM_KHR";
  case Format::E_R16G16_SFIXED5_NV:
    return "Format::E_R16G16_SFIXED5_NV";
  case Format::E_PVRTC1_2BPP_UNORM_BLOCK_IMG:
    return "Format::E_PVRTC1_2BPP_UNORM_BLOCK_IMG";
  case Format::E_PVRTC1_4BPP_UNORM_BLOCK_IMG:
    return "Format::E_PVRTC1_4BPP_UNORM_BLOCK_IMG";
  case Format::E_PVRTC2_2BPP_UNORM_BLOCK_IMG:
    return "Format::E_PVRTC2_2BPP_UNORM_BLOCK_IMG";
  case Format::E_PVRTC2_4BPP_UNORM_BLOCK_IMG:
    return "Format::E_PVRTC2_4BPP_UNORM_BLOCK_IMG";
  case Format::E_PVRTC1_2BPP_SRGB_BLOCK_IMG:
    return "Format::E_PVRTC1_2BPP_SRGB_BLOCK_IMG";
  case Format::E_PVRTC1_4BPP_SRGB_BLOCK_IMG:
    return "Format::E_PVRTC1_4BPP_SRGB_BLOCK_IMG";
  case Format::E_PVRTC2_2BPP_SRGB_BLOCK_IMG:
    return "Format::E_PVRTC2_2BPP_SRGB_BLOCK_IMG";
  case Format::E_PVRTC2_4BPP_SRGB_BLOCK_IMG:
    return "Format::E_PVRTC2_4BPP_SRGB_BLOCK_IMG";
  case Format::E_G8_B8R8_2PLANE_444_UNORM:
    return "Format::E_G8_B8R8_2PLANE_444_UNORM";
  case Format::E_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16:
    return "Format::E_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16";
  case Format::E_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16:
    return "Format::E_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16";
  case Format::E_G16_B16R16_2PLANE_444_UNORM:
    return "Format::E_G16_B16R16_2PLANE_444_UNORM";
  case Format::E_A4R4G4B4_UNORM_PACK16:
    return "Format::E_A4R4G4B4_UNORM_PACK16";
  case Format::E_A4B4G4R4_UNORM_PACK16:
    return "Format::E_A4B4G4R4_UNORM_PACK16";
  case Format::E_ASTC_4x4_SFLOAT_BLOCK:
    return "Format::E_ASTC_4x4_SFLOAT_BLOCK";
  case Format::E_ASTC_5x4_SFLOAT_BLOCK:
    return "Format::E_ASTC_5x4_SFLOAT_BLOCK";
  case Format::E_ASTC_5x5_SFLOAT_BLOCK:
    return "Format::E_ASTC_5x5_SFLOAT_BLOCK";
  case Format::E_ASTC_6x5_SFLOAT_BLOCK:
    return "Format::E_ASTC_6x5_SFLOAT_BLOCK";
  case Format::E_ASTC_6x6_SFLOAT_BLOCK:
    return "Format::E_ASTC_6x6_SFLOAT_BLOCK";
  case Format::E_ASTC_8x5_SFLOAT_BLOCK:
    return "Format::E_ASTC_8x5_SFLOAT_BLOCK";
  case Format::E_ASTC_8x6_SFLOAT_BLOCK:
    return "Format::E_ASTC_8x6_SFLOAT_BLOCK";
  case Format::E_ASTC_8x8_SFLOAT_BLOCK:
    return "Format::E_ASTC_8x8_SFLOAT_BLOCK";
  case Format::E_ASTC_10x5_SFLOAT_BLOCK:
    return "Format::E_ASTC_10x5_SFLOAT_BLOCK";
  case Format::E_ASTC_10x6_SFLOAT_BLOCK:
    return "Format::E_ASTC_10x6_SFLOAT_BLOCK";
  case Format::E_ASTC_10x8_SFLOAT_BLOCK:
    return "Format::E_ASTC_10x8_SFLOAT_BLOCK";
  case Format::E_ASTC_10x10_SFLOAT_BLOCK:
    return "Format::E_ASTC_10x10_SFLOAT_BLOCK";
  case Format::E_ASTC_12x10_SFLOAT_BLOCK:
    return "Format::E_ASTC_12x10_SFLOAT_BLOCK";
  case Format::E_ASTC_12x12_SFLOAT_BLOCK:
    return "Format::E_ASTC_12x12_SFLOAT_BLOCK";
  case Format::E_G8B8G8R8_422_UNORM:
    return "Format::E_G8B8G8R8_422_UNORM";
  case Format::E_B8G8R8G8_422_UNORM:
    return "Format::E_B8G8R8G8_422_UNORM";
  case Format::E_G8_B8_R8_3PLANE_420_UNORM:
    return "Format::E_G8_B8_R8_3PLANE_420_UNORM";
  case Format::E_G8_B8R8_2PLANE_420_UNORM:
    return "Format::E_G8_B8R8_2PLANE_420_UNORM";
  case Format::E_G8_B8_R8_3PLANE_422_UNORM:
    return "Format::E_G8_B8_R8_3PLANE_422_UNORM";
  case Format::E_G8_B8R8_2PLANE_422_UNORM:
    return "Format::E_G8_B8R8_2PLANE_422_UNORM";
  case Format::E_G8_B8_R8_3PLANE_444_UNORM:
    return "Format::E_G8_B8_R8_3PLANE_444_UNORM";
  case Format::E_R10X6_UNORM_PACK16:
    return "Format::E_R10X6_UNORM_PACK16";
  case Format::E_R10X6G10X6_UNORM_2PACK16:
    return "Format::E_R10X6G10X6_UNORM_2PACK16";
  case Format::E_R10X6G10X6B10X6A10X6_UNORM_4PACK16:
    return "Format::E_R10X6G10X6B10X6A10X6_UNORM_4PACK16";
  case Format::E_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16:
    return "Format::E_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16";
  case Format::E_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16:
    return "Format::E_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16";
  case Format::E_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16:
    return "Format::E_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16";
  case Format::E_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16:
    return "Format::E_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16";
  case Format::E_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16:
    return "Format::E_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16";
  case Format::E_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16:
    return "Format::E_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16";
  case Format::E_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16:
    return "Format::E_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16";
  case Format::E_R12X4_UNORM_PACK16:
    return "Format::E_R12X4_UNORM_PACK16";
  case Format::E_R12X4G12X4_UNORM_2PACK16:
    return "Format::E_R12X4G12X4_UNORM_2PACK16";
  case Format::E_R12X4G12X4B12X4A12X4_UNORM_4PACK16:
    return "Format::E_R12X4G12X4B12X4A12X4_UNORM_4PACK16";
  case Format::E_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16:
    return "Format::E_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16";
  case Format::E_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16:
    return "Format::E_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16";
  case Format::E_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16:
    return "Format::E_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16";
  case Format::E_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16:
    return "Format::E_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16";
  case Format::E_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16:
    return "Format::E_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16";
  case Format::E_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16:
    return "Format::E_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16";
  case Format::E_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16:
    return "Format::E_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16";
  case Format::E_G16B16G16R16_422_UNORM:
    return "Format::E_G16B16G16R16_422_UNORM";
  case Format::E_B16G16R16G16_422_UNORM:
    return "Format::E_B16G16R16G16_422_UNORM";
  case Format::E_G16_B16_R16_3PLANE_420_UNORM:
    return "Format::E_G16_B16_R16_3PLANE_420_UNORM";
  case Format::E_G16_B16R16_2PLANE_420_UNORM:
    return "Format::E_G16_B16R16_2PLANE_420_UNORM";
  case Format::E_G16_B16_R16_3PLANE_422_UNORM:
    return "Format::E_G16_B16_R16_3PLANE_422_UNORM";
  case Format::E_G16_B16R16_2PLANE_422_UNORM:
    return "Format::E_G16_B16R16_2PLANE_422_UNORM";
  case Format::E_G16_B16_R16_3PLANE_444_UNORM:
    return "Format::E_G16_B16_R16_3PLANE_444_UNORM";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AccelerationStructureMemoryRequirementsType input) {
  switch (input) {
  case AccelerationStructureMemoryRequirementsType::E_OBJECT_NV:
    return "AccelerationStructureMemoryRequirementsType::E_OBJECT_NV";
  case AccelerationStructureMemoryRequirementsType::E_BUILD_SCRATCH_NV:
    return "AccelerationStructureMemoryRequirementsType::E_BUILD_SCRATCH_NV";
  case AccelerationStructureMemoryRequirementsType::E_UPDATE_SCRATCH_NV:
    return "AccelerationStructureMemoryRequirementsType::E_UPDATE_SCRATCH_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SemaphoreWaitMaskBit input) {
  switch (input) {
  case SemaphoreWaitMaskBit::E_ANY_BIT:
    return "SemaphoreWaitMaskBit::E_ANY_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BufferCreateMaskBit input) {
  switch (input) {
  case BufferCreateMaskBit::E_SPARSE_BINDING_BIT:
    return "BufferCreateMaskBit::E_SPARSE_BINDING_BIT";
  case BufferCreateMaskBit::E_SPARSE_RESIDENCY_BIT:
    return "BufferCreateMaskBit::E_SPARSE_RESIDENCY_BIT";
  case BufferCreateMaskBit::E_SPARSE_ALIASED_BIT:
    return "BufferCreateMaskBit::E_SPARSE_ALIASED_BIT";
  case BufferCreateMaskBit::E_VIDEO_PROFILE_INDEPENDENT_BIT_KHR:
    return "BufferCreateMaskBit::E_VIDEO_PROFILE_INDEPENDENT_BIT_KHR";
  case BufferCreateMaskBit::E_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT:
    return "BufferCreateMaskBit::E_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT";
  case BufferCreateMaskBit::E_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT:
    return "BufferCreateMaskBit::E_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT";
  case BufferCreateMaskBit::E_PROTECTED_BIT:
    return "BufferCreateMaskBit::E_PROTECTED_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineShaderStageCreateMaskBit input) {
  switch (input) {
  case PipelineShaderStageCreateMaskBit::E_ALLOW_VARYING_SUBGROUP_SIZE_BIT:
    return "PipelineShaderStageCreateMaskBit::E_ALLOW_VARYING_SUBGROUP_SIZE_BIT";
  case PipelineShaderStageCreateMaskBit::E_REQUIRE_FULL_SUBGROUPS_BIT:
    return "PipelineShaderStageCreateMaskBit::E_REQUIRE_FULL_SUBGROUPS_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ExternalSemaphoreHandleTypeMaskBit input) {
  switch (input) {
  case ExternalSemaphoreHandleTypeMaskBit::E_OPAQUE_FD_BIT:
    return "ExternalSemaphoreHandleTypeMaskBit::E_OPAQUE_FD_BIT";
  case ExternalSemaphoreHandleTypeMaskBit::E_OPAQUE_WIN32_BIT:
    return "ExternalSemaphoreHandleTypeMaskBit::E_OPAQUE_WIN32_BIT";
  case ExternalSemaphoreHandleTypeMaskBit::E_OPAQUE_WIN32_KMT_BIT:
    return "ExternalSemaphoreHandleTypeMaskBit::E_OPAQUE_WIN32_KMT_BIT";
  case ExternalSemaphoreHandleTypeMaskBit::E_D3D12_FENCE_BIT:
    return "ExternalSemaphoreHandleTypeMaskBit::E_D3D12_FENCE_BIT";
  case ExternalSemaphoreHandleTypeMaskBit::E_SYNC_FD_BIT:
    return "ExternalSemaphoreHandleTypeMaskBit::E_SYNC_FD_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ShaderStageMaskBit input) {
  switch (input) {
  case ShaderStageMaskBit::E_VERTEX_BIT:
    return "ShaderStageMaskBit::E_VERTEX_BIT";
  case ShaderStageMaskBit::E_TESSELLATION_CONTROL_BIT:
    return "ShaderStageMaskBit::E_TESSELLATION_CONTROL_BIT";
  case ShaderStageMaskBit::E_TESSELLATION_EVALUATION_BIT:
    return "ShaderStageMaskBit::E_TESSELLATION_EVALUATION_BIT";
  case ShaderStageMaskBit::E_GEOMETRY_BIT:
    return "ShaderStageMaskBit::E_GEOMETRY_BIT";
  case ShaderStageMaskBit::E_FRAGMENT_BIT:
    return "ShaderStageMaskBit::E_FRAGMENT_BIT";
  case ShaderStageMaskBit::E_COMPUTE_BIT:
    return "ShaderStageMaskBit::E_COMPUTE_BIT";
  case ShaderStageMaskBit::E_ALL_GRAPHICS:
    return "ShaderStageMaskBit::E_ALL_GRAPHICS";
  case ShaderStageMaskBit::E_ALL:
    return "ShaderStageMaskBit::E_ALL";
  case ShaderStageMaskBit::E_CLUSTER_CULLING_BIT_HUAWEI:
    return "ShaderStageMaskBit::E_CLUSTER_CULLING_BIT_HUAWEI";
  case ShaderStageMaskBit::E_RAYGEN_BIT_KHR:
    return "ShaderStageMaskBit::E_RAYGEN_BIT_KHR";
  case ShaderStageMaskBit::E_ANY_HIT_BIT_KHR:
    return "ShaderStageMaskBit::E_ANY_HIT_BIT_KHR";
  case ShaderStageMaskBit::E_CLOSEST_HIT_BIT_KHR:
    return "ShaderStageMaskBit::E_CLOSEST_HIT_BIT_KHR";
  case ShaderStageMaskBit::E_MISS_BIT_KHR:
    return "ShaderStageMaskBit::E_MISS_BIT_KHR";
  case ShaderStageMaskBit::E_INTERSECTION_BIT_KHR:
    return "ShaderStageMaskBit::E_INTERSECTION_BIT_KHR";
  case ShaderStageMaskBit::E_CALLABLE_BIT_KHR:
    return "ShaderStageMaskBit::E_CALLABLE_BIT_KHR";
  case ShaderStageMaskBit::E_TASK_BIT_EXT:
    return "ShaderStageMaskBit::E_TASK_BIT_EXT";
  case ShaderStageMaskBit::E_MESH_BIT_EXT:
    return "ShaderStageMaskBit::E_MESH_BIT_EXT";
  case ShaderStageMaskBit::E_SUBPASS_SHADING_BIT_HUAWEI:
    return "ShaderStageMaskBit::E_SUBPASS_SHADING_BIT_HUAWEI";
  default:
    std::unreachable();
  }
}

std::string_view ToString(TimeDomain input) {
  switch (input) {
  case TimeDomain::E_DEVICE_KHR:
    return "TimeDomain::E_DEVICE_KHR";
  case TimeDomain::E_CLOCK_MONOTONIC_KHR:
    return "TimeDomain::E_CLOCK_MONOTONIC_KHR";
  case TimeDomain::E_CLOCK_MONOTONIC_RAW_KHR:
    return "TimeDomain::E_CLOCK_MONOTONIC_RAW_KHR";
  case TimeDomain::E_QUERY_PERFORMANCE_COUNTER_KHR:
    return "TimeDomain::E_QUERY_PERFORMANCE_COUNTER_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ImageViewCreateMaskBit input) {
  switch (input) {
  case ImageViewCreateMaskBit::E_FRAGMENT_DENSITY_MAP_DEFERRED_BIT_EXT:
    return "ImageViewCreateMaskBit::E_FRAGMENT_DENSITY_MAP_DEFERRED_BIT_EXT";
  case ImageViewCreateMaskBit::E_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT:
    return "ImageViewCreateMaskBit::E_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT";
  case ImageViewCreateMaskBit::E_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT:
    return "ImageViewCreateMaskBit::E_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ExternalMemoryFeatureMaskBit input) {
  switch (input) {
  case ExternalMemoryFeatureMaskBit::E_DEDICATED_ONLY_BIT:
    return "ExternalMemoryFeatureMaskBit::E_DEDICATED_ONLY_BIT";
  case ExternalMemoryFeatureMaskBit::E_EXPORTABLE_BIT:
    return "ExternalMemoryFeatureMaskBit::E_EXPORTABLE_BIT";
  case ExternalMemoryFeatureMaskBit::E_IMPORTABLE_BIT:
    return "ExternalMemoryFeatureMaskBit::E_IMPORTABLE_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(StructureType input) {
  switch (input) {
  case StructureType::E_APPLICATION_INFO:
    return "StructureType::E_APPLICATION_INFO";
  case StructureType::E_INSTANCE_CREATE_INFO:
    return "StructureType::E_INSTANCE_CREATE_INFO";
  case StructureType::E_DEVICE_QUEUE_CREATE_INFO:
    return "StructureType::E_DEVICE_QUEUE_CREATE_INFO";
  case StructureType::E_DEVICE_CREATE_INFO:
    return "StructureType::E_DEVICE_CREATE_INFO";
  case StructureType::E_SUBMIT_INFO:
    return "StructureType::E_SUBMIT_INFO";
  case StructureType::E_MEMORY_ALLOCATE_INFO:
    return "StructureType::E_MEMORY_ALLOCATE_INFO";
  case StructureType::E_MAPPED_MEMORY_RANGE:
    return "StructureType::E_MAPPED_MEMORY_RANGE";
  case StructureType::E_BIND_SPARSE_INFO:
    return "StructureType::E_BIND_SPARSE_INFO";
  case StructureType::E_FENCE_CREATE_INFO:
    return "StructureType::E_FENCE_CREATE_INFO";
  case StructureType::E_SEMAPHORE_CREATE_INFO:
    return "StructureType::E_SEMAPHORE_CREATE_INFO";
  case StructureType::E_EVENT_CREATE_INFO:
    return "StructureType::E_EVENT_CREATE_INFO";
  case StructureType::E_QUERY_POOL_CREATE_INFO:
    return "StructureType::E_QUERY_POOL_CREATE_INFO";
  case StructureType::E_BUFFER_CREATE_INFO:
    return "StructureType::E_BUFFER_CREATE_INFO";
  case StructureType::E_BUFFER_VIEW_CREATE_INFO:
    return "StructureType::E_BUFFER_VIEW_CREATE_INFO";
  case StructureType::E_IMAGE_CREATE_INFO:
    return "StructureType::E_IMAGE_CREATE_INFO";
  case StructureType::E_IMAGE_VIEW_CREATE_INFO:
    return "StructureType::E_IMAGE_VIEW_CREATE_INFO";
  case StructureType::E_SHADER_MODULE_CREATE_INFO:
    return "StructureType::E_SHADER_MODULE_CREATE_INFO";
  case StructureType::E_PIPELINE_CACHE_CREATE_INFO:
    return "StructureType::E_PIPELINE_CACHE_CREATE_INFO";
  case StructureType::E_PIPELINE_SHADER_STAGE_CREATE_INFO:
    return "StructureType::E_PIPELINE_SHADER_STAGE_CREATE_INFO";
  case StructureType::E_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO:
    return "StructureType::E_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO";
  case StructureType::E_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO:
    return "StructureType::E_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO";
  case StructureType::E_PIPELINE_TESSELLATION_STATE_CREATE_INFO:
    return "StructureType::E_PIPELINE_TESSELLATION_STATE_CREATE_INFO";
  case StructureType::E_PIPELINE_VIEWPORT_STATE_CREATE_INFO:
    return "StructureType::E_PIPELINE_VIEWPORT_STATE_CREATE_INFO";
  case StructureType::E_PIPELINE_RASTERIZATION_STATE_CREATE_INFO:
    return "StructureType::E_PIPELINE_RASTERIZATION_STATE_CREATE_INFO";
  case StructureType::E_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO:
    return "StructureType::E_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO";
  case StructureType::E_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO:
    return "StructureType::E_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO";
  case StructureType::E_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO:
    return "StructureType::E_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO";
  case StructureType::E_PIPELINE_DYNAMIC_STATE_CREATE_INFO:
    return "StructureType::E_PIPELINE_DYNAMIC_STATE_CREATE_INFO";
  case StructureType::E_GRAPHICS_PIPELINE_CREATE_INFO:
    return "StructureType::E_GRAPHICS_PIPELINE_CREATE_INFO";
  case StructureType::E_COMPUTE_PIPELINE_CREATE_INFO:
    return "StructureType::E_COMPUTE_PIPELINE_CREATE_INFO";
  case StructureType::E_PIPELINE_LAYOUT_CREATE_INFO:
    return "StructureType::E_PIPELINE_LAYOUT_CREATE_INFO";
  case StructureType::E_SAMPLER_CREATE_INFO:
    return "StructureType::E_SAMPLER_CREATE_INFO";
  case StructureType::E_DESCRIPTOR_SET_LAYOUT_CREATE_INFO:
    return "StructureType::E_DESCRIPTOR_SET_LAYOUT_CREATE_INFO";
  case StructureType::E_DESCRIPTOR_POOL_CREATE_INFO:
    return "StructureType::E_DESCRIPTOR_POOL_CREATE_INFO";
  case StructureType::E_DESCRIPTOR_SET_ALLOCATE_INFO:
    return "StructureType::E_DESCRIPTOR_SET_ALLOCATE_INFO";
  case StructureType::E_WRITE_DESCRIPTOR_SET:
    return "StructureType::E_WRITE_DESCRIPTOR_SET";
  case StructureType::E_COPY_DESCRIPTOR_SET:
    return "StructureType::E_COPY_DESCRIPTOR_SET";
  case StructureType::E_FRAMEBUFFER_CREATE_INFO:
    return "StructureType::E_FRAMEBUFFER_CREATE_INFO";
  case StructureType::E_RENDER_PASS_CREATE_INFO:
    return "StructureType::E_RENDER_PASS_CREATE_INFO";
  case StructureType::E_COMMAND_POOL_CREATE_INFO:
    return "StructureType::E_COMMAND_POOL_CREATE_INFO";
  case StructureType::E_COMMAND_BUFFER_ALLOCATE_INFO:
    return "StructureType::E_COMMAND_BUFFER_ALLOCATE_INFO";
  case StructureType::E_COMMAND_BUFFER_INHERITANCE_INFO:
    return "StructureType::E_COMMAND_BUFFER_INHERITANCE_INFO";
  case StructureType::E_COMMAND_BUFFER_BEGIN_INFO:
    return "StructureType::E_COMMAND_BUFFER_BEGIN_INFO";
  case StructureType::E_RENDER_PASS_BEGIN_INFO:
    return "StructureType::E_RENDER_PASS_BEGIN_INFO";
  case StructureType::E_BUFFER_MEMORY_BARRIER:
    return "StructureType::E_BUFFER_MEMORY_BARRIER";
  case StructureType::E_IMAGE_MEMORY_BARRIER:
    return "StructureType::E_IMAGE_MEMORY_BARRIER";
  case StructureType::E_MEMORY_BARRIER:
    return "StructureType::E_MEMORY_BARRIER";
  case StructureType::E_LOADER_INSTANCE_CREATE_INFO:
    return "StructureType::E_LOADER_INSTANCE_CREATE_INFO";
  case StructureType::E_LOADER_DEVICE_CREATE_INFO:
    return "StructureType::E_LOADER_DEVICE_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_7_PROPERTIES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_LIST_KHR";
  case StructureType::E_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_LAYERED_API_PROPERTIES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_LAYERED_API_VULKAN_PROPERTIES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR";
  case StructureType::E_CALIBRATED_TIMESTAMP_INFO_KHR:
    return "StructureType::E_CALIBRATED_TIMESTAMP_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_KHR";
  case StructureType::E_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_KHR:
    return "StructureType::E_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM";
  case StructureType::E_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM:
    return "StructureType::E_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM";
  case StructureType::E_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM:
    return "StructureType::E_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM";
  case StructureType::E_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM:
    return "StructureType::E_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM";
  case StructureType::E_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM:
    return "StructureType::E_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV";
  case StructureType::E_VIDEO_DECODE_AV1_CAPABILITIES_KHR:
    return "StructureType::E_VIDEO_DECODE_AV1_CAPABILITIES_KHR";
  case StructureType::E_VIDEO_DECODE_AV1_PICTURE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_AV1_PICTURE_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_AV1_PROFILE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_AV1_PROFILE_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_AV1_SESSION_PARAMETERS_CREATE_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_AV1_DPB_SLOT_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM";
  case StructureType::E_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM:
    return "StructureType::E_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM";
  case StructureType::E_LAYER_SETTINGS_CREATE_INFO_EXT:
    return "StructureType::E_LAYER_SETTINGS_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR";
  case StructureType::E_RENDERING_AREA_INFO_KHR:
    return "StructureType::E_RENDERING_AREA_INFO_KHR";
  case StructureType::E_DEVICE_IMAGE_SUBRESOURCE_INFO_KHR:
    return "StructureType::E_DEVICE_IMAGE_SUBRESOURCE_INFO_KHR";
  case StructureType::E_SUBRESOURCE_LAYOUT_2_KHR:
    return "StructureType::E_SUBRESOURCE_LAYOUT_2_KHR";
  case StructureType::E_IMAGE_SUBRESOURCE_2_KHR:
    return "StructureType::E_IMAGE_SUBRESOURCE_2_KHR";
  case StructureType::E_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR:
    return "StructureType::E_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR";
  case StructureType::E_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR:
    return "StructureType::E_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV";
  case StructureType::E_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV:
    return "StructureType::E_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV";
  case StructureType::E_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV:
    return "StructureType::E_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV";
  case StructureType::E_OPTICAL_FLOW_SESSION_CREATE_INFO_NV:
    return "StructureType::E_OPTICAL_FLOW_SESSION_CREATE_INFO_NV";
  case StructureType::E_OPTICAL_FLOW_EXECUTE_INFO_NV:
    return "StructureType::E_OPTICAL_FLOW_EXECUTE_INFO_NV";
  case StructureType::E_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV:
    return "StructureType::E_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT";
  case StructureType::E_RENDER_PASS_CREATION_CONTROL_EXT:
    return "StructureType::E_RENDER_PASS_CREATION_CONTROL_EXT";
  case StructureType::E_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT:
    return "StructureType::E_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT";
  case StructureType::E_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT:
    return "StructureType::E_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT";
  case StructureType::E_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT:
    return "StructureType::E_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT";
  case StructureType::E_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM";
  case StructureType::E_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM:
    return "StructureType::E_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC:
    return "StructureType::E_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC";
  case StructureType::E_AMIGO_PROFILING_SUBMIT_INFO_SEC:
    return "StructureType::E_AMIGO_PROFILING_SUBMIT_INFO_SEC";
  case StructureType::E_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM:
    return "StructureType::E_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM";
  case StructureType::E_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM:
    return "StructureType::E_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_PROPERTIES_ARM";
  case StructureType::E_RENDER_PASS_STRIPE_BEGIN_INFO_ARM:
    return "StructureType::E_RENDER_PASS_STRIPE_BEGIN_INFO_ARM";
  case StructureType::E_RENDER_PASS_STRIPE_INFO_ARM:
    return "StructureType::E_RENDER_PASS_STRIPE_INFO_ARM";
  case StructureType::E_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM:
    return "StructureType::E_RENDER_PASS_STRIPE_SUBMIT_INFO_ARM";
  case StructureType::E_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV";
  case StructureType::E_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT";
  case StructureType::E_IMAGE_VIEW_SLICED_CREATE_INFO_EXT:
    return "StructureType::E_IMAGE_VIEW_SLICED_CREATE_INFO_EXT";
  case StructureType::E_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM:
    return "StructureType::E_DEVICE_QUEUE_SHADER_CORE_CONTROL_CREATE_INFO_ARM";
  case StructureType::E_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM:
    return "StructureType::E_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM";
  case StructureType::E_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM:
    return "StructureType::E_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_PROPERTIES_ARM";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT";
  case StructureType::E_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT:
    return "StructureType::E_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI:
    return "StructureType::E_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI";
  case StructureType::E_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI:
    return "StructureType::E_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI";
  case StructureType::E_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI:
    return "StructureType::E_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_VRS_FEATURES_HUAWEI";
  case StructureType::E_MICROMAP_BUILD_INFO_EXT:
    return "StructureType::E_MICROMAP_BUILD_INFO_EXT";
  case StructureType::E_MICROMAP_VERSION_INFO_EXT:
    return "StructureType::E_MICROMAP_VERSION_INFO_EXT";
  case StructureType::E_COPY_MICROMAP_INFO_EXT:
    return "StructureType::E_COPY_MICROMAP_INFO_EXT";
  case StructureType::E_COPY_MICROMAP_TO_MEMORY_INFO_EXT:
    return "StructureType::E_COPY_MICROMAP_TO_MEMORY_INFO_EXT";
  case StructureType::E_COPY_MEMORY_TO_MICROMAP_INFO_EXT:
    return "StructureType::E_COPY_MEMORY_TO_MICROMAP_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT";
  case StructureType::E_MICROMAP_CREATE_INFO_EXT:
    return "StructureType::E_MICROMAP_CREATE_INFO_EXT";
  case StructureType::E_MICROMAP_BUILD_SIZES_INFO_EXT:
    return "StructureType::E_MICROMAP_BUILD_SIZES_INFO_EXT";
  case StructureType::E_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT:
    return "StructureType::E_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT";
  case StructureType::E_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT:
    return "StructureType::E_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT";
  case StructureType::E_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT";
  case StructureType::E_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT:
    return "StructureType::E_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT";
  case StructureType::E_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT:
    return "StructureType::E_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT";
  case StructureType::E_FRAME_BOUNDARY_EXT:
    return "StructureType::E_FRAME_BOUNDARY_EXT";
  case StructureType::E_PIPELINE_PROPERTIES_IDENTIFIER_EXT:
    return "StructureType::E_PIPELINE_PROPERTIES_IDENTIFIER_EXT";
  case StructureType::E_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT";
  case StructureType::E_MEMORY_GET_REMOTE_ADDRESS_INFO_NV:
    return "StructureType::E_MEMORY_GET_REMOTE_ADDRESS_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT";
  case StructureType::E_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT";
  case StructureType::E_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT:
    return "StructureType::E_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT";
  case StructureType::E_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT";
  case StructureType::E_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT:
    return "StructureType::E_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT";
  case StructureType::E_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT:
    return "StructureType::E_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT";
  case StructureType::E_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM";
  case StructureType::E_TILE_PROPERTIES_QCOM:
    return "StructureType::E_TILE_PROPERTIES_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_FAULT_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_FAULT_FEATURES_EXT";
  case StructureType::E_DEVICE_FAULT_COUNTS_EXT:
    return "StructureType::E_DEVICE_FAULT_COUNTS_EXT";
  case StructureType::E_DEVICE_FAULT_INFO_EXT:
    return "StructureType::E_DEVICE_FAULT_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV";
  case StructureType::E_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR:
    return "StructureType::E_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR";
  case StructureType::E_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR:
    return "StructureType::E_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR";
  case StructureType::E_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR:
    return "StructureType::E_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR";
  case StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR:
    return "StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR";
  case StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR:
    return "StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR";
  case StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR:
    return "StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR";
  case StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_KHR:
    return "StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_KHR";
  case StructureType::E_ACCELERATION_STRUCTURE_VERSION_INFO_KHR:
    return "StructureType::E_ACCELERATION_STRUCTURE_VERSION_INFO_KHR";
  case StructureType::E_COPY_ACCELERATION_STRUCTURE_INFO_KHR:
    return "StructureType::E_COPY_ACCELERATION_STRUCTURE_INFO_KHR";
  case StructureType::E_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR:
    return "StructureType::E_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR";
  case StructureType::E_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR:
    return "StructureType::E_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR";
  case StructureType::E_ACCELERATION_STRUCTURE_CREATE_INFO_KHR:
    return "StructureType::E_ACCELERATION_STRUCTURE_CREATE_INFO_KHR";
  case StructureType::E_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR:
    return "StructureType::E_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM";
  case StructureType::E_HEADLESS_SURFACE_CREATE_INFO_EXT:
    return "StructureType::E_HEADLESS_SURFACE_CREATE_INFO_EXT";
  case StructureType::E_CU_MODULE_CREATE_INFO_NVX:
    return "StructureType::E_CU_MODULE_CREATE_INFO_NVX";
  case StructureType::E_CU_FUNCTION_CREATE_INFO_NVX:
    return "StructureType::E_CU_FUNCTION_CREATE_INFO_NVX";
  case StructureType::E_CU_LAUNCH_INFO_NVX:
    return "StructureType::E_CU_LAUNCH_INFO_NVX";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT";
  case StructureType::E_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT";
  case StructureType::E_SHADER_MODULE_IDENTIFIER_EXT:
    return "StructureType::E_SHADER_MODULE_IDENTIFIER_EXT";
  case StructureType::E_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR";
  case StructureType::E_SURFACE_PRESENT_MODE_EXT:
    return "StructureType::E_SURFACE_PRESENT_MODE_EXT";
  case StructureType::E_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT:
    return "StructureType::E_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT";
  case StructureType::E_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT:
    return "StructureType::E_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT";
  case StructureType::E_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR:
    return "StructureType::E_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR";
  case StructureType::E_IMAGE_SWAPCHAIN_CREATE_INFO_KHR:
    return "StructureType::E_IMAGE_SWAPCHAIN_CREATE_INFO_KHR";
  case StructureType::E_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR:
    return "StructureType::E_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR";
  case StructureType::E_ACQUIRE_NEXT_IMAGE_INFO_KHR:
    return "StructureType::E_ACQUIRE_NEXT_IMAGE_INFO_KHR";
  case StructureType::E_DEVICE_GROUP_PRESENT_INFO_KHR:
    return "StructureType::E_DEVICE_GROUP_PRESENT_INFO_KHR";
  case StructureType::E_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR:
    return "StructureType::E_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT";
  case StructureType::E_IMPORT_FENCE_FD_INFO_KHR:
    return "StructureType::E_IMPORT_FENCE_FD_INFO_KHR";
  case StructureType::E_FENCE_GET_FD_INFO_KHR:
    return "StructureType::E_FENCE_GET_FD_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV";
  case StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT";
  case StructureType::E_CHECKPOINT_DATA_NV:
    return "StructureType::E_CHECKPOINT_DATA_NV";
  case StructureType::E_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV:
    return "StructureType::E_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV";
  case StructureType::E_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
    return "StructureType::E_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR";
  case StructureType::E_HDR_METADATA_EXT:
    return "StructureType::E_HDR_METADATA_EXT";
  case StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR";
  case StructureType::E_COOPERATIVE_MATRIX_PROPERTIES_KHR:
    return "StructureType::E_COOPERATIVE_MATRIX_PROPERTIES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT";
  case StructureType::E_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV";
  case StructureType::E_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR";
  case StructureType::E_VIDEO_INLINE_QUERY_INFO_KHR:
    return "StructureType::E_VIDEO_INLINE_QUERY_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT";
  case StructureType::E_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT";
  case StructureType::E_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV:
    return "StructureType::E_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV";
  case StructureType::E_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
    return "StructureType::E_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR";
  case StructureType::E_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT:
    return "StructureType::E_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT";
  case StructureType::E_ATTACHMENT_SAMPLE_COUNT_INFO_AMD:
    return "StructureType::E_ATTACHMENT_SAMPLE_COUNT_INFO_AMD";
  case StructureType::E_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX:
    return "StructureType::E_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX";
  case StructureType::E_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT";
  case StructureType::E_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT:
    return "StructureType::E_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT";
  case StructureType::E_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT:
    return "StructureType::E_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT";
  case StructureType::E_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV:
    return "StructureType::E_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV";
  case StructureType::E_PRESENT_REGIONS_KHR:
    return "StructureType::E_PRESENT_REGIONS_KHR";
  case StructureType::E_PRESENT_TIMES_INFO_GOOGLE:
    return "StructureType::E_PRESENT_TIMES_INFO_GOOGLE";
  case StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE:
    return "StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE";
  case StructureType::E_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE:
    return "StructureType::E_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE";
  case StructureType::E_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE:
    return "StructureType::E_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE";
  case StructureType::E_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR";
  case StructureType::E_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV:
    return "StructureType::E_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT";
  case StructureType::E_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT";
  case StructureType::E_IMPORT_SEMAPHORE_FD_INFO_KHR:
    return "StructureType::E_IMPORT_SEMAPHORE_FD_INFO_KHR";
  case StructureType::E_SEMAPHORE_GET_FD_INFO_KHR:
    return "StructureType::E_SEMAPHORE_GET_FD_INFO_KHR";
  case StructureType::E_IMPORT_MEMORY_FD_INFO_KHR:
    return "StructureType::E_IMPORT_MEMORY_FD_INFO_KHR";
  case StructureType::E_MEMORY_FD_PROPERTIES_KHR:
    return "StructureType::E_MEMORY_FD_PROPERTIES_KHR";
  case StructureType::E_MEMORY_GET_FD_INFO_KHR:
    return "StructureType::E_MEMORY_GET_FD_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR";
  case StructureType::E_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR:
    return "StructureType::E_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT:
    return "StructureType::E_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT";
  case StructureType::E_IMAGE_VIEW_HANDLE_INFO_NVX:
    return "StructureType::E_IMAGE_VIEW_HANDLE_INFO_NVX";
  case StructureType::E_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX:
    return "StructureType::E_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX";
  case StructureType::E_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_PROPERTIES_NV";
  case StructureType::E_DEBUG_UTILS_OBJECT_NAME_INFO_EXT:
    return "StructureType::E_DEBUG_UTILS_OBJECT_NAME_INFO_EXT";
  case StructureType::E_DEBUG_UTILS_OBJECT_TAG_INFO_EXT:
    return "StructureType::E_DEBUG_UTILS_OBJECT_TAG_INFO_EXT";
  case StructureType::E_DEBUG_UTILS_LABEL_EXT:
    return "StructureType::E_DEBUG_UTILS_LABEL_EXT";
  case StructureType::E_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT:
    return "StructureType::E_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT";
  case StructureType::E_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
    return "StructureType::E_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT";
  case StructureType::E_DISPLAY_PRESENT_INFO_KHR:
    return "StructureType::E_DISPLAY_PRESENT_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV";
  case StructureType::E_COOPERATIVE_MATRIX_PROPERTIES_NV:
    return "StructureType::E_COOPERATIVE_MATRIX_PROPERTIES_NV";
  case StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV";
  case StructureType::E_DISPLAY_POWER_INFO_EXT:
    return "StructureType::E_DISPLAY_POWER_INFO_EXT";
  case StructureType::E_DEVICE_EVENT_INFO_EXT:
    return "StructureType::E_DEVICE_EVENT_INFO_EXT";
  case StructureType::E_DISPLAY_EVENT_INFO_EXT:
    return "StructureType::E_DISPLAY_EVENT_INFO_EXT";
  case StructureType::E_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
    return "StructureType::E_SWAPCHAIN_COUNTER_CREATE_INFO_EXT";
  case StructureType::E_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV:
    return "StructureType::E_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV";
  case StructureType::E_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV:
    return "StructureType::E_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV";
  case StructureType::E_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV:
    return "StructureType::E_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV";
  case StructureType::E_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV:
    return "StructureType::E_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV";
  case StructureType::E_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV:
    return "StructureType::E_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
    return "StructureType::E_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD";
  case StructureType::E_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT";
  case StructureType::E_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT";
  case StructureType::E_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR:
    return "StructureType::E_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR";
  case StructureType::E_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR:
    return "StructureType::E_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR";
  case StructureType::E_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT:
    return "StructureType::E_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT";
  case StructureType::E_CONDITIONAL_RENDERING_BEGIN_INFO_EXT:
    return "StructureType::E_CONDITIONAL_RENDERING_BEGIN_INFO_EXT";
  case StructureType::E_VIDEO_DECODE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_CAPABILITIES_KHR:
    return "StructureType::E_VIDEO_DECODE_CAPABILITIES_KHR";
  case StructureType::E_VIDEO_DECODE_USAGE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_USAGE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR";
  case StructureType::E_RAY_TRACING_PIPELINE_CREATE_INFO_KHR:
    return "StructureType::E_RAY_TRACING_PIPELINE_CREATE_INFO_KHR";
  case StructureType::E_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR:
    return "StructureType::E_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR";
  case StructureType::E_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR:
    return "StructureType::E_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR";
  case StructureType::E_MEMORY_MAP_INFO_KHR:
    return "StructureType::E_MEMORY_MAP_INFO_KHR";
  case StructureType::E_MEMORY_UNMAP_INFO_KHR:
    return "StructureType::E_MEMORY_UNMAP_INFO_KHR";
  case StructureType::E_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD:
    return "StructureType::E_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD";
  case StructureType::E_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT";
  case StructureType::E_DEBUG_MARKER_OBJECT_NAME_INFO_EXT:
    return "StructureType::E_DEBUG_MARKER_OBJECT_NAME_INFO_EXT";
  case StructureType::E_DEBUG_MARKER_OBJECT_TAG_INFO_EXT:
    return "StructureType::E_DEBUG_MARKER_OBJECT_TAG_INFO_EXT";
  case StructureType::E_DEBUG_MARKER_MARKER_INFO_EXT:
    return "StructureType::E_DEBUG_MARKER_MARKER_INFO_EXT";
  case StructureType::E_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT:
    return "StructureType::E_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT";
  case StructureType::E_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT:
    return "StructureType::E_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT";
  case StructureType::E_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT:
    return "StructureType::E_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT";
  case StructureType::E_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT:
    return "StructureType::E_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT";
  case StructureType::E_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT:
    return "StructureType::E_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT";
  case StructureType::E_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
    return "StructureType::E_IMAGE_VIEW_ASTC_DECODE_MODE_EXT";
  case StructureType::E_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT";
  case StructureType::E_DISPLAY_MODE_CREATE_INFO_KHR:
    return "StructureType::E_DISPLAY_MODE_CREATE_INFO_KHR";
  case StructureType::E_DISPLAY_SURFACE_CREATE_INFO_KHR:
    return "StructureType::E_DISPLAY_SURFACE_CREATE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV";
  case StructureType::E_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV:
    return "StructureType::E_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT";
  case StructureType::E_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR";
  case StructureType::E_RENDERING_ATTACHMENT_LOCATION_INFO_KHR:
    return "StructureType::E_RENDERING_ATTACHMENT_LOCATION_INFO_KHR";
  case StructureType::E_RENDERING_INPUT_ATTACHMENT_INDEX_INFO_KHR:
    return "StructureType::E_RENDERING_INPUT_ATTACHMENT_INDEX_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG:
    return "StructureType::E_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG";
  case StructureType::E_VIDEO_PROFILE_INFO_KHR:
    return "StructureType::E_VIDEO_PROFILE_INFO_KHR";
  case StructureType::E_VIDEO_CAPABILITIES_KHR:
    return "StructureType::E_VIDEO_CAPABILITIES_KHR";
  case StructureType::E_VIDEO_PICTURE_RESOURCE_INFO_KHR:
    return "StructureType::E_VIDEO_PICTURE_RESOURCE_INFO_KHR";
  case StructureType::E_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR:
    return "StructureType::E_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR";
  case StructureType::E_BIND_VIDEO_SESSION_MEMORY_INFO_KHR:
    return "StructureType::E_BIND_VIDEO_SESSION_MEMORY_INFO_KHR";
  case StructureType::E_VIDEO_SESSION_CREATE_INFO_KHR:
    return "StructureType::E_VIDEO_SESSION_CREATE_INFO_KHR";
  case StructureType::E_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR:
    return "StructureType::E_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR";
  case StructureType::E_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR:
    return "StructureType::E_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR";
  case StructureType::E_VIDEO_BEGIN_CODING_INFO_KHR:
    return "StructureType::E_VIDEO_BEGIN_CODING_INFO_KHR";
  case StructureType::E_VIDEO_END_CODING_INFO_KHR:
    return "StructureType::E_VIDEO_END_CODING_INFO_KHR";
  case StructureType::E_VIDEO_CODING_CONTROL_INFO_KHR:
    return "StructureType::E_VIDEO_CODING_CONTROL_INFO_KHR";
  case StructureType::E_VIDEO_REFERENCE_SLOT_INFO_KHR:
    return "StructureType::E_VIDEO_REFERENCE_SLOT_INFO_KHR";
  case StructureType::E_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR:
    return "StructureType::E_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR";
  case StructureType::E_VIDEO_PROFILE_LIST_INFO_KHR:
    return "StructureType::E_VIDEO_PROFILE_LIST_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR";
  case StructureType::E_VIDEO_FORMAT_PROPERTIES_KHR:
    return "StructureType::E_VIDEO_FORMAT_PROPERTIES_KHR";
  case StructureType::E_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR:
    return "StructureType::E_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT";
  case StructureType::E_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI:
    return "StructureType::E_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI";
  case StructureType::E_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
    return "StructureType::E_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI";
  case StructureType::E_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI:
    return "StructureType::E_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI";
  case StructureType::E_RAY_TRACING_PIPELINE_CREATE_INFO_NV:
    return "StructureType::E_RAY_TRACING_PIPELINE_CREATE_INFO_NV";
  case StructureType::E_ACCELERATION_STRUCTURE_CREATE_INFO_NV:
    return "StructureType::E_ACCELERATION_STRUCTURE_CREATE_INFO_NV";
  case StructureType::E_GEOMETRY_NV:
    return "StructureType::E_GEOMETRY_NV";
  case StructureType::E_GEOMETRY_TRIANGLES_NV:
    return "StructureType::E_GEOMETRY_TRIANGLES_NV";
  case StructureType::E_GEOMETRY_AABB_NV:
    return "StructureType::E_GEOMETRY_AABB_NV";
  case StructureType::E_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV:
    return "StructureType::E_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV";
  case StructureType::E_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV:
    return "StructureType::E_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV";
  case StructureType::E_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV:
    return "StructureType::E_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV";
  case StructureType::E_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV:
    return "StructureType::E_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV";
  case StructureType::E_ACCELERATION_STRUCTURE_INFO_NV:
    return "StructureType::E_ACCELERATION_STRUCTURE_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT";
  case StructureType::E_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT:
    return "StructureType::E_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV";
  case StructureType::E_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV:
    return "StructureType::E_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV";
  case StructureType::E_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV:
    return "StructureType::E_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX:
    return "StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX";
  case StructureType::E_VIDEO_DECODE_H264_CAPABILITIES_KHR:
    return "StructureType::E_VIDEO_DECODE_H264_CAPABILITIES_KHR";
  case StructureType::E_VIDEO_DECODE_H264_PICTURE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_H264_PICTURE_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_H264_PROFILE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_H264_PROFILE_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR";
  case StructureType::E_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
    return "StructureType::E_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT";
  case StructureType::E_CUDA_MODULE_CREATE_INFO_NV:
    return "StructureType::E_CUDA_MODULE_CREATE_INFO_NV";
  case StructureType::E_CUDA_FUNCTION_CREATE_INFO_NV:
    return "StructureType::E_CUDA_FUNCTION_CREATE_INFO_NV";
  case StructureType::E_CUDA_LAUNCH_INFO_NV:
    return "StructureType::E_CUDA_LAUNCH_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_CUDA_KERNEL_LAUNCH_PROPERTIES_NV";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL";
  case StructureType::E_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD:
    return "StructureType::E_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD";
  case StructureType::E_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV:
    return "StructureType::E_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV";
  case StructureType::E_EXPORT_MEMORY_ALLOCATE_INFO_NV:
    return "StructureType::E_EXPORT_MEMORY_ALLOCATE_INFO_NV";
  case StructureType::E_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV:
    return "StructureType::E_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV";
  case StructureType::E_VIDEO_ENCODE_H264_CAPABILITIES_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_CAPABILITIES_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_PICTURE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_PICTURE_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_DPB_SLOT_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_NALU_SLICE_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_GOP_REMAINING_FRAME_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_PROFILE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_PROFILE_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_RATE_CONTROL_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_RATE_CONTROL_LAYER_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_SESSION_CREATE_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_QUALITY_LEVEL_PROPERTIES_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_GET_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H264_SESSION_PARAMETERS_FEEDBACK_INFO_KHR";
  case StructureType::E_VALIDATION_FLAGS_EXT:
    return "StructureType::E_VALIDATION_FLAGS_EXT";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT";
  case StructureType::E_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
    return "StructureType::E_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV";
  case StructureType::E_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV:
    return "StructureType::E_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT";
  case StructureType::E_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT:
    return "StructureType::E_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV";
  case StructureType::E_VIDEO_DECODE_H265_CAPABILITIES_KHR:
    return "StructureType::E_VIDEO_DECODE_H265_CAPABILITIES_KHR";
  case StructureType::E_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_H265_PROFILE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_H265_PROFILE_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_H265_PICTURE_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_H265_PICTURE_INFO_KHR";
  case StructureType::E_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR:
    return "StructureType::E_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR";
  case StructureType::E_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT";
  case StructureType::E_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
    return "StructureType::E_IMPORT_MEMORY_HOST_POINTER_INFO_EXT";
  case StructureType::E_MEMORY_HOST_POINTER_PROPERTIES_EXT:
    return "StructureType::E_MEMORY_HOST_POINTER_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT";
  case StructureType::E_VIDEO_ENCODE_H265_CAPABILITIES_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_CAPABILITIES_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_PICTURE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_PICTURE_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_DPB_SLOT_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_NALU_SLICE_SEGMENT_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_GOP_REMAINING_FRAME_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_PROFILE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_PROFILE_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_RATE_CONTROL_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_RATE_CONTROL_LAYER_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_SESSION_CREATE_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_QUALITY_LEVEL_PROPERTIES_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_GET_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_H265_SESSION_PARAMETERS_FEEDBACK_INFO_KHR";
  case StructureType::E_LATENCY_SLEEP_MODE_INFO_NV:
    return "StructureType::E_LATENCY_SLEEP_MODE_INFO_NV";
  case StructureType::E_LATENCY_SLEEP_INFO_NV:
    return "StructureType::E_LATENCY_SLEEP_INFO_NV";
  case StructureType::E_SET_LATENCY_MARKER_INFO_NV:
    return "StructureType::E_SET_LATENCY_MARKER_INFO_NV";
  case StructureType::E_GET_LATENCY_MARKER_INFO_NV:
    return "StructureType::E_GET_LATENCY_MARKER_INFO_NV";
  case StructureType::E_LATENCY_TIMINGS_FRAME_REPORT_NV:
    return "StructureType::E_LATENCY_TIMINGS_FRAME_REPORT_NV";
  case StructureType::E_LATENCY_SUBMISSION_PRESENT_ID_NV:
    return "StructureType::E_LATENCY_SUBMISSION_PRESENT_ID_NV";
  case StructureType::E_OUT_OF_BAND_QUEUE_TYPE_INFO_NV:
    return "StructureType::E_OUT_OF_BAND_QUEUE_TYPE_INFO_NV";
  case StructureType::E_SWAPCHAIN_LATENCY_CREATE_INFO_NV:
    return "StructureType::E_SWAPCHAIN_LATENCY_CREATE_INFO_NV";
  case StructureType::E_LATENCY_SURFACE_CAPABILITIES_NV:
    return "StructureType::E_LATENCY_SURFACE_CAPABILITIES_NV";
  case StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV:
    return "StructureType::E_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV";
  case StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV";
  case StructureType::E_ACCELERATION_STRUCTURE_MOTION_INFO_NV:
    return "StructureType::E_ACCELERATION_STRUCTURE_MOTION_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR";
  case StructureType::E_VALIDATION_CACHE_CREATE_INFO_EXT:
    return "StructureType::E_VALIDATION_CACHE_CREATE_INFO_EXT";
  case StructureType::E_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
    return "StructureType::E_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT";
  case StructureType::E_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV:
    return "StructureType::E_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV";
  case StructureType::E_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV:
    return "StructureType::E_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV";
  case StructureType::E_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV:
    return "StructureType::E_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV";
  case StructureType::E_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD:
    return "StructureType::E_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD";
  case StructureType::E_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD:
    return "StructureType::E_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT";
  case StructureType::E_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
    return "StructureType::E_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT";
  case StructureType::E_MEMORY_PRIORITY_ALLOCATE_INFO_EXT:
    return "StructureType::E_MEMORY_PRIORITY_ALLOCATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT";
  case StructureType::E_MEMORY_TO_IMAGE_COPY_EXT:
    return "StructureType::E_MEMORY_TO_IMAGE_COPY_EXT";
  case StructureType::E_IMAGE_TO_MEMORY_COPY_EXT:
    return "StructureType::E_IMAGE_TO_MEMORY_COPY_EXT";
  case StructureType::E_COPY_IMAGE_TO_MEMORY_INFO_EXT:
    return "StructureType::E_COPY_IMAGE_TO_MEMORY_INFO_EXT";
  case StructureType::E_COPY_MEMORY_TO_IMAGE_INFO_EXT:
    return "StructureType::E_COPY_MEMORY_TO_IMAGE_INFO_EXT";
  case StructureType::E_HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT:
    return "StructureType::E_HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT";
  case StructureType::E_COPY_IMAGE_TO_IMAGE_INFO_EXT:
    return "StructureType::E_COPY_IMAGE_TO_IMAGE_INFO_EXT";
  case StructureType::E_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT:
    return "StructureType::E_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT";
  case StructureType::E_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT:
    return "StructureType::E_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD";
  case StructureType::E_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT";
  case StructureType::E_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
    return "StructureType::E_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT";
  case StructureType::E_SHADER_CREATE_INFO_EXT:
    return "StructureType::E_SHADER_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM";
  case StructureType::E_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM:
    return "StructureType::E_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV";
  case StructureType::E_SAMPLE_LOCATIONS_INFO_EXT:
    return "StructureType::E_SAMPLE_LOCATIONS_INFO_EXT";
  case StructureType::E_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
    return "StructureType::E_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT";
  case StructureType::E_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT";
  case StructureType::E_MULTISAMPLE_PROPERTIES_EXT:
    return "StructureType::E_MULTISAMPLE_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV";
  case StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI:
    return "StructureType::E_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI";
  case StructureType::E_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL:
    return "StructureType::E_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL";
  case StructureType::E_INITIALIZE_PERFORMANCE_API_INFO_INTEL:
    return "StructureType::E_INITIALIZE_PERFORMANCE_API_INFO_INTEL";
  case StructureType::E_PERFORMANCE_MARKER_INFO_INTEL:
    return "StructureType::E_PERFORMANCE_MARKER_INFO_INTEL";
  case StructureType::E_PERFORMANCE_STREAM_MARKER_INFO_INTEL:
    return "StructureType::E_PERFORMANCE_STREAM_MARKER_INFO_INTEL";
  case StructureType::E_PERFORMANCE_OVERRIDE_INFO_INTEL:
    return "StructureType::E_PERFORMANCE_OVERRIDE_INFO_INTEL";
  case StructureType::E_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL:
    return "StructureType::E_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL";
  case StructureType::E_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT";
  case StructureType::E_SURFACE_CAPABILITIES_2_EXT:
    return "StructureType::E_SURFACE_CAPABILITIES_2_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT";
  case StructureType::E_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
    return "StructureType::E_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR";
  case StructureType::E_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR:
    return "StructureType::E_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD";
  case StructureType::E_DISPLAY_PROPERTIES_2_KHR:
    return "StructureType::E_DISPLAY_PROPERTIES_2_KHR";
  case StructureType::E_DISPLAY_PLANE_PROPERTIES_2_KHR:
    return "StructureType::E_DISPLAY_PLANE_PROPERTIES_2_KHR";
  case StructureType::E_DISPLAY_MODE_PROPERTIES_2_KHR:
    return "StructureType::E_DISPLAY_MODE_PROPERTIES_2_KHR";
  case StructureType::E_DISPLAY_PLANE_INFO_2_KHR:
    return "StructureType::E_DISPLAY_PLANE_INFO_2_KHR";
  case StructureType::E_DISPLAY_PLANE_CAPABILITIES_2_KHR:
    return "StructureType::E_DISPLAY_PLANE_CAPABILITIES_2_KHR";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR";
  case StructureType::E_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR:
    return "StructureType::E_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR";
  case StructureType::E_PERFORMANCE_QUERY_SUBMIT_INFO_KHR:
    return "StructureType::E_PERFORMANCE_QUERY_SUBMIT_INFO_KHR";
  case StructureType::E_ACQUIRE_PROFILING_LOCK_INFO_KHR:
    return "StructureType::E_ACQUIRE_PROFILING_LOCK_INFO_KHR";
  case StructureType::E_PERFORMANCE_COUNTER_KHR:
    return "StructureType::E_PERFORMANCE_COUNTER_KHR";
  case StructureType::E_PERFORMANCE_COUNTER_DESCRIPTION_KHR:
    return "StructureType::E_PERFORMANCE_COUNTER_DESCRIPTION_KHR";
  case StructureType::E_SURFACE_PROTECTED_CAPABILITIES_KHR:
    return "StructureType::E_SURFACE_PROTECTED_CAPABILITIES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT";
  case StructureType::E_IMAGE_COMPRESSION_CONTROL_EXT:
    return "StructureType::E_IMAGE_COMPRESSION_CONTROL_EXT";
  case StructureType::E_IMAGE_COMPRESSION_PROPERTIES_EXT:
    return "StructureType::E_IMAGE_COMPRESSION_PROPERTIES_EXT";
  case StructureType::E_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV:
    return "StructureType::E_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV";
  case StructureType::E_CHECKPOINT_DATA_2_NV:
    return "StructureType::E_CHECKPOINT_DATA_2_NV";
  case StructureType::E_COPY_COMMAND_TRANSFORM_INFO_QCOM:
    return "StructureType::E_COPY_COMMAND_TRANSFORM_INFO_QCOM";
  case StructureType::E_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV";
  case StructureType::E_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV:
    return "StructureType::E_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV";
  case StructureType::E_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV:
    return "StructureType::E_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV";
  case StructureType::E_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT";
  case StructureType::E_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT:
    return "StructureType::E_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT";
  case StructureType::E_DIRECT_DRIVER_LOADING_INFO_LUNARG:
    return "StructureType::E_DIRECT_DRIVER_LOADING_INFO_LUNARG";
  case StructureType::E_DIRECT_DRIVER_LOADING_LIST_LUNARG:
    return "StructureType::E_DIRECT_DRIVER_LOADING_LIST_LUNARG";
  case StructureType::E_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR";
  case StructureType::E_PIPELINE_INFO_KHR:
    return "StructureType::E_PIPELINE_INFO_KHR";
  case StructureType::E_PIPELINE_EXECUTABLE_PROPERTIES_KHR:
    return "StructureType::E_PIPELINE_EXECUTABLE_PROPERTIES_KHR";
  case StructureType::E_PIPELINE_EXECUTABLE_INFO_KHR:
    return "StructureType::E_PIPELINE_EXECUTABLE_INFO_KHR";
  case StructureType::E_PIPELINE_EXECUTABLE_STATISTIC_KHR:
    return "StructureType::E_PIPELINE_EXECUTABLE_STATISTIC_KHR";
  case StructureType::E_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR:
    return "StructureType::E_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR";
  case StructureType::E_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_PROPERTIES_EXT";
  case StructureType::E_MEMORY_MAP_PLACED_INFO_EXT:
    return "StructureType::E_MEMORY_MAP_PLACED_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT";
  case StructureType::E_SWAPCHAIN_PRESENT_FENCE_INFO_EXT:
    return "StructureType::E_SWAPCHAIN_PRESENT_FENCE_INFO_EXT";
  case StructureType::E_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT:
    return "StructureType::E_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT";
  case StructureType::E_SWAPCHAIN_PRESENT_MODE_INFO_EXT:
    return "StructureType::E_SWAPCHAIN_PRESENT_MODE_INFO_EXT";
  case StructureType::E_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT:
    return "StructureType::E_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT";
  case StructureType::E_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT:
    return "StructureType::E_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV";
  case StructureType::E_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV:
    return "StructureType::E_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV";
  case StructureType::E_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV:
    return "StructureType::E_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV";
  case StructureType::E_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV:
    return "StructureType::E_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV";
  case StructureType::E_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV:
    return "StructureType::E_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV";
  case StructureType::E_GENERATED_COMMANDS_INFO_NV:
    return "StructureType::E_GENERATED_COMMANDS_INFO_NV";
  case StructureType::E_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV:
    return "StructureType::E_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV";
  case StructureType::E_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
    return "StructureType::E_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD";
  case StructureType::E_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR";
  case StructureType::E_SURFACE_CAPABILITIES_2_KHR:
    return "StructureType::E_SURFACE_CAPABILITIES_2_KHR";
  case StructureType::E_SURFACE_FORMAT_2_KHR:
    return "StructureType::E_SURFACE_FORMAT_2_KHR";
  case StructureType::E_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV";
  case StructureType::E_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV:
    return "StructureType::E_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR";
  case StructureType::E_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM:
    return "StructureType::E_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM";
  case StructureType::E_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM:
    return "StructureType::E_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM";
  case StructureType::E_QUERY_LOW_LATENCY_SUPPORT_NV:
    return "StructureType::E_QUERY_LOW_LATENCY_SUPPORT_NV";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT";
  case StructureType::E_DEPTH_BIAS_INFO_EXT:
    return "StructureType::E_DEPTH_BIAS_INFO_EXT";
  case StructureType::E_DEPTH_BIAS_REPRESENTATION_INFO_EXT:
    return "StructureType::E_DEPTH_BIAS_REPRESENTATION_INFO_EXT";
  case StructureType::E_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT:
    return "StructureType::E_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_PROPERTIES_MESA";
  case StructureType::E_IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA:
    return "StructureType::E_IMAGE_ALIGNMENT_CONTROL_CREATE_INFO_MESA";
  case StructureType::E_VIDEO_ENCODE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_RATE_CONTROL_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_RATE_CONTROL_LAYER_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_CAPABILITIES_KHR:
    return "StructureType::E_VIDEO_ENCODE_CAPABILITIES_KHR";
  case StructureType::E_VIDEO_ENCODE_USAGE_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_USAGE_INFO_KHR";
  case StructureType::E_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR:
    return "StructureType::E_QUERY_POOL_VIDEO_ENCODE_FEEDBACK_CREATE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR:
    return "StructureType::E_VIDEO_ENCODE_QUALITY_LEVEL_PROPERTIES_KHR";
  case StructureType::E_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_QUALITY_LEVEL_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_SESSION_PARAMETERS_GET_INFO_KHR";
  case StructureType::E_VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR:
    return "StructureType::E_VIDEO_ENCODE_SESSION_PARAMETERS_FEEDBACK_INFO_KHR";
  case StructureType::E_VALIDATION_FEATURES_EXT:
    return "StructureType::E_VALIDATION_FEATURES_EXT";
  case StructureType::E_PIPELINE_LIBRARY_CREATE_INFO_KHR:
    return "StructureType::E_PIPELINE_LIBRARY_CREATE_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_6_PROPERTIES_KHR";
  case StructureType::E_BIND_MEMORY_STATUS_KHR:
    return "StructureType::E_BIND_MEMORY_STATUS_KHR";
  case StructureType::E_BIND_DESCRIPTOR_SETS_INFO_KHR:
    return "StructureType::E_BIND_DESCRIPTOR_SETS_INFO_KHR";
  case StructureType::E_PUSH_CONSTANTS_INFO_KHR:
    return "StructureType::E_PUSH_CONSTANTS_INFO_KHR";
  case StructureType::E_PUSH_DESCRIPTOR_SET_INFO_KHR:
    return "StructureType::E_PUSH_DESCRIPTOR_SET_INFO_KHR";
  case StructureType::E_PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO_KHR:
    return "StructureType::E_PUSH_DESCRIPTOR_SET_WITH_TEMPLATE_INFO_KHR";
  case StructureType::E_SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT:
    return "StructureType::E_SET_DESCRIPTOR_BUFFER_OFFSETS_INFO_EXT";
  case StructureType::E_BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT:
    return "StructureType::E_BIND_DESCRIPTOR_BUFFER_EMBEDDED_SAMPLERS_INFO_EXT";
  case StructureType::E_PRESENT_ID_KHR:
    return "StructureType::E_PRESENT_ID_KHR";
  case StructureType::E_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT";
  case StructureType::E_DESCRIPTOR_ADDRESS_INFO_EXT:
    return "StructureType::E_DESCRIPTOR_ADDRESS_INFO_EXT";
  case StructureType::E_DESCRIPTOR_GET_INFO_EXT:
    return "StructureType::E_DESCRIPTOR_GET_INFO_EXT";
  case StructureType::E_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT:
    return "StructureType::E_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT";
  case StructureType::E_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT:
    return "StructureType::E_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT";
  case StructureType::E_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT:
    return "StructureType::E_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT";
  case StructureType::E_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT:
    return "StructureType::E_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT";
  case StructureType::E_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
    return "StructureType::E_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT";
  case StructureType::E_DESCRIPTOR_BUFFER_BINDING_INFO_EXT:
    return "StructureType::E_DESCRIPTOR_BUFFER_BINDING_INFO_EXT";
  case StructureType::E_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT:
    return "StructureType::E_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT";
  case StructureType::E_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT:
    return "StructureType::E_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT";
  case StructureType::E_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT:
    return "StructureType::E_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT";
  case StructureType::E_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT:
    return "StructureType::E_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD";
  case StructureType::E_SWAPCHAIN_CREATE_INFO_KHR:
    return "StructureType::E_SWAPCHAIN_CREATE_INFO_KHR";
  case StructureType::E_PRESENT_INFO_KHR:
    return "StructureType::E_PRESENT_INFO_KHR";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV";
  case StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV:
    return "StructureType::E_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV";
  case StructureType::E_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV:
    return "StructureType::E_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV";
  case StructureType::E_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES";
  case StructureType::E_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES";
  case StructureType::E_IMAGE_FORMAT_LIST_CREATE_INFO:
    return "StructureType::E_IMAGE_FORMAT_LIST_CREATE_INFO";
  case StructureType::E_ATTACHMENT_DESCRIPTION_2:
    return "StructureType::E_ATTACHMENT_DESCRIPTION_2";
  case StructureType::E_ATTACHMENT_REFERENCE_2:
    return "StructureType::E_ATTACHMENT_REFERENCE_2";
  case StructureType::E_SUBPASS_DESCRIPTION_2:
    return "StructureType::E_SUBPASS_DESCRIPTION_2";
  case StructureType::E_SUBPASS_DEPENDENCY_2:
    return "StructureType::E_SUBPASS_DEPENDENCY_2";
  case StructureType::E_RENDER_PASS_CREATE_INFO_2:
    return "StructureType::E_RENDER_PASS_CREATE_INFO_2";
  case StructureType::E_SUBPASS_BEGIN_INFO:
    return "StructureType::E_SUBPASS_BEGIN_INFO";
  case StructureType::E_SUBPASS_END_INFO:
    return "StructureType::E_SUBPASS_END_INFO";
  case StructureType::E_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_DRIVER_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_DRIVER_PROPERTIES";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES";
  case StructureType::E_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO:
    return "StructureType::E_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES";
  case StructureType::E_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO:
    return "StructureType::E_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO";
  case StructureType::E_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT:
    return "StructureType::E_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT";
  case StructureType::E_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES";
  case StructureType::E_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE:
    return "StructureType::E_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE";
  case StructureType::E_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES";
  case StructureType::E_IMAGE_STENCIL_USAGE_CREATE_INFO:
    return "StructureType::E_IMAGE_STENCIL_USAGE_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES";
  case StructureType::E_SAMPLER_REDUCTION_MODE_CREATE_INFO:
    return "StructureType::E_SAMPLER_REDUCTION_MODE_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES";
  case StructureType::E_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO:
    return "StructureType::E_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO";
  case StructureType::E_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO:
    return "StructureType::E_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO";
  case StructureType::E_RENDER_PASS_ATTACHMENT_BEGIN_INFO:
    return "StructureType::E_RENDER_PASS_ATTACHMENT_BEGIN_INFO";
  case StructureType::E_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES";
  case StructureType::E_ATTACHMENT_REFERENCE_STENCIL_LAYOUT:
    return "StructureType::E_ATTACHMENT_REFERENCE_STENCIL_LAYOUT";
  case StructureType::E_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT:
    return "StructureType::E_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT";
  case StructureType::E_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES";
  case StructureType::E_SEMAPHORE_TYPE_CREATE_INFO:
    return "StructureType::E_SEMAPHORE_TYPE_CREATE_INFO";
  case StructureType::E_TIMELINE_SEMAPHORE_SUBMIT_INFO:
    return "StructureType::E_TIMELINE_SEMAPHORE_SUBMIT_INFO";
  case StructureType::E_SEMAPHORE_WAIT_INFO:
    return "StructureType::E_SEMAPHORE_WAIT_INFO";
  case StructureType::E_SEMAPHORE_SIGNAL_INFO:
    return "StructureType::E_SEMAPHORE_SIGNAL_INFO";
  case StructureType::E_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES";
  case StructureType::E_BUFFER_DEVICE_ADDRESS_INFO:
    return "StructureType::E_BUFFER_DEVICE_ADDRESS_INFO";
  case StructureType::E_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO:
    return "StructureType::E_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO";
  case StructureType::E_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO:
    return "StructureType::E_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO";
  case StructureType::E_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO:
    return "StructureType::E_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO";
  case StructureType::E_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES";
  case StructureType::E_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
    return "StructureType::E_PIPELINE_CREATION_FEEDBACK_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_TOOL_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_TOOL_PROPERTIES";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES";
  case StructureType::E_DEVICE_PRIVATE_DATA_CREATE_INFO:
    return "StructureType::E_DEVICE_PRIVATE_DATA_CREATE_INFO";
  case StructureType::E_PRIVATE_DATA_SLOT_CREATE_INFO:
    return "StructureType::E_PRIVATE_DATA_SLOT_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES";
  case StructureType::E_MEMORY_BARRIER_2:
    return "StructureType::E_MEMORY_BARRIER_2";
  case StructureType::E_BUFFER_MEMORY_BARRIER_2:
    return "StructureType::E_BUFFER_MEMORY_BARRIER_2";
  case StructureType::E_IMAGE_MEMORY_BARRIER_2:
    return "StructureType::E_IMAGE_MEMORY_BARRIER_2";
  case StructureType::E_DEPENDENCY_INFO:
    return "StructureType::E_DEPENDENCY_INFO";
  case StructureType::E_SUBMIT_INFO_2:
    return "StructureType::E_SUBMIT_INFO_2";
  case StructureType::E_SEMAPHORE_SUBMIT_INFO:
    return "StructureType::E_SEMAPHORE_SUBMIT_INFO";
  case StructureType::E_COMMAND_BUFFER_SUBMIT_INFO:
    return "StructureType::E_COMMAND_BUFFER_SUBMIT_INFO";
  case StructureType::E_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES";
  case StructureType::E_COPY_BUFFER_INFO_2:
    return "StructureType::E_COPY_BUFFER_INFO_2";
  case StructureType::E_COPY_IMAGE_INFO_2:
    return "StructureType::E_COPY_IMAGE_INFO_2";
  case StructureType::E_COPY_BUFFER_TO_IMAGE_INFO_2:
    return "StructureType::E_COPY_BUFFER_TO_IMAGE_INFO_2";
  case StructureType::E_COPY_IMAGE_TO_BUFFER_INFO_2:
    return "StructureType::E_COPY_IMAGE_TO_BUFFER_INFO_2";
  case StructureType::E_BLIT_IMAGE_INFO_2:
    return "StructureType::E_BLIT_IMAGE_INFO_2";
  case StructureType::E_RESOLVE_IMAGE_INFO_2:
    return "StructureType::E_RESOLVE_IMAGE_INFO_2";
  case StructureType::E_BUFFER_COPY_2:
    return "StructureType::E_BUFFER_COPY_2";
  case StructureType::E_IMAGE_COPY_2:
    return "StructureType::E_IMAGE_COPY_2";
  case StructureType::E_IMAGE_BLIT_2:
    return "StructureType::E_IMAGE_BLIT_2";
  case StructureType::E_BUFFER_IMAGE_COPY_2:
    return "StructureType::E_BUFFER_IMAGE_COPY_2";
  case StructureType::E_IMAGE_RESOLVE_2:
    return "StructureType::E_IMAGE_RESOLVE_2";
  case StructureType::E_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES";
  case StructureType::E_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO:
    return "StructureType::E_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES";
  case StructureType::E_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK:
    return "StructureType::E_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK";
  case StructureType::E_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO:
    return "StructureType::E_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES";
  case StructureType::E_RENDERING_INFO:
    return "StructureType::E_RENDERING_INFO";
  case StructureType::E_RENDERING_ATTACHMENT_INFO:
    return "StructureType::E_RENDERING_ATTACHMENT_INFO";
  case StructureType::E_PIPELINE_RENDERING_CREATE_INFO:
    return "StructureType::E_PIPELINE_RENDERING_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES";
  case StructureType::E_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO:
    return "StructureType::E_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES";
  case StructureType::E_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES";
  case StructureType::E_FORMAT_PROPERTIES_3:
    return "StructureType::E_FORMAT_PROPERTIES_3";
  case StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES";
  case StructureType::E_DEVICE_BUFFER_MEMORY_REQUIREMENTS:
    return "StructureType::E_DEVICE_BUFFER_MEMORY_REQUIREMENTS";
  case StructureType::E_DEVICE_IMAGE_MEMORY_REQUIREMENTS:
    return "StructureType::E_DEVICE_IMAGE_MEMORY_REQUIREMENTS";
  case StructureType::E_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES";
  case StructureType::E_BIND_BUFFER_MEMORY_INFO:
    return "StructureType::E_BIND_BUFFER_MEMORY_INFO";
  case StructureType::E_BIND_IMAGE_MEMORY_INFO:
    return "StructureType::E_BIND_IMAGE_MEMORY_INFO";
  case StructureType::E_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES";
  case StructureType::E_MEMORY_DEDICATED_REQUIREMENTS:
    return "StructureType::E_MEMORY_DEDICATED_REQUIREMENTS";
  case StructureType::E_MEMORY_DEDICATED_ALLOCATE_INFO:
    return "StructureType::E_MEMORY_DEDICATED_ALLOCATE_INFO";
  case StructureType::E_MEMORY_ALLOCATE_FLAGS_INFO:
    return "StructureType::E_MEMORY_ALLOCATE_FLAGS_INFO";
  case StructureType::E_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
    return "StructureType::E_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO";
  case StructureType::E_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
    return "StructureType::E_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO";
  case StructureType::E_DEVICE_GROUP_SUBMIT_INFO:
    return "StructureType::E_DEVICE_GROUP_SUBMIT_INFO";
  case StructureType::E_DEVICE_GROUP_BIND_SPARSE_INFO:
    return "StructureType::E_DEVICE_GROUP_BIND_SPARSE_INFO";
  case StructureType::E_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
    return "StructureType::E_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO";
  case StructureType::E_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
    return "StructureType::E_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO";
  case StructureType::E_PHYSICAL_DEVICE_GROUP_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_GROUP_PROPERTIES";
  case StructureType::E_DEVICE_GROUP_DEVICE_CREATE_INFO:
    return "StructureType::E_DEVICE_GROUP_DEVICE_CREATE_INFO";
  case StructureType::E_BUFFER_MEMORY_REQUIREMENTS_INFO_2:
    return "StructureType::E_BUFFER_MEMORY_REQUIREMENTS_INFO_2";
  case StructureType::E_IMAGE_MEMORY_REQUIREMENTS_INFO_2:
    return "StructureType::E_IMAGE_MEMORY_REQUIREMENTS_INFO_2";
  case StructureType::E_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2:
    return "StructureType::E_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2";
  case StructureType::E_MEMORY_REQUIREMENTS_2:
    return "StructureType::E_MEMORY_REQUIREMENTS_2";
  case StructureType::E_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2:
    return "StructureType::E_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2";
  case StructureType::E_PHYSICAL_DEVICE_FEATURES_2:
    return "StructureType::E_PHYSICAL_DEVICE_FEATURES_2";
  case StructureType::E_PHYSICAL_DEVICE_PROPERTIES_2:
    return "StructureType::E_PHYSICAL_DEVICE_PROPERTIES_2";
  case StructureType::E_FORMAT_PROPERTIES_2:
    return "StructureType::E_FORMAT_PROPERTIES_2";
  case StructureType::E_IMAGE_FORMAT_PROPERTIES_2:
    return "StructureType::E_IMAGE_FORMAT_PROPERTIES_2";
  case StructureType::E_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2:
    return "StructureType::E_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2";
  case StructureType::E_QUEUE_FAMILY_PROPERTIES_2:
    return "StructureType::E_QUEUE_FAMILY_PROPERTIES_2";
  case StructureType::E_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2:
    return "StructureType::E_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2";
  case StructureType::E_SPARSE_IMAGE_FORMAT_PROPERTIES_2:
    return "StructureType::E_SPARSE_IMAGE_FORMAT_PROPERTIES_2";
  case StructureType::E_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2:
    return "StructureType::E_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2";
  case StructureType::E_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES";
  case StructureType::E_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
    return "StructureType::E_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO";
  case StructureType::E_IMAGE_VIEW_USAGE_CREATE_INFO:
    return "StructureType::E_IMAGE_VIEW_USAGE_CREATE_INFO";
  case StructureType::E_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
    return "StructureType::E_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO";
  case StructureType::E_RENDER_PASS_MULTIVIEW_CREATE_INFO:
    return "StructureType::E_RENDER_PASS_MULTIVIEW_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES";
  case StructureType::E_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES";
  case StructureType::E_PROTECTED_SUBMIT_INFO:
    return "StructureType::E_PROTECTED_SUBMIT_INFO";
  case StructureType::E_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES";
  case StructureType::E_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES";
  case StructureType::E_DEVICE_QUEUE_INFO_2:
    return "StructureType::E_DEVICE_QUEUE_INFO_2";
  case StructureType::E_SAMPLER_YCBCR_CONVERSION_CREATE_INFO:
    return "StructureType::E_SAMPLER_YCBCR_CONVERSION_CREATE_INFO";
  case StructureType::E_SAMPLER_YCBCR_CONVERSION_INFO:
    return "StructureType::E_SAMPLER_YCBCR_CONVERSION_INFO";
  case StructureType::E_BIND_IMAGE_PLANE_MEMORY_INFO:
    return "StructureType::E_BIND_IMAGE_PLANE_MEMORY_INFO";
  case StructureType::E_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
    return "StructureType::E_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO";
  case StructureType::E_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES";
  case StructureType::E_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
    return "StructureType::E_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES";
  case StructureType::E_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO:
    return "StructureType::E_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
    return "StructureType::E_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO";
  case StructureType::E_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
    return "StructureType::E_EXTERNAL_IMAGE_FORMAT_PROPERTIES";
  case StructureType::E_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO:
    return "StructureType::E_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO";
  case StructureType::E_EXTERNAL_BUFFER_PROPERTIES:
    return "StructureType::E_EXTERNAL_BUFFER_PROPERTIES";
  case StructureType::E_PHYSICAL_DEVICE_ID_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_ID_PROPERTIES";
  case StructureType::E_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
    return "StructureType::E_EXTERNAL_MEMORY_BUFFER_CREATE_INFO";
  case StructureType::E_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
    return "StructureType::E_EXTERNAL_MEMORY_IMAGE_CREATE_INFO";
  case StructureType::E_EXPORT_MEMORY_ALLOCATE_INFO:
    return "StructureType::E_EXPORT_MEMORY_ALLOCATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO:
    return "StructureType::E_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO";
  case StructureType::E_EXTERNAL_FENCE_PROPERTIES:
    return "StructureType::E_EXTERNAL_FENCE_PROPERTIES";
  case StructureType::E_EXPORT_FENCE_CREATE_INFO:
    return "StructureType::E_EXPORT_FENCE_CREATE_INFO";
  case StructureType::E_EXPORT_SEMAPHORE_CREATE_INFO:
    return "StructureType::E_EXPORT_SEMAPHORE_CREATE_INFO";
  case StructureType::E_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO:
    return "StructureType::E_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO";
  case StructureType::E_EXTERNAL_SEMAPHORE_PROPERTIES:
    return "StructureType::E_EXTERNAL_SEMAPHORE_PROPERTIES";
  case StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
    return "StructureType::E_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES";
  case StructureType::E_DESCRIPTOR_SET_LAYOUT_SUPPORT:
    return "StructureType::E_DESCRIPTOR_SET_LAYOUT_SUPPORT";
  case StructureType::E_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
    return "StructureType::E_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CopyMicromapMode input) {
  switch (input) {
  case CopyMicromapMode::E_CLONE_EXT:
    return "CopyMicromapMode::E_CLONE_EXT";
  case CopyMicromapMode::E_SERIALIZE_EXT:
    return "CopyMicromapMode::E_SERIALIZE_EXT";
  case CopyMicromapMode::E_DESERIALIZE_EXT:
    return "CopyMicromapMode::E_DESERIALIZE_EXT";
  case CopyMicromapMode::E_COMPACT_EXT:
    return "CopyMicromapMode::E_COMPACT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ChromaLocation input) {
  switch (input) {
  case ChromaLocation::E_COSITED_EVEN:
    return "ChromaLocation::E_COSITED_EVEN";
  case ChromaLocation::E_MIDPOINT:
    return "ChromaLocation::E_MIDPOINT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BlendOverlap input) {
  switch (input) {
  case BlendOverlap::E_UNCORRELATED_EXT:
    return "BlendOverlap::E_UNCORRELATED_EXT";
  case BlendOverlap::E_DISJOINT_EXT:
    return "BlendOverlap::E_DISJOINT_EXT";
  case BlendOverlap::E_CONJOINT_EXT:
    return "BlendOverlap::E_CONJOINT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DriverId input) {
  switch (input) {
  case DriverId::E_AMD_PROPRIETARY:
    return "DriverId::E_AMD_PROPRIETARY";
  case DriverId::E_AMD_OPEN_SOURCE:
    return "DriverId::E_AMD_OPEN_SOURCE";
  case DriverId::E_MESA_RADV:
    return "DriverId::E_MESA_RADV";
  case DriverId::E_NVIDIA_PROPRIETARY:
    return "DriverId::E_NVIDIA_PROPRIETARY";
  case DriverId::E_INTEL_PROPRIETARY_WINDOWS:
    return "DriverId::E_INTEL_PROPRIETARY_WINDOWS";
  case DriverId::E_INTEL_OPEN_SOURCE_MESA:
    return "DriverId::E_INTEL_OPEN_SOURCE_MESA";
  case DriverId::E_IMAGINATION_PROPRIETARY:
    return "DriverId::E_IMAGINATION_PROPRIETARY";
  case DriverId::E_QUALCOMM_PROPRIETARY:
    return "DriverId::E_QUALCOMM_PROPRIETARY";
  case DriverId::E_ARM_PROPRIETARY:
    return "DriverId::E_ARM_PROPRIETARY";
  case DriverId::E_GOOGLE_SWIFTSHADER:
    return "DriverId::E_GOOGLE_SWIFTSHADER";
  case DriverId::E_GGP_PROPRIETARY:
    return "DriverId::E_GGP_PROPRIETARY";
  case DriverId::E_BROADCOM_PROPRIETARY:
    return "DriverId::E_BROADCOM_PROPRIETARY";
  case DriverId::E_MESA_LLVMPIPE:
    return "DriverId::E_MESA_LLVMPIPE";
  case DriverId::E_MOLTENVK:
    return "DriverId::E_MOLTENVK";
  case DriverId::E_COREAVI_PROPRIETARY:
    return "DriverId::E_COREAVI_PROPRIETARY";
  case DriverId::E_JUICE_PROPRIETARY:
    return "DriverId::E_JUICE_PROPRIETARY";
  case DriverId::E_VERISILICON_PROPRIETARY:
    return "DriverId::E_VERISILICON_PROPRIETARY";
  case DriverId::E_MESA_TURNIP:
    return "DriverId::E_MESA_TURNIP";
  case DriverId::E_MESA_V3DV:
    return "DriverId::E_MESA_V3DV";
  case DriverId::E_MESA_PANVK:
    return "DriverId::E_MESA_PANVK";
  case DriverId::E_SAMSUNG_PROPRIETARY:
    return "DriverId::E_SAMSUNG_PROPRIETARY";
  case DriverId::E_MESA_VENUS:
    return "DriverId::E_MESA_VENUS";
  case DriverId::E_MESA_DOZEN:
    return "DriverId::E_MESA_DOZEN";
  case DriverId::E_MESA_NVK:
    return "DriverId::E_MESA_NVK";
  case DriverId::E_IMAGINATION_OPEN_SOURCE_MESA:
    return "DriverId::E_IMAGINATION_OPEN_SOURCE_MESA";
  case DriverId::E_MESA_HONEYKRISP:
    return "DriverId::E_MESA_HONEYKRISP";
  case DriverId::E_RESERVED_27:
    return "DriverId::E_RESERVED_27";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CoverageModulationMode input) {
  switch (input) {
  case CoverageModulationMode::E_NONE_NV:
    return "CoverageModulationMode::E_NONE_NV";
  case CoverageModulationMode::E_RGB_NV:
    return "CoverageModulationMode::E_RGB_NV";
  case CoverageModulationMode::E_ALPHA_NV:
    return "CoverageModulationMode::E_ALPHA_NV";
  case CoverageModulationMode::E_RGBA_NV:
    return "CoverageModulationMode::E_RGBA_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CoverageReductionMode input) {
  switch (input) {
  case CoverageReductionMode::E_MERGE_NV:
    return "CoverageReductionMode::E_MERGE_NV";
  case CoverageReductionMode::E_TRUNCATE_NV:
    return "CoverageReductionMode::E_TRUNCATE_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ValidationCacheHeaderVersion input) {
  switch (input) {
  case ValidationCacheHeaderVersion::E_ONE_EXT:
    return "ValidationCacheHeaderVersion::E_ONE_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SystemAllocationScope input) {
  switch (input) {
  case SystemAllocationScope::E_COMMAND:
    return "SystemAllocationScope::E_COMMAND";
  case SystemAllocationScope::E_OBJECT:
    return "SystemAllocationScope::E_OBJECT";
  case SystemAllocationScope::E_CACHE:
    return "SystemAllocationScope::E_CACHE";
  case SystemAllocationScope::E_DEVICE:
    return "SystemAllocationScope::E_DEVICE";
  case SystemAllocationScope::E_INSTANCE:
    return "SystemAllocationScope::E_INSTANCE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ShaderGroupShader input) {
  switch (input) {
  case ShaderGroupShader::E_GENERAL_KHR:
    return "ShaderGroupShader::E_GENERAL_KHR";
  case ShaderGroupShader::E_CLOSEST_HIT_KHR:
    return "ShaderGroupShader::E_CLOSEST_HIT_KHR";
  case ShaderGroupShader::E_ANY_HIT_KHR:
    return "ShaderGroupShader::E_ANY_HIT_KHR";
  case ShaderGroupShader::E_INTERSECTION_KHR:
    return "ShaderGroupShader::E_INTERSECTION_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(HostImageCopyMaskBit input) {
  switch (input) {
  case HostImageCopyMaskBit::E_MEMCPY_EXT:
    return "HostImageCopyMaskBit::E_MEMCPY_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DebugUtilsMessageSeverityMaskBit input) {
  switch (input) {
  case DebugUtilsMessageSeverityMaskBit::E_VERBOSE_BIT_EXT:
    return "DebugUtilsMessageSeverityMaskBit::E_VERBOSE_BIT_EXT";
  case DebugUtilsMessageSeverityMaskBit::E_INFO_BIT_EXT:
    return "DebugUtilsMessageSeverityMaskBit::E_INFO_BIT_EXT";
  case DebugUtilsMessageSeverityMaskBit::E_WARNING_BIT_EXT:
    return "DebugUtilsMessageSeverityMaskBit::E_WARNING_BIT_EXT";
  case DebugUtilsMessageSeverityMaskBit::E_ERROR_BIT_EXT:
    return "DebugUtilsMessageSeverityMaskBit::E_ERROR_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DescriptorBindingMaskBit input) {
  switch (input) {
  case DescriptorBindingMaskBit::E_UPDATE_AFTER_BIND_BIT:
    return "DescriptorBindingMaskBit::E_UPDATE_AFTER_BIND_BIT";
  case DescriptorBindingMaskBit::E_UPDATE_UNUSED_WHILE_PENDING_BIT:
    return "DescriptorBindingMaskBit::E_UPDATE_UNUSED_WHILE_PENDING_BIT";
  case DescriptorBindingMaskBit::E_PARTIALLY_BOUND_BIT:
    return "DescriptorBindingMaskBit::E_PARTIALLY_BOUND_BIT";
  case DescriptorBindingMaskBit::E_VARIABLE_DESCRIPTOR_COUNT_BIT:
    return "DescriptorBindingMaskBit::E_VARIABLE_DESCRIPTOR_COUNT_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ImageTiling input) {
  switch (input) {
  case ImageTiling::E_OPTIMAL:
    return "ImageTiling::E_OPTIMAL";
  case ImageTiling::E_LINEAR:
    return "ImageTiling::E_LINEAR";
  case ImageTiling::E_DRM_FORMAT_MODIFIER_EXT:
    return "ImageTiling::E_DRM_FORMAT_MODIFIER_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ResolveModeMaskBit input) {
  switch (input) {
  case ResolveModeMaskBit::E_NONE:
    return "ResolveModeMaskBit::E_NONE";
  case ResolveModeMaskBit::E_SAMPLE_ZERO_BIT:
    return "ResolveModeMaskBit::E_SAMPLE_ZERO_BIT";
  case ResolveModeMaskBit::E_AVERAGE_BIT:
    return "ResolveModeMaskBit::E_AVERAGE_BIT";
  case ResolveModeMaskBit::E_MIN_BIT:
    return "ResolveModeMaskBit::E_MIN_BIT";
  case ResolveModeMaskBit::E_MAX_BIT:
    return "ResolveModeMaskBit::E_MAX_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CoarseSampleOrderType input) {
  switch (input) {
  case CoarseSampleOrderType::E_DEFAULT_NV:
    return "CoarseSampleOrderType::E_DEFAULT_NV";
  case CoarseSampleOrderType::E_CUSTOM_NV:
    return "CoarseSampleOrderType::E_CUSTOM_NV";
  case CoarseSampleOrderType::E_PIXEL_MAJOR_NV:
    return "CoarseSampleOrderType::E_PIXEL_MAJOR_NV";
  case CoarseSampleOrderType::E_SAMPLE_MAJOR_NV:
    return "CoarseSampleOrderType::E_SAMPLE_MAJOR_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineCreateMaskBit input) {
  switch (input) {
  case PipelineCreateMaskBit::E_DISABLE_OPTIMIZATION_BIT:
    return "PipelineCreateMaskBit::E_DISABLE_OPTIMIZATION_BIT";
  case PipelineCreateMaskBit::E_ALLOW_DERIVATIVES_BIT:
    return "PipelineCreateMaskBit::E_ALLOW_DERIVATIVES_BIT";
  case PipelineCreateMaskBit::E_DERIVATIVE_BIT:
    return "PipelineCreateMaskBit::E_DERIVATIVE_BIT";
  case PipelineCreateMaskBit::E_NO_PROTECTED_ACCESS_BIT_EXT:
    return "PipelineCreateMaskBit::E_NO_PROTECTED_ACCESS_BIT_EXT";
  case PipelineCreateMaskBit::E_PROTECTED_ACCESS_ONLY_BIT_EXT:
    return "PipelineCreateMaskBit::E_PROTECTED_ACCESS_ONLY_BIT_EXT";
  case PipelineCreateMaskBit::E_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT:
    return "PipelineCreateMaskBit::E_RAY_TRACING_OPACITY_MICROMAP_BIT_EXT";
  case PipelineCreateMaskBit::E_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT:
    return "PipelineCreateMaskBit::E_COLOR_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT";
  case PipelineCreateMaskBit::E_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT:
    return "PipelineCreateMaskBit::E_DEPTH_STENCIL_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT";
  case PipelineCreateMaskBit::E_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR:
    return "PipelineCreateMaskBit::E_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR";
  case PipelineCreateMaskBit::E_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT:
    return "PipelineCreateMaskBit::E_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_BIT_EXT";
  case PipelineCreateMaskBit::E_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR:
    return "PipelineCreateMaskBit::E_RAY_TRACING_NO_NULL_ANY_HIT_SHADERS_BIT_KHR";
  case PipelineCreateMaskBit::E_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR:
    return "PipelineCreateMaskBit::E_RAY_TRACING_NO_NULL_CLOSEST_HIT_SHADERS_BIT_KHR";
  case PipelineCreateMaskBit::E_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR:
    return "PipelineCreateMaskBit::E_RAY_TRACING_NO_NULL_MISS_SHADERS_BIT_KHR";
  case PipelineCreateMaskBit::E_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR:
    return "PipelineCreateMaskBit::E_RAY_TRACING_NO_NULL_INTERSECTION_SHADERS_BIT_KHR";
  case PipelineCreateMaskBit::E_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR:
    return "PipelineCreateMaskBit::E_RAY_TRACING_SKIP_TRIANGLES_BIT_KHR";
  case PipelineCreateMaskBit::E_RAY_TRACING_SKIP_AABBS_BIT_KHR:
    return "PipelineCreateMaskBit::E_RAY_TRACING_SKIP_AABBS_BIT_KHR";
  case PipelineCreateMaskBit::E_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR:
    return "PipelineCreateMaskBit::E_RAY_TRACING_SHADER_GROUP_HANDLE_CAPTURE_REPLAY_BIT_KHR";
  case PipelineCreateMaskBit::E_DEFER_COMPILE_BIT_NV:
    return "PipelineCreateMaskBit::E_DEFER_COMPILE_BIT_NV";
  case PipelineCreateMaskBit::E_RAY_TRACING_ALLOW_MOTION_BIT_NV:
    return "PipelineCreateMaskBit::E_RAY_TRACING_ALLOW_MOTION_BIT_NV";
  case PipelineCreateMaskBit::E_CAPTURE_STATISTICS_BIT_KHR:
    return "PipelineCreateMaskBit::E_CAPTURE_STATISTICS_BIT_KHR";
  case PipelineCreateMaskBit::E_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR:
    return "PipelineCreateMaskBit::E_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR";
  case PipelineCreateMaskBit::E_INDIRECT_BINDABLE_BIT_NV:
    return "PipelineCreateMaskBit::E_INDIRECT_BINDABLE_BIT_NV";
  case PipelineCreateMaskBit::E_LIBRARY_BIT_KHR:
    return "PipelineCreateMaskBit::E_LIBRARY_BIT_KHR";
  case PipelineCreateMaskBit::E_DESCRIPTOR_BUFFER_BIT_EXT:
    return "PipelineCreateMaskBit::E_DESCRIPTOR_BUFFER_BIT_EXT";
  case PipelineCreateMaskBit::E_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT:
    return "PipelineCreateMaskBit::E_RETAIN_LINK_TIME_OPTIMIZATION_INFO_BIT_EXT";
  case PipelineCreateMaskBit::E_LINK_TIME_OPTIMIZATION_BIT_EXT:
    return "PipelineCreateMaskBit::E_LINK_TIME_OPTIMIZATION_BIT_EXT";
  case PipelineCreateMaskBit::E_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT:
    return "PipelineCreateMaskBit::E_FAIL_ON_PIPELINE_COMPILE_REQUIRED_BIT";
  case PipelineCreateMaskBit::E_EARLY_RETURN_ON_FAILURE_BIT:
    return "PipelineCreateMaskBit::E_EARLY_RETURN_ON_FAILURE_BIT";
  case PipelineCreateMaskBit::E_VIEW_INDEX_FROM_DEVICE_INDEX_BIT:
    return "PipelineCreateMaskBit::E_VIEW_INDEX_FROM_DEVICE_INDEX_BIT";
  case PipelineCreateMaskBit::E_DISPATCH_BASE_BIT:
    return "PipelineCreateMaskBit::E_DISPATCH_BASE_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AccelerationStructureType input) {
  switch (input) {
  case AccelerationStructureType::E_TOP_LEVEL_KHR:
    return "AccelerationStructureType::E_TOP_LEVEL_KHR";
  case AccelerationStructureType::E_BOTTOM_LEVEL_KHR:
    return "AccelerationStructureType::E_BOTTOM_LEVEL_KHR";
  case AccelerationStructureType::E_GENERIC_KHR:
    return "AccelerationStructureType::E_GENERIC_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoDecodeCapabilityMaskBit input) {
  switch (input) {
  case VideoDecodeCapabilityMaskBit::E_DPB_AND_OUTPUT_COINCIDE_BIT_KHR:
    return "VideoDecodeCapabilityMaskBit::E_DPB_AND_OUTPUT_COINCIDE_BIT_KHR";
  case VideoDecodeCapabilityMaskBit::E_DPB_AND_OUTPUT_DISTINCT_BIT_KHR:
    return "VideoDecodeCapabilityMaskBit::E_DPB_AND_OUTPUT_DISTINCT_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(OpticalFlowPerformanceLevel input) {
  switch (input) {
  case OpticalFlowPerformanceLevel::E_UNKNOWN_NV:
    return "OpticalFlowPerformanceLevel::E_UNKNOWN_NV";
  case OpticalFlowPerformanceLevel::E_SLOW_NV:
    return "OpticalFlowPerformanceLevel::E_SLOW_NV";
  case OpticalFlowPerformanceLevel::E_MEDIUM_NV:
    return "OpticalFlowPerformanceLevel::E_MEDIUM_NV";
  case OpticalFlowPerformanceLevel::E_FAST_NV:
    return "OpticalFlowPerformanceLevel::E_FAST_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ShadingRatePaletteEntry input) {
  switch (input) {
  case ShadingRatePaletteEntry::E_NO_INVOCATIONS_NV:
    return "ShadingRatePaletteEntry::E_NO_INVOCATIONS_NV";
  case ShadingRatePaletteEntry::E_16_INVOCATIONS_PER_PIXEL_NV:
    return "ShadingRatePaletteEntry::E_16_INVOCATIONS_PER_PIXEL_NV";
  case ShadingRatePaletteEntry::E_8_INVOCATIONS_PER_PIXEL_NV:
    return "ShadingRatePaletteEntry::E_8_INVOCATIONS_PER_PIXEL_NV";
  case ShadingRatePaletteEntry::E_4_INVOCATIONS_PER_PIXEL_NV:
    return "ShadingRatePaletteEntry::E_4_INVOCATIONS_PER_PIXEL_NV";
  case ShadingRatePaletteEntry::E_2_INVOCATIONS_PER_PIXEL_NV:
    return "ShadingRatePaletteEntry::E_2_INVOCATIONS_PER_PIXEL_NV";
  case ShadingRatePaletteEntry::E_1_INVOCATION_PER_PIXEL_NV:
    return "ShadingRatePaletteEntry::E_1_INVOCATION_PER_PIXEL_NV";
  case ShadingRatePaletteEntry::E_1_INVOCATION_PER_2X1_PIXELS_NV:
    return "ShadingRatePaletteEntry::E_1_INVOCATION_PER_2X1_PIXELS_NV";
  case ShadingRatePaletteEntry::E_1_INVOCATION_PER_1X2_PIXELS_NV:
    return "ShadingRatePaletteEntry::E_1_INVOCATION_PER_1X2_PIXELS_NV";
  case ShadingRatePaletteEntry::E_1_INVOCATION_PER_2X2_PIXELS_NV:
    return "ShadingRatePaletteEntry::E_1_INVOCATION_PER_2X2_PIXELS_NV";
  case ShadingRatePaletteEntry::E_1_INVOCATION_PER_4X2_PIXELS_NV:
    return "ShadingRatePaletteEntry::E_1_INVOCATION_PER_4X2_PIXELS_NV";
  case ShadingRatePaletteEntry::E_1_INVOCATION_PER_2X4_PIXELS_NV:
    return "ShadingRatePaletteEntry::E_1_INVOCATION_PER_2X4_PIXELS_NV";
  case ShadingRatePaletteEntry::E_1_INVOCATION_PER_4X4_PIXELS_NV:
    return "ShadingRatePaletteEntry::E_1_INVOCATION_PER_4X4_PIXELS_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoCodingControlMaskBit input) {
  switch (input) {
  case VideoCodingControlMaskBit::E_RESET_BIT_KHR:
    return "VideoCodingControlMaskBit::E_RESET_BIT_KHR";
  case VideoCodingControlMaskBit::E_ENCODE_RATE_CONTROL_BIT_KHR:
    return "VideoCodingControlMaskBit::E_ENCODE_RATE_CONTROL_BIT_KHR";
  case VideoCodingControlMaskBit::E_ENCODE_QUALITY_LEVEL_BIT_KHR:
    return "VideoCodingControlMaskBit::E_ENCODE_QUALITY_LEVEL_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ImageType input) {
  switch (input) {
  case ImageType::E_1D:
    return "ImageType::E_1D";
  case ImageType::E_2D:
    return "ImageType::E_2D";
  case ImageType::E_3D:
    return "ImageType::E_3D";
  default:
    std::unreachable();
  }
}

std::string_view ToString(GeometryMaskBit input) {
  switch (input) {
  case GeometryMaskBit::E_OPAQUE_BIT_KHR:
    return "GeometryMaskBit::E_OPAQUE_BIT_KHR";
  case GeometryMaskBit::E_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR:
    return "GeometryMaskBit::E_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BuildAccelerationStructureMaskBit input) {
  switch (input) {
  case BuildAccelerationStructureMaskBit::E_ALLOW_UPDATE_BIT_KHR:
    return "BuildAccelerationStructureMaskBit::E_ALLOW_UPDATE_BIT_KHR";
  case BuildAccelerationStructureMaskBit::E_ALLOW_COMPACTION_BIT_KHR:
    return "BuildAccelerationStructureMaskBit::E_ALLOW_COMPACTION_BIT_KHR";
  case BuildAccelerationStructureMaskBit::E_PREFER_FAST_TRACE_BIT_KHR:
    return "BuildAccelerationStructureMaskBit::E_PREFER_FAST_TRACE_BIT_KHR";
  case BuildAccelerationStructureMaskBit::E_PREFER_FAST_BUILD_BIT_KHR:
    return "BuildAccelerationStructureMaskBit::E_PREFER_FAST_BUILD_BIT_KHR";
  case BuildAccelerationStructureMaskBit::E_LOW_MEMORY_BIT_KHR:
    return "BuildAccelerationStructureMaskBit::E_LOW_MEMORY_BIT_KHR";
  case BuildAccelerationStructureMaskBit::E_ALLOW_DATA_ACCESS_KHR:
    return "BuildAccelerationStructureMaskBit::E_ALLOW_DATA_ACCESS_KHR";
  case BuildAccelerationStructureMaskBit::E_ALLOW_OPACITY_MICROMAP_UPDATE_EXT:
    return "BuildAccelerationStructureMaskBit::E_ALLOW_OPACITY_MICROMAP_UPDATE_EXT";
  case BuildAccelerationStructureMaskBit::E_ALLOW_DISABLE_OPACITY_MICROMAPS_EXT:
    return "BuildAccelerationStructureMaskBit::E_ALLOW_DISABLE_OPACITY_MICROMAPS_EXT";
  case BuildAccelerationStructureMaskBit::E_ALLOW_OPACITY_MICROMAP_DATA_UPDATE_EXT:
    return "BuildAccelerationStructureMaskBit::E_ALLOW_OPACITY_MICROMAP_DATA_UPDATE_EXT";
  case BuildAccelerationStructureMaskBit::E_MOTION_BIT_NV:
    return "BuildAccelerationStructureMaskBit::E_MOTION_BIT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AccelerationStructureCreateMaskBit input) {
  switch (input) {
  case AccelerationStructureCreateMaskBit::E_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR:
    return "AccelerationStructureCreateMaskBit::E_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_KHR";
  case AccelerationStructureCreateMaskBit::E_MOTION_BIT_NV:
    return "AccelerationStructureCreateMaskBit::E_MOTION_BIT_NV";
  case AccelerationStructureCreateMaskBit::E_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT:
    return "AccelerationStructureCreateMaskBit::E_DESCRIPTOR_BUFFER_CAPTURE_REPLAY_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(RayTracingInvocationReorderMode input) {
  switch (input) {
  case RayTracingInvocationReorderMode::E_NONE_NV:
    return "RayTracingInvocationReorderMode::E_NONE_NV";
  case RayTracingInvocationReorderMode::E_REORDER_NV:
    return "RayTracingInvocationReorderMode::E_REORDER_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(CopyAccelerationStructureMode input) {
  switch (input) {
  case CopyAccelerationStructureMode::E_CLONE_KHR:
    return "CopyAccelerationStructureMode::E_CLONE_KHR";
  case CopyAccelerationStructureMode::E_COMPACT_KHR:
    return "CopyAccelerationStructureMode::E_COMPACT_KHR";
  case CopyAccelerationStructureMode::E_SERIALIZE_KHR:
    return "CopyAccelerationStructureMode::E_SERIALIZE_KHR";
  case CopyAccelerationStructureMode::E_DESERIALIZE_KHR:
    return "CopyAccelerationStructureMode::E_DESERIALIZE_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BuildAccelerationStructureMode input) {
  switch (input) {
  case BuildAccelerationStructureMode::E_BUILD_KHR:
    return "BuildAccelerationStructureMode::E_BUILD_KHR";
  case BuildAccelerationStructureMode::E_UPDATE_KHR:
    return "BuildAccelerationStructureMode::E_UPDATE_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(GeometryType input) {
  switch (input) {
  case GeometryType::E_TRIANGLES_KHR:
    return "GeometryType::E_TRIANGLES_KHR";
  case GeometryType::E_AABBS_KHR:
    return "GeometryType::E_AABBS_KHR";
  case GeometryType::E_INSTANCES_KHR:
    return "GeometryType::E_INSTANCES_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeH265CapabilityMaskBit input) {
  switch (input) {
  case VideoEncodeH265CapabilityMaskBit::E_HRD_COMPLIANCE_BIT_KHR:
    return "VideoEncodeH265CapabilityMaskBit::E_HRD_COMPLIANCE_BIT_KHR";
  case VideoEncodeH265CapabilityMaskBit::E_PREDICTION_WEIGHT_TABLE_GENERATED_BIT_KHR:
    return "VideoEncodeH265CapabilityMaskBit::E_PREDICTION_WEIGHT_TABLE_GENERATED_BIT_KHR";
  case VideoEncodeH265CapabilityMaskBit::E_ROW_UNALIGNED_SLICE_SEGMENT_BIT_KHR:
    return "VideoEncodeH265CapabilityMaskBit::E_ROW_UNALIGNED_SLICE_SEGMENT_BIT_KHR";
  case VideoEncodeH265CapabilityMaskBit::E_DIFFERENT_SLICE_SEGMENT_TYPE_BIT_KHR:
    return "VideoEncodeH265CapabilityMaskBit::E_DIFFERENT_SLICE_SEGMENT_TYPE_BIT_KHR";
  case VideoEncodeH265CapabilityMaskBit::E_B_FRAME_IN_L0_LIST_BIT_KHR:
    return "VideoEncodeH265CapabilityMaskBit::E_B_FRAME_IN_L0_LIST_BIT_KHR";
  case VideoEncodeH265CapabilityMaskBit::E_B_FRAME_IN_L1_LIST_BIT_KHR:
    return "VideoEncodeH265CapabilityMaskBit::E_B_FRAME_IN_L1_LIST_BIT_KHR";
  case VideoEncodeH265CapabilityMaskBit::E_PER_PICTURE_TYPE_MIN_MAX_QP_BIT_KHR:
    return "VideoEncodeH265CapabilityMaskBit::E_PER_PICTURE_TYPE_MIN_MAX_QP_BIT_KHR";
  case VideoEncodeH265CapabilityMaskBit::E_PER_SLICE_SEGMENT_CONSTANT_QP_BIT_KHR:
    return "VideoEncodeH265CapabilityMaskBit::E_PER_SLICE_SEGMENT_CONSTANT_QP_BIT_KHR";
  case VideoEncodeH265CapabilityMaskBit::E_MULTIPLE_TILES_PER_SLICE_SEGMENT_BIT_KHR:
    return "VideoEncodeH265CapabilityMaskBit::E_MULTIPLE_TILES_PER_SLICE_SEGMENT_BIT_KHR";
  case VideoEncodeH265CapabilityMaskBit::E_MULTIPLE_SLICE_SEGMENTS_PER_TILE_BIT_KHR:
    return "VideoEncodeH265CapabilityMaskBit::E_MULTIPLE_SLICE_SEGMENTS_PER_TILE_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(RayTracingShaderGroupType input) {
  switch (input) {
  case RayTracingShaderGroupType::E_GENERAL_KHR:
    return "RayTracingShaderGroupType::E_GENERAL_KHR";
  case RayTracingShaderGroupType::E_TRIANGLES_HIT_GROUP_KHR:
    return "RayTracingShaderGroupType::E_TRIANGLES_HIT_GROUP_KHR";
  case RayTracingShaderGroupType::E_PROCEDURAL_HIT_GROUP_KHR:
    return "RayTracingShaderGroupType::E_PROCEDURAL_HIT_GROUP_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeMaskBit input) {
  switch (input) {
  default:
    std::unreachable();
  }
}

std::string_view ToString(GeometryInstanceMaskBit input) {
  switch (input) {
  case GeometryInstanceMaskBit::E_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR:
    return "GeometryInstanceMaskBit::E_TRIANGLE_FACING_CULL_DISABLE_BIT_KHR";
  case GeometryInstanceMaskBit::E_TRIANGLE_FLIP_FACING_BIT_KHR:
    return "GeometryInstanceMaskBit::E_TRIANGLE_FLIP_FACING_BIT_KHR";
  case GeometryInstanceMaskBit::E_FORCE_OPAQUE_BIT_KHR:
    return "GeometryInstanceMaskBit::E_FORCE_OPAQUE_BIT_KHR";
  case GeometryInstanceMaskBit::E_FORCE_NO_OPAQUE_BIT_KHR:
    return "GeometryInstanceMaskBit::E_FORCE_NO_OPAQUE_BIT_KHR";
  case GeometryInstanceMaskBit::E_FORCE_OPACITY_MICROMAP_2_STATE_EXT:
    return "GeometryInstanceMaskBit::E_FORCE_OPACITY_MICROMAP_2_STATE_EXT";
  case GeometryInstanceMaskBit::E_DISABLE_OPACITY_MICROMAPS_EXT:
    return "GeometryInstanceMaskBit::E_DISABLE_OPACITY_MICROMAPS_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PerformanceConfigurationType input) {
  switch (input) {
  case PerformanceConfigurationType::E_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL:
    return "PerformanceConfigurationType::E_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL";
  default:
    std::unreachable();
  }
}

std::string_view ToString(FramebufferCreateMaskBit input) {
  switch (input) {
  case FramebufferCreateMaskBit::E_IMAGELESS_BIT:
    return "FramebufferCreateMaskBit::E_IMAGELESS_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DisplayEventType input) {
  switch (input) {
  case DisplayEventType::E_FIRST_PIXEL_OUT_EXT:
    return "DisplayEventType::E_FIRST_PIXEL_OUT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineColorBlendStateCreateMaskBit input) {
  switch (input) {
  case PipelineColorBlendStateCreateMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_BIT_EXT:
    return "PipelineColorBlendStateCreateMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PerformanceCounterScope input) {
  switch (input) {
  case PerformanceCounterScope::E_COMMAND_BUFFER_KHR:
    return "PerformanceCounterScope::E_COMMAND_BUFFER_KHR";
  case PerformanceCounterScope::E_RENDER_PASS_KHR:
    return "PerformanceCounterScope::E_RENDER_PASS_KHR";
  case PerformanceCounterScope::E_COMMAND_KHR:
    return "PerformanceCounterScope::E_COMMAND_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(OpacityMicromapFormat input) {
  switch (input) {
  case OpacityMicromapFormat::E_2_STATE_EXT:
    return "OpacityMicromapFormat::E_2_STATE_EXT";
  case OpacityMicromapFormat::E_4_STATE_EXT:
    return "OpacityMicromapFormat::E_4_STATE_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(MemoryDecompressionMethodMaskBit input) {
  switch (input) {
  case MemoryDecompressionMethodMaskBit::E_GDEFLATE_1_0_BIT_NV:
    return "MemoryDecompressionMethodMaskBit::E_GDEFLATE_1_0_BIT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PerformanceCounterUnit input) {
  switch (input) {
  case PerformanceCounterUnit::E_GENERIC_KHR:
    return "PerformanceCounterUnit::E_GENERIC_KHR";
  case PerformanceCounterUnit::E_PERCENTAGE_KHR:
    return "PerformanceCounterUnit::E_PERCENTAGE_KHR";
  case PerformanceCounterUnit::E_NANOSECONDS_KHR:
    return "PerformanceCounterUnit::E_NANOSECONDS_KHR";
  case PerformanceCounterUnit::E_BYTES_KHR:
    return "PerformanceCounterUnit::E_BYTES_KHR";
  case PerformanceCounterUnit::E_BYTES_PER_SECOND_KHR:
    return "PerformanceCounterUnit::E_BYTES_PER_SECOND_KHR";
  case PerformanceCounterUnit::E_KELVIN_KHR:
    return "PerformanceCounterUnit::E_KELVIN_KHR";
  case PerformanceCounterUnit::E_WATTS_KHR:
    return "PerformanceCounterUnit::E_WATTS_KHR";
  case PerformanceCounterUnit::E_VOLTS_KHR:
    return "PerformanceCounterUnit::E_VOLTS_KHR";
  case PerformanceCounterUnit::E_AMPS_KHR:
    return "PerformanceCounterUnit::E_AMPS_KHR";
  case PerformanceCounterUnit::E_HERTZ_KHR:
    return "PerformanceCounterUnit::E_HERTZ_KHR";
  case PerformanceCounterUnit::E_CYCLES_KHR:
    return "PerformanceCounterUnit::E_CYCLES_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineBindPoint input) {
  switch (input) {
  case PipelineBindPoint::E_GRAPHICS:
    return "PipelineBindPoint::E_GRAPHICS";
  case PipelineBindPoint::E_COMPUTE:
    return "PipelineBindPoint::E_COMPUTE";
  case PipelineBindPoint::E_RAY_TRACING_KHR:
    return "PipelineBindPoint::E_RAY_TRACING_KHR";
  case PipelineBindPoint::E_SUBPASS_SHADING_HUAWEI:
    return "PipelineBindPoint::E_SUBPASS_SHADING_HUAWEI";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeTuningMode input) {
  switch (input) {
  case VideoEncodeTuningMode::E_DEFAULT_KHR:
    return "VideoEncodeTuningMode::E_DEFAULT_KHR";
  case VideoEncodeTuningMode::E_HIGH_QUALITY_KHR:
    return "VideoEncodeTuningMode::E_HIGH_QUALITY_KHR";
  case VideoEncodeTuningMode::E_LOW_LATENCY_KHR:
    return "VideoEncodeTuningMode::E_LOW_LATENCY_KHR";
  case VideoEncodeTuningMode::E_ULTRA_LOW_LATENCY_KHR:
    return "VideoEncodeTuningMode::E_ULTRA_LOW_LATENCY_KHR";
  case VideoEncodeTuningMode::E_LOSSLESS_KHR:
    return "VideoEncodeTuningMode::E_LOSSLESS_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(IndirectCommandsLayoutUsageMaskBit input) {
  switch (input) {
  case IndirectCommandsLayoutUsageMaskBit::E_EXPLICIT_PREPROCESS_BIT_NV:
    return "IndirectCommandsLayoutUsageMaskBit::E_EXPLICIT_PREPROCESS_BIT_NV";
  case IndirectCommandsLayoutUsageMaskBit::E_INDEXED_SEQUENCES_BIT_NV:
    return "IndirectCommandsLayoutUsageMaskBit::E_INDEXED_SEQUENCES_BIT_NV";
  case IndirectCommandsLayoutUsageMaskBit::E_UNORDERED_SEQUENCES_BIT_NV:
    return "IndirectCommandsLayoutUsageMaskBit::E_UNORDERED_SEQUENCES_BIT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(StencilFaceMaskBit input) {
  switch (input) {
  case StencilFaceMaskBit::E_FRONT_BIT:
    return "StencilFaceMaskBit::E_FRONT_BIT";
  case StencilFaceMaskBit::E_BACK_BIT:
    return "StencilFaceMaskBit::E_BACK_BIT";
  case StencilFaceMaskBit::E_FRONT_AND_BACK:
    return "StencilFaceMaskBit::E_FRONT_AND_BACK";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BlendFactor input) {
  switch (input) {
  case BlendFactor::E_ZERO:
    return "BlendFactor::E_ZERO";
  case BlendFactor::E_ONE:
    return "BlendFactor::E_ONE";
  case BlendFactor::E_SRC_COLOR:
    return "BlendFactor::E_SRC_COLOR";
  case BlendFactor::E_ONE_MINUS_SRC_COLOR:
    return "BlendFactor::E_ONE_MINUS_SRC_COLOR";
  case BlendFactor::E_DST_COLOR:
    return "BlendFactor::E_DST_COLOR";
  case BlendFactor::E_ONE_MINUS_DST_COLOR:
    return "BlendFactor::E_ONE_MINUS_DST_COLOR";
  case BlendFactor::E_SRC_ALPHA:
    return "BlendFactor::E_SRC_ALPHA";
  case BlendFactor::E_ONE_MINUS_SRC_ALPHA:
    return "BlendFactor::E_ONE_MINUS_SRC_ALPHA";
  case BlendFactor::E_DST_ALPHA:
    return "BlendFactor::E_DST_ALPHA";
  case BlendFactor::E_ONE_MINUS_DST_ALPHA:
    return "BlendFactor::E_ONE_MINUS_DST_ALPHA";
  case BlendFactor::E_CONSTANT_COLOR:
    return "BlendFactor::E_CONSTANT_COLOR";
  case BlendFactor::E_ONE_MINUS_CONSTANT_COLOR:
    return "BlendFactor::E_ONE_MINUS_CONSTANT_COLOR";
  case BlendFactor::E_CONSTANT_ALPHA:
    return "BlendFactor::E_CONSTANT_ALPHA";
  case BlendFactor::E_ONE_MINUS_CONSTANT_ALPHA:
    return "BlendFactor::E_ONE_MINUS_CONSTANT_ALPHA";
  case BlendFactor::E_SRC_ALPHA_SATURATE:
    return "BlendFactor::E_SRC_ALPHA_SATURATE";
  case BlendFactor::E_SRC1_COLOR:
    return "BlendFactor::E_SRC1_COLOR";
  case BlendFactor::E_ONE_MINUS_SRC1_COLOR:
    return "BlendFactor::E_ONE_MINUS_SRC1_COLOR";
  case BlendFactor::E_SRC1_ALPHA:
    return "BlendFactor::E_SRC1_ALPHA";
  case BlendFactor::E_ONE_MINUS_SRC1_ALPHA:
    return "BlendFactor::E_ONE_MINUS_SRC1_ALPHA";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PerformanceCounterStorage input) {
  switch (input) {
  case PerformanceCounterStorage::E_INT32_KHR:
    return "PerformanceCounterStorage::E_INT32_KHR";
  case PerformanceCounterStorage::E_INT64_KHR:
    return "PerformanceCounterStorage::E_INT64_KHR";
  case PerformanceCounterStorage::E_UINT32_KHR:
    return "PerformanceCounterStorage::E_UINT32_KHR";
  case PerformanceCounterStorage::E_UINT64_KHR:
    return "PerformanceCounterStorage::E_UINT64_KHR";
  case PerformanceCounterStorage::E_FLOAT32_KHR:
    return "PerformanceCounterStorage::E_FLOAT32_KHR";
  case PerformanceCounterStorage::E_FLOAT64_KHR:
    return "PerformanceCounterStorage::E_FLOAT64_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PerformanceCounterDescriptionMaskBit input) {
  switch (input) {
  case PerformanceCounterDescriptionMaskBit::E_PERFORMANCE_IMPACTING_BIT_KHR:
    return "PerformanceCounterDescriptionMaskBit::E_PERFORMANCE_IMPACTING_BIT_KHR";
  case PerformanceCounterDescriptionMaskBit::E_CONCURRENTLY_IMPACTED_BIT_KHR:
    return "PerformanceCounterDescriptionMaskBit::E_CONCURRENTLY_IMPACTED_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AcquireProfilingLockMaskBit input) {
  switch (input) {
  default:
    std::unreachable();
  }
}

std::string_view ToString(DepthBiasRepresentation input) {
  switch (input) {
  case DepthBiasRepresentation::E_LEAST_REPRESENTABLE_VALUE_FORMAT_EXT:
    return "DepthBiasRepresentation::E_LEAST_REPRESENTABLE_VALUE_FORMAT_EXT";
  case DepthBiasRepresentation::E_LEAST_REPRESENTABLE_VALUE_FORCE_UNORM_EXT:
    return "DepthBiasRepresentation::E_LEAST_REPRESENTABLE_VALUE_FORCE_UNORM_EXT";
  case DepthBiasRepresentation::E_FLOAT_EXT:
    return "DepthBiasRepresentation::E_FLOAT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(QueryPoolSamplingMode input) {
  switch (input) {
  case QueryPoolSamplingMode::E_MANUAL_INTEL:
    return "QueryPoolSamplingMode::E_MANUAL_INTEL";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PerformanceParameterType input) {
  switch (input) {
  case PerformanceParameterType::E_HW_COUNTERS_SUPPORTED_INTEL:
    return "PerformanceParameterType::E_HW_COUNTERS_SUPPORTED_INTEL";
  case PerformanceParameterType::E_STREAM_MARKER_VALID_BITS_INTEL:
    return "PerformanceParameterType::E_STREAM_MARKER_VALID_BITS_INTEL";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeContentMaskBit input) {
  switch (input) {
  case VideoEncodeContentMaskBit::E_DEFAULT_KHR:
    return "VideoEncodeContentMaskBit::E_DEFAULT_KHR";
  case VideoEncodeContentMaskBit::E_CAMERA_BIT_KHR:
    return "VideoEncodeContentMaskBit::E_CAMERA_BIT_KHR";
  case VideoEncodeContentMaskBit::E_DESKTOP_BIT_KHR:
    return "VideoEncodeContentMaskBit::E_DESKTOP_BIT_KHR";
  case VideoEncodeContentMaskBit::E_RENDERED_BIT_KHR:
    return "VideoEncodeContentMaskBit::E_RENDERED_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PerformanceValueType input) {
  switch (input) {
  case PerformanceValueType::E_UINT32_INTEL:
    return "PerformanceValueType::E_UINT32_INTEL";
  case PerformanceValueType::E_UINT64_INTEL:
    return "PerformanceValueType::E_UINT64_INTEL";
  case PerformanceValueType::E_FLOAT_INTEL:
    return "PerformanceValueType::E_FLOAT_INTEL";
  case PerformanceValueType::E_BOOL_INTEL:
    return "PerformanceValueType::E_BOOL_INTEL";
  case PerformanceValueType::E_STRING_INTEL:
    return "PerformanceValueType::E_STRING_INTEL";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ShaderFloatControlsIndependence input) {
  switch (input) {
  case ShaderFloatControlsIndependence::E_32_BIT_ONLY:
    return "ShaderFloatControlsIndependence::E_32_BIT_ONLY";
  case ShaderFloatControlsIndependence::E_ALL:
    return "ShaderFloatControlsIndependence::E_ALL";
  case ShaderFloatControlsIndependence::E_NONE:
    return "ShaderFloatControlsIndependence::E_NONE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineExecutableStatisticFormat input) {
  switch (input) {
  case PipelineExecutableStatisticFormat::E_BOOL32_KHR:
    return "PipelineExecutableStatisticFormat::E_BOOL32_KHR";
  case PipelineExecutableStatisticFormat::E_INT64_KHR:
    return "PipelineExecutableStatisticFormat::E_INT64_KHR";
  case PipelineExecutableStatisticFormat::E_UINT64_KHR:
    return "PipelineExecutableStatisticFormat::E_UINT64_KHR";
  case PipelineExecutableStatisticFormat::E_FLOAT64_KHR:
    return "PipelineExecutableStatisticFormat::E_FLOAT64_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(FragmentShadingRateCombinerOp input) {
  switch (input) {
  case FragmentShadingRateCombinerOp::E_KEEP_KHR:
    return "FragmentShadingRateCombinerOp::E_KEEP_KHR";
  case FragmentShadingRateCombinerOp::E_REPLACE_KHR:
    return "FragmentShadingRateCombinerOp::E_REPLACE_KHR";
  case FragmentShadingRateCombinerOp::E_MIN_KHR:
    return "FragmentShadingRateCombinerOp::E_MIN_KHR";
  case FragmentShadingRateCombinerOp::E_MAX_KHR:
    return "FragmentShadingRateCombinerOp::E_MAX_KHR";
  case FragmentShadingRateCombinerOp::E_MUL_KHR:
    return "FragmentShadingRateCombinerOp::E_MUL_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeH264RateControlMaskBit input) {
  switch (input) {
  case VideoEncodeH264RateControlMaskBit::E_ATTEMPT_HRD_COMPLIANCE_BIT_KHR:
    return "VideoEncodeH264RateControlMaskBit::E_ATTEMPT_HRD_COMPLIANCE_BIT_KHR";
  case VideoEncodeH264RateControlMaskBit::E_REGULAR_GOP_BIT_KHR:
    return "VideoEncodeH264RateControlMaskBit::E_REGULAR_GOP_BIT_KHR";
  case VideoEncodeH264RateControlMaskBit::E_REFERENCE_PATTERN_FLAT_BIT_KHR:
    return "VideoEncodeH264RateControlMaskBit::E_REFERENCE_PATTERN_FLAT_BIT_KHR";
  case VideoEncodeH264RateControlMaskBit::E_REFERENCE_PATTERN_DYADIC_BIT_KHR:
    return "VideoEncodeH264RateControlMaskBit::E_REFERENCE_PATTERN_DYADIC_BIT_KHR";
  case VideoEncodeH264RateControlMaskBit::E_TEMPORAL_LAYER_PATTERN_DYADIC_BIT_KHR:
    return "VideoEncodeH264RateControlMaskBit::E_TEMPORAL_LAYER_PATTERN_DYADIC_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineCreationFeedbackMaskBit input) {
  switch (input) {
  case PipelineCreationFeedbackMaskBit::E_VALID_BIT:
    return "PipelineCreationFeedbackMaskBit::E_VALID_BIT";
  case PipelineCreationFeedbackMaskBit::E_APPLICATION_PIPELINE_CACHE_HIT_BIT:
    return "PipelineCreationFeedbackMaskBit::E_APPLICATION_PIPELINE_CACHE_HIT_BIT";
  case PipelineCreationFeedbackMaskBit::E_BASE_PIPELINE_ACCELERATION_BIT:
    return "PipelineCreationFeedbackMaskBit::E_BASE_PIPELINE_ACCELERATION_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(FragmentShadingRateType input) {
  switch (input) {
  case FragmentShadingRateType::E_FRAGMENT_SIZE_NV:
    return "FragmentShadingRateType::E_FRAGMENT_SIZE_NV";
  case FragmentShadingRateType::E_ENUMS_NV:
    return "FragmentShadingRateType::E_ENUMS_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ShaderInfoType input) {
  switch (input) {
  case ShaderInfoType::E_STATISTICS_AMD:
    return "ShaderInfoType::E_STATISTICS_AMD";
  case ShaderInfoType::E_BINARY_AMD:
    return "ShaderInfoType::E_BINARY_AMD";
  case ShaderInfoType::E_DISASSEMBLY_AMD:
    return "ShaderInfoType::E_DISASSEMBLY_AMD";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SubpassMergeStatus input) {
  switch (input) {
  case SubpassMergeStatus::E_MERGED_EXT:
    return "SubpassMergeStatus::E_MERGED_EXT";
  case SubpassMergeStatus::E_DISALLOWED_EXT:
    return "SubpassMergeStatus::E_DISALLOWED_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_SIDE_EFFECTS_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_SIDE_EFFECTS_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_SAMPLES_MISMATCH_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_SAMPLES_MISMATCH_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_VIEWS_MISMATCH_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_VIEWS_MISMATCH_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_ALIASING_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_ALIASING_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_DEPENDENCIES_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_DEPENDENCIES_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_INCOMPATIBLE_INPUT_ATTACHMENT_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_INCOMPATIBLE_INPUT_ATTACHMENT_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_TOO_MANY_ATTACHMENTS_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_TOO_MANY_ATTACHMENTS_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_INSUFFICIENT_STORAGE_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_INSUFFICIENT_STORAGE_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_DEPTH_STENCIL_COUNT_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_DEPTH_STENCIL_COUNT_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_RESOLVE_ATTACHMENT_REUSE_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_RESOLVE_ATTACHMENT_REUSE_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_SINGLE_SUBPASS_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_SINGLE_SUBPASS_EXT";
  case SubpassMergeStatus::E_NOT_MERGED_UNSPECIFIED_EXT:
    return "SubpassMergeStatus::E_NOT_MERGED_UNSPECIFIED_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ImageCompressionMaskBit input) {
  switch (input) {
  case ImageCompressionMaskBit::E_DEFAULT_EXT:
    return "ImageCompressionMaskBit::E_DEFAULT_EXT";
  case ImageCompressionMaskBit::E_FIXED_RATE_DEFAULT_EXT:
    return "ImageCompressionMaskBit::E_FIXED_RATE_DEFAULT_EXT";
  case ImageCompressionMaskBit::E_FIXED_RATE_EXPLICIT_EXT:
    return "ImageCompressionMaskBit::E_FIXED_RATE_EXPLICIT_EXT";
  case ImageCompressionMaskBit::E_DISABLED_EXT:
    return "ImageCompressionMaskBit::E_DISABLED_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AccessMaskBit2 input) {
  switch (input) {
  case AccessMaskBit2::E_NONE:
    return "AccessMaskBit2::E_NONE";
  case AccessMaskBit2::E_INDIRECT_COMMAND_READ_BIT:
    return "AccessMaskBit2::E_INDIRECT_COMMAND_READ_BIT";
  case AccessMaskBit2::E_INDEX_READ_BIT:
    return "AccessMaskBit2::E_INDEX_READ_BIT";
  case AccessMaskBit2::E_VERTEX_ATTRIBUTE_READ_BIT:
    return "AccessMaskBit2::E_VERTEX_ATTRIBUTE_READ_BIT";
  case AccessMaskBit2::E_UNIFORM_READ_BIT:
    return "AccessMaskBit2::E_UNIFORM_READ_BIT";
  case AccessMaskBit2::E_INPUT_ATTACHMENT_READ_BIT:
    return "AccessMaskBit2::E_INPUT_ATTACHMENT_READ_BIT";
  case AccessMaskBit2::E_SHADER_READ_BIT:
    return "AccessMaskBit2::E_SHADER_READ_BIT";
  case AccessMaskBit2::E_SHADER_WRITE_BIT:
    return "AccessMaskBit2::E_SHADER_WRITE_BIT";
  case AccessMaskBit2::E_COLOR_ATTACHMENT_READ_BIT:
    return "AccessMaskBit2::E_COLOR_ATTACHMENT_READ_BIT";
  case AccessMaskBit2::E_COLOR_ATTACHMENT_WRITE_BIT:
    return "AccessMaskBit2::E_COLOR_ATTACHMENT_WRITE_BIT";
  case AccessMaskBit2::E_DEPTH_STENCIL_ATTACHMENT_READ_BIT:
    return "AccessMaskBit2::E_DEPTH_STENCIL_ATTACHMENT_READ_BIT";
  case AccessMaskBit2::E_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT:
    return "AccessMaskBit2::E_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT";
  case AccessMaskBit2::E_TRANSFER_READ_BIT:
    return "AccessMaskBit2::E_TRANSFER_READ_BIT";
  case AccessMaskBit2::E_TRANSFER_WRITE_BIT:
    return "AccessMaskBit2::E_TRANSFER_WRITE_BIT";
  case AccessMaskBit2::E_HOST_READ_BIT:
    return "AccessMaskBit2::E_HOST_READ_BIT";
  case AccessMaskBit2::E_HOST_WRITE_BIT:
    return "AccessMaskBit2::E_HOST_WRITE_BIT";
  case AccessMaskBit2::E_MEMORY_READ_BIT:
    return "AccessMaskBit2::E_MEMORY_READ_BIT";
  case AccessMaskBit2::E_MEMORY_WRITE_BIT:
    return "AccessMaskBit2::E_MEMORY_WRITE_BIT";
  case AccessMaskBit2::E_SHADER_SAMPLED_READ_BIT:
    return "AccessMaskBit2::E_SHADER_SAMPLED_READ_BIT";
  case AccessMaskBit2::E_SHADER_STORAGE_READ_BIT:
    return "AccessMaskBit2::E_SHADER_STORAGE_READ_BIT";
  case AccessMaskBit2::E_SHADER_STORAGE_WRITE_BIT:
    return "AccessMaskBit2::E_SHADER_STORAGE_WRITE_BIT";
  case AccessMaskBit2::E_OPTICAL_FLOW_READ_BIT_NV:
    return "AccessMaskBit2::E_OPTICAL_FLOW_READ_BIT_NV";
  case AccessMaskBit2::E_OPTICAL_FLOW_WRITE_BIT_NV:
    return "AccessMaskBit2::E_OPTICAL_FLOW_WRITE_BIT_NV";
  case AccessMaskBit2::E_MICROMAP_READ_BIT_EXT:
    return "AccessMaskBit2::E_MICROMAP_READ_BIT_EXT";
  case AccessMaskBit2::E_MICROMAP_WRITE_BIT_EXT:
    return "AccessMaskBit2::E_MICROMAP_WRITE_BIT_EXT";
  case AccessMaskBit2::E_SHADER_BINDING_TABLE_READ_BIT_KHR:
    return "AccessMaskBit2::E_SHADER_BINDING_TABLE_READ_BIT_KHR";
  case AccessMaskBit2::E_VIDEO_DECODE_READ_BIT_KHR:
    return "AccessMaskBit2::E_VIDEO_DECODE_READ_BIT_KHR";
  case AccessMaskBit2::E_VIDEO_DECODE_WRITE_BIT_KHR:
    return "AccessMaskBit2::E_VIDEO_DECODE_WRITE_BIT_KHR";
  case AccessMaskBit2::E_INVOCATION_MASK_READ_BIT_HUAWEI:
    return "AccessMaskBit2::E_INVOCATION_MASK_READ_BIT_HUAWEI";
  case AccessMaskBit2::E_TRANSFORM_FEEDBACK_WRITE_BIT_EXT:
    return "AccessMaskBit2::E_TRANSFORM_FEEDBACK_WRITE_BIT_EXT";
  case AccessMaskBit2::E_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT:
    return "AccessMaskBit2::E_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT";
  case AccessMaskBit2::E_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT:
    return "AccessMaskBit2::E_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT";
  case AccessMaskBit2::E_CONDITIONAL_RENDERING_READ_BIT_EXT:
    return "AccessMaskBit2::E_CONDITIONAL_RENDERING_READ_BIT_EXT";
  case AccessMaskBit2::E_COMMAND_PREPROCESS_READ_BIT_NV:
    return "AccessMaskBit2::E_COMMAND_PREPROCESS_READ_BIT_NV";
  case AccessMaskBit2::E_COMMAND_PREPROCESS_WRITE_BIT_NV:
    return "AccessMaskBit2::E_COMMAND_PREPROCESS_WRITE_BIT_NV";
  case AccessMaskBit2::E_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR:
    return "AccessMaskBit2::E_FRAGMENT_SHADING_RATE_ATTACHMENT_READ_BIT_KHR";
  case AccessMaskBit2::E_ACCELERATION_STRUCTURE_READ_BIT_KHR:
    return "AccessMaskBit2::E_ACCELERATION_STRUCTURE_READ_BIT_KHR";
  case AccessMaskBit2::E_ACCELERATION_STRUCTURE_WRITE_BIT_KHR:
    return "AccessMaskBit2::E_ACCELERATION_STRUCTURE_WRITE_BIT_KHR";
  case AccessMaskBit2::E_FRAGMENT_DENSITY_MAP_READ_BIT_EXT:
    return "AccessMaskBit2::E_FRAGMENT_DENSITY_MAP_READ_BIT_EXT";
  case AccessMaskBit2::E_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT:
    return "AccessMaskBit2::E_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT";
  case AccessMaskBit2::E_VIDEO_ENCODE_READ_BIT_KHR:
    return "AccessMaskBit2::E_VIDEO_ENCODE_READ_BIT_KHR";
  case AccessMaskBit2::E_VIDEO_ENCODE_WRITE_BIT_KHR:
    return "AccessMaskBit2::E_VIDEO_ENCODE_WRITE_BIT_KHR";
  case AccessMaskBit2::E_DESCRIPTOR_BUFFER_READ_BIT_EXT:
    return "AccessMaskBit2::E_DESCRIPTOR_BUFFER_READ_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineLayoutCreateMaskBit input) {
  switch (input) {
  case PipelineLayoutCreateMaskBit::E_INDEPENDENT_SETS_BIT_EXT:
    return "PipelineLayoutCreateMaskBit::E_INDEPENDENT_SETS_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(QueueGlobalPriority input) {
  switch (input) {
  case QueueGlobalPriority::E_LOW_KHR:
    return "QueueGlobalPriority::E_LOW_KHR";
  case QueueGlobalPriority::E_MEDIUM_KHR:
    return "QueueGlobalPriority::E_MEDIUM_KHR";
  case QueueGlobalPriority::E_HIGH_KHR:
    return "QueueGlobalPriority::E_HIGH_KHR";
  case QueueGlobalPriority::E_REALTIME_KHR:
    return "QueueGlobalPriority::E_REALTIME_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PresentGravityMaskBit input) {
  switch (input) {
  case PresentGravityMaskBit::E_MIN_BIT_EXT:
    return "PresentGravityMaskBit::E_MIN_BIT_EXT";
  case PresentGravityMaskBit::E_MAX_BIT_EXT:
    return "PresentGravityMaskBit::E_MAX_BIT_EXT";
  case PresentGravityMaskBit::E_CENTERED_BIT_EXT:
    return "PresentGravityMaskBit::E_CENTERED_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(FragmentShadingRate input) {
  switch (input) {
  case FragmentShadingRate::E_1_INVOCATION_PER_PIXEL_NV:
    return "FragmentShadingRate::E_1_INVOCATION_PER_PIXEL_NV";
  case FragmentShadingRate::E_1_INVOCATION_PER_1X2_PIXELS_NV:
    return "FragmentShadingRate::E_1_INVOCATION_PER_1X2_PIXELS_NV";
  case FragmentShadingRate::E_1_INVOCATION_PER_2X1_PIXELS_NV:
    return "FragmentShadingRate::E_1_INVOCATION_PER_2X1_PIXELS_NV";
  case FragmentShadingRate::E_1_INVOCATION_PER_2X2_PIXELS_NV:
    return "FragmentShadingRate::E_1_INVOCATION_PER_2X2_PIXELS_NV";
  case FragmentShadingRate::E_1_INVOCATION_PER_2X4_PIXELS_NV:
    return "FragmentShadingRate::E_1_INVOCATION_PER_2X4_PIXELS_NV";
  case FragmentShadingRate::E_1_INVOCATION_PER_4X2_PIXELS_NV:
    return "FragmentShadingRate::E_1_INVOCATION_PER_4X2_PIXELS_NV";
  case FragmentShadingRate::E_1_INVOCATION_PER_4X4_PIXELS_NV:
    return "FragmentShadingRate::E_1_INVOCATION_PER_4X4_PIXELS_NV";
  case FragmentShadingRate::E_2_INVOCATIONS_PER_PIXEL_NV:
    return "FragmentShadingRate::E_2_INVOCATIONS_PER_PIXEL_NV";
  case FragmentShadingRate::E_4_INVOCATIONS_PER_PIXEL_NV:
    return "FragmentShadingRate::E_4_INVOCATIONS_PER_PIXEL_NV";
  case FragmentShadingRate::E_8_INVOCATIONS_PER_PIXEL_NV:
    return "FragmentShadingRate::E_8_INVOCATIONS_PER_PIXEL_NV";
  case FragmentShadingRate::E_16_INVOCATIONS_PER_PIXEL_NV:
    return "FragmentShadingRate::E_16_INVOCATIONS_PER_PIXEL_NV";
  case FragmentShadingRate::E_NO_INVOCATIONS_NV:
    return "FragmentShadingRate::E_NO_INVOCATIONS_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ProvokingVertexMode input) {
  switch (input) {
  case ProvokingVertexMode::E_FIRST_VERTEX_EXT:
    return "ProvokingVertexMode::E_FIRST_VERTEX_EXT";
  case ProvokingVertexMode::E_LAST_VERTEX_EXT:
    return "ProvokingVertexMode::E_LAST_VERTEX_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoDecodeH264PictureLayoutMaskBit input) {
  switch (input) {
  case VideoDecodeH264PictureLayoutMaskBit::E_PROGRESSIVE_KHR:
    return "VideoDecodeH264PictureLayoutMaskBit::E_PROGRESSIVE_KHR";
  case VideoDecodeH264PictureLayoutMaskBit::E_INTERLACED_INTERLEAVED_LINES_BIT_KHR:
    return "VideoDecodeH264PictureLayoutMaskBit::E_INTERLACED_INTERLEAVED_LINES_BIT_KHR";
  case VideoDecodeH264PictureLayoutMaskBit::E_INTERLACED_SEPARATE_PLANES_BIT_KHR:
    return "VideoDecodeH264PictureLayoutMaskBit::E_INTERLACED_SEPARATE_PLANES_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(AccelerationStructureMotionInstanceType input) {
  switch (input) {
  case AccelerationStructureMotionInstanceType::E_STATIC_NV:
    return "AccelerationStructureMotionInstanceType::E_STATIC_NV";
  case AccelerationStructureMotionInstanceType::E_MATRIX_MOTION_NV:
    return "AccelerationStructureMotionInstanceType::E_MATRIX_MOTION_NV";
  case AccelerationStructureMotionInstanceType::E_SRT_MOTION_NV:
    return "AccelerationStructureMotionInstanceType::E_SRT_MOTION_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineDepthStencilStateCreateMaskBit input) {
  switch (input) {
  case PipelineDepthStencilStateCreateMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT:
    return "PipelineDepthStencilStateCreateMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_DEPTH_ACCESS_BIT_EXT";
  case PipelineDepthStencilStateCreateMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT:
    return "PipelineDepthStencilStateCreateMaskBit::E_RASTERIZATION_ORDER_ATTACHMENT_STENCIL_ACCESS_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PolygonMode input) {
  switch (input) {
  case PolygonMode::E_FILL:
    return "PolygonMode::E_FILL";
  case PolygonMode::E_LINE:
    return "PolygonMode::E_LINE";
  case PolygonMode::E_POINT:
    return "PolygonMode::E_POINT";
  case PolygonMode::E_FILL_RECTANGLE_NV:
    return "PolygonMode::E_FILL_RECTANGLE_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(FrameBoundaryMaskBit input) {
  switch (input) {
  case FrameBoundaryMaskBit::E_FRAME_END_BIT_EXT:
    return "FrameBoundaryMaskBit::E_FRAME_END_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoComponentBitDepthMaskBit input) {
  switch (input) {
  case VideoComponentBitDepthMaskBit::E_INVALID_KHR:
    return "VideoComponentBitDepthMaskBit::E_INVALID_KHR";
  case VideoComponentBitDepthMaskBit::E_8_BIT_KHR:
    return "VideoComponentBitDepthMaskBit::E_8_BIT_KHR";
  case VideoComponentBitDepthMaskBit::E_10_BIT_KHR:
    return "VideoComponentBitDepthMaskBit::E_10_BIT_KHR";
  case VideoComponentBitDepthMaskBit::E_12_BIT_KHR:
    return "VideoComponentBitDepthMaskBit::E_12_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(Result input) {
  switch (input) {
  case Result::E_SUCCESS:
    return "Result::E_SUCCESS";
  case Result::E_NOT_READY:
    return "Result::E_NOT_READY";
  case Result::E_TIMEOUT:
    return "Result::E_TIMEOUT";
  case Result::E_EVENT_SET:
    return "Result::E_EVENT_SET";
  case Result::E_EVENT_RESET:
    return "Result::E_EVENT_RESET";
  case Result::E_INCOMPLETE:
    return "Result::E_INCOMPLETE";
  case Result::E_ERROR_OUT_OF_HOST_MEMORY:
    return "Result::E_ERROR_OUT_OF_HOST_MEMORY";
  case Result::E_ERROR_OUT_OF_DEVICE_MEMORY:
    return "Result::E_ERROR_OUT_OF_DEVICE_MEMORY";
  case Result::E_ERROR_INITIALIZATION_FAILED:
    return "Result::E_ERROR_INITIALIZATION_FAILED";
  case Result::E_ERROR_DEVICE_LOST:
    return "Result::E_ERROR_DEVICE_LOST";
  case Result::E_ERROR_MEMORY_MAP_FAILED:
    return "Result::E_ERROR_MEMORY_MAP_FAILED";
  case Result::E_ERROR_LAYER_NOT_PRESENT:
    return "Result::E_ERROR_LAYER_NOT_PRESENT";
  case Result::E_ERROR_EXTENSION_NOT_PRESENT:
    return "Result::E_ERROR_EXTENSION_NOT_PRESENT";
  case Result::E_ERROR_FEATURE_NOT_PRESENT:
    return "Result::E_ERROR_FEATURE_NOT_PRESENT";
  case Result::E_ERROR_INCOMPATIBLE_DRIVER:
    return "Result::E_ERROR_INCOMPATIBLE_DRIVER";
  case Result::E_ERROR_TOO_MANY_OBJECTS:
    return "Result::E_ERROR_TOO_MANY_OBJECTS";
  case Result::E_ERROR_FORMAT_NOT_SUPPORTED:
    return "Result::E_ERROR_FORMAT_NOT_SUPPORTED";
  case Result::E_ERROR_FRAGMENTED_POOL:
    return "Result::E_ERROR_FRAGMENTED_POOL";
  case Result::E_ERROR_UNKNOWN:
    return "Result::E_ERROR_UNKNOWN";
  case Result::E_ERROR_INCOMPATIBLE_DISPLAY_KHR:
    return "Result::E_ERROR_INCOMPATIBLE_DISPLAY_KHR";
  case Result::E_ERROR_NOT_PERMITTED_KHR:
    return "Result::E_ERROR_NOT_PERMITTED_KHR";
  case Result::E_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT:
    return "Result::E_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT";
  case Result::E_ERROR_IMAGE_USAGE_NOT_SUPPORTED_KHR:
    return "Result::E_ERROR_IMAGE_USAGE_NOT_SUPPORTED_KHR";
  case Result::E_ERROR_VIDEO_PICTURE_LAYOUT_NOT_SUPPORTED_KHR:
    return "Result::E_ERROR_VIDEO_PICTURE_LAYOUT_NOT_SUPPORTED_KHR";
  case Result::E_ERROR_VIDEO_PROFILE_OPERATION_NOT_SUPPORTED_KHR:
    return "Result::E_ERROR_VIDEO_PROFILE_OPERATION_NOT_SUPPORTED_KHR";
  case Result::E_ERROR_VIDEO_PROFILE_FORMAT_NOT_SUPPORTED_KHR:
    return "Result::E_ERROR_VIDEO_PROFILE_FORMAT_NOT_SUPPORTED_KHR";
  case Result::E_ERROR_VIDEO_PROFILE_CODEC_NOT_SUPPORTED_KHR:
    return "Result::E_ERROR_VIDEO_PROFILE_CODEC_NOT_SUPPORTED_KHR";
  case Result::E_ERROR_VIDEO_STD_VERSION_NOT_SUPPORTED_KHR:
    return "Result::E_ERROR_VIDEO_STD_VERSION_NOT_SUPPORTED_KHR";
  case Result::E_ERROR_VALIDATION_FAILED_EXT:
    return "Result::E_ERROR_VALIDATION_FAILED_EXT";
  case Result::E_ERROR_INVALID_SHADER_NV:
    return "Result::E_ERROR_INVALID_SHADER_NV";
  case Result::E_ERROR_SURFACE_LOST_KHR:
    return "Result::E_ERROR_SURFACE_LOST_KHR";
  case Result::E_ERROR_NATIVE_WINDOW_IN_USE_KHR:
    return "Result::E_ERROR_NATIVE_WINDOW_IN_USE_KHR";
  case Result::E_THREAD_IDLE_KHR:
    return "Result::E_THREAD_IDLE_KHR";
  case Result::E_THREAD_DONE_KHR:
    return "Result::E_THREAD_DONE_KHR";
  case Result::E_OPERATION_DEFERRED_KHR:
    return "Result::E_OPERATION_DEFERRED_KHR";
  case Result::E_OPERATION_NOT_DEFERRED_KHR:
    return "Result::E_OPERATION_NOT_DEFERRED_KHR";
  case Result::E_INCOMPATIBLE_SHADER_BINARY_EXT:
    return "Result::E_INCOMPATIBLE_SHADER_BINARY_EXT";
  case Result::E_ERROR_COMPRESSION_EXHAUSTED_EXT:
    return "Result::E_ERROR_COMPRESSION_EXHAUSTED_EXT";
  case Result::E_ERROR_INVALID_VIDEO_STD_PARAMETERS_KHR:
    return "Result::E_ERROR_INVALID_VIDEO_STD_PARAMETERS_KHR";
  case Result::E_SUBOPTIMAL_KHR:
    return "Result::E_SUBOPTIMAL_KHR";
  case Result::E_ERROR_OUT_OF_DATE_KHR:
    return "Result::E_ERROR_OUT_OF_DATE_KHR";
  case Result::E_ERROR_FRAGMENTATION:
    return "Result::E_ERROR_FRAGMENTATION";
  case Result::E_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS:
    return "Result::E_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS";
  case Result::E_PIPELINE_COMPILE_REQUIRED:
    return "Result::E_PIPELINE_COMPILE_REQUIRED";
  case Result::E_ERROR_OUT_OF_POOL_MEMORY:
    return "Result::E_ERROR_OUT_OF_POOL_MEMORY";
  case Result::E_ERROR_INVALID_EXTERNAL_HANDLE:
    return "Result::E_ERROR_INVALID_EXTERNAL_HANDLE";
  default:
    std::unreachable();
  }
}

std::string_view ToString(OpticalFlowUsageMaskBit input) {
  switch (input) {
  case OpticalFlowUsageMaskBit::E_UNKNOWN_NV:
    return "OpticalFlowUsageMaskBit::E_UNKNOWN_NV";
  case OpticalFlowUsageMaskBit::E_INPUT_BIT_NV:
    return "OpticalFlowUsageMaskBit::E_INPUT_BIT_NV";
  case OpticalFlowUsageMaskBit::E_OUTPUT_BIT_NV:
    return "OpticalFlowUsageMaskBit::E_OUTPUT_BIT_NV";
  case OpticalFlowUsageMaskBit::E_HINT_BIT_NV:
    return "OpticalFlowUsageMaskBit::E_HINT_BIT_NV";
  case OpticalFlowUsageMaskBit::E_COST_BIT_NV:
    return "OpticalFlowUsageMaskBit::E_COST_BIT_NV";
  case OpticalFlowUsageMaskBit::E_GLOBAL_FLOW_BIT_NV:
    return "OpticalFlowUsageMaskBit::E_GLOBAL_FLOW_BIT_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PhysicalDeviceSchedulingControlsMaskBit input) {
  switch (input) {
  case PhysicalDeviceSchedulingControlsMaskBit::E_SHADER_CORE_COUNT_ARM:
    return "PhysicalDeviceSchedulingControlsMaskBit::E_SHADER_CORE_COUNT_ARM";
  default:
    std::unreachable();
  }
}

std::string_view ToString(QueryResultStatus input) {
  switch (input) {
  case QueryResultStatus::E_ERROR_KHR:
    return "QueryResultStatus::E_ERROR_KHR";
  case QueryResultStatus::E_NOT_READY_KHR:
    return "QueryResultStatus::E_NOT_READY_KHR";
  case QueryResultStatus::E_COMPLETE_KHR:
    return "QueryResultStatus::E_COMPLETE_KHR";
  case QueryResultStatus::E_INSUFFICIENT_BITSTREAM_BUFFER_RANGE_KHR:
    return "QueryResultStatus::E_INSUFFICIENT_BITSTREAM_BUFFER_RANGE_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoCodecOperationMaskBit input) {
  switch (input) {
  case VideoCodecOperationMaskBit::E_NONE_KHR:
    return "VideoCodecOperationMaskBit::E_NONE_KHR";
  case VideoCodecOperationMaskBit::E_DECODE_AV1_BIT_KHR:
    return "VideoCodecOperationMaskBit::E_DECODE_AV1_BIT_KHR";
  case VideoCodecOperationMaskBit::E_DECODE_H264_BIT_KHR:
    return "VideoCodecOperationMaskBit::E_DECODE_H264_BIT_KHR";
  case VideoCodecOperationMaskBit::E_ENCODE_H264_BIT_KHR:
    return "VideoCodecOperationMaskBit::E_ENCODE_H264_BIT_KHR";
  case VideoCodecOperationMaskBit::E_DECODE_H265_BIT_KHR:
    return "VideoCodecOperationMaskBit::E_DECODE_H265_BIT_KHR";
  case VideoCodecOperationMaskBit::E_ENCODE_H265_BIT_KHR:
    return "VideoCodecOperationMaskBit::E_ENCODE_H265_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SemaphoreImportMaskBit input) {
  switch (input) {
  case SemaphoreImportMaskBit::E_TEMPORARY_BIT:
    return "SemaphoreImportMaskBit::E_TEMPORARY_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoCapabilityMaskBit input) {
  switch (input) {
  case VideoCapabilityMaskBit::E_PROTECTED_CONTENT_BIT_KHR:
    return "VideoCapabilityMaskBit::E_PROTECTED_CONTENT_BIT_KHR";
  case VideoCapabilityMaskBit::E_SEPARATE_REFERENCE_IMAGES_BIT_KHR:
    return "VideoCapabilityMaskBit::E_SEPARATE_REFERENCE_IMAGES_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ImageAspectMaskBit input) {
  switch (input) {
  case ImageAspectMaskBit::E_COLOR_BIT:
    return "ImageAspectMaskBit::E_COLOR_BIT";
  case ImageAspectMaskBit::E_DEPTH_BIT:
    return "ImageAspectMaskBit::E_DEPTH_BIT";
  case ImageAspectMaskBit::E_STENCIL_BIT:
    return "ImageAspectMaskBit::E_STENCIL_BIT";
  case ImageAspectMaskBit::E_METADATA_BIT:
    return "ImageAspectMaskBit::E_METADATA_BIT";
  case ImageAspectMaskBit::E_MEMORY_PLANE_0_BIT_EXT:
    return "ImageAspectMaskBit::E_MEMORY_PLANE_0_BIT_EXT";
  case ImageAspectMaskBit::E_MEMORY_PLANE_1_BIT_EXT:
    return "ImageAspectMaskBit::E_MEMORY_PLANE_1_BIT_EXT";
  case ImageAspectMaskBit::E_MEMORY_PLANE_2_BIT_EXT:
    return "ImageAspectMaskBit::E_MEMORY_PLANE_2_BIT_EXT";
  case ImageAspectMaskBit::E_MEMORY_PLANE_3_BIT_EXT:
    return "ImageAspectMaskBit::E_MEMORY_PLANE_3_BIT_EXT";
  case ImageAspectMaskBit::E_NONE:
    return "ImageAspectMaskBit::E_NONE";
  case ImageAspectMaskBit::E_PLANE_0_BIT:
    return "ImageAspectMaskBit::E_PLANE_0_BIT";
  case ImageAspectMaskBit::E_PLANE_1_BIT:
    return "ImageAspectMaskBit::E_PLANE_1_BIT";
  case ImageAspectMaskBit::E_PLANE_2_BIT:
    return "ImageAspectMaskBit::E_PLANE_2_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SubmitMaskBit input) {
  switch (input) {
  case SubmitMaskBit::E_PROTECTED_BIT:
    return "SubmitMaskBit::E_PROTECTED_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoSessionCreateMaskBit input) {
  switch (input) {
  case VideoSessionCreateMaskBit::E_PROTECTED_CONTENT_BIT_KHR:
    return "VideoSessionCreateMaskBit::E_PROTECTED_CONTENT_BIT_KHR";
  case VideoSessionCreateMaskBit::E_INLINE_QUERIES_BIT_KHR:
    return "VideoSessionCreateMaskBit::E_INLINE_QUERIES_BIT_KHR";
  case VideoSessionCreateMaskBit::E_ALLOW_ENCODE_PARAMETER_OPTIMIZATIONS_BIT_KHR:
    return "VideoSessionCreateMaskBit::E_ALLOW_ENCODE_PARAMETER_OPTIMIZATIONS_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeUsageMaskBit input) {
  switch (input) {
  case VideoEncodeUsageMaskBit::E_DEFAULT_KHR:
    return "VideoEncodeUsageMaskBit::E_DEFAULT_KHR";
  case VideoEncodeUsageMaskBit::E_TRANSCODING_BIT_KHR:
    return "VideoEncodeUsageMaskBit::E_TRANSCODING_BIT_KHR";
  case VideoEncodeUsageMaskBit::E_STREAMING_BIT_KHR:
    return "VideoEncodeUsageMaskBit::E_STREAMING_BIT_KHR";
  case VideoEncodeUsageMaskBit::E_RECORDING_BIT_KHR:
    return "VideoEncodeUsageMaskBit::E_RECORDING_BIT_KHR";
  case VideoEncodeUsageMaskBit::E_CONFERENCING_BIT_KHR:
    return "VideoEncodeUsageMaskBit::E_CONFERENCING_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeFeedbackMaskBit input) {
  switch (input) {
  case VideoEncodeFeedbackMaskBit::E_BITSTREAM_BUFFER_OFFSET_BIT_KHR:
    return "VideoEncodeFeedbackMaskBit::E_BITSTREAM_BUFFER_OFFSET_BIT_KHR";
  case VideoEncodeFeedbackMaskBit::E_BITSTREAM_BYTES_WRITTEN_BIT_KHR:
    return "VideoEncodeFeedbackMaskBit::E_BITSTREAM_BYTES_WRITTEN_BIT_KHR";
  case VideoEncodeFeedbackMaskBit::E_BITSTREAM_HAS_OVERRIDES_BIT_KHR:
    return "VideoEncodeFeedbackMaskBit::E_BITSTREAM_HAS_OVERRIDES_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeH264CapabilityMaskBit input) {
  switch (input) {
  case VideoEncodeH264CapabilityMaskBit::E_HRD_COMPLIANCE_BIT_KHR:
    return "VideoEncodeH264CapabilityMaskBit::E_HRD_COMPLIANCE_BIT_KHR";
  case VideoEncodeH264CapabilityMaskBit::E_PREDICTION_WEIGHT_TABLE_GENERATED_BIT_KHR:
    return "VideoEncodeH264CapabilityMaskBit::E_PREDICTION_WEIGHT_TABLE_GENERATED_BIT_KHR";
  case VideoEncodeH264CapabilityMaskBit::E_ROW_UNALIGNED_SLICE_BIT_KHR:
    return "VideoEncodeH264CapabilityMaskBit::E_ROW_UNALIGNED_SLICE_BIT_KHR";
  case VideoEncodeH264CapabilityMaskBit::E_DIFFERENT_SLICE_TYPE_BIT_KHR:
    return "VideoEncodeH264CapabilityMaskBit::E_DIFFERENT_SLICE_TYPE_BIT_KHR";
  case VideoEncodeH264CapabilityMaskBit::E_B_FRAME_IN_L0_LIST_BIT_KHR:
    return "VideoEncodeH264CapabilityMaskBit::E_B_FRAME_IN_L0_LIST_BIT_KHR";
  case VideoEncodeH264CapabilityMaskBit::E_B_FRAME_IN_L1_LIST_BIT_KHR:
    return "VideoEncodeH264CapabilityMaskBit::E_B_FRAME_IN_L1_LIST_BIT_KHR";
  case VideoEncodeH264CapabilityMaskBit::E_PER_PICTURE_TYPE_MIN_MAX_QP_BIT_KHR:
    return "VideoEncodeH264CapabilityMaskBit::E_PER_PICTURE_TYPE_MIN_MAX_QP_BIT_KHR";
  case VideoEncodeH264CapabilityMaskBit::E_PER_SLICE_CONSTANT_QP_BIT_KHR:
    return "VideoEncodeH264CapabilityMaskBit::E_PER_SLICE_CONSTANT_QP_BIT_KHR";
  case VideoEncodeH264CapabilityMaskBit::E_GENERATE_PREFIX_NALU_BIT_KHR:
    return "VideoEncodeH264CapabilityMaskBit::E_GENERATE_PREFIX_NALU_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeH264StdMaskBit input) {
  switch (input) {
  case VideoEncodeH264StdMaskBit::E_SEPARATE_COLOR_PLANE_FLAG_SET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_SEPARATE_COLOR_PLANE_FLAG_SET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_QPPRIME_Y_ZERO_TRANSFORM_BYPASS_FLAG_SET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_QPPRIME_Y_ZERO_TRANSFORM_BYPASS_FLAG_SET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_SCALING_MATRIX_PRESENT_FLAG_SET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_SCALING_MATRIX_PRESENT_FLAG_SET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_CHROMA_QP_INDEX_OFFSET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_CHROMA_QP_INDEX_OFFSET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_SECOND_CHROMA_QP_INDEX_OFFSET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_SECOND_CHROMA_QP_INDEX_OFFSET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_PIC_INIT_QP_MINUS26_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_PIC_INIT_QP_MINUS26_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_WEIGHTED_PRED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_WEIGHTED_PRED_FLAG_SET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_WEIGHTED_BIPRED_IDC_EXPLICIT_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_WEIGHTED_BIPRED_IDC_EXPLICIT_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_WEIGHTED_BIPRED_IDC_IMPLICIT_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_WEIGHTED_BIPRED_IDC_IMPLICIT_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_TRANSFORM_8X8_MODE_FLAG_SET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_TRANSFORM_8X8_MODE_FLAG_SET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_DIRECT_SPATIAL_MV_PRED_FLAG_UNSET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_DIRECT_SPATIAL_MV_PRED_FLAG_UNSET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_ENTROPY_CODING_MODE_FLAG_UNSET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_ENTROPY_CODING_MODE_FLAG_UNSET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_ENTROPY_CODING_MODE_FLAG_SET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_ENTROPY_CODING_MODE_FLAG_SET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_DIRECT_8X8_INFERENCE_FLAG_UNSET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_DIRECT_8X8_INFERENCE_FLAG_UNSET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_CONSTRAINED_INTRA_PRED_FLAG_SET_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_CONSTRAINED_INTRA_PRED_FLAG_SET_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_DEBLOCKING_FILTER_DISABLED_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_DEBLOCKING_FILTER_DISABLED_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_DEBLOCKING_FILTER_ENABLED_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_DEBLOCKING_FILTER_ENABLED_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_DEBLOCKING_FILTER_PARTIAL_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_DEBLOCKING_FILTER_PARTIAL_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_SLICE_QP_DELTA_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_SLICE_QP_DELTA_BIT_KHR";
  case VideoEncodeH264StdMaskBit::E_DIFFERENT_SLICE_QP_DELTA_BIT_KHR:
    return "VideoEncodeH264StdMaskBit::E_DIFFERENT_SLICE_QP_DELTA_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SurfaceCounterMaskBit input) {
  switch (input) {
  case SurfaceCounterMaskBit::E_VBLANK_BIT_EXT:
    return "SurfaceCounterMaskBit::E_VBLANK_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(RenderingMaskBit input) {
  switch (input) {
  case RenderingMaskBit::E_CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT:
    return "RenderingMaskBit::E_CONTENTS_SECONDARY_COMMAND_BUFFERS_BIT";
  case RenderingMaskBit::E_SUSPENDING_BIT:
    return "RenderingMaskBit::E_SUSPENDING_BIT";
  case RenderingMaskBit::E_RESUMING_BIT:
    return "RenderingMaskBit::E_RESUMING_BIT";
  case RenderingMaskBit::E_CONTENTS_INLINE_BIT_KHR:
    return "RenderingMaskBit::E_CONTENTS_INLINE_BIT_KHR";
  case RenderingMaskBit::E_ENABLE_LEGACY_DITHERING_BIT_EXT:
    return "RenderingMaskBit::E_ENABLE_LEGACY_DITHERING_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeH265RateControlMaskBit input) {
  switch (input) {
  case VideoEncodeH265RateControlMaskBit::E_ATTEMPT_HRD_COMPLIANCE_BIT_KHR:
    return "VideoEncodeH265RateControlMaskBit::E_ATTEMPT_HRD_COMPLIANCE_BIT_KHR";
  case VideoEncodeH265RateControlMaskBit::E_REGULAR_GOP_BIT_KHR:
    return "VideoEncodeH265RateControlMaskBit::E_REGULAR_GOP_BIT_KHR";
  case VideoEncodeH265RateControlMaskBit::E_REFERENCE_PATTERN_FLAT_BIT_KHR:
    return "VideoEncodeH265RateControlMaskBit::E_REFERENCE_PATTERN_FLAT_BIT_KHR";
  case VideoEncodeH265RateControlMaskBit::E_REFERENCE_PATTERN_DYADIC_BIT_KHR:
    return "VideoEncodeH265RateControlMaskBit::E_REFERENCE_PATTERN_DYADIC_BIT_KHR";
  case VideoEncodeH265RateControlMaskBit::E_TEMPORAL_SUB_LAYER_PATTERN_DYADIC_BIT_KHR:
    return "VideoEncodeH265RateControlMaskBit::E_TEMPORAL_SUB_LAYER_PATTERN_DYADIC_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SurfaceTransformMaskBit input) {
  switch (input) {
  case SurfaceTransformMaskBit::E_IDENTITY_BIT_KHR:
    return "SurfaceTransformMaskBit::E_IDENTITY_BIT_KHR";
  case SurfaceTransformMaskBit::E_ROTATE_90_BIT_KHR:
    return "SurfaceTransformMaskBit::E_ROTATE_90_BIT_KHR";
  case SurfaceTransformMaskBit::E_ROTATE_180_BIT_KHR:
    return "SurfaceTransformMaskBit::E_ROTATE_180_BIT_KHR";
  case SurfaceTransformMaskBit::E_ROTATE_270_BIT_KHR:
    return "SurfaceTransformMaskBit::E_ROTATE_270_BIT_KHR";
  case SurfaceTransformMaskBit::E_HORIZONTAL_MIRROR_BIT_KHR:
    return "SurfaceTransformMaskBit::E_HORIZONTAL_MIRROR_BIT_KHR";
  case SurfaceTransformMaskBit::E_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR:
    return "SurfaceTransformMaskBit::E_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR";
  case SurfaceTransformMaskBit::E_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR:
    return "SurfaceTransformMaskBit::E_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR";
  case SurfaceTransformMaskBit::E_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR:
    return "SurfaceTransformMaskBit::E_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR";
  case SurfaceTransformMaskBit::E_INHERIT_BIT_KHR:
    return "SurfaceTransformMaskBit::E_INHERIT_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(QueryType input) {
  switch (input) {
  case QueryType::E_OCCLUSION:
    return "QueryType::E_OCCLUSION";
  case QueryType::E_PIPELINE_STATISTICS:
    return "QueryType::E_PIPELINE_STATISTICS";
  case QueryType::E_TIMESTAMP:
    return "QueryType::E_TIMESTAMP";
  case QueryType::E_MICROMAP_SERIALIZATION_SIZE_EXT:
    return "QueryType::E_MICROMAP_SERIALIZATION_SIZE_EXT";
  case QueryType::E_MICROMAP_COMPACTED_SIZE_EXT:
    return "QueryType::E_MICROMAP_COMPACTED_SIZE_EXT";
  case QueryType::E_ACCELERATION_STRUCTURE_SERIALIZATION_BOTTOM_LEVEL_POINTERS_KHR:
    return "QueryType::E_ACCELERATION_STRUCTURE_SERIALIZATION_BOTTOM_LEVEL_POINTERS_KHR";
  case QueryType::E_ACCELERATION_STRUCTURE_SIZE_KHR:
    return "QueryType::E_ACCELERATION_STRUCTURE_SIZE_KHR";
  case QueryType::E_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR:
    return "QueryType::E_ACCELERATION_STRUCTURE_COMPACTED_SIZE_KHR";
  case QueryType::E_ACCELERATION_STRUCTURE_SERIALIZATION_SIZE_KHR:
    return "QueryType::E_ACCELERATION_STRUCTURE_SERIALIZATION_SIZE_KHR";
  case QueryType::E_TRANSFORM_FEEDBACK_STREAM_EXT:
    return "QueryType::E_TRANSFORM_FEEDBACK_STREAM_EXT";
  case QueryType::E_RESULT_STATUS_ONLY_KHR:
    return "QueryType::E_RESULT_STATUS_ONLY_KHR";
  case QueryType::E_MESH_PRIMITIVES_GENERATED_EXT:
    return "QueryType::E_MESH_PRIMITIVES_GENERATED_EXT";
  case QueryType::E_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV:
    return "QueryType::E_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV";
  case QueryType::E_PERFORMANCE_QUERY_INTEL:
    return "QueryType::E_PERFORMANCE_QUERY_INTEL";
  case QueryType::E_PRIMITIVES_GENERATED_EXT:
    return "QueryType::E_PRIMITIVES_GENERATED_EXT";
  case QueryType::E_PERFORMANCE_QUERY_KHR:
    return "QueryType::E_PERFORMANCE_QUERY_KHR";
  case QueryType::E_VIDEO_ENCODE_FEEDBACK_KHR:
    return "QueryType::E_VIDEO_ENCODE_FEEDBACK_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineCompilerControlMaskBit input) {
  switch (input) {
  default:
    std::unreachable();
  }
}

std::string_view ToString(VideoEncodeH265TransformBlockSizeMaskBit input) {
  switch (input) {
  case VideoEncodeH265TransformBlockSizeMaskBit::E_4_BIT_KHR:
    return "VideoEncodeH265TransformBlockSizeMaskBit::E_4_BIT_KHR";
  case VideoEncodeH265TransformBlockSizeMaskBit::E_8_BIT_KHR:
    return "VideoEncodeH265TransformBlockSizeMaskBit::E_8_BIT_KHR";
  case VideoEncodeH265TransformBlockSizeMaskBit::E_16_BIT_KHR:
    return "VideoEncodeH265TransformBlockSizeMaskBit::E_16_BIT_KHR";
  case VideoEncodeH265TransformBlockSizeMaskBit::E_32_BIT_KHR:
    return "VideoEncodeH265TransformBlockSizeMaskBit::E_32_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(SemaphoreCreateMaskBit input) {
  switch (input) {
  default:
    std::unreachable();
  }
}

std::string_view ToString(BuildMicromapMode input) {
  switch (input) {
  case BuildMicromapMode::E_BUILD_EXT:
    return "BuildMicromapMode::E_BUILD_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(InstanceCreateMaskBit input) {
  switch (input) {
  case InstanceCreateMaskBit::E_ENUMERATE_PORTABILITY_BIT_KHR:
    return "InstanceCreateMaskBit::E_ENUMERATE_PORTABILITY_BIT_KHR";
  default:
    std::unreachable();
  }
}

std::string_view ToString(QueueMaskBit input) {
  switch (input) {
  case QueueMaskBit::E_GRAPHICS_BIT:
    return "QueueMaskBit::E_GRAPHICS_BIT";
  case QueueMaskBit::E_COMPUTE_BIT:
    return "QueueMaskBit::E_COMPUTE_BIT";
  case QueueMaskBit::E_TRANSFER_BIT:
    return "QueueMaskBit::E_TRANSFER_BIT";
  case QueueMaskBit::E_SPARSE_BINDING_BIT:
    return "QueueMaskBit::E_SPARSE_BINDING_BIT";
  case QueueMaskBit::E_OPTICAL_FLOW_BIT_NV:
    return "QueueMaskBit::E_OPTICAL_FLOW_BIT_NV";
  case QueueMaskBit::E_VIDEO_DECODE_BIT_KHR:
    return "QueueMaskBit::E_VIDEO_DECODE_BIT_KHR";
  case QueueMaskBit::E_VIDEO_ENCODE_BIT_KHR:
    return "QueueMaskBit::E_VIDEO_ENCODE_BIT_KHR";
  case QueueMaskBit::E_PROTECTED_BIT:
    return "QueueMaskBit::E_PROTECTED_BIT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ImageCompressionFixedRateMaskBit input) {
  switch (input) {
  case ImageCompressionFixedRateMaskBit::E_NONE_EXT:
    return "ImageCompressionFixedRateMaskBit::E_NONE_EXT";
  case ImageCompressionFixedRateMaskBit::E_1BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_1BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_2BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_2BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_3BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_3BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_4BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_4BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_5BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_5BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_6BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_6BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_7BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_7BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_8BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_8BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_9BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_9BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_10BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_10BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_11BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_11BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_12BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_12BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_13BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_13BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_14BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_14BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_15BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_15BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_16BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_16BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_17BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_17BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_18BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_18BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_19BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_19BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_20BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_20BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_21BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_21BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_22BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_22BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_23BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_23BPC_BIT_EXT";
  case ImageCompressionFixedRateMaskBit::E_24BPC_BIT_EXT:
    return "ImageCompressionFixedRateMaskBit::E_24BPC_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineRobustnessBufferBehavior input) {
  switch (input) {
  case PipelineRobustnessBufferBehavior::E_DEVICE_DEFAULT_EXT:
    return "PipelineRobustnessBufferBehavior::E_DEVICE_DEFAULT_EXT";
  case PipelineRobustnessBufferBehavior::E_DISABLED_EXT:
    return "PipelineRobustnessBufferBehavior::E_DISABLED_EXT";
  case PipelineRobustnessBufferBehavior::E_ROBUST_BUFFER_ACCESS_EXT:
    return "PipelineRobustnessBufferBehavior::E_ROBUST_BUFFER_ACCESS_EXT";
  case PipelineRobustnessBufferBehavior::E_ROBUST_BUFFER_ACCESS_2_EXT:
    return "PipelineRobustnessBufferBehavior::E_ROBUST_BUFFER_ACCESS_2_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(PipelineRobustnessImageBehavior input) {
  switch (input) {
  case PipelineRobustnessImageBehavior::E_DEVICE_DEFAULT_EXT:
    return "PipelineRobustnessImageBehavior::E_DEVICE_DEFAULT_EXT";
  case PipelineRobustnessImageBehavior::E_DISABLED_EXT:
    return "PipelineRobustnessImageBehavior::E_DISABLED_EXT";
  case PipelineRobustnessImageBehavior::E_ROBUST_IMAGE_ACCESS_EXT:
    return "PipelineRobustnessImageBehavior::E_ROBUST_IMAGE_ACCESS_EXT";
  case PipelineRobustnessImageBehavior::E_ROBUST_IMAGE_ACCESS_2_EXT:
    return "PipelineRobustnessImageBehavior::E_ROBUST_IMAGE_ACCESS_2_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(MemoryOverallocationBehavior input) {
  switch (input) {
  case MemoryOverallocationBehavior::E_DEFAULT_AMD:
    return "MemoryOverallocationBehavior::E_DEFAULT_AMD";
  case MemoryOverallocationBehavior::E_ALLOWED_AMD:
    return "MemoryOverallocationBehavior::E_ALLOWED_AMD";
  case MemoryOverallocationBehavior::E_DISALLOWED_AMD:
    return "MemoryOverallocationBehavior::E_DISALLOWED_AMD";
  default:
    std::unreachable();
  }
}

std::string_view ToString(OpticalFlowSessionBindingPoint input) {
  switch (input) {
  case OpticalFlowSessionBindingPoint::E_UNKNOWN_NV:
    return "OpticalFlowSessionBindingPoint::E_UNKNOWN_NV";
  case OpticalFlowSessionBindingPoint::E_INPUT_NV:
    return "OpticalFlowSessionBindingPoint::E_INPUT_NV";
  case OpticalFlowSessionBindingPoint::E_REFERENCE_NV:
    return "OpticalFlowSessionBindingPoint::E_REFERENCE_NV";
  case OpticalFlowSessionBindingPoint::E_HINT_NV:
    return "OpticalFlowSessionBindingPoint::E_HINT_NV";
  case OpticalFlowSessionBindingPoint::E_FLOW_VECTOR_NV:
    return "OpticalFlowSessionBindingPoint::E_FLOW_VECTOR_NV";
  case OpticalFlowSessionBindingPoint::E_BACKWARD_FLOW_VECTOR_NV:
    return "OpticalFlowSessionBindingPoint::E_BACKWARD_FLOW_VECTOR_NV";
  case OpticalFlowSessionBindingPoint::E_COST_NV:
    return "OpticalFlowSessionBindingPoint::E_COST_NV";
  case OpticalFlowSessionBindingPoint::E_BACKWARD_COST_NV:
    return "OpticalFlowSessionBindingPoint::E_BACKWARD_COST_NV";
  case OpticalFlowSessionBindingPoint::E_GLOBAL_FLOW_NV:
    return "OpticalFlowSessionBindingPoint::E_GLOBAL_FLOW_NV";
  default:
    std::unreachable();
  }
}

std::string_view ToString(BuildMicromapMaskBit input) {
  switch (input) {
  case BuildMicromapMaskBit::E_PREFER_FAST_TRACE_BIT_EXT:
    return "BuildMicromapMaskBit::E_PREFER_FAST_TRACE_BIT_EXT";
  case BuildMicromapMaskBit::E_PREFER_FAST_BUILD_BIT_EXT:
    return "BuildMicromapMaskBit::E_PREFER_FAST_BUILD_BIT_EXT";
  case BuildMicromapMaskBit::E_ALLOW_COMPACTION_BIT_EXT:
    return "BuildMicromapMaskBit::E_ALLOW_COMPACTION_BIT_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(DeviceFaultVendorBinaryHeaderVersion input) {
  switch (input) {
  case DeviceFaultVendorBinaryHeaderVersion::E_ONE_EXT:
    return "DeviceFaultVendorBinaryHeaderVersion::E_ONE_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ColorSpace input) {
  switch (input) {
  case ColorSpace::E_SRGB_NONLINEAR_KHR:
    return "ColorSpace::E_SRGB_NONLINEAR_KHR";
  case ColorSpace::E_DISPLAY_P3_NONLINEAR_EXT:
    return "ColorSpace::E_DISPLAY_P3_NONLINEAR_EXT";
  case ColorSpace::E_EXTENDED_SRGB_LINEAR_EXT:
    return "ColorSpace::E_EXTENDED_SRGB_LINEAR_EXT";
  case ColorSpace::E_DISPLAY_P3_LINEAR_EXT:
    return "ColorSpace::E_DISPLAY_P3_LINEAR_EXT";
  case ColorSpace::E_DCI_P3_NONLINEAR_EXT:
    return "ColorSpace::E_DCI_P3_NONLINEAR_EXT";
  case ColorSpace::E_BT709_LINEAR_EXT:
    return "ColorSpace::E_BT709_LINEAR_EXT";
  case ColorSpace::E_BT709_NONLINEAR_EXT:
    return "ColorSpace::E_BT709_NONLINEAR_EXT";
  case ColorSpace::E_BT2020_LINEAR_EXT:
    return "ColorSpace::E_BT2020_LINEAR_EXT";
  case ColorSpace::E_HDR10_ST2084_EXT:
    return "ColorSpace::E_HDR10_ST2084_EXT";
  case ColorSpace::E_DOLBYVISION_EXT:
    return "ColorSpace::E_DOLBYVISION_EXT";
  case ColorSpace::E_HDR10_HLG_EXT:
    return "ColorSpace::E_HDR10_HLG_EXT";
  case ColorSpace::E_ADOBERGB_LINEAR_EXT:
    return "ColorSpace::E_ADOBERGB_LINEAR_EXT";
  case ColorSpace::E_ADOBERGB_NONLINEAR_EXT:
    return "ColorSpace::E_ADOBERGB_NONLINEAR_EXT";
  case ColorSpace::E_PASS_THROUGH_EXT:
    return "ColorSpace::E_PASS_THROUGH_EXT";
  case ColorSpace::E_EXTENDED_SRGB_NONLINEAR_EXT:
    return "ColorSpace::E_EXTENDED_SRGB_NONLINEAR_EXT";
  case ColorSpace::E_DISPLAY_NATIVE_AMD:
    return "ColorSpace::E_DISPLAY_NATIVE_AMD";
  default:
    std::unreachable();
  }
}

std::string_view ToString(ShaderCodeType input) {
  switch (input) {
  case ShaderCodeType::E_BINARY_EXT:
    return "ShaderCodeType::E_BINARY_EXT";
  case ShaderCodeType::E_SPIRV_EXT:
    return "ShaderCodeType::E_SPIRV_EXT";
  default:
    std::unreachable();
  }
}

std::string_view ToString(Scope input) {
  switch (input) {
  case Scope::E_DEVICE_KHR:
    return "Scope::E_DEVICE_KHR";
  case Scope::E_WORKGROUP_KHR:
    return "Scope::E_WORKGROUP_KHR";
  case Scope::E_SUBGROUP_KHR:
    return "Scope::E_SUBGROUP_KHR";
  case Scope::E_QUEUE_FAMILY_KHR:
    return "Scope::E_QUEUE_FAMILY_KHR";
  default:
    std::unreachable();
  }
}

} // namespace Walle