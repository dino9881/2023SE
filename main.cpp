#include "App.hpp"
#include "ApplyInfo.hpp"
#include "CompanyMember.hpp"
#include "GeneralMember.hpp"
#include "RecruitInfo.hpp"
#include "Server.hpp"

int main(void)
{    
    Server* server;
    server = Server::getInstance();
    server->doTask();
    return 0;
}
