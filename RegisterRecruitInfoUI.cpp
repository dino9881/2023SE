#include "RegisterRecruitInfoUI.hpp"
#include "App.hpp"
#include "CompanyMember.hpp"
#include "Server.hpp"


// interface 시작
void    RegisterRecruitInfoUI::startInterface()
{
    fprintf(_fout, "3.1. 채용 정보 등록 \n");
}

// ComapanyMember에게 정보를 입력받아 controller에 전달.
RecruitInfoDetail    RegisterRecruitInfoUI::registerNewRecruit()
{
    Server* server = Server::getInstance();
    CompanyMember* member = dynamic_cast<CompanyMember*>(server->getCurMember());;
    // 입력을 받는 부분
    char          task[MAX_STRING];
    char          deadline[MAX_STRING];
    unsigned int    numOfPersonnel;

    fscanf(_fin, "%s %u %s \n", task, &numOfPersonnel, deadline);
    

    // CompanyMember에 getComapanyName 함수 추가
    // recruitInfo에 사용되는 companyName를 CompanyMember의 attribute에서 가져옴.
    RecruitInfoDetail recruitInfo = {string(member->getCompanyName()),string(member->getBusinessNumber()), string(task), string(deadline), numOfPersonnel};

    return (recruitInfo);
}

void    RegisterRecruitInfoUI::showResult(RecruitInfoDetail recruitInfo)
{
    fprintf(_fout, "> %s %u %s\n\n", recruitInfo.task.c_str(), recruitInfo.numOfPersonnel, recruitInfo.deadline.c_str());
}

RegisterRecruitInfoUI::RegisterRecruitInfoUI() : BasicUI() {}

RegisterRecruitInfoUI::~RegisterRecruitInfoUI() {}