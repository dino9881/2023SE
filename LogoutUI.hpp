#pragma once
#include "BasicUI.hpp"

class LogoutUI : public BasicUI
{
private:
public:
    LogoutUI();
    ~LogoutUI();
    void        startInterface();
    void        showResult(string id);
};

