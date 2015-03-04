/* 
 * File:   main.cpp
 * Author: Michael Masli
 * Created on February 22, 2015, 5:15 PM
 *       Purpose: finding the size of float, int, char, and double
 */

#include <iostream>
using namespace std;

//System Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!!

/*You have been given a job as a programmer on a Cyborg supercomputer. In order to
accomplish some calculations, you need to know how many bytes the following data
types use: char, int, float, and double. You do not have any manuals, so you can t
look this information up. Write a C++ program that will determine the amount of
memory used by these types and display the information on the screen.
 * 
 */
int main(int argc, char** argv) {
    
   
    cout << "float has " << sizeof(float) <<" bytes" <<endl;
    cout << "int has " << sizeof(int) << " bytes" <<endl;
    cout << "char has " << sizeof(char) << " bytes"<<endl;
    cout << "double has " << sizeof(double) <<" bytes"<< endl;
    return 0;
}

