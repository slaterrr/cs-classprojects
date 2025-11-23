/*
Name: Slater Zevallos
Date: 14 October 2025
Class: CIS-160-M01
Proj. Desc: This program is used for PC Carpeting Company. The program calculates costs for carpeting per sq. ft.
            The program uses strings, io manipulators, input/output stream, and cmath to make this work smoothly.
            The program also uses IPO(Input-Processing-Output) model for the program's code to be organized in said format.


*/

#include <string>
#include <iomanip> 
#include <iostream> 
#include <cmath> 

using namespace std;

//global declarations

//declaring the constants
const float LABOR_COST_PERCENTAGE = 15.95;
const float TAX_RATE = .075;


int main () {

    //local declarations

    string customer_name;//declaring string for the customer name
    float room_length, room_width, squareft_price, discount_rate,carpet_cost, labor_cost, installed_price, discount, subtotal, taxes, total;//declaring floats
    int carpet_size, discount_percentage;//declaring integers

    //input section

    
    //Whole section asks for user's inputfor customer's information like name, length, width, price per sqft, and discount rate
        cout << "Please enter the customer's name: ";
        getline (cin,customer_name);
    
        cout << endl << "Enter the room length in feet: ";
        cin >> room_length;

        cout << endl << "Enter the room width in feet: ";
        cin >> room_width;

        cout << endl << "Enter the price per square foot: ";
        cin >> squareft_price;

        cout << endl << "Enter the discount rate as a decimal: ";
        cin >> discount_rate;

    //processing section
    

        carpet_size = ceil(room_length * room_width); //area rounded up to nearest whole #

        carpet_cost = (squareft_price * carpet_size); //finds carpet cost

        labor_cost = (LABOR_COST_PERCENTAGE * carpet_size);//finds labor cost

        installed_price = (carpet_cost + labor_cost);//finds installed price

        discount = (discount_rate * installed_price);//finds discount

        discount_percentage = (discount_rate * 100);//finds discount percentage

        subtotal = (installed_price -discount);//finds subtotal

        taxes = (TAX_RATE * subtotal);//finds amount to pay for taxes

        total = (subtotal + taxes);//finds total






    //output section: Displays the results from the calculations in the processing section.

        cout << endl << "Welcome to Passaic County Carpeting Company!" << endl << endl; 

        cout << "Customer Information: " << endl;
        cout << "\tCustomer name: " << customer_name << endl;
        cout << "\tCarpet Size: " << carpet_size << " Square Feet" << endl<< endl;

        cout << fixed << setprecision(2);//sets all floats to display 0s(with fixed) and sets the precision of decimals to two places.

        cout << "Charges: "<< endl;
        cout <<"\tCarpet Cost: @ $" << squareft_price << " Sq Ft";
        cout << setw(10) << right << "$" << carpet_cost << endl;
        cout << "\tLabor Cost:  @ $" << LABOR_COST_PERCENTAGE << " Sq Ft";
        cout << setw(10) << right << "$" << labor_cost << endl << endl;

        cout << "\tInstalled Price:";
        cout << setw(21) << right << "$" << installed_price << endl;
        cout << "\tDiscount:\t" << discount_percentage << "%" ;
        cout << setw(19) << right << "$" << discount << endl << endl;
    
        cout << setw(53) << "_________" << endl;

        cout << "\tSubTotal:";
        cout << setw(28) << right << "$" << subtotal << endl << endl;

        cout << "\tTaxes:";
        cout << setw(31) << right << "$" << taxes << endl << endl;

        cout << "\tTotal Cost:";
        cout << setw(26) << "$" << total << endl << endl;

        cout << customer_name << ", Thank you for using PCC Carpeting." << endl;

    return 0;
}