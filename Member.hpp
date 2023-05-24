#pragma once
#include "App.hpp"

class Member
{
protected:
    string          _id;
    string          _pw;
    int				_state;

public:
    string          getId();
    string          getPw();
    Member(string id, string pw);
    virtual ~Member();
};

