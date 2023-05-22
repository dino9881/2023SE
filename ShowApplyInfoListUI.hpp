#pragma once
#include "BasicUI.hpp"
#include "ApplyInfo.hpp"


class ShowApplyInfoListUI : public BasicUI
{
private:
public:
    ShowApplyInfoListUI();
    ~ShowApplyInfoListUI();
    void  startInterface();
    void showResult(ApplyInfoDetail applyInfoDetail);
};