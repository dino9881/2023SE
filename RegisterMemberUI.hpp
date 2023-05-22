#pragma once
#include "BasicUI.hpp"

class RegisterMemberUI : public BasicUI
{
private:
public: 
    void            startInterface();
    RegisterForm    enterRegisterInfo();
    RegisterMemberUI();
    ~RegisterMemberUI();
};
