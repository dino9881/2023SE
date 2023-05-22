#pragma once
#include "BasicUI.hpp"

// GetRecruitInfoListUI Boundary: BasicUI를 상속
// 등록된 채용 정보 조회 UI를 화면에 표시.
class GetRecruitInfoListUI : public BasicUI
{
private:
public:
    GetRecruitInfoListUI();
    ~GetRecruitInfoListUI();
    void        startInterface();
    void    showResult(RecruitInfoDetail recruitInfo);
};

