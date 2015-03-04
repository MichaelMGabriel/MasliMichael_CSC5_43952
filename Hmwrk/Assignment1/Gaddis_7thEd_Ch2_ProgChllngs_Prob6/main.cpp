/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Created on February 22, 2015, 4:51 PM
 *       Purpose: finding Annual Pay 
 */


#include <cstdlib>
#include <iostream>
using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!


/*payAmount This variable will hold the amount of pay the employee earns each pay
period. Initialize the variable with 1700.0.
 
 * payPeriods This variable will hold the number of pay periods in a year. Initialize
the variable with 26.
 
 * annualPay This variable will hold the employee s total annual pay, which will be
calculated.

 */
int main(int argc, char** argv) {
    float payAmt = 1700.0;
    float payPrds = 26;
    float annlPay = payAmt*payPrds;
    
    cout << "My final payment is " << annlPay << endl;
    return 0;
}

