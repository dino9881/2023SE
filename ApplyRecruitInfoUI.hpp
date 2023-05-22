#pragma once
#include "BasicUI.hpp"
#include "App.hpp"

class ApplyRecruitInfoUI : public BasicUI
{
private:
public:
    ApplyRecruitInfoUI();
    ~ApplyRecruitInfoUI();
    void  startInterface();
    string applyRecruit();
    void showResult(RecruitInfoDetail recruitInfoDetail);
};