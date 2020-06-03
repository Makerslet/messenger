#ifndef IVALIDATOR_H
#define IVALIDATOR_H

#include <string>
#include <stdexcept>

namespace client
{

class validation_exception : public std::invalid_argument
{
public:
    validation_exception(const std::string& description) :
        std::invalid_argument(description)
    {}
};

class ivalidator
{
public:
    virtual ~ivalidator() = default;
    virtual void validate(const std::string&) = 0;
};

}

#endif // IVALIDATOR_H
