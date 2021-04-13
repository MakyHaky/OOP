#pragma once
#include "IReturn.h"
class NoReturn :
    public IReturn
{
public:
    NoReturn();
    ~NoReturn(void);
    void Return();
};

