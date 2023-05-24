#pragma once
#include "BasicController.hpp"
#include "SearchRecruitInfoUI.hpp"
#include "RecruitInfo.hpp"

class SearchRecruitInfo : public BasicController
{
private:
    SearchRecruitInfoUI _searchRecruitInfoUI;
public:
    SearchRecruitInfo();
    ~SearchRecruitInfo();
    void    showCompanyRecruitInfo(vector<RecruitInfo*> RecuitInfo);
    void    run();
};