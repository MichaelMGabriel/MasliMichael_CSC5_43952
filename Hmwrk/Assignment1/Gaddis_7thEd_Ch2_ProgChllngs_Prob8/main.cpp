/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on February 22, 2015, 5:05 PM
 */

#include <iomanip>
#include <iostream>
using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!

/*A customer in a store is purchasing 5 items. The prices of the 5 items are:
Price of item 1 = $12.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $14.95
Price of item 5 = $3.95
Write a program that holds the prices of the 5 items in 5 variables. Display each
items price, the subtotal of the sale, the amount of sales tax, and the total. Assume
the sales tax is 6%.
 * 
 */
int main(int argc, char** argv) {
    cout<<fixed<<showpoint<<setprecision(2);
    float a = 12.95;
    float b = 24.95;
    float c = 6.95;
    float d = 14.95;
    float e = 3.95;
    float subTtl = a+b+c+d+e;
    float saleTax = 0.06;
    float total = subTtl*(1+saleTax);
    
    cout<<"The price of item 1 is " << a <<" dollars"<<endl;
    cout<<"The price of item 2 is " << b <<" dollars"<<endl;
    cout<<"The price of item 3 is " << c <<" dollars"<<endl;
    cout<<"The price of item 4 is " << d <<" dollars"<<endl;
    cout<<"The price of item 5 is " << e <<" dollars"<<endl;
    cout<<"The subtotal of the sale is " <<subTtl<<" dollars"<<endl;
    cout << "The total is " << total <<" dollars" <<endl;
   
    return 0;
}

