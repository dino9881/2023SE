#pragma once
#include "Member.hpp"

class GeneralMember : public Member
{
private:
    string _name;
    string _residentNumber;
    
public:
    unsigned int    totalApplyNum();
    void            cancelApplyInfo();
    void            listApplyInfo();
    void            createNewApplyInfo();
    virtual void	checkInfo();
    GeneralMember(string id, string pw, string name, string residentNumber);
    ~GeneralMember();
};

