#ifndef CONSOLE_CONTROLLER_H
#define CONSOLE_CONTROLLER_H

#include "base/iio_object.h"
#include "base/ivalidator.h"

#include <memory>
#include <vector>

namespace client {

class console_controller : public iio_object
{
public:
    console_controller();

    void read_async(read_lambda callback) override;
    void write_async(const std::string& str) override;

    void add_validator(std::unique_ptr<ivalidator> validator);
private:
    read_lambda _read_callback;
    std::vector<std::unique_ptr<ivalidator>> _validators;
};

}

#endif // CONSOLE_CONTROLLER_H
