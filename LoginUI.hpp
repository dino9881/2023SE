#pragma once
#include "BasicUI.hpp"
#include "Member.hpp"

class LoginUI : public BasicUI
{
private:
public:
    LoginUI();
    ~LoginUI();
    void        startInterface();
    LoginForm   requestLogIn();
    void        showResult(Member *member);

};

