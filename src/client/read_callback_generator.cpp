#include "read_callback_generator.h"

namespace client {

read_lambda read_callback_generator::console_read_lambda()
{
    return [](std::string&&){};
}

read_lambda read_callback_generator::network_read_lambda()
{
    return [](std::string&&){};
}

}
