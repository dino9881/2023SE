#pragma once
#include "App.hpp"

class ApplyInfo
{
private:
    string          _companyName;
    string          _task;
    string          _deadline;
    unsigned int    _numOfPersonnel;
    
public:
    void getApplyInfoDetail();
    void setApplyNum();
    ApplyInfo(string companyName, string task, string deadline, unsigned int numOfPersonnel);
    ~ApplyInfo();
};
