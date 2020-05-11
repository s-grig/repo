#ifndef HomeList_H
#define HomeList_H

#include "Home.h"

struct node
{
    Home data;
    node* next;
};

class HomeList
{
    node* head;
   public:
    HomeList();
    //HomeList(Home house);
    ~HomeList();
    void push(Home house);
    void pop();
    void print();
};

#endif

