/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on March 18, 2015, 10:02 AM
 * 
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    bool x,y;
    
     //Heading
    
    cout<<"X  Y  !X  !Y  X&&Y  X||Y  X^Y  X^Y^Y  X^Y^X "
        <<"!(X&&Y)  !X||!Y  !(X||Y)  !X&&!Y"<<endl;
    
    //Output the first row of the table
    x=true;
    
    y=true;
    
    cout<<(x? 'T' : 'F')<<"  ";  //Using Ternary Operator
    cout<<(y? 'T' : 'F')<<"   ";
    cout<<(!x? 'T' : 'F')<<"   ";
    cout<<(!y? 'T' : 'F')<<"    ";
    cout<<(x&&y? 'T' : 'F')<<"    ";
    cout<<(x||y? 'T' : 'F')<<"     ";
    cout<<(x^y? 'T' : 'F')<<"     ";
    cout<<(x^y^y? 'T' : 'F')<<"     ";
    cout<<(x^y^x? 'T' : 'F')<<"       ";
    cout<<(!(x&&y)? 'T' : 'F')<<"       ";
    cout<<(!x||!y? 'T' : 'F')<<"        ";
    cout<<(!(x||y)? 'T' : 'F')<<"        ";
    cout<<(!x&&!y? 'T' : 'F')<<"        ";
    cout<<endl;
    
    //Output the second row of the table
    y=false;
    cout<<(x? 'T' : 'F')<<"  ";  //Using Ternary Operator
    cout<<(y? 'T' : 'F')<<"   ";
    cout<<(!x? 'T' : 'F')<<"   ";
    cout<<(!y? 'T' : 'F')<<"    ";
    cout<<(x&&y? 'T' : 'F')<<"    ";
    cout<<(x||y? 'T' : 'F')<<"     ";
    cout<<(x^y? 'T' : 'F')<<"     ";
    cout<<(x^y^y? 'T' : 'F')<<"     ";
    cout<<(x^y^x? 'T' : 'F')<<"       ";
    cout<<(!(x&&y)? 'T' : 'F')<<"       ";
    cout<<(!x||!y? 'T' : 'F')<<"        ";
    cout<<(!(x||y)? 'T' : 'F')<<"        ";
    cout<<(!x&&!y? 'T' : 'F')<<"        ";
    cout<<endl;
    
    //Output the third row of the table
    x=false;
    cout<<(x? 'T' : 'F')<<"  ";  //Using Ternary Operator
    cout<<(y? 'T' : 'F')<<"   ";
    cout<<(!x? 'T' : 'F')<<"   ";
    cout<<(!y? 'T' : 'F')<<"    ";
    cout<<(x&&y? 'T' : 'F')<<"    ";
    cout<<(x||y? 'T' : 'F')<<"     ";
    cout<<(x^y? 'T' : 'F')<<"     ";
    cout<<(x^y^y? 'T' : 'F')<<"     ";
    cout<<(x^y^x? 'T' : 'F')<<"       ";
    cout<<(!(x&&y)? 'T' : 'F')<<"       ";
    cout<<(!x||!y? 'T' : 'F')<<"        ";
    cout<<(!(x||y)? 'T' : 'F')<<"        ";
    cout<<(!x&&!y? 'T' : 'F')<<"        ";
    cout<<endl;
    
    //Output the fourth row of the table
    x=false;
    y=false;
    
    cout<<(x? 'T' : 'F')<<"  ";  //Using Ternary Operator
    cout<<(y? 'T' : 'F')<<"   ";
    cout<<(!x? 'T' : 'F')<<"   ";
    cout<<(!y? 'T' : 'F')<<"    ";
    cout<<(x&&y? 'T' : 'F')<<"    ";
    cout<<(x||y? 'T' : 'F')<<"     ";
    cout<<(x^y? 'T' : 'F')<<"     ";
    cout<<(x^y^y? 'T' : 'F')<<"     ";
    cout<<(x^y^x? 'T' : 'F')<<"       ";
    cout<<(!(x&&y)? 'T' : 'F')<<"       ";
    cout<<(!x||!y? 'T' : 'F')<<"        ";
    cout<<(!(x||y)? 'T' : 'F')<<"        ";
    cout<<(!x&&!y? 'T' : 'F')<<"        ";
    cout<<endl;
    
    
    
    //Exit Stage Right!!!
    
    
    
    
    
    
    
    
    return 0;
}
 

