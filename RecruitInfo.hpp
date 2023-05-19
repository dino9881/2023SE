#pragma once
#include "App.hpp"

class RecruitInfo
{
private:
    string          _companyName;
    string          _task;
    string          _deadline;
    unsigned int    _numOfPersonnel;
    unsigned int    _numOfApplicants;

public:
    void    getRecruitInfoDetail();
    void    setApplyNum();
    RecruitInfo(string companyName, string task, string deadline, unsigned int numOfPersonnel);
    ~RecruitInfo();
};
