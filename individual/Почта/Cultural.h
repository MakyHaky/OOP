#pragma once
#include "IObserver.h"
class Cultural :
    public IObserver
{
public:
    Cultural(void);
    ~Cultural(void);

    void update();
    void display();
};

