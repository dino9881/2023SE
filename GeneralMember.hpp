#pragma once
#include "Member.hpp"
#include "ApplyInfo.hpp"

class GeneralMember : public Member
{
private:
    string      _name;
    string      _residentNumber;
    vector<ApplyInfo*>  _ownedApplyInfo;
    
public:
    unsigned int        totalApplyNum();
    ApplyInfoDetail     cancelApplyInfo(string businessNumber);
    vector<ApplyInfo*>  listApplyInfo();
    RegisterForm        getMemberDetail();
    void                createNewApplyInfo(RecruitInfoDetail recruitInfoDetail);
    virtual void	    checkInfo();
    GeneralMember(string name, string residentNumber, string id, string pw);
    ~GeneralMember();
};

