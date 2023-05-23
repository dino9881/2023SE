#include "Logout.hpp"
#include "Server.hpp"

Logout::Logout(){}
Logout::~Logout(){}

void Logout::run()
{
    Server* server = Server::getInstance();
    Member *member = NULL;
    _logoutUI.startInterface();
    member = server->getCurMember();
    if (member)
    {
        _logoutUI.showResult(member->getId());
        server->setCurMember(NULL);
    }
}