#include "GeneralMember.hpp"

GeneralMember::GeneralMember(string name, string residentNumber,string id, string pw) : Member(id, pw), _name(name), _residentNumber(residentNumber) 
{
    cout << 2 << " 일반 회원 " << name << " " << residentNumber << " " <<  id << " " << pw << endl;
}

GeneralMember::~GeneralMember(){}

RegisterForm    GeneralMember::getMemberDetail()
{
    RegisterForm registerForm;

    registerForm.type = 2;
    registerForm.id = _id;
    registerForm.pw = _pw;
    registerForm.name = _name;
    registerForm.number = _residentNumber;
    return registerForm;
}

unsigned int    GeneralMember::totalApplyNum()
{
    return 0;
}

ApplyInfoDetail            GeneralMember::cancelApplyInfo(string businessNumber)
{
    ApplyInfoDetail applyInfoDetail;
    for (int i = 0 ; i < _ownedApplyInfo.size(); i++)
    {
        if (_ownedApplyInfo[i]->getBusinessNumber() == businessNumber)
        {
            applyInfoDetail = _ownedApplyInfo[i]->getApplyInfoDetail();
            _ownedApplyInfo.erase(_ownedApplyInfo.begin() + i);
            break;
        }
    }
    return (applyInfoDetail);
}

vector<ApplyInfo*>            GeneralMember::listApplyInfo()
{
    return _ownedApplyInfo;
}

void            GeneralMember::createNewApplyInfo(RecruitInfoDetail recruitInfoDetail)
{
    ApplyInfo* applyInfo = NULL;
    applyInfo = new ApplyInfo(recruitInfoDetail.companyName, recruitInfoDetail.businessNumber, \
    recruitInfoDetail.task, recruitInfoDetail.deadline, recruitInfoDetail.numOfPersonnel);
    _ownedApplyInfo.push_back(applyInfo);

}

void	GeneralMember::checkInfo()
{
    
}