#include "Member.hpp"

Member::Member(string id, string pw) : _id(id), _pw(pw), _state(LOGOUT) {}


string  Member::getId()
{
    return (_id);
}
string  Member::getPw()
{
    return (_pw);
}

Member::~Member(){}