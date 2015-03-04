/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Created on February 22, 2015, 5:31 PM
 *          Purpose: Compute restaurant bill
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!

/*Write a program that computes the tax and tip on a restaurant bill for a patron with a
$44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 15 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.
 * 
 */
int main(int argc, char** argv) {
    cout<<fixed<<showpoint<<setprecision(2);
    float a = 44.50;
    float tax = 0.0675;
    float taxAmt = a*tax;
    float ttlMeal = a*tax + a;
    float Tip = 0.15*ttlMeal;
    float ttlBill = Tip + ttlMeal;
    
    cout<<"The meal costs " << ttlMeal << " dollars" << endl;
    cout << "The tax amount is " << taxAmt << " dollars" << endl;
    cout << "Tip amount = " << Tip << " dollars" << endl;
    cout << "The Total Bill is " << ttlBill << " dollars" << endl;

    return 0;
}

