#pragma once
#include "IObserver.h"
#include "IDisplayElement.h"
class Science :
    public IObserver, public IDisplayElement
{
public:
    Science(void);
    ~Science(void);

    void update();
    void display();
};

