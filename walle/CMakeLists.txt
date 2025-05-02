set(WALLE_SOURCES
  ${PROJECT_SOURCE_DIR}/walle/graphics/graphics_types/graphics_string_tools.cpp
  ${PROJECT_SOURCE_DIR}/walle/graphics/graphics_types/graphics_enums.cpp
  ${PROJECT_SOURCE_DIR}/walle/graphics/graphics_types/graphics_formats.cpp
  ${PROJECT_SOURCE_DIR}/walle/graphics/device/instance.cpp
  ${PROJECT_SOURCE_DIR}/walle/graphics/device/device_tools.cpp
  ${PROJECT_SOURCE_DIR}/walle/graphics/device/device.cpp
)

add_library(${PROJECT_NAME} STATIC
  ${WALLE_SOURCES}
)

target_include_directories(${PROJECT_NAME}
  PUBLIC ${PROJECT_SOURCE_DIR}
)

target_link_libraries(${PROJECT_NAME} PUBLIC
  volk
)