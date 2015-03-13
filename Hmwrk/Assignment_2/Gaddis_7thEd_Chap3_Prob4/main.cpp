/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 9, 2015, 6:37 PM
 *     Purpose: Finding average rainfall for three months
 */

//System Libraries
#include <iostream>

//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!!!

using namespace std;

/* 4. Write a program that calculates the average rainfall for three months. The program
should ask the user to enter the name of each month, such as June or July, and the
amount of rain (in inches) that fell each month. The program should display a message
similar to the following:
The average rainfall for June, July, and August is 6.72 inches.
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float raina,rainb,rainc,avgRain;
    string a, b, c;
    cout<<"Enter the name of the first month "<<endl;
    getline(cin, a);  //get the whole line as an input to string a;
    
    //Input the amount of rainfall each month
    cout<<"What is the amount of rainfall that fell in "<<a<<"?"<<endl;
    cin>>raina;
    cin.ignore();
    
    cout<<"Enter the name of the second month "<<endl;
    getline(cin, b);
    cout<<"What is the amount of rainfall that fell in "<<b<<"?"<<endl;
    cin>>rainb;
    cin.ignore();
    
    cout<<"Enter the name of the third month "<<endl;
    getline(cin, c);
    cout<<"What is the amount of rainfall that fell in "<<c<<"?"<<endl;
    cin>>rainc;
    
    //Calculate the average rainfall for three months
    avgRain=(raina+rainb+rainc)/3;
            
    //Output the results
   cout<<"The average rainfall for "<<a<<", "<<b<<", "<< ", and "<< c <<" is "<<avgRain<<" inches"<<endl;        
    
    //Exit stage right!
    return 0;
}

