#ifndef IAPP_STATE_H
#define IAPP_STATE_H

namespace client
{

enum class state
{
    not_logged_in,
    logged_in
};

class iapp_state
{
public:
    virtual ~iapp_state() = default;
    virtual state get_state() const = 0;
    virtual void set_state(state) = 0;
};

}

#endif // IAPP_STATE_H
