cmake_minimum_required(VERSION 3.2)

set(TARGET messenger_client)
set(INTERFACE_HDRS
    base/iio_object.h
    base/icommand.h
    base/icommand_handler.h
    base/iapp_state.h
    base/icontact_list.h
    base/ivalidator.h)

set(IMPL_HDRS
    console_controller.h
    read_callback_generator.h)

set(IMPL_SRCS
    console_controller.cpp
    read_callback_generator.cpp)

add_executable(${TARGET}
    main.cpp
    ${INTERFACE_HDRS}
    ${IMPL_HDRS}
    ${IMPL_SRCS})

target_include_directories(${TARGET} INTERFACE ${INTERFACE_HDRS})
target_include_directories(${TARGET} PRIVATE ${IMPL_HDRS})
target_link_libraries(${TARGET} PUBLIC protocol_lib)
