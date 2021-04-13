#pragma once
#include "Duck.h"
class DecoyDuck :
    public Duck
{
public:
    DecoyDuck(void);
    ~DecoyDuck(void);
    void display();
};

