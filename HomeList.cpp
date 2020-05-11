#include "HomeList.h"
#include <iostream>

HomeList::HomeList() {
    Head = 0;
    Next = 0;
}

/*HomeList::HomeList(Home house) {
    data = house;
    Next = 0;
}
HomeList::~HomeList() {
   if (Next != 0)
      delete Next;
}*/

void HomeList::push(Home house) {
    HomeList* p = this;
    while (p->Next != 0)
    {
        p = p->Next;
    }
    p->Next = new HomeList(house);
}

void HomeList::pop() {
    HomeList* p = this;
    int count = 0;
    int lentgh = 0;
    for (HomeList* p = this; p != 0; p = p->Next)
    {
        lentgh++;
    }
    while (count < lentgh - 1)
    {
        p = p->Next;
        count++;
    }
    HomeList* p = p->Next;
    p->Next = 0;
    delete p;
}

void HomeList::print() {
    HomeList* p = this;
    while (p->Next != 0)
    {
        p = p->Next;
    }
}
