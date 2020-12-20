/*
Name : Tyler Felts
Date : 10/27/2020
Class : CSC 1710
Path : ~/csc1710/practice/remove_vowels.cpp
Description : 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>
#include <string.h>

using namespace std;

void removeVowels(string& str);
bool isVowel(char ch);

int main()
{
    string str;

    cout << "enter a string: ";
    cin >> str;
    cout << endl;

    cout << "before removing vowels: " << str << endl;

    removeVowels(str);

    cout << "after removing vowels: " << str <<endl;

    return 0;

}

void removeVowels(string& str)
{
int length;
char temp;
bool vowel;

length=str.size();
for(int i=0;i<length;i++)
    {
        temp=str.at(i);
        if(isVowel(temp)==true)
        {
            str.erase(i,1);
            i--;
        }
        length=str.size();
    }
}


bool isVowel(char ch)
{
bool temp;

if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'||ch=='y'||ch=='Y')
    temp=true;
else 
    temp=false;
return temp;

}