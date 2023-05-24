#include "RecruitInfo.hpp"

RecruitInfo::RecruitInfo(string companyName, string businessNumber, string task, string deadline, unsigned int numOfPersonnel) : _companyName(companyName), _businessNumber(businessNumber),_task(task), _deadline(deadline), _numOfPersonnel(numOfPersonnel), _numOfApplicants(0) 
{
    cout << "채용 정보 생성 : " << companyName << " " << task << " " << numOfPersonnel << " " << deadline << endl ;
}

RecruitInfoDetail    RecruitInfo::getRecruitInfoDetail()
{
    RecruitInfoDetail   detail;
    
    detail.companyName = _companyName;
    detail.businessNumber = _businessNumber;
    detail.task = _task;
    detail.deadline = _deadline;
    detail.numOfPersonnel = _numOfPersonnel;
    return (detail);
}

unsigned int       RecruitInfo::getNumOfApplicants()
{
    return _numOfApplicants;
}

bool RecruitInfo::operator < (RecruitInfo &recruitInfo)
{
    return _companyName < recruitInfo._companyName;
}

void   RecruitInfo::increaseApplyNum()
{
    _numOfApplicants++;
}

void   RecruitInfo::decreaseApplyNum()
{
    _numOfApplicants--;
    cout << _numOfApplicants << endl;
}