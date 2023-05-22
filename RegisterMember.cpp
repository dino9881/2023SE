#include "RegisterMember.hpp"
#include "GeneralMember.hpp"
#include "CompanyMember.hpp"
#include "Server.hpp"

Member* RegisterMember::createNewMember(RegisterForm registerForm)
{
    Member* member = NULL;

    if (registerForm.type == COMPANY_MEMBER_TYPE)
        member = new CompanyMember(registerForm.name, registerForm.number, registerForm.id, registerForm.pw);
    else if (registerForm.type == GENERAL_MEMBER_TYPE)
        member = new GeneralMember(registerForm.name, registerForm.number, registerForm.id, registerForm.pw);
    return (member);
}

RegisterMember::RegisterMember(){}
void RegisterMember::run()
{
    Server* server = Server::getInstance();
    Member* member = NULL;
    
    _registerMemberUI.startInterface();
    member = createNewMember(_registerMemberUI.enterRegisterInfo());
    server->getMemberList().push_back(member);
}

RegisterMember::~RegisterMember(){}
