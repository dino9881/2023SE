#pragma once
#include "Member.hpp"
#include "ApplyInfo.hpp"

class GeneralMember : public Member
{
private:
    string _name;
    string _residentNumber;
    ApplyInfo*  _ownedApplyInfo[MAX_APPLY_NUM];
    
public:
    unsigned int    totalApplyNum();
    void            cancelApplyInfo();
    void            listApplyInfo();
    void            createNewApplyInfo();
    virtual void	checkInfo();
    GeneralMember(string id, string pw, string name, string residentNumber);
    ~GeneralMember();
};

