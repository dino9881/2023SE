#include "Logout.hpp"
#include "Server.hpp"

Logout::Logout(){}
Logout::~Logout(){}

void Logout::run()
{
    Server* server = Server::getInstance();
    _logoutUI.startInterface();
    server->setCurMember(NULL);
}