#ifndef Street_H
#define Street_H

#include "Home.h"
#pragma once
#include <string>
#include <list>

class Street
{
    std::string Name_Street;
    int Homes_num;
    int NumberStreet;
    int HumanCount;
    double Income;
    std::list<Home> homes;
   public:
    Street();
    Street(std::string NameS, int NumS, int HomeN, int HC);
    ~Street();
    std::string get_NameStreet();
    int get_HomesNum();
    int get_NumbStreet();
    int get_HumanCount();
    double get_Income();
    void set_NameStreet(std::string NameStr);
    void set_HomeNum();
    void set_NumbStreet(int NumSt);
    void set_HumanCount();
    void set_Income();
    void add(Home& house);
    void del();
    void print_homes();
    friend std::ostream& operator<<(std::ostream& out, Street& Str);
    Street operator+(Home& H);
    Street operator+(Street& Str);
    Street operator=(Street& Str);
    Street operator/(int num);
};

#endif
