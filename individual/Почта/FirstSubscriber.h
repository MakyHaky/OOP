#pragma once
#include "IObserver.h"
#include "IDisplayElement.h"
class FirstSubscriber :
    public IObserver, public IDisplayElement
{
    string* News;
public:
    FirstSubscriber(void);
    ~FirstSubscriber(void);

    void update(string* News);
    void display();
};

