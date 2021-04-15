#pragma once
#include "IObserver.h"
#include "IDisplayElement.h"
class Programming :
    public IObserver, public IDisplayElement 
{
public:
    Programming(void);
    ~Programming(void);

    void update();
    void display();
};

