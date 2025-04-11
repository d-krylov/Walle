set(WALLE_SOURCES
  ${PROJECT_SOURCE_DIR}/walle/graphics/graphics_types/graphics_enums.cpp
  ${PROJECT_SOURCE_DIR}/walle/graphics/device/instance.cpp
)

add_library(${PROJECT_NAME} STATIC
  ${WALLE_SOURCES}
)

target_include_directories(${PROJECT_NAME}
  PUBLIC ${PROJECT_SOURCE_DIR}/walle
)

target_link_libraries(${PROJECT_NAME} PUBLIC
  volk
)