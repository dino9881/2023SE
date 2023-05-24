#pragma once
#include "App.hpp"

class ApplyInfo
{
private:
    string          _companyName;
    string          _businessNumber;
    string          _task;
    string          _deadline;
    unsigned int    _numOfPersonnel;
    
public:
    ApplyInfoDetail     getApplyInfoDetail();
    string              getBusinessNumber();
    bool                operator < (ApplyInfo &applyInfo);
    ApplyInfo(string companyName, string businessNumber, string task, string deadline, unsigned int numOfPersonnel);
    ~ApplyInfo();
};
