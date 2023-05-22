#include "ApplyInfo.hpp"

ApplyInfo::ApplyInfo(string companyName, string task, string deadline, unsigned int numOfPersonnel) : _companyName(companyName), _task(task), _deadline(deadline), _numOfPersonnel(numOfPersonnel) 
{
    cout << "지원 정보 생성 : " << companyName << " " << task << " " << numOfPersonnel << " " << deadline << endl ;
}

ApplyInfo ApplyInfo::getApplyInfoDetail()
{
    //구현
}

void ApplyInfo::setApplyNum()
{
    //구현
}