#pragma once
#include "App.hpp"

class BasicUI
{
protected:
    FILE* _fin;
    FILE* _fout;
public:
    virtual void    startInterface() = 0;
    BasicUI();
    virtual ~BasicUI();
};
