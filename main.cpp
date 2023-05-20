#include "App.hpp"
#include "ApplyInfo.hpp"
#include "CompanyMember.hpp"
#include "GeneralMember.hpp"
#include "RecruitInfo.hpp"
#include "Server.hpp"

int main(void)
{    
    
    // 생성 TEST
    // Member* cm = new CompanyMember("id1", "pw1", "companyname", "businessnumber");
    // Member* gm = new GeneralMember("id2", "pw2", "name", "residentnumber");
    // ApplyInfo *ai = new ApplyInfo("Company", "task", "deadline", 1);
    // RecruitInfo *ri = new RecruitInfo("Company", "task", "deadline", 1);

    Server* server;
    server = Server::getInstance();
    server->doTask();


    return 0;
}
