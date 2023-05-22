#include "ApplyRecruitInfoUI.hpp"

void    ApplyRecruitInfoUI::startInterface()
{
    fprintf(_fout, "4.2. 채용지원\n");
}

// 지원하기 => 사업자번호를 읽어온다.
string  ApplyRecruitInfoUI::applyRecruit()
{
    char businessNumber[MAX_STRING];
    
    fscanf(_fin, "%s\n", businessNumber);
    return (businessNumber);
}

// 지원 정보를 출력해준다.
void ApplyRecruitInfoUI::showResult(RecruitInfoDetail recruitInfoDetail){
    fprintf(_fout, "%s %s %s\n",recruitInfoDetail.companyName.c_str(), recruitInfoDetail.businessNumber.c_str(), recruitInfoDetail.task.c_str());
}

ApplyRecruitInfoUI::ApplyRecruitInfoUI() : BasicUI() {}

ApplyRecruitInfoUI::~ApplyRecruitInfoUI(){}