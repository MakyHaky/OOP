#pragma once
#include "IQuackBehavior.h"
class QuackMute :
    public IQuackBehavior
{
public:
    QuackMute();
    ~QuackMute(void);
    void Quack();
};

