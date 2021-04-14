#pragma once
#include "IObserver.h"
class Sport :
    public IObserver
{
public:
    Sport(void);
    ~Sport(void);

    void update();
    void display();
};

