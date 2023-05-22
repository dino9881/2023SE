#include "Login.hpp"
#include "Server.hpp"

Login::Login(){}

Login::~Login(){}

// 로그인을 전달 받은 loginForm 으로 시도한다. Server class에 있는 memberList를 순회하며 id 와 pw 가 동일한 member 가 있다면 해당 member 의 포인터를 반환한다. 
Member* Login::checkValidation(LoginForm loginForm)
{
    Server*         server = Server::getInstance();
    Member*         member = NULL;
    vector<Member*> memberList = server->getMemberList();

    for (int i = 0; i < memberList.size(); i++)
    {
        if (loginForm.id == memberList[i]->getId() && loginForm.pw == memberList[i]->getPw())
        {
            member = memberList[i];
            break;
        } 
    }
    server->setCurMember(member);
    return (member);
}

// chekValidation으로 입력받은 member 를 찾고, 해당 member를 서버의 curMember로 넣어준다.
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
    cout << "로그인 성공 id = " << member->getId() << " pw = " << member->getPw() << endl;
    server->setCurMember(member);
}