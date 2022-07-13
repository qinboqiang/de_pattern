
add_subdirectory(factory_pattern)

add_executable(pattern_app main.cpp)

target_link_libraries(pattern_app libfactory)
