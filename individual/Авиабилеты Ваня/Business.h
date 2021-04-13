#pragma once
#include "Ticket.h"
class Business :
    public Ticket
{
public:
    Business(void);
    ~Business(void);
    void display();
};

