#pragma once
#include "App.hpp"

class BasicController
{
private:
public:
    BasicController();
    virtual ~BasicController();
    virtual void    run() = 0;
};

