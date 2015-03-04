/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Created on February 22, 2015, 3:36 PM
 *         Purpose: Finding How much the East Coast Division will generate 
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!

int main(int argc, char** argv) {
    cout<<showpoint<<fixed<<setprecision(2);
    float num = 46e6f;
    float percent = 0.62;
    float total=num*percent; //how much the East Coast division will generate
    
    cout << "The company makes " << total << endl;
    return 0;
}

