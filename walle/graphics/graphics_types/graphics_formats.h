#ifndef WALLE_GRAPHICS_FORMATS_H
#define WALLE_GRAPHICS_FORMATS_H

#include "graphics_enums.h"

namespace Walle {

std::size_t GetFormatElementSize(Format format);
std::size_t GetFormatElementSizeWithAspect(Format format, ImageAspectMask aspect_mask);

} // namespace Walle

#endif // WALLE_GRAPHICS_FORMATS_H