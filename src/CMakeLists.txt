
add_subdirectory(factory_pattern)

list(APPEND EXTRA_LIBS factory)

list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/src/factory_pattern/")

add_executable(pattern_app main.cpp)

MESSAGE(STATUS "This is BINARY dir " ${PROJECT_BINARY_DIR})

MESSAGE(STATUS "This is BINARY dir " ${EXTRA_LIBS})

MESSAGE(STATUS "This is BINARY dir " ${EXTRA_INCLUDES})

target_link_libraries(pattern_app ${EXTRA_LIBS})

target_include_directories(pattern_app PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            ${EXTRA_INCLUDES}

    )
