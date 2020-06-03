#ifndef READ_CALLBACK_GENERATOR_H
#define READ_CALLBACK_GENERATOR_H

#include "base/iio_object.h"

#include <memory>

namespace client {

class read_callback_generator
{
public:
    read_callback_generator() = delete;

    static read_lambda console_read_lambda();
    static read_lambda network_read_lambda();
};

}

#endif // READ_CALLBACK_GENERATOR_H
