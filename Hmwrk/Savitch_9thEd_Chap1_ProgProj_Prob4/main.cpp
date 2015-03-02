/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Created on March 2, 2015, 9:03 AM
 *       Purpose: Free Fall Problem from Savitch
 */
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float G=3.2174e1f;//Acceleration in ft/sec^2 on earth, "f" indicates float
const float CNVFTMT=3.048e-1f;//Conversion from feet to meters

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float time;
    float dstnce;
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx (seconds)"<<endl;
    cin>>time;
    //Calculate the distance
    //dstnce=static_cast<float>(1)/2*G*time*time;
    //dstnce=1.0f/2*G*time*time; //This works since you put decimal on top as "float"
    //dstnce=1/2.0f*G*time*time;//DOES NOT WORK!!!, since 1/2 is an integer, not a float!!!!!!!!
    dstnce=5e-1f*G*time*time;
    //Output the results
    cout<<"Distance fallen = "<<dstnce<<" (feet)"<<endl; //distance in feet
    cout<<"Distance fallen = "<<dstnce*CNVFTMT<<" (meters)"<<endl; //distance in meters after conversion 
    //Exit Stage Right!
    
    return 0;
}

