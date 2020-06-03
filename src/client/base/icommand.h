#ifndef ICOMMAND_H
#define ICOMMAND_H

#include <root.pb.h>

namespace client
{

class icommand
{
public:
    virtual ~icommand() = default;
    virtual void execute() = 0;
    virtual bool need_response() const = 0;
};

class command_with_response : public icommand
{
public:
    bool need_response() const override
    {
        return true;
    }

    virtual void process_response(const protocol::root_message&) = 0;
    virtual void process_timeout() = 0;
};

}

#endif // ICOMMAND_H
