#include <stdio.h>
#include <iostream>
using namespace std;

//абстрактный класс фигур
class Figure
{
public:

    virtual double getSquare() = 0; //площадь
    virtual void getCoordinates() = 0; //координаты фигуры
    virtual void showFigureType() = 0; //вывод названия фигуры
    virtual void Baricenter() = 0; //рассчет барицентра фигуры
};

//прямоугольник
class Rectangle : public Figure
{
private:
    double width; //ширина
    double height; //высота
public:
    Rectangle(double w, double h) : width(w), height(h)
    {
    }
    double getSquare()
    {
        std::cout << "Rectangle Square: "<< width * height << std::endl;
    }
    void getCoordinates()
    {
        std::cout << "Rectangle Coords:"<<"(0,0);("<< width <<";0);("<< width <<";"<< height <<");(0;"<< height <<")." << std::endl;
    }
    void showFigureType()
    {
        std::cout << "Rectangle" << std::endl;
    }
    void Baricenter()
    {
       std::cout << "Rectangle Baricenter Coords:("<< width / 2 <<";"<<height / 2<< ")." << std::endl;
    }
};
//Ромб
class Rhombus : public Figure
{
private:
    double diag1; //Диагональ 1
    double diag2; //Диагональ 2
public:
    Rhombus(double d1, double d2) : diag1(d1), diag2(d2)
    {
    }
    double getSquare()
    {
        std::cout << "Rhombus Square: "<< diag1 * diag2 * 0.5 << std::endl;
    }
    void getCoordinates()
    {
        std::cout << "Rhombus Coords:"<<"(0,0);("<< diag2/2 <<";"<<diag1/2<<");(0;"<< diag1 <<");("<< -diag2/2 <<";"<< diag1/2 <<")." << std::endl;
    }
    void showFigureType()
    {
        std::cout << "Rhombus" << std::endl;
    }
    void Baricenter()
    {
       std::cout << "Rhombus Baricenter Coords:(0;"<<diag1/2<< ")." << std::endl;
    }
};
//Трапеция
class Trapezoid : public Figure
{
private:
    double a; //Основание 1
    double b; //Основание 2
    double h; //Высота
public:
    Trapezoid(double a, double b,double h) : a(a), b(b), h(h)
    {
    }
    double getSquare()
    {
        std::cout << "Trapezoid Square: "<<  (a+b)*0.5*h << std::endl;
    }
    void getCoordinates()
    {
        std::cout << "Trapezoid Coords:"<<"(0,0);("<< a <<";0);(" << b << ";"<< h << ");(0;"<< h <<")." << std::endl;
    }
    void showFigureType()
    {
        std::cout << "Trapezoid" << std::endl;
    }
    void Baricenter()
    {
        double x0,y0;
        x0 = (a+(2*b))/6;
        y0 = h/2;
       std::cout << "Trapezoid Baricenter Coords:("<< x0 <<";"<<y0 << ")." << std::endl;
    }
};