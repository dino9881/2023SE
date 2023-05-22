#pragma once
#include "App.hpp"

class Member
{
protected:
    string          _id;
    string          _pw;
    int				_state;

public:
    bool            checkValid();
	int		        changeAccessState();
    string          getId();
    string          getPw();
	virtual void	checkInfo() = 0;
    Member(string id, string pw);
    ~Member();
};

