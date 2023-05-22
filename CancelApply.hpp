#pragma once
#include "GeneralMember.hpp"
#include "BasicController.hpp"
#include "CancelApplyUI.hpp"

class CancelApply : public BasicController 
{
private:
    CancelApplyUI _cancelApplyUI;
public:
    ApplyInfoDetail cancelApplyInfo(GeneralMember* member, string businessNumber);
    CancelApply();
    ~CancelApply();
    void run();
};