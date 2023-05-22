#include "CompanyMember.hpp"

CompanyMember::CompanyMember(string companyName, string businessNumber,string id, string pw) : Member(id, pw) , _companyName(companyName), _businessNumber(businessNumber) 
{
    cout << 1 << " 회사회원 " << companyName << " " << businessNumber << " " <<  id << " " << pw << endl;
}

CompanyMember::~CompanyMember(){}

RegisterForm    CompanyMember::getMemberDetail()
{
    RegisterForm registerForm;

    registerForm.type = 1;
    registerForm.id = _id;
    registerForm.pw = _pw;
    registerForm.name = _companyName;
    registerForm.number = _businessNumber;
    return registerForm;
}

string CompanyMember::getCompanyName()
{
    return _companyName;
}

string CompanyMember::getBusinessNumber()
{
    return _businessNumber;
}

unsigned int    CompanyMember::totalApplicantsNum()
{
    return (0);
}

void            CompanyMember::addNewRecruitInfo(RecruitInfo* recruitInfo)
{
    _ownedRecuitInfos.push_back(recruitInfo);
}

vector<RecruitInfo*>             CompanyMember::listRecruitInfo()
{
    return _ownedRecuitInfos;
}

void	CompanyMember::checkInfo()
{

}

