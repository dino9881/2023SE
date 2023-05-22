#include "ApplyInfo.hpp"

ApplyInfo::ApplyInfo(string companyName, string businessNumber, string task, string deadline, unsigned int numOfPersonnel) : _companyName(companyName), _businessNumber(businessNumber),_task(task), _deadline(deadline), _numOfPersonnel(numOfPersonnel) 
{
    cout << "지원 정보 생성 : " << companyName << " " << task << " " << numOfPersonnel << " " << deadline << endl ;
}

ApplyInfoDetail ApplyInfo::getApplyInfoDetail()
{
   ApplyInfoDetail   detail;
    
    detail.companyName = _companyName;
    detail.businessNumber = _businessNumber;
    detail.task = _task;
    detail.deadline = _deadline;
    detail.numOfPersonnel = _numOfPersonnel;
    return (detail);
}

void ApplyInfo::setApplyNum()
{
    //구현
}