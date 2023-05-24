#pragma once
#include "App.hpp"

class RecruitInfo
{
private:
    string          _companyName;
    string          _businessNumber;
    string          _task;
    string          _deadline;
    unsigned int    _numOfPersonnel;
    unsigned int    _numOfApplicants;

public:
    RecruitInfoDetail   getRecruitInfoDetail();
    unsigned int        getNumOfApplicants();

    void                setApplyNum();
    void                increaseApplyNum();
    void                decreaseApplyNum();

    bool operator < (RecruitInfo &recruitInfo);
    RecruitInfo(string companyName, string businessNumber, string task, string deadline, unsigned int numOfPersonnel);
    ~RecruitInfo();
};
