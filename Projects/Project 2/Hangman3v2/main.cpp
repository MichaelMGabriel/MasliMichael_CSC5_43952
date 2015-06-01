/* 
 * File:   main.cpp
 * Author: Michael Masli
 *
 * Created on May 4, 2015, 10:32 AM
 * Purpose: Hangman Game
 */
//User Libraries

//System Libraries
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;

//Global Constants
const int ROW=26; //size of 2d array
//Function Prototypes
bool letFill (char, string, string&, int, char[][ROW]); //Letter Fill function
void getWord (string [], string &, string &); //'&' call by referrence
float percent (int, int); // guessing accuracy percentage in decimal
void display(int); //display hangman
bool valid(char, string);   //input validation
//display input array and 2d record array
void showArray(int [], char [], char[][ROW], int total_try, int unknown_length);
void sortArray(int [], char [], char[][ROW], int, int);
//Execution Begins Here
int main (int argc, char** argv){
    //Declare Variables
    const int MaxTRY=8; //number of maximum tries
    char letter; // input the letter to guess the word 
    int nWrng=0; //num. of wrong guesses
    string word;
    const int SIZE=10; //size of array
    char inputArr[ROW];
    char record[ROW][ROW]; //record of unknown and try
    int tryArr[ROW];
    int ttlTry=1;
    cout<<setprecision(2)<<fixed<<showpoint; //decimal format
    for(int i=0;i<ROW;i++){
        for(int j=0;j<26;j++){
            record[i][j]='_';
        }
    }
    //set the random time seed
    srand(time(0));
    string words[SIZE] = {
        "china",
	"germany", //7
	"england", //
	"netherlands", //9
	"philippines",
	"australia",
	"turkey",
	"greece",
	"uganda",
	"indonesia"
    }; 
    
    string sports[SIZE] = {
        "football",
	"swimming",
	"soccer",
	"basketball",
	"cricket",
	"baseball",
	"running",
	"tennis",
	"badminton",
	"racing"
    };
    
    string music[SIZE] = {
        "rock",
	"hiphop",
	"pop",
	"folk",
	"classical",
	"jazz",
	"alternative",
	"blues",
	"punk",
	"country"
    };

	string unknown; //for the unknown word
        //Input file
        fstream input;
        input.open("test.txt", ios::in);
        string temp;
        while(getline(input, temp))cout<<temp<<endl;
        input.close();
	//Prompt the User
//	cout<<"Hello there! Welcome to HANGMAN...Guess the correct word."<<endl; //Modify this, to "select a category
//	cout<<"Each letter is represented by the character '-' "<<endl;
//	cout<<"You get to type a letter in each try."<<endl;
//	cout<<"You have 8 tries to guess the correct word in the selected category."<<endl;
	
    //Menu format
    int choice;
        //Repeat the menu
    do{    
        //General Menu Format
        //Display the selection
        cout<<"\nType 1 to guess a country name."<<endl;
        cout<<"Type 2 to guess a name of sport."<<endl;
        cout<<"Type 3 to guess a music genre."<<endl;
        cout<<"Type anything else to quit playing this game."<<endl;
        //Read the choice
        cin>>choice;
        cin.ignore();
        //Solve a problem that has been chosen.
        switch(choice){
                case 1:{
                    getWord(words, word, unknown);
                    //Loop until the guesses are used up
                    do{
                        cout<<"\ntotal try = "<<ttlTry<<endl;
                        //Input Validation
                        do{
                            cout<<"\n"<< unknown;
                            cout<<"\nGuess a Country Name!\nTry typing a letter EACH TIME to guess the word (all LOWERCASE): ";
                            cin>>letter;
                            cin.ignore();
                            if(valid(letter, unknown)==false)cout<<"Letter '"<<letter<<"' was input before, try again!\n";
                        }while(valid(letter, unknown)==false);
                        inputArr[ttlTry-1]=letter;
                        //Conditions
                        if (letFill(inputArr[ttlTry-1], word, unknown, ttlTry, record)==false){
                                cout<<endl<< "Whoops! The letter is not in the word!"<<endl;
                                nWrng++;
                                display(nWrng);
                        }
                        else{
                                cout<<endl<< "Yes! You found a letter, keep going!" <<endl;
                        }
                        
                        ttlTry++;
                        
                        //Inform the user for how many guess the user has
                        cout<<"Number of guess(s) left = "<< MaxTRY - nWrng;

                        // Check if user guessed the word.

                    }while(nWrng<MaxTRY && word!=unknown);
                    if (word==unknown){
                            cout <<"The word is "<<word<<endl;
                            cout << "Congratulations! You got it!"<<endl;
                        }
                    else{
                            cout << "\nSorry, you lose...you've been hanged :(" << endl;
                            cout << "The correct word was : " << word << endl;
                    }
                    //cout<<nWrng<<" "<<MaxTRY<<endl;
                    cout<<"Your guessing accuracy in decimal point is "<<percent(nWrng, MaxTRY)<<endl;
                    for(int i=0;i<ttlTry-1;i++){
                        tryArr[i]=i+1;
                    }
                    showArray(tryArr, inputArr, record, ttlTry, unknown.length());
                    sortArray(tryArr, inputArr, record, ttlTry, unknown.length());
                    cout<<"After Sorting\n";
                    showArray(tryArr, inputArr, record, ttlTry, unknown.length());
                    
                    break;
                }       
               
                case 2:{
                    getWord(sports, word, unknown);
//                   
                     //Loop until the guesses are used up
                    do{
                        //Input Validation
                        do{
                            cout<<"\n"<< unknown;
                            cout<<"\nGuess a Name of Sport\nTry typing a letter EACH TIME to guess the word (all LOWERCASE): ";
                            cin>>letter;
                            cin.ignore();
                            if(valid(letter, unknown)==false)cout<<"Letter '"<<letter<<"' was input before, try again!\n";
                        }while(valid(letter, unknown)==false);
                    //Conditions
                    if (letFill(inputArr[ttlTry-1], word, unknown, ttlTry, record)==false){
                            cout<<endl<< "Whoops! The letter is not in the word!"<<endl;
                            nWrng++;
                            display(nWrng);
                    }
                    else{
                            cout<<endl<< "Yes! You found a letter, keep going!" <<endl;
                    }
                    cout<<unknown<<endl;
                    //Inform the user for how many guess the user has
                    cout<<"Number of guess(s) left = "<< MaxTRY - nWrng;

                    // Check if user guessed the word.
                    
                    }while(nWrng<MaxTRY && word!=unknown);
                    if (word==unknown){
                            cout <<"The word is "<<word<<endl;
                            cout << "Congratulations! You got it!"<<endl;
                        }
                    else{
                            cout << "\nSorry, you lose...you've been hanged :(" << endl;
                            cout << "The correct word was : " << word << endl;
                    }
                    //cout<<nWrng<<" "<<MaxTRY<<endl;
                    cout<<"Your guessing accuracy in decimal point is "<<percent(nWrng, MaxTRY)<<endl;
                    cout<<"The input record\n";
                    showArray(tryArr, inputArr, record, ttlTry, unknown.length());
                    sortArray(tryArr, inputArr, record, ttlTry, unknown.length());
                    showArray(tryArr, inputArr, record, ttlTry, unknown.length());
                    break;
                }
                case 3:{
                    
                    getWord(music, word, unknown); //getWord--> randomly pick word from music array
//                    
                     //Loop until the guesses are used up
                    do{
                        //Input Validation
                        do{
                            cout<<"\n"<< unknown;
                            cout<<"\nGuess a name of Music Genre!\nTry typing a letter EACH TIME to guess the word (all LOWERCASE): ";
                            cin>>letter;
                            cin.ignore();
                            if(valid(letter, unknown)==false)cout<<"Letter '"<<letter<<"' was input before, try again!\n";
                        }while(valid(letter, unknown)==false);
                    //Conditions
                    if (letFill(inputArr[ttlTry-1], word, unknown, ttlTry, record)==false){
                            cout<<endl<< "Whoops! The letter is not in the word!"<<endl;
                            nWrng++;
                            display(nWrng);
                    }
                    else{
                            cout<<endl<< "Yes! You found a letter, keep going!" <<endl;
                    }
                    cout<<unknown<<endl;
                    //Inform the user for how many guess the user has
                    cout<<"Number of guess(s) left = "<< MaxTRY - nWrng;

                    // Check if user guessed the word.
                    
                    }while(nWrng<MaxTRY && word!=unknown);
                    if (word==unknown){
                            cout <<"The word is "<<word<<endl;
                            cout << "Congratulations! You got it!"<<endl;
                        }
                    else{
                            cout << "\nSorry, you lose...you've been hanged :(" << endl;
                            cout << "The correct word was : " << word << endl;
                    }
                    //cout<<nWrng<<" "<<MaxTRY<<endl;
                    cout<<"Your guessing accuracy in decimal point is "<<percent(nWrng, MaxTRY)<<endl;
                    showArray(tryArr, inputArr, record, ttlTry, unknown.length());
                    sortArray(tryArr, inputArr, record, ttlTry, unknown.length());
                    showArray(tryArr, inputArr, record, ttlTry, unknown.length());
                    break;
                }
                default:{
                        cout<<"Exit?"<<endl;
                }
        }  
    } while(choice>=1 && choice<=3);
    //Exit Stage Right
    return 0;
}
//The function of changing unknown
bool letFill (char guess, string word, string &unknown, int ttlTry, char record[][ROW]){
    bool match=false;
    for (int i = 0; i< word.length(); i++){ //word.length = how many characters are in side
            if (guess == word[i]){      //parallel array same index for word and unknown
                    unknown[i] = guess;
                    match=true;
            }
    }
    //add unknown to record
    for(int j=0;j<unknown.length();j++){
        record[ttlTry-1][j]=unknown[j]; //num of input variable is what? change it
    }
    return match;
}
void getWord(string arr[], string &word, string &unknown){
    //choose and copy a word from array of words randomly
    word=arr[rand()%10];
    fstream output;
    output.open("word.txt", ios::out);
    output<<word;
    output.close();
    unknown="";
    //Initialize the unkn word with the "-" character.
    for(int i=0;i<word.length();i++){
        unknown+="-";
    }
    //cout<<word;
}
//Function that displays hangman
void display(int count){
    if(count==1){
        cout<<"______________________________\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==2){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==3){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|                             |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==4){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|               |             |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==5){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|              /|             |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==6){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|              /|\\            |\n";
        cout<<"|                             |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==7){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|              /|\\            |\n";
        cout<<"|              /              |\n";
        cout<<"|_____________________________|\n";
    }
    else if(count==8){
        cout<<"______________________________\n";
        cout<<"|               |             |\n";
        cout<<"|               O             |\n";
        cout<<"|              /|\\            |\n";
        cout<<"|              / \\            |\n";
        cout<<"|_____________________________|\n";
        cout<<"YOU JUST LOST!\n";
    }
}

