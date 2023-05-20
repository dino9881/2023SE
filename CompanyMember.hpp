#pragma once
#include "Member.hpp"
#include "RecruitInfo.hpp"

class CompanyMember : public Member
{
private:
    string  _companyName;
    string  _businessNumber;
    RecruitInfo* _ownedRecuitInfo;

    
public:
    unsigned int    totalApplicantsNum();
    void            addNewRecruitInfo();
    void            listRecruitInfo();
    virtual void	checkInfo();
    CompanyMember(string name, string residentNumber,string id, string pw);
    ~CompanyMember();
};

