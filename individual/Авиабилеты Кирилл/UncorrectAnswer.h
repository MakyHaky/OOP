#pragma once
#include "Ticket.h"
class UncorrectAnswer :
    public Ticket
{
public:
    UncorrectAnswer(void);
    ~UncorrectAnswer(void);
    void display();
};
