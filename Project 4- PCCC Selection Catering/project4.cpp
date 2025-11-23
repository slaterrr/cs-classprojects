/*
Name: Slater Zevallos
Date: 11/20/25
Class: CIS-160-M01
Project name: Project 4 - Selection Catering
Project. desc: This program generates a bill for a catering service.
The program collects input from the user.
It then uses the information given to calculate the bill.
Functions are used to simplify/increase efficiency in the program.
*/

#include <string>
#include <iomanip>
#include <iostream>

using namespace std;


//--------------------Prototypes--------------------
int NumberofAdultsPrompt();
int NumberofChildrenPrompt();
int MenuPrompt();
int choiceofHallPrompt();
int weekdayCateringPrompt();
int speedyDiscountPrompt();
float depositPrompt();

float totalcostAdultMealsFunc(int adults, int menuChoice);
float totalcostChildrenMealsFunc(int children, int menuChoice);
float totalFoodCostFunc(float totalcostAdultMeals, float totalcostChildrenMeals);
float totalGratuityFunc(float totalFoodCost);
float foodHallFeeFunc(int hallChoice);
float weekendChargeFunc(int weekdayCateringChoice,float totalGratuity,float foodHallFee, float totalFoodCost);
float salesTaxFunc(float totalFoodCost, float foodHallFee,float weekendCharge);
float subTotalFunc(float totalFoodCost,float totalGratuity,float foodHallFee, float weekendCharge, float salesTax);
float speedyDiscountFunc(int speedyDiscountChoice,float subtotal);
//--------------------Main block--------------------
int main()
{
    //asks user for inputs to use for selections and then for calculations
    int adults = NumberofAdultsPrompt();
    int children = NumberofChildrenPrompt();
    int menuChoice = MenuPrompt();
    int hallChoice = choiceofHallPrompt();
    int weekdayCateringChoice = weekdayCateringPrompt();
    int speedyDiscountChoice = speedyDiscountPrompt();
    float deposit = depositPrompt();

    //---processing section---
    float totalcostAdultMeals = totalcostAdultMealsFunc(adults,menuChoice);
    float totalcostChildrenMeals = totalcostChildrenMealsFunc(children,menuChoice);
    float totalFoodCost = totalFoodCostFunc(totalcostAdultMeals, totalcostChildrenMeals);
    float totalGratuity = totalGratuityFunc(totalFoodCost);
    float foodHallFee = foodHallFeeFunc(hallChoice);
    float weekendCharge = weekendChargeFunc(weekdayCateringChoice,totalGratuity,foodHallFee,totalFoodCost);
    float salesTax = salesTaxFunc(totalFoodCost, foodHallFee, weekendCharge);
    float subtotal = subTotalFunc(totalFoodCost,totalGratuity,foodHallFee, weekendCharge, salesTax);
    return 0;
}


//--------------------Input Functions--------------------


int NumberofAdultsPrompt()
{

    int adults;
    cout << "Welcome to Caswell Catering and Convention Services!" << endl;
    cout << "How many adults will be served? Please enter: ";
    cin >> adults;
    if (adults > 0)
    {
        cout << "You have entered: "<< adults << " adults" << endl; return adults;
    }
        else
        { 
            cout << "You have entered an incorrect value, please try again..." << endl; return NumberofAdultsPrompt();
        }
}

int NumberofChildrenPrompt()
{

    int children;
    cout <<"How many children will be served? Please enter: ";
    cin >> children;
    if (children > 0)
    {
        cout << "You have entered: "<< children << " children" << endl; return children;
    }
        else
        { 
            cout << "You have entered an incorrect value, please try again..." << endl; return NumberofChildrenPrompt();
        }
}

int MenuPrompt()
{
    int choice;
    cout << "Will the adult meals be deluxe or standard?" << endl;
    cout << "\t1. Deluxe($29.95 per meal)" << endl;
    cout << "\t2. Standard($25.75 per meal)" << endl;
    cout << "Enter number associated with the answer: ";
    cin >> choice;
    switch (choice)
    {
        case 1: cout << "You selected: deluxe meals" << endl; return choice;
        case 2: cout << "You selected: standard meals" << endl; return choice;
        default: cout << "You inputted an incorrect value, please try again..." << endl; return MenuPrompt();
    }
}

int choiceofHallPrompt()
{
    int choice;
    cout << "Which hall would you like? (No hall fee if delivered to home)" << endl;
    cout << "\t1. Hall A" << endl;
    cout << "\t2. Hall B" << endl;
    cout << "\t3. Hall C" << endl;
    cout << "\t4. Hall D" << endl;
    cout << "\t5. Hall H - Home" << endl;
    cout << "Enter number associated with the answer: ";
    cin >> choice;
    switch(choice)
    {
        case 1: cout << "You have selected: Hall A" << endl; return choice;
        case 2: cout << "You have selected: Hall B" << endl; return choice;
        case 3: cout << "You have selected: Hall C" << endl; return choice;
        case 4: cout << "You have selected: Hall D" << endl; return choice;
        case 5: cout << "You have selected: Hall H - Home" << endl; return choice;
        default: cout << "You inputted an incorrect value, please try again..." << endl; return choiceofHallPrompt();
    }
}

