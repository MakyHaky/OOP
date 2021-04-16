#pragma once
#include "IObserver.h"
#include "IDisplayElement.h"
class ThirdSubscriber :
    public IObserver, public IDisplayElement 
{
    string* News;
public:
    ThirdSubscriber(void);
    ~ThirdSubscriber(void);

    void update(string* News);
    void display();
};

