#pragma once
#include "IObserver.h"
class Science :
    public IObserver
{
public:
    Science(void);
    ~Science(void);

    void update();
    void display();
};

