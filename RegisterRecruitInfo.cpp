#include "RegisterRecruitInfo.hpp"
#include "GeneralMember.hpp"
#include "CompanyMember.hpp"
#include "Server.hpp"

// 현재 Member(CompanyMember)의 _ownedRecruitInfo를 업데이트.
RecruitInfo* RegisterRecruitInfo::addNewRecruitInfo(RecruitInfoDetail recruitInfo)
{
    Server* server = Server::getInstance();
    CompanyMember* member = dynamic_cast<CompanyMember*>(server->getCurMember());
    RecruitInfo* info = NULL;

    info = new RecruitInfo(recruitInfo.companyName, recruitInfo.businessNumber, recruitInfo.task, recruitInfo.deadline, recruitInfo.numOfPersonnel);
    member->addNewRecruitInfo(info);
    return info;
}

// 현재 Member(CompanyMember)에게 입력받은 정보를 바탕으로 
// 해당 멤버의 _ownedRecruitInfo를 업데이트.
// showResult를 통해 생성한 recruitInfo 정보 출력.
void RegisterRecruitInfo::run()
{
    Server* server = Server::getInstance();
    CompanyMember* member = dynamic_cast<CompanyMember*>(server->getCurMember());
    _registerRecruitInfoUI.startInterface();
    RecruitInfo* info = NULL;
    info = addNewRecruitInfo(_registerRecruitInfoUI.registerNewRecruit());
    _registerRecruitInfoUI.showResult(info->getRecruitInfoDetail());
}

// 생성자&소멸자 
RegisterRecruitInfo::RegisterRecruitInfo() {}
RegisterRecruitInfo::~RegisterRecruitInfo() {}
