#pragma once
#include "GeneralMember.hpp"
#include "BasicController.hpp"
#include "ApplyRecruitInfoUI.hpp"

class ApplyRecruitInfo : public BasicController
{
private:
    ApplyRecruitInfoUI _applyRecruitInfoUI;
public:
    ApplyRecruitInfo();
    ~ApplyRecruitInfo();
    void    addNewApplyInfo(GeneralMember* member, RecruitInfoDetail recruitInfoDetail);
    void    run();
};