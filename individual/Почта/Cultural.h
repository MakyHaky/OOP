#pragma once
#include "IObserver.h"
#include "IDisplayElement.h"
class Cultural :
    public IObserver, public IDisplayElement
{
public:
    Cultural(void);
    ~Cultural(void);

    void update();
    void display();
};

