#pragma once
#include "App.hpp"

class Member
{
private:
    string          _id;
    string          _pw;
    int				_state;

public:
    bool    checkValid();
	int		changeAccessState();
	virtual void	checkInfo() = 0;
    Member(string id, string pw);
    ~Member();
};

