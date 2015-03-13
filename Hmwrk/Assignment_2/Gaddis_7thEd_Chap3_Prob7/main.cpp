/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 9, 2015, 7:11 PM
 *    Purpose: Calories in Cookies
 */

//System Libraries
#include <iostream>

//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!!!


using namespace std;



int main(int argc, char** argv) {
//Declare Variables
    unsigned int nCook; 
    float totCal;
    
    //Input values
    cout<<"How many cookies did you eat?"<<endl;
    cin>>nCook;
    
    //Calculate the amount of calories consumed
    totCal=static_cast<float>(3000*nCook)/40;
    
    
    //Output the results
    cout<<"The total calories that were consumed = "<<totCal<<" callories"<<endl;


    //Exit stage right!

    return 0;
}

