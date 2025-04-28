set(EXECUTABLES
  instance
  enumerate_devices
  triangle
)

foreach(exe ${EXECUTABLES})
  add_executable(${exe} ${CMAKE_CURRENT_SOURCE_DIR}/${exe}/${exe}.cpp)
  target_link_libraries(${exe} PRIVATE Walle)
endforeach()