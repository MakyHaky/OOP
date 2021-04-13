#pragma once
#include "IQuackBehavior.h"
class QuackQuack :
    public IQuackBehavior
{
public:
    QuackQuack();
    ~QuackQuack(void);
    void Quack();
};

