#include "SearchRecruitInfoUI.hpp"

void    SearchRecruitInfoUI::startInterface()
{
    fprintf(_fout, "4.1. 채용 정보 검색\n");
}

// 채용 정보 검색하기 => 사업자번호를 읽어온다.
string  SearchRecruitInfoUI::searchCompanyName()
{
    char companyName[MAX_STRING];
    
    fscanf(_fin, "%s\n", companyName);
    return (companyName);
}

// 채용 정보를 출력해준다.
void SearchRecruitInfoUI::showResult(RecruitInfoDetail recruitInfoDetail){
    fprintf(_fout, "%s %s %s %u %s\n",recruitInfoDetail.companyName.c_str(), recruitInfoDetail.businessNumber.c_str(), recruitInfoDetail.task.c_str(), recruitInfoDetail.numOfPersonnel, recruitInfoDetail.deadline.c_str());
}

SearchRecruitInfoUI::SearchRecruitInfoUI() : BasicUI() {}

SearchRecruitInfoUI::~SearchRecruitInfoUI(){}