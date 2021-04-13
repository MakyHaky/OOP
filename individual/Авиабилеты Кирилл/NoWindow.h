#pragma once
#include "IPlace.h"
class NoWindow :
    public IPlace
{
public:
    NoWindow();
    ~NoWindow(void);
    void Choose();
};

