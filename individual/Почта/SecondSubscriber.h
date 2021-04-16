#pragma once
#include "IObserver.h"
#include "IDisplayElement.h"
class SecondSubscriber :
    public IObserver, public IDisplayElement
{
    string* News;
public:
    SecondSubscriber(void);
    ~SecondSubscriber(void);

    void update(string* News);
    void display();
};  

