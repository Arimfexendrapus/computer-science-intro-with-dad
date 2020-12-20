/*
Name : Tyler Felts
Date : 11/12/2020
Class : CSC 1710
Path : ~/csc1710/lab12/Felts_lab12.cpp
Description : working with structs
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>
#include <cstring>

using namespace std;
//construct the structs
struct student_type
    {
        string student_FName;
        string student_LName;
        int test_score;
        char grade;

    };

struct Best_students
{
    string Student_FName;
    string Student_LName;
};
//declaring functions
void Student_array_input(student_type a[]);
void Student_grade_assign(student_type a[]);
int Finding_highest_score(student_type a[]);
int Finding_students_with_highest_score(student_type a[], Best_students b[], int largest);
void Print_best_students(Best_students b[], int largest,int n);
void Print_main_table(student_type a[]);

int main()
{
    
student_type student_array[20];

int highest_test_score=0;
Best_students b[20];

//all the function calls
Student_array_input(student_array);
Student_grade_assign(student_array);
highest_test_score=Finding_highest_score(student_array);
int n=Finding_students_with_highest_score(student_array, b, highest_test_score);
Print_main_table(student_array);
Print_best_students(b,highest_test_score,n);

}

void Student_array_input(student_type a[])
{
    fstream inData;
    inData.open("inData.dat");

    for(int i=0; inData; i++)
    {
        inData >> a[i].student_FName;
        inData >> a[i].student_LName;
        inData >> a[i].test_score;
    }
}

void Student_grade_assign(student_type a[])
{
    for(int i=0; i<20; i++)
    {
        if (a[i].test_score >= 90 && a[i].test_score <= 100)
        {
            (a[i].grade)='A';
        }
        else if (a[i].test_score >= 80 && a[i].test_score <= 89)
        {
            (a[i].grade)='B';
        }
        else if (a[i].test_score >= 70 && a[i].test_score <= 79)
        {
            (a[i].grade)='C';
        }
        else if (a[i].test_score >= 60 && a[i].test_score <= 69)
        {
            (a[i].grade)='D';
        }
        else if (a[i].test_score >= 0 && a[i].test_score <= 59)
        {
            (a[i].grade)='F';
        }
    }
}

int Finding_highest_score(student_type a[])
{
    int largest=0;

    for (int i = 0; i < 20; i++)
    {
        if (a[i].test_score>largest)
        {
            largest=a[i].test_score;
        }
    }
    return largest;
}

int Finding_students_with_highest_score(student_type a[], Best_students b[], int largest)
{
    int ii=0;
    for (int i = 0; i < 20; i++)
    {
        if (a[i].test_score==largest)
        {
            b[ii].Student_FName=a[i].student_FName;
            b[ii].Student_LName=a[i].student_LName;
            ii++;
        }
    }
    return ii;
}

void Print_best_students(Best_students b[],int largest,int n)
{
    cout<<endl<<"Highest Test Score: "<< largest<< endl;
    cout<<"Students having the highest test score:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i].Student_LName << ", " << b[i].Student_FName << endl;
    }
    
}

void Print_main_table(student_type a[])
{
    cout << left << setw(20) << setfill (' ') << "Student Name" << right << setw(20) << setfill (' ') << "Test Score" << right << setw(20) << setfill (' ') << "Grade" << endl;
    
    for (int i = 0; i < 20; i++)
    {
        string test= (a[i].student_LName + ", " + a[i].student_FName);
        cout <<left<<setw(20)<<setfill ('-')<< test << right << setw(20) << setfill ('-') << a[i].test_score << right << setw(20) << setfill ('-') << a[i].grade << endl;
        
    }
    
    
}