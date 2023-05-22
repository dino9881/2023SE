#pragma once
#include "Member.hpp"
#include "RecruitInfo.hpp"

class CompanyMember : public Member
{
private:
    string          _companyName;
    string          _businessNumber;
    vector<RecruitInfo*>    _ownedRecuitInfos;

    
public:
    unsigned int    totalApplicantsNum();
    void            addNewRecruitInfo();
    void            listRecruitInfo();
    RegisterForm    getMemberDetail();
    virtual void	checkInfo();
    CompanyMember(string name, string residentNumber,string id, string pw);
    ~CompanyMember();
};

