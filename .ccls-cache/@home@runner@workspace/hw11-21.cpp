//Introductory21.cpp - Displays the average stock price
//Created/revised by <Matthew Adamowitz> on <4/15/25>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double total = 0.0;
	double average = 0.0;

 // Calculate total using a for loop
    for (int i = 0; i < 10; ++i)
    {
        total += prices[i];
    }

    // Calculate average
    average = total / 10;
	

	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

