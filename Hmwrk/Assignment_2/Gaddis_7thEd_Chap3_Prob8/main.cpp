/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 10, 2015, 8:57 PM
 *     Purpose: How much is the insurrance
 */

//System Libraries
#include <iostream>

//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!!!


using namespace std;

/* 8. Many financial experts advise that property owners should insure their homes or buildings
for at least 80 percent of the amount it would cost to replace the structure. Write a
program that asks the user to enter the replacement cost of a building and then displays
the minimum amount of insurance he or she should buy for the property.
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float insAmt, buildCst;
    
    //Input
    cout<<"How much is the replacement cost of a building?" <<endl;
    cin>>buildCst;
    
    //Calculate how much the minimum amount of insurance
    insAmt=0.08*buildCst;
    
    //Output the results
    cout << "The minimum amount of insurance he should buy for the property is " << insAmt << " dollars"<<endl;
    
    //Exit Stage Right!!
    
    return 0;
}

