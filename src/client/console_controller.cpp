#include "console_controller.h"

namespace client {

console_controller::console_controller()
{}

void console_controller::read_async(read_lambda callback)
{
    _read_callback = callback;
}

void console_controller::write_async(const std::string&)
{}

void console_controller::add_validator(std::unique_ptr<ivalidator> validator)
{
    _validators.push_back(std::move(validator));
}

}
