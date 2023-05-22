#pragma once
#include "GeneralMember.hpp"
#include "BasicController.hpp"
#include "ShowApplyInfoListUI.hpp"

class ShowApplyInfoList : public BasicController
{
private:
    ShowApplyInfoListUI _showApplyInfoListUI;
public:
    ShowApplyInfoList();
    ~ShowApplyInfoList();
    void run();
};
