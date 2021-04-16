#pragma once
#include "IObservable.h"
class Mailing :
    public IObservable
{
    string* News;
    IObserver** observers;
public:
    Mailing(void);
    ~Mailing(void);
    void registerObserver(IObserver* a);
    void removeObserver(IObserver* a);
    void notifyObserver();
    void getNews();

};

