#ifndef ICONTACT_LIST_H
#define ICONTACT_LIST_H

#include <vector>
#include <string>

namespace client
{

class icontact_list_storage
{
public:
    virtual ~icontact_list_storage() = default;
    virtual void set_contact_list(std::vector<std::string>&&) = 0;
    virtual void add_contact(const std::string&) = 0;
    virtual void remove_contact(const std::string&) = 0;
};

}

#endif // ICONTACT_LIST_H
