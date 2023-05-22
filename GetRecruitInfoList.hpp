#pragma once
#include "BasicController.hpp"
#include "GetRecruitInfoListUI.hpp"
#include "Member.hpp"

// GetRecruitInfoList Controller: BasicController를 상속
// CompanyMember의 채용 정보 리스트를 불러와 Boundary에 전달.
class GetRecruitInfoList : public BasicController
{
private:
    GetRecruitInfoListUI _getRecruitInfoListUI;
public:
    GetRecruitInfoList();
    ~GetRecruitInfoList();
    void run();
};

