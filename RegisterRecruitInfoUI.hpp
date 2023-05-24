#pragma once
#include "BasicUI.hpp"

// RegisterRecruitInfoUI Boundary: BasicUI를 상속
// CompanyMember에게 정보를 입력받아 new RecruitInfo를 생성 및 저장.
class RegisterRecruitInfoUI : public BasicUI
{
private:
public:
    RegisterRecruitInfoUI();
    ~RegisterRecruitInfoUI();
    RecruitInfoDetail   registerNewRecruit();
    void                startInterface();
    void                showResult(RecruitInfoDetail recruitInfo);
};

