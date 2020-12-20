/*
Name : Tyler Felts
Date : 10/22/2020
Class : CSC 1710
Path : ~/csc1710/lab10/Felts_lab10.cpp
Description : 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

//declaring functions protos
double distance(double x1, double y1, double x2, double y2);
double distance(double x1, double y1);
double radius(double x1, double y1, double x2, double y2);
double radius(double x1, double y1);
double circumference(double r=1);
double area(double r=1);

//setting global pi variable
double PI=3.14159265358979323846;

int main()
{
//the distance part
    double x1, x2, y1, y2, r, c, a;
    cout << "enter the coordinates of the two points in the form x y x y ";
    cin >>x1>>y1>>x2>>y2;
    cout<<"the distance between the points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is "<< distance(x1,y1,x2,y2)<<endl;
//the radius&&circumference&&area parts
    double x12, x22, y12, y22;
    cout << "enter the coordinates of the two points in the form x y x y that are the center and a point on a circle ";
    cin >>x12>>y12>>x22>>y22;
    cout<<"the radius of the given circle is "<< radius(x12,y12,x22,y22)<<endl;
    r= radius(x12,y12,x22,y22);
    c= circumference(r);
    cout<<"the circumference of this circle is "<< c<< endl;
    a=area(r);
    cout<<"the area of this circle is "<< a<<endl;
//test calls
    cout <<circumference()<<endl;
    cout <<area()<<endl;
//overloading parts
    double x13, y13;
    cout <<"enter the point in the form x y to determing distance from the origin ";
    cin >>x13>>y13;
    cout<< "the distance between the points ("<<x1<<","<<y1<<") and (0,0) is ";
    cout<<distance(x13,y13)<<endl;
    cout<<"the radius of the circle if that point was on a circle centered at the origin would be ";
    cout<<radius(x13,y13);

}

//functions

double distance(double x1, double y1, double x2, double y2)
{
    double temp;
    temp=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return temp;
}

double radius(double x1, double y1, double x2, double y2)
{
    double temp;
    temp=distance(x1,y1,x2,y2);
    return temp;
}

double circumference(double r)
{
    double temp;
    temp=2*PI*r;
    return temp;
}

double area(double r)
{
    double temp;
    temp=PI*pow(r,2);
    return temp;
}

double distance(double x1, double y1)
{
    double temp;
    temp=sqrt(pow(x1-0,2)+pow(y1-0,2));
    return temp;    
}

double radius(double x1, double y1)
{
    double temp;
    temp=distance(x1,y1);
    return temp;
}