#include <iostream>
#include "Home.h"
#include "Street.h"

int main()
{
    Home obj;
    obj.set_iHome(1);
    obj.set_NumbApartament(50);
    obj.set_MenCount(150);
    obj.set_TaxFromHome(250000);
    std::cout << obj << std::endl;
    std::cout << std::endl;
    Home obj2(2, 30, 100, 150000);
    Street con;
    con.add(obj);
    con.add(obj2);
    con.set_NameStreet("Leninskaya");
    con.set_NumbStreet(1);
    con.set_HumanCount();
    con.set_HomeNum();
    con.set_Income();
    Home obj3(3, 60, 120, 300000);
    Home obj4(4, 80, 90, 100000);
    Street con2;
    Street con3("Tverskaya", 3, 10, 1000);
    con.add(obj3);
    con.add(obj4);
    auto tst = con / 2;
    con + obj3;
    std::cout << con << std::endl;
    con.print_homes();
    std::cout << std::endl;
    std::cout << tst << std::endl;
    tst.print_homes();
    std::cout << std::endl;
    con.del();
    std::cout << con << std::endl;
    con.print_homes();
    std::cout << std::endl;
    std::cout << con3 << std::endl;
}
