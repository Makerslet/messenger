cmake_minimum_required(VERSION 3.2)

set(TARGET messenger_server)

add_executable(${TARGET} main.cpp)

target_link_libraries(${TARGET} PUBLIC protocol_lib)
