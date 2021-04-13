#pragma once
#include "IQuackBehavior.h"
class QuackSqueak :
    public IQuackBehavior
{
public:
    QuackSqueak();
    ~QuackSqueak(void);
    void Quack();
};

