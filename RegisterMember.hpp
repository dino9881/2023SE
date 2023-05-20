#pragma once
#include "App.hpp"
#include "Member.hpp"
#include "RegisterMemberUI.hpp"

class RegisterMember
{
private:
    RegisterMemberUI _registerMemberUI;
public:
    Member* createNewMember(RegisterForm registerForm);
    RegisterMember();
    ~RegisterMember();
    void run();

};

