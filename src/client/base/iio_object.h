#ifndef IIO_OBJECT_H
#define IIO_OBJECT_H

#include <functional>

namespace client
{

using read_lambda = std::function<void(std::string&&)>;

class iio_object
{
public:
    virtual ~iio_object() = default;
    virtual void read_async(read_lambda) = 0;
    virtual void write_async(const std::string&) = 0;
};

}

#endif // IIO_OBJECT_H
