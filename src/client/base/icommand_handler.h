#ifndef ICOMMAND_HANDLER_H
#define ICOMMAND_HANDLER_H

#include <memory>
#include <root.pb.h>

namespace client
{

class icommand;

class icommand_handler
{
public:
    virtual ~icommand_handler() = default;
    virtual void add_command(std::unique_ptr<icommand>&&) = 0;
    virtual void process_response(const protocol::root_message&) = 0;
};

}

#endif // ICOMMAND_HANDLER_H
