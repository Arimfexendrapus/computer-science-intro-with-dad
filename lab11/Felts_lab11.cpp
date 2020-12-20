/*
Name : Tyler Felts
Date : 11/5/2020
Class : CSC 1710
Path : ~/csc1710/lab11/Felts_lab11.cpp
Description : working with arrays
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;
//declaring functions
int loadArray(int a[],string filename);
void printArray(int values[],int n);
void sortArray(int a[],int n);
double minmaxmed(int a[],int n);
int arraySearch(int a[],int n,int num);
int main()
{
    string filename;
    int n,num;
    //getting input for data file and number to search
    cout<< "enter the file name for the data file: ";
   
    cin>>filename;
    cout<< "enter a number to search for occurrances within the array.";
    cin>>num;
    //initializing array
    int a[100];
    //outputting all the functions
    n=loadArray(a,filename);
    cout<<"original array"<<endl;
    printArray(a,n);
    sortArray(a,n);
    cout<<endl<<"sorted array"<<endl;
    printArray(a,n);
    cout<<endl;
    double bb=minmaxmed(a,n);
    cout<<endl;
    arraySearch(a,n,num);
}


    int loadArray(int a[], string filename)
    {
    filename.c_str();
    fstream inFile;
    inFile.open(filename);
    
        int i=0;
        inFile>>a[i];
        int temp=0;
        while(temp!=-1)
        {
            inFile>>temp;
            if (temp>=0)
            {
            i++;
            a[i]=temp;
            }
        }
        return i+1;
    }
    
    void printArray(int a[] , int n)
    {
        int j;
        for (j=0; j<n; j++)
        cout <<"A["<<j<<"]= "<<a[j]<<endl;
    }

    
    void sortArray(int a[],int n)
    {
        //bubble sort
        int index, pass, temp;
        
        for(pass=1; pass <= n; pass++) 
        {
        for(index=0; index < n-pass; index++) 
        {
            if( a[index] > a[index+1]) 
            {
                temp = a[index];
                a[index] = a[index+1];
                a[index+1] = temp;
            }
            }
        }
    }

double minmaxmed(int a[],int n)
{
// must be paired with other functions to work
int min, max, temp;
double median;
min= a[0];
max=a[n-1];
if (n%2==0)
{
    double temp1=(a[n/2]+a[(n/2)+1]);
    double temp2=temp1/2;
    median=(temp2);
}
else
{
    temp=(n/2)+.5;
    median=a[temp];
}

cout<<"Minimum: A[0]= "<<min<<endl<<"Median = "<<median<<endl<<"Max: A["<<n<<"]= "<<max<<endl;

return median;
}

int arraySearch(int a[],int n,int num)
{
    //sequential search
    int count=0;
    for(int i =0;i<n;i++)
    {
        if (num == a[i])
        {
            count++;
        }
    }
    cout<<"the number "<<num<<" occurs "<< count<< " time/s."<<endl;
    return count;

}