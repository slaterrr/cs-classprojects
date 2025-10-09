/*
Name: Slater Zevallos
Date: October 2, 2025
Project Name: Construction Job Quote Generator
Description: This is a program used to generate a quote for a construction job.

*/



#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//global declarations / definitions
 


int main () {


    //local declarations/declaring variables
    
        string Greeting = "Welcome to Slater's Construction Job Quote Generator!"; //declares a string variable for greeting the user
        string dashLine (50, '-');
        
        int jobType; //declaring an integer variable for the type of job the user chooses
         
        string jobTypeName; //string variable for the type of job









    //input section

        //Displays greeting
        cout << dashLine << endl;
        cout << Greeting << endl; 

        //Displays job quote options
        cout << "What type of job would you like a quote for?" << endl; //asks user what type of job
        cout << "1. Painting" << endl; cout << "2. Furniture" << endl; cout << "3. Flooring" << endl;
        
        cout << dashLine << endl;
        cout << "Enter the number(not name) of your desired quote: "; cin >> jobType; //Takes user input and assigns it to the int variable jobType

    //processing section
        bool ValidSelection = False;
        while (!validSelection)
        switch (jobType) { //switch function that allows user to 

            case 1:
                cout << "You selected Painting." << endl; break;

            case 2:
                cout << "You selected Furniture." << endl; break;
                
            case 3:
                cout << "You selected Flooring." << endl; break;

            default:
                cout << "The selection you made was invalid. Please try again:" << endl; break;

        }
        




    //output section

return 0;
}