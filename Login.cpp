#include "Login.hpp"
#include "Server.hpp"

Login::Login(){}
Login::~Login(){}
Member* Login::checkValidation(LoginForm loginForm)
{
    Server* server = Server::getInstance();
    Member* member = NULL;
    vector<Member*> memberList = server->getMemberList();
    for (int i = 0; i < memberList.size(); i++)
    {
        cout << loginForm.id << " " << memberList[i]->getId() << endl;
        if (loginForm.id == memberList[i]->getId() && loginForm.pw == memberList[i]->getPw())
        {
            member = memberList[i];
            break;
        } 
    }
    server->setCurMember(member);
    return (member);
}
void Login::run()
{
    Server* server = Server::getInstance();
    Member* member = NULL;
    _loginUI.startInterface();
    member = checkValidation(_loginUI.requestLogIn());
    if (!member)
    {
        cout << "로그인 실패 "<< endl;
        return;
    }
    cout << "로그인 성공 id = " << member->getId() << endl;
    server->setCurMember(member);
}