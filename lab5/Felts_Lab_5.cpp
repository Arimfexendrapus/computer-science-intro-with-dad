#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
int main()

{
ifstream inFile;
ofstream outFile;

inFile.open("inData.txt");
outFile.open("outData.txt");

//introduce the data varibles

string first_name;
string last_name;
string department;
double monthly_gross_salary;
double monthly_bonus;
double taxes;
double paycheck;
double distance_traveled;
double traveling_time;
double average_speed;
int number_of_coffee_cups_sold;
double cost_per_cup;
double sales_amount;

// assosiating data

inFile >> first_name;
inFile >> last_name;
inFile >> department;
inFile >> monthly_gross_salary;
inFile >> monthly_bonus;
inFile >> taxes;
inFile >> distance_traveled;
inFile >> traveling_time;
inFile >> number_of_coffee_cups_sold;
inFile >> cost_per_cup;

// calculate the non-given varibles

paycheck= (monthly_gross_salary + (monthly_gross_salary * (monthly_bonus / 100))) * ((100-taxes)/100);
average_speed= distance_traveled / traveling_time;
sales_amount= number_of_coffee_cups_sold * cost_per_cup;

// Output File
outFile << fixed << showpoint << setprecision(2); 
outFile << "Name: " << first_name << " " << last_name << ", Department: " << department << endl;
outFile << "Monthly Gross Salary: $" << monthly_gross_salary << ", Monthly Bonus: " << monthly_bonus << "%, Taxes: " << taxes << "%" << endl;
outFile << "Paycheck: $" << paycheck << endl;
outFile << endl;
outFile << "Distance Traveled: " << distance_traveled << " miles, Traveling Time: " << traveling_time << " hours" << endl;
outFile << "Average Speed: " << average_speed << " miles per hour" << endl;
outFile << endl;
outFile << "Number of Coffee Cups Sold; " << number_of_coffee_cups_sold << ", Cost: $" << cost_per_cup << " per cup" << endl;
outFile << "Sales Amount = $" << sales_amount << endl;

// final c output

cout << fixed << showpoint << setprecision(2); 
cout << "Name: " << first_name << " " << last_name << ", Department: " << department << endl;
cout << "Monthly Gross Salary: $" << monthly_gross_salary << ", Monthly Bonus: " << monthly_bonus << "%, Taxes: " << taxes << "%" << endl;
cout << "Paycheck: $" << paycheck << endl;
cout << endl;
cout << "Distance Traveled: " << distance_traveled << " miles, Traveling Time: " << traveling_time << " hours" << endl;
cout << "Average Speed: " << average_speed << " miles per hour" << endl;
cout << endl;
cout << "Number of Coffee Cups Sold; " << number_of_coffee_cups_sold << ", Cost: $" << cost_per_cup << " per cup" << endl;
cout << "Sales Amount = $" << sales_amount << endl;

inFile.close();
outFile.close();

return 0;
 
}
