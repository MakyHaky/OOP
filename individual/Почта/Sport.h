#pragma once
#include "IObserver.h"
#include "IDisplayElement.h"
class Sport :
    public IObserver, public IDisplayElement
{
public:
    Sport(void);
    ~Sport(void);

    void update();
    void display();
};

