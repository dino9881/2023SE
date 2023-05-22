#include "RecruitInfo.hpp"

RecruitInfo::RecruitInfo(string companyName, string task, string deadline, unsigned int numOfPersonnel) : _companyName(companyName), _task(task), _deadline(deadline), _numOfPersonnel(numOfPersonnel), _numOfApplicants(0) 
{
    cout << "채용 정보 생성 : " << companyName << " " << task << " " << numOfPersonnel << " " << deadline << endl ;
}

RecruitInfoDetail    RecruitInfo::getRecruitInfoDetail()
{
    RecruitInfoDetail   detail;
    
    detail.companyName = this->_companyName;
    detail.task = this->_task;
    detail.deadline = this->_deadline;
    detail.numOfPersonnel = this->_numOfPersonnel;
    return (detail);
}

void    RecruitInfo::setApplyNum()
{
}