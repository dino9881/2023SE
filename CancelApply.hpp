#pragma once
#include "GeneralMember.hpp"
#include "BasicController.hpp"
#include "CancelApplyUI.hpp"

class CancelApply : public BasicController 
{
private:
    CancelApplyUI   _cancelApplyUI;
public:
    ApplyInfoDetail cancelApplyInfo(GeneralMember* member, string businessNumber);
    // 채용 정보의 지원자 수를 줄여주는 함수
    void            decreaseApplyNum(string businessNumber);
    CancelApply();
    ~CancelApply();
    void run();
};