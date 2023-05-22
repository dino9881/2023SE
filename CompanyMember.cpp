#include "CompanyMember.hpp"

CompanyMember::CompanyMember(string companyName, string businessNumber,string id, string pw) : Member(id, pw) , _companyName(companyName), _businessNumber(businessNumber) 
{
    cout << 1 << " 회사회원 " << companyName << " " << businessNumber << " " <<  id << " " << pw << endl;
}

CompanyMember::~CompanyMember(){}

unsigned int    CompanyMember::totalApplicantsNum()
{
    return (0);
}

void            CompanyMember::addNewRecruitInfo()
{

}

void            CompanyMember::listRecruitInfo()
{

}

void	CompanyMember::checkInfo()
{

}

