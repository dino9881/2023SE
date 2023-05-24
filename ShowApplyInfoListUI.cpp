#include "ShowApplyInfoListUI.hpp"
#include "ApplyInfo.hpp"
#include "App.hpp"

ShowApplyInfoListUI::ShowApplyInfoListUI(){}

ShowApplyInfoListUI::~ShowApplyInfoListUI(){}

// 회원의 지원정보들을 출력한다.
void    ShowApplyInfoListUI::startInterface()
{   
    fprintf(_fout, "\n4.3. 지원 정보 조회\n");
}

void ShowApplyInfoListUI::showResult(ApplyInfoDetail applyInfoDetail)
{   
    fprintf(_fout, "> %s %s %s %u %s \n", applyInfoDetail.companyName.c_str(), applyInfoDetail.businessNumber.c_str(), applyInfoDetail.task.c_str(), applyInfoDetail.numOfPersonnel, applyInfoDetail.deadline.c_str());
}