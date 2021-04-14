#pragma once
#include "IObserver.h"
class Economy :
    public IObserver
{
public:
    Economy(void);
    ~Economy(void);

    void update();
    void display();
};  

