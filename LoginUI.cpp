#include "LoginUI.hpp"

LoginUI::LoginUI(){}

LoginUI::~LoginUI(){}

void    LoginUI::startInterface()
{
    fprintf(_fout, "\n2.1. 로그인\n");
}

// id 와 pw 를 입력받아 loginForm 구조체를 만들어 반환하여 해당 Form 으로 login 을 요청한다.
LoginForm   LoginUI::requestLogIn()
{
    char    id[MAX_STRING];
    char    pw[MAX_STRING];
    
    fscanf(_fin, "%s %s\n", id, pw);
    LoginForm loginForm{string(id), string(pw)};
    return (loginForm);
}

void        LoginUI::showResult(Member *member)
{
    fprintf(_fout, "> %s %s\n", member->getId().c_str(), member->getPw().c_str());
}
