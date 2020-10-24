/******************************************************************************
Velesov Daniil LAB3 OOP 19Var
*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <iterator>
#include "Figure.cpp"
using namespace std;

int filetest(){//режим чтения из файла
    float inc_a,inc_b,inc_c; //
        
    std::cin >> inc_a;//длина
    std::cin >> inc_b;//ширина
    Rectangle rect(inc_a,inc_b); //Создание прямоугольника
    
    std::cin >> inc_a;//диагональ 1
    std::cin >> inc_b;//диагональ 2
    Rhombus rhom(inc_a,inc_b); //Создание ромба
    
    std::cin >> inc_a;//основание 1
    std::cin >> inc_b;//основание 2
    std::cin >> inc_c;//высота
    Trapezoid trap(inc_a,inc_b,inc_c); //Создание трапеции(прямоугольной)
    
    //прямоугольник
    rect.showFigureType();//вывод названия фигуры
    std::cout << "Rectangle square: " << rect.getSquare() << std::endl;//площадь
    rect.getCoordinates();//координаты фигуры
    rect.Baricenter();//геометрический центр (барицентр) фигуры
    
    //ромб
    rhom.showFigureType();
    std::cout << "Rhombus square: " << rhom.getSquare() << std::endl;
    rhom.getCoordinates();
    rhom.Baricenter();
    
    //трапеция
    trap.showFigureType();
    std::cout << "Trapezoid square: " << rhom.getSquare() << std::endl;
    trap.getCoordinates();
    trap.Baricenter();
    
    std::cout << "End of file auto test. Good bye!" << std::endl;
    return 0;
    };

int printmenu(){//печать меню
    std::cout << "What shall we do? 1 - 7" << std::endl;
    std::cout << "1 - add rectangle" << std::endl;
    std::cout << "2 - add rhombus" << std::endl;
    std::cout << "3 - add trapezoid" << std::endl;
    std::cout << "4 - show current figures" << std::endl;
    std::cout << "5 - start information printing" << std::endl;
    std::cout << "6 - delete last figure" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "7 - print help" << std::endl;
    std::cout << "8 - exit" << std::endl;
    };

int main()
{
    std::vector<Figure*> figur;
    double inc_a,inc_b,inc_c;
    int a = -1;
std::cout << "OOP lab #3. Author: Velesov Daniil M8O - 208B - 19." << std::endl;
    std::cout << "select work mode:" << std::endl;
      std::cout << "1 - auto test" << std::endl;
      std::cout << "2 - manual work mode" << std::endl;
      std::cout << "3 - exit" << std::endl;
      while (a != 3){
    std::cin >> a;
            if(a == 1){
                filetest();//режим автоматического тестирования
                return 0;
                };
            if(a == 2){//ручной режим работы
    std::cout << "Hello there. It is a Figure Calculator.\nAdd Figures to Figures Vector and start calculating info by using 5 in menu.\n Calculator finds figures squares,cordinates and baricenters." << std::endl;
    printmenu();
    while (a != 8){//меню выбора действий
    std::cin >> a;
        if(a==1){
             std::cout << "Creating rectangle" << std::endl;
             std::cout << "width:" << std::endl;
             std::cin >> inc_a;//длина
             std::cout << "height:" << std::endl;
             std::cin >> inc_b;//ширина
             Figure* R=new Rectangle(inc_a,inc_b);
             figur.push_back(R);
             std::cout << "DONE!" << std::endl;
        };
        if(a==2){
            std::cout << "Creating rhombus:" << std::endl;
            std::cout << "diagonal 1:" << std::endl;
            std::cin >> inc_a;//диагональ 1
            std::cout << "diagonal 2:" << std::endl;
            std::cin >> inc_b;//диагональ 2
            Figure* R=new Rhombus(inc_a,inc_b);
            figur.push_back(R);
            std::cout << "DONE!" << std::endl;
        };
        
        if(a==3){
            std::cout << "Creating trapezoid:" << std::endl;
            std::cout << "base of trapezoid 1:" << std::endl;
            std::cin >> inc_a;//основание 1
            std::cout << "base of trapezoid 2:" << std::endl;
            std::cin >> inc_b;//основание 2
            std::cout << "height:" << std::endl;
            std::cin >> inc_c;//высота
            Figure* R=new Trapezoid(inc_a,inc_b,inc_c);
            figur.push_back(R);
            std::cout << "DONE!" << std::endl;
        };
        
        if(a==4){
            std::cout << "Vector contains:"<<std::endl;
            for (const auto&obj: figur)
            obj -> showFigureType();
            std::cout << "DONE!" << std::endl;
        };
        
        if(a==5){
            for (const auto&obj: figur)
            {
            obj -> showFigureType();
            obj -> getSquare();
            obj -> getCoordinates();
            obj -> Baricenter();
            };
            std::cout << "DONE!" << std::endl;
        };
        
        if(a==7){
            printmenu();
        };
        
        if(a==6){
          figur.pop_back();
          std::cout << "DONE!" << std::endl;
        };
    };
    return 0;
};
return 0;
};
};