int weekdayCateringPrompt()
{
    int choice;
    cout << "Will the catering be done on the weekend?(Weekend caterings will be subject to a 10% surchage to the total bill)" << endl;
    cout << "\t1. Yes" << endl << "\t2. No" << endl << "Enter number associated with the answer: ";
    cin >> choice;
    switch (choice)
    {
        case 1: cout << "You have selected: Yes, the catering will be done on the weekend." << endl; return choice;
        case 2: cout << "You have selected: No, the catering will NOT be done on the weekend." << endl; return choice;
        default: cout << "You have entered an incorrect value, please try again..." << endl; return weekdayCateringPrompt();

    }  
}

int speedyDiscountPrompt()
{
    int choice;
    cout << "Will the payment be made within 10 days?(A discount is offered if done so)" << endl;
    cout << "\t1. Yes, the payment will be made within 10 days" << endl;
    cout << "\t2. No, the payment will be made in more than 10 days" << endl;
    cout << "Please enter the number associated with the choice: " << endl;
    cin >> choice;

    switch (choice)
    {
        case 1: cout << "You have entered: Yes, the payment will be made within 10 days"; return choice;
        case 2: cout << "You have entered: No, the payment will NOT be done within 10 days"; return choice;
        default: cout << "You have entered an incorrect value, please try again..." << endl; return speedyDiscountPrompt();
    }

}

float depositPrompt()
{
    float dep;
    cout << "What will be the amount deposited for the service?" << endl << "Please enter: ";
    cin >> dep;
    return dep;
}

//--------------------Processing Functions--------------------

float totalcostAdultMealsFunc(int adults, int menuChoice)
{
    float const DELUXE_MEAL = 29.95;
    float const STANDARD_MEAL = 25.75;
    /*Deluxe*/if (menuChoice == 1) { return adults * DELUXE_MEAL;}
    /*Standard*/else if (menuChoice == 2) { return adults * STANDARD_MEAL;}
    else {exit(0);}
}

float totalcostChildrenMealsFunc(int children,int menuChoice)
{
    float const DELUXE_MEAL = 29.95;
    float const STANDARD_MEAL = 25.75;
    float const CHILDREN_PERCENTAGE = .60;
    return (menuChoice == 1) ? (children * DELUXE_MEAL * CHILDREN_PERCENTAGE) : (children * STANDARD_MEAL * CHILDREN_PERCENTAGE);
}

float totalFoodCostFunc(float totalcostAdultMeals, float totalcostChildrenMeals) {return totalcostAdultMeals + totalcostChildrenMeals;}

float totalGratuityFunc(float totalFoodCost)
//totalfoodcost * gratuity ... gratuity is 20% of the total food cost
{
    const float GRATUITY_PERCENTAGE = .20;
    return totalFoodCost * GRATUITY_PERCENTAGE;
    
}

float foodHallFeeFunc(int hallChoice)
{
    /* A choice of hall (no hall fee, if delivered  to a home).
    Hall – A = 1,	$100.00
    Hall – B = 2,	$85.00
    Hall – C = 3, 	$75.00
    Hall – D = 4,	$65.00
    Hall – H = 5,   is home */

    float const HALL_A = 100.00, HALL_B = 85.00, HALL_C = 75.00, HALL_D = 65.00, HALL_H = 0.00;
    switch(hallChoice)
    {
        case 1: return HALL_A;
        case 2: return HALL_B;
        case 3: return HALL_C;
        case 4: return HALL_D;
        case 5: return HALL_H;
        default: exit(0);
    } 
}

float weekendChargeFunc(int weekdayCateringChoice,float totalGratuity, float foodHallFee, float totalFoodCost)
{
    float const WEEKEND_CHARGE = .10;
    return (weekdayCateringChoice == 1) ? WEEKEND_CHARGE * (totalGratuity + foodHallFee + totalFoodCost) : 0;
}

float salesTaxFunc(float totalFoodCost, float foodHallFee,float weekendCharge)
{
    // 7.0% sales tax applied to the subtotal of the bill excluding gratuity (room fee + food cost + weekend cost)
    float const SALES_TAX = .07;

    return SALES_TAX * (foodHallFee + totalFoodCost + weekendCharge);
}

float subTotalFunc(float totalFoodCost,float totalGratuity,float foodHallFee, float weekendCharge, float salesTax)
{
    return totalFoodCost + totalGratuity + foodHallFee + weekendCharge + salesTax;
}

float speedyDiscountFunc(int speedyDiscountChoice, float subtotal)
{
    /*
    bill < $500.00 the discount rate is 1% 
    $500.00 - $999.00 the discount rate is 2% 
    $1000.00 - $4999.00 the discount rate is 4% 
    $5000.00 - $9999.00 the discount is rate 5% 
    bill > $10000.00 the discount is rate 7%     
    */
    const float LESS_500 = .01;
    const float LESS_999 = .02;
    const float LESS_4999 = .04;
    const float LESS_9999 = .05;
    const float LESS_10000 = .07;

    if (speedyDiscountChoice == 1)
    {
        if (subtotal < 500.00) { return LESS_500 * subtotal; }
        else if (subtotal < 1000.00) { return LESS_999 * subtotal; }
        else if (subtotal < 5000.00) { return LESS_4999 * subtotal; }
        else if (subtotal < 10000.00) { return LESS_9999 * subtotal; }
        else { return LESS_10000 * subtotal; }
    }
    else
    {
        return 0;
    }
}
