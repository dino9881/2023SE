#pragma once
#include "App.hpp"
#include "Member.hpp"
#include "RegisterMemberUI.hpp"
#include "BasicController.hpp"

class RegisterMember : public BasicController
{
private:
    RegisterMemberUI _registerMemberUI;
public:
    Member* createNewMember(RegisterForm registerForm);
    RegisterMember();
    ~RegisterMember();
    void run();

};

