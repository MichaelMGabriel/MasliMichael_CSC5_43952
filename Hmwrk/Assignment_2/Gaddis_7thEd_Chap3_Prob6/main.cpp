/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 9, 2015, 6:52 PM
 *      Purpose: Finding how many widgets that are stacked on a pallet
 */

//System Libraries
#include <iostream>

//User Libraries

//Global Constants

//Function Prototypes 

//Execution Begins Here!!!


using namespace std;

/*The Yukon Widget Company manufactures widgets that weigh 9.2 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based on
the total weight of the pallet. The program should ask the user how much the pallet
weighs by itself and with the widgets stacked on it. It should then calculate and display
the number of widgets stacked on the pallet.
 */
int main(int argc, char** argv) {
    
    //Declare Variables
    float total,pallet;
    unsigned int nWid;
    
    //Input the values
    cout<<"What is the weight of the pallet by itself?"<<endl;
    cin>>pallet;
    cout<<"What is the total weight of the pallet with the widgets?"<<endl;
    cin>>total;
    
    //Calculate the number of widgets stacked on the pallet
    nWid= (total-pallet)/9.2+1;
    
    //Output the results
    cout<<"The number of widgets stacked on the pallet is "<<nWid<<endl;
    
    //Exit Stage Right!
    
    return 0;
}

