#include "CompanyMember.hpp"

CompanyMember::CompanyMember(string id, string pw, string companyName, string businessNumber) : Member(id, pw) , _companyName(companyName), _businessNumber(businessNumber) {}

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

