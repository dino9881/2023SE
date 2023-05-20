#include "LoginUI.hpp"

LoginUI::LoginUI(){}

LoginUI::~LoginUI(){}

void    LoginUI::startInterface()
{
    fprintf(_fout, "2.1. 로그인\n");
}
LoginForm   LoginUI::requestLogIn()
{
    char id[MAX_STRING];
    char pw[MAX_STRING];
    
    fscanf(_fin, "%s %s\n", id, pw);
    LoginForm loginForm{string(id), string(pw)};
    return (loginForm);
}