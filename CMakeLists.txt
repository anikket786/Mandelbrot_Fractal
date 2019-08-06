cmake_minimum_required(VERSION 3.14.4)

project(MandelbrotFractal)

add_executable("${PROJECT_NAME}" src/main.cpp src/Bitmap.cpp)

#install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
#install(FILES "src/main.cpp" DESTINATION src)

#include(CTest)

#add_test("test1" "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}")

#include(CPack)
