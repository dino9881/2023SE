#include "GetRecruitInfoListUI.hpp"

// interface 시작
void   GetRecruitInfoListUI::startInterface()
{
    fprintf(_fout, "3.2 등록된 채용 정보 조회 \n");

    
}
// vertor를 iter를 통해 순회하며 showResult하는 로직으로 재구현 필요해보임.
void    GetRecruitInfoListUI::showResult(RecruitInfoDetail recruitInfo)
{     
    fprintf(_fout, "%s %u %s\n",recruitInfo.task.c_str(), recruitInfo.numOfPersonnel, recruitInfo.deadline.c_str());
}

GetRecruitInfoListUI::GetRecruitInfoListUI() {}
GetRecruitInfoListUI::~GetRecruitInfoListUI() {}
