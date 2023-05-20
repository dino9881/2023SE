#pragma once
#include "BasicUI.hpp"

class LoginUI : public BasicUI
{
private:
public:
    LoginUI();
    ~LoginUI();
    void        startInterface();
    LoginForm   requestLogIn();
};

