#pragma once
#include "App.hpp"

// 모든 Controller 의 부모가 되는 class 
class BasicController
{
private:
public:
    BasicController();
    virtual ~BasicController();
    // 모든 Controller Class 는 run()을 구현해야한다. 
    virtual void    run() = 0;
};

