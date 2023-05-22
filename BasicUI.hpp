#pragma once
#include "App.hpp"

// UI 들의 부모가 되는 기본 class 각 UI 는 BasicUI 를 상속하고 BasicUI 는 생성시 Server class 에 저장되어잇는 파일 포인터 정보를 갖게 된다. 
class BasicUI
{
protected:
    FILE*   _fin;
    FILE*   _fout;
public:
    virtual void    startInterface() = 0;
    BasicUI();
    virtual ~BasicUI();
};
