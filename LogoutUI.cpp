#include "LogoutUI.hpp"

LogoutUI::LogoutUI(){}

LogoutUI::~LogoutUI(){}

void    LogoutUI::startInterface()
{
    fprintf(_fout, "\n2.2. 로그아웃\n");
}

void         LogoutUI::showResult(string id)
{
    fprintf(_fout, "> %s\n", id.c_str());
}
