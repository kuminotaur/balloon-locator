set(TARGET opencv_demo)

find_package(OpenCV 4.2.0 REQUIRED)
find_package(Eigen3 3.3 NO_MODULE)
file(GLOB HEADER_FILES ./*.h)

include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(${TARGET}
        main.cc
        ${HEADER_FILES})
target_link_libraries(${TARGET} ${OpenCV_LIBS} Eigen3::Eigen)

set_target_properties(${TARGET}
  PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/exe"
)

