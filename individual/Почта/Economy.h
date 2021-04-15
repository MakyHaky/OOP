#pragma once
#include "IObserver.h"
#include "IDisplayElement.h"
class Economy :
    public IObserver, public IDisplayElement
{
public:
    Economy(void);
    ~Economy(void);

    void update();
    void display();
};  

