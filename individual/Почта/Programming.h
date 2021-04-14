#pragma once
#include "IObserver.h"
class Programming :
    public IObserver
{
public:
    Programming(void);
    ~Programming(void);

    void update();
    void display();
};

