#include "SearchRecruitInfo.hpp"
#include "Server.hpp"
#include "RecruitInfo.hpp"
#include "CompanyMember.hpp"

SearchRecruitInfo::SearchRecruitInfo(){}

SearchRecruitInfo::~SearchRecruitInfo(){}

void  SearchRecruitInfo::showCompanyRecruitInfo(vector<RecruitInfo*> RecruitInfos)
{   
    RecruitInfoDetail recruitInfoDetail;

    for(int i = RecruitInfos.size() - 1; i >= 0; i--)
    {
        recruitInfoDetail = RecruitInfos[i]->getRecruitInfoDetail();
        _searchRecruitInfoUI.showResult(recruitInfoDetail);
    }
}


void SearchRecruitInfo::run()
{
    //현재 접속해있는 사용자의 정보를 받아온다.
    Server* server = Server::getInstance();
    vector<Member*> memberList = server->getMemberList();
    string companyName;
    
    _searchRecruitInfoUI.startInterface();
    companyName = _searchRecruitInfoUI.searchCompanyName();
    for(int i = 0; i < memberList.size(); i++)
    {
        CompanyMember* companyMember = dynamic_cast<CompanyMember*>(memberList[i]);
        if (companyMember)
        {
            if (companyMember->getCompanyName() == companyName)
            {
                showCompanyRecruitInfo(companyMember->listRecruitInfo());
                break;
            }
        }
        else
            continue;
    }
    
}