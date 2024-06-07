#include <iostream>
#include "Quadraangle.h"


int main()
{
    setlocale(LC_ALL, "ru");
    Figure* ptr;
    Figure Q{ 10,20,30,40,50,60,70,80,0 };
    ptr = &Q;
    ptr->print_figure();

    Triangle T{ 10,20,30,50,60,70,3 };
    ptr = &T;
    ptr->print_info();

    RightTriangle RT{ 10,20,30,40,50,90,3 };
    ptr = &RT;
    ptr->print_info();

    IsoscelesTriangle IT{ 10, 20, 10, 50, 80, 50,3 };
    ptr = &IT;
    ptr->print_info();

    EquilateralTriangle ET{ 30, 30, 30, 60, 60, 60,3 };
    ptr = &ET;
    ptr->print_info();

    

    Rectangle RQ{ 10,20,10,20,90,90,90,90,4 };
    ptr = &RQ;
    ptr->print_info();

    Square SQ{ 30,30,30,30,90,90,90,90,4 };
    ptr = &SQ;
    ptr->print_info();

    Parallelogramm PQ{ 20,30,20,30,100,80,100,80,4 };
    ptr = &PQ;
    ptr->print_info();

    Rhomb RhQ{ 30,30,30,30,100,80,100,80,0 };
    ptr = &RhQ;
    //ptr->print_info();
}