#pragma once
#include "IObservable.h"
class Mailing :
    public IObservable
{
    string first, second;
    IObserver** observers;
public:
    Mailing(void);
    ~Mailing(void);
    void registerObserver(IObserver* a);
    void removeObserver(IObserver* a);
    void notifyObserver();

};

