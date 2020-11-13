cmake_minimum_required(VERSION 3.1.3)
project(graphyQmlFileSelectorModuleApp CXX)

file(GLOB INC ${PROJECT_SOURCE_DIR}/src/*.h)
file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_executable(${PROJECT_NAME} ${INC} ${SRC})
conan_target_link_libraries(${PROJECT_NAME})
target_link_libraries(${PROJECT_NAME} graphyQmlFileSelectorModuleLib)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 17)
