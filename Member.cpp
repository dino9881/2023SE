#include "Member.hpp"

Member::Member(string id, string pw) : _id(id), _pw(pw), _state(LOGOUT) {}

bool   Member::checkValid()
{
    //구현
    return true;
}
int		Member::changeAccessState()
{
     //구현

     return 0;
}
string  Member::getId()
{
    return (_id);
}
string  Member::getPw()
{
    return (_pw);
}

Member::~Member(){}