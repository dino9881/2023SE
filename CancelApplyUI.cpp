#include "CancelApplyUI.hpp"

void    CancelApplyUI::startInterface()
{
    fprintf(_fout, "4.4. 지원취소\n");
}

string    CancelApplyUI::cancelApply()
{
    // 사업자번호를 읽어온다.
    char businessNumber[MAX_STRING];
    
    fscanf(_fin, "%s\n", businessNumber);
    return (string(businessNumber));
}

//삭제한 지원정보에 대한 정보를 출력해준다.
void    CancelApplyUI::showResult(ApplyInfoDetail applyInfoDetail)
{
    fprintf(_fout, "> %s %s %s\n\n",applyInfoDetail.companyName.c_str(), applyInfoDetail.businessNumber.c_str(), applyInfoDetail.task.c_str());
}

CancelApplyUI::CancelApplyUI() : BasicUI() {}

CancelApplyUI::~CancelApplyUI(){}
