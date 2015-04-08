/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum of positive integer numbers  
 * Problem 2 -> Display the characters for the ASCII codes 0 through 127
 * Problem 3 -> Display a table showing the number of millimeters that the ocean will
 *              have risen each year for the next 25 years
 * Problem 4 -> Display the number of calories burned after 10, 15, 20, 25, and 30
 *              minutes.
 * Problem 5 -> Display the projected rates for the next six years
 * Problem 6 -> Display the distance the vehicle has traveled for each hour of that time period
 * Problem 7 -> Calculate how much a person would earn over a period of time
 * Problem 9 -> Calculating the occupancy rate for a hotel
 * Problem 10 -> Calculate the average rainfall
 *               over a period of years
 * Problem 13 -> Display the largest and smallest numbers entered
 * 
 * Modified on April 6, 2015
 *      add repetition with a do loop
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
    {
    //Declare menu variable choice
    char choice;
    //Repeat the menu
        do
        {    
        //General Menu Format
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 4"<<endl;
        cout<<"Type 5 to solve problem 5"<<endl;
        cout<<"Type 6 to solve problem 6"<<endl;
        cout<<"Type 7 to solve problem 7"<<endl;
        cout<<"Type 8 to solve problem 9"<<endl;
        cout<<"Type 9 to solve problem 10"<<endl;
        cout<<"Type 0 to solve problem 13"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice)
        {
                case '1':
                {
                    //Declare Variables
                    int num;
                    int ttl=0; //Initialize your value

                    //Prompt the user for input
                    cout<<"Enter your number here "<<endl;
                    cin>>num;
                    if(num>=0)
                    {
                        //Loop
                        for(int i=0; i<=num;i++)
                        {
                            ttl+=i;
                        }
                        cout<<"The sum of the positive integer up to "<<num<<" is "<<ttl<<endl;
                    }
                    else
                        cout<<"Invalid input\n";
                    
                    
                    break;
                }
                case '2':
                {
                    //Declare Variables
                    char a=0; //initialize value

                    //Loop
                    for(int i=0; i<128; i++)
                    {
                        a = i;
                        cout<<a;

                        if(i%16==0 && i > 0)
                        {  //% means "modify" to determine the remainder
                            cout<<endl; //for every mult of 16, it has to make new line
                        }
                    }
                    break;
                }
                case '3':
                {
                    //Declare Variables
                    float lv=0; //Initialize your value

                    //Design the table
                    cout<<"Year "<<"  |  mm ocean"<<endl;
                    cout<<"-----------------"<<endl;

                    //Loop
                    for(int i=1; i<26; i++) 
                    {
                        lv+=1.5; //add 1.5 each year means it's increasing
                        cout<<"Year "<<i<<" : "<<lv<<endl;
                    }
                    break;
                }
                
                case '4':
                {
                    //Declare Variables
                    int min=10; //initialize the number of minutes
                    float cal;
                    //Output prompt
                    cout<<"These are the number of calories burned with respect to the number of minutes: "<<endl;
                    //Loop
                    for(int i=0; i<5;i++)
                    {
                        cal=static_cast<float>(min)*3.9;
                        cout<<min<<" min --> "<<cal<<" calories"<<endl;
                        min=min+5; //10, 15, 20, 25, 30 are the numbers, which has diff=5
                    }    
                
                    break;
                }   
                
                case '5':
                {
                    //Declare Variables
                    int a=2500; //initialize value

                    //Prompt the user for output
                    cout<<"These are the price range of membership fee for the next six years: "<<endl;

                    //Loop
                    for(int i=1; i<7; i++)
                    {
                        a*=(1+0.04); //a=a*(1+0.04)--> increasing membership fee by 4%
                        cout<<"Year "<<i<<" = "<<" $"<<a<<endl;
                    }
                    break;
                }
                
                case '6':
                {
                    //Declare Variables
                    int dist, mph, hr;

                    //Prompt the user for input
                    cout<<"What is your speed? ";
                    cin>>mph;
                    cout<<"How many hours did you travel? ";
                    cin>>hr;

                    //Input validation
                    if(mph<=0 && hr<1) 
                    {
                        cout<<"INVALID INPUT"<<endl;
                        return 0; //to end program
                    }

                    //Make the table for output
                    cout<<"Hour      Distance Traveled(mph)"<<endl; //table prompt
                    cout<<"-------------------------------"<<endl; //table prompt

                    //Loop
                    for(int i=1; i<=hr; i++)
                    {
                        dist=mph*i;
                        cout<<i<<"              "<<dist<<endl; //output for the table

                    }
                    break;
                }
                
                case '7':
                {
                    //Declare Variables
                    int salary=1; //initialize value
                    int days;
                    int ttl=0; //initialize value

                    //Prompt the user for input
                    cout<<"How many days did you work? ";
                    cin>>days;

                    //Input validation
                    if(days<1) 
                    {
                        cout<<"INVALID PROGRAM"<<endl;
                        return 0 ; //to end program    
                    }

                    //Make the table
                    cout<<"Days     Earned Salary (pennies) "<<endl;
                    cout<<"----------------------------------"<<endl;

                    //Loop
                    for(int i=1; i<=days; i++) 
                    {
                        cout<<i<<"              "<<salary<<endl;
                        ttl+=salary;
                        salary*=2; //salary = salary*2 (doubles every time you loop it)
                    }

                    //Convert pennies to dollar for total payment
                    cout<<"Total payment in dollar amount is $"<<static_cast<float>(ttl)/100<<endl;
                    break;
                }
                
                case '8':
                {
                    //Declare Variables
                    int floor, temp;
                    int room=0, occpd=0; //Initialize value

                    //Prompt the user for input
                    cout<<"How many floors are there in this hotel? ";
                    cin>>floor;

                    //Loop
                    for(int i=1; i<=floor; i++)
                    {
                        if(i!=13)
                        {
                           cout<<"How many rooms are there in floor "<<i<<"? ";
                           cin>>temp;
                           room+=temp;
                           cout<<"How many rooms that are occupied in floor "<<i<<"? ";
                           cin>>temp;
                           occpd+=temp;
                        }
                    }

                    //Output the results
                    cout<<"The total rooms that the hotel has = "<<room<<" rooms"<<endl;
                    cout<<"The number of rooms that are occupied = "<<occpd<<" rooms"<<endl;
                    cout<<"The number of rooms that are unoccupied  = "<<room-occpd<<" rooms"<<endl;
                    cout<<"The percentage of rooms that are occupied = "<<(static_cast<float>(occpd)/room)*100 << "%" <<endl;

                    break;
                }
                
                case '9':
                {
                    //Declare Variables
                    int year=0, rain=0; //initialize value 
                    int temp;

                    //Prompt the user for input
                    cout<<"Input the number of years: ";
                    cin>>year;

                    //Loop with condition
                    while(year <1)
                    {
                        cout << "Invalid Entry. Try another number of years: ";
                        cin >> year;
                    }

                    for(int i=1; i<=year; i++)
                    {
                        cout<<"Year "<<i<<endl;

                        for(int j=1; j<=12; j++)
                        {
                            cout<<"What is the inches of rainfall in month "<<j<<" ?"<<endl;
                            cin>>temp;

                            //Input validation for "month"
                            while(temp < 0)
                            {
                                cout << "Invalid input. Try again: ";
                                cin >> temp;
                            }
                            rain+=temp;
                        }
                    }

                    //Output the results
                    cout<<"The number of months is "<<year*12<<endl;
                    cout<<"The total inches of rainfall is "<<rain<<endl;
                    cout<<"The average rainfall per month is "<<static_cast<float>(rain)/(year*12)<<endl;

                    break;
                }
                
            case'0':
            {    
                //Declare variables
                int num; 
                int sml=0, larg=0; //initialize value

                //Prompt for user
                cout<<"If you want to end the series, enter -99"<<endl;

                //Condition and loop
                if (num!= -99)
                {
                    cout << "Input the number here: ";
                    cin >> num;
                    sml = num;
                    larg = num;

                    while(num != -99)
                    {
                        cout<<"Input the number here: ";
                        cin>>num;
                        if ((sml > num) && (num!=-99))
                            sml = num;
                        if ((larg < num) && (num!=-99))
                            larg = num;
                    }
                }

                //Output the results
                cout << "largest number is " << larg << endl
                     << "smallest number is " << sml << endl;
 
                break;
            }    
                default:
                {
                        cout<<"Exit?"<<endl;
                }
    };
        } while(choice>='0' && choice<='9'); //from 0 to 9 is 10 problems

//Exit Stage Right
    return 0;
}