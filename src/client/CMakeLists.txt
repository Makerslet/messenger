cmake_minimum_required(VERSION 3.2)

set(TARGET messenger_client)
set(INTERFACE_HDRS
    base/iio_object.h
    base/icommand.h
    base/icommand_handler.h
    base/iapp_state.h
    base/icontact_list.h
    base/ivalidator.h)

add_executable(${TARGET} main.cpp
    ${INTERFACE_HDRS})

target_include_directories(${TARGET} PRIVATE ${INTERFACE_HDRS})
target_link_libraries(${TARGET} PUBLIC protocol_lib)