float percent (int atmpt, int max){
    return static_cast<float>((max-atmpt))/max;
}

bool valid(char input, string unknown){
    for(int i=0;i<unknown.length();i++){
        if(input==unknown[i]) return false;
    }
    return true;
}
void showArray(int tryArr[], char inputArr[], char record[][ROW], int ttl_try, int length){
    for(int i=0;i<ttl_try-1;i++){
        cout<<tryArr[i]<<" try: ";
        for(int j=0;j<length;j++){
            cout<<record[i][j];
        }
        cout<<" "<<inputArr[i]<<"\n";
    }
}
void sortArray(int tryArr[], char inputArr[], char record[][ROW], int ttlTry, int length){
    bool swap;
    char temp;
    int itemp;
    do{
        swap=false;
        for(int i=0;i<ttlTry-2;i++){
            if(inputArr[i]>inputArr[i+1]){
                swap=true;
                itemp=tryArr[i];
                tryArr[i]=tryArr[i+1];
                tryArr[i+1]=itemp;
                temp=inputArr[i];
                inputArr[i]=inputArr[i+1];
                inputArr[i+1]=temp;
                
                for(int j=0;j<length;j++){
                    temp = record[i][j];
                    record[i][j]= record[i+1][j];
                    record[i+1][j] = temp;
                }
            }
        }
    }while(swap);
}