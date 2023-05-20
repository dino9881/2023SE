#include "RegisterMember.hpp"

void    RegisterMemberUI::startInterface()
{
    fprintf(_fout, "1.1. 회원가입\n");
}

RegisterForm    RegisterMemberUI::enterRegisterInfo()
{
    // 입력을 받는 부분
    int type = 0;
    char name[MAX_STRING];
    char number[MAX_STRING];
    char id[MAX_STRING];
    char pw[MAX_STRING];
    
    fscanf(_fin, "%d %s %s %s %s \n", &type, name, number, id, pw);
    RegisterForm registerForm = {type, string(name), string(number), string(id), string(pw)};
    return (registerForm);
}

RegisterMemberUI::RegisterMemberUI() : BasicUI() {}

RegisterMemberUI::~RegisterMemberUI(){}