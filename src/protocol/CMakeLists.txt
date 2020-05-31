cmake_minimum_required(VERSION 3.2)

set(TARGET protocol_lib)

set(PROTO_FILES_DIR ${CMAKE_SOURCE_DIR}/src/protocol)
set(PROTO_FILES
    ${PROTO_FILES_DIR}/control.proto
    ${PROTO_FILES_DIR}/contacts.proto
    ${PROTO_FILES_DIR}/users.proto
    ${PROTO_FILES_DIR}/messages.proto
    ${PROTO_FILES_DIR}/root.proto)

find_package(Protobuf REQUIRED)
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTO_FILES})
add_library(${TARGET} ${PROTO_SRCS} ${PROTO_HDRS})

target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries(${TARGET} PUBLIC protobuf::libprotobuf)

