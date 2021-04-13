#pragma once
#include "IFlyBehavior.h"
class FlyNoWay :
    public IFlyBehavior
{
public:
    FlyNoWay();
    ~FlyNoWay(void);
    void Fly();
};

