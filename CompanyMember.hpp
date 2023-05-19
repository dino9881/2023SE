#pragma once
#include "Member.hpp"

class CompanyMember : public Member
{
private:
    string  _companyName;
    string  _businessNumber;
    
public:
    unsigned int    totalApplicantsNum();
    void            addNewRecruitInfo();
    void            listRecruitInfo();
    virtual void	checkInfo();
    CompanyMember(string id, string pw, string companyName, string businessNumber);
    ~CompanyMember();
};

