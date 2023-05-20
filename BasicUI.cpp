#include "BasicUI.hpp"
#include "Server.hpp"

BasicUI::BasicUI()
{
    Server* server = Server::getInstance();
    this->_fin = server->getFin();
    this->_fout = server->getFout();
}

BasicUI::~BasicUI(){}