#pragma once
#include "BasicUI.hpp"
#include "App.hpp"

class SearchRecruitInfoUI : public BasicUI
{
private:
public:
    SearchRecruitInfoUI();
    ~SearchRecruitInfoUI();
    void    startInterface();
    string  searchCompanyName();
    void    showResult(RecruitInfoDetail recruitInfoDetail);
};