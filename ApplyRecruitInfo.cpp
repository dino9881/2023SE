#include "ApplyRecruitInfo.hpp"
#include "Server.hpp"
#include "RecruitInfo.hpp"
#include "CompanyMember.hpp"

ApplyRecruitInfo::ApplyRecruitInfo(){}

ApplyRecruitInfo::~ApplyRecruitInfo(){}

void  ApplyRecruitInfo::addNewApplyInfo(GeneralMember* member, RecruitInfoDetail recruitInfoDetail)
{
    member->createNewApplyInfo(recruitInfoDetail);
}


void ApplyRecruitInfo::run()
{
    //현재 접속해있는 사용자의 정보를 받아온다.
    Server* server = Server::getInstance();
    RecruitInfoDetail recruitInfoDetail;
    GeneralMember* member = NULL;
    member = dynamic_cast<GeneralMember*>(server->getCurMember());
    vector<Member*> memberList = server->getMemberList();
    string toFindBusinessNumber;
    
    _applyRecruitInfoUI.startInterface();
    toFindBusinessNumber = _applyRecruitInfoUI.applyRecruit();
    for(int i = 0; i < memberList.size(); i++){
        CompanyMember* companyMember = dynamic_cast<CompanyMember*>(memberList[i]);
        if (companyMember)
        {
            if (companyMember->getBusinessNumber() == toFindBusinessNumber)
            {
                companyMember->listRecruitInfo().back()->increaseApplyNum();
                recruitInfoDetail = companyMember->listRecruitInfo().back()->getRecruitInfoDetail();
                break;
            }
        }
        else
            continue;
    }
    addNewApplyInfo(member, recruitInfoDetail);
    _applyRecruitInfoUI.showResult(recruitInfoDetail);
}