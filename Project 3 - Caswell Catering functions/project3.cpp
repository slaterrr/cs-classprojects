/*
Name: Slater Zevallos
Date: 11/04/25
Class: CIS-160-M01
Project name: Project 3 - Caswell Catering Functions
Project. desc: This program generates a bill for a catering & convention service.
The program collects input from the user(name, # of adults, children, dessert, meal cost, room fee, and deposit amount).
It then uses the information given to calculate the bill, which is then outputted to a .txt file.
Functions are used to simplify/increase efficiency in the program.
*/


#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//global declarations / constants
const float CHILDMEALCOST = 0.55;
const float DESSERTCOST = 6.50;
const float TAXRATE = .075;
const float TIPS = .18;


//***********************PROTOTYPES********************************//
string customerNamePrompt(); 
int adultsServedPrompt(); 
int childrenServedPrompt(); 
int piecesofDessertPrompt(); 
float costPerMealPrompt (); 
float roomFeePrompt (); 
float depositAmountPrompt();
void mealCostCalculations(float,int,int,int,float &,float &, float &, float &, float &);
void totalCostCalculations(float, float, float, float &, float &, float &, float &); 
void output1 (string,int,int,float,float,float,float,float,float,float,float,float,float,float,float); 
//***********************PROTOTYPES********************************//


//MAIN BLOCK
int main () {

//**********************LOCAL DECLARATIONS/INPUT SECTION**********************//
   
    //**********These variables are assigned a value by running the function and assigning the output to the declared variable**********//
    string customerName = customerNamePrompt();
    int adultsServed = adultsServedPrompt();
    int childrenServed = childrenServedPrompt();
    int piecesofDessert = piecesofDessertPrompt();
    float costPerMeal = costPerMealPrompt ();
    float roomFee = roomFeePrompt ();
    float depositAmount = depositAmountPrompt(); 
    //*********************************************************************************************************************************//


    //**********These variables are declared without value because the function calls below will do so**********// 
    float childCostPerMeal, totalAdultMealCost, totalChildMealCost, totalDessertCost, totalFoodCost;
    float taxAmount, tipAmount, totalBill, balanceDue;
    //**********************************************************************************************************//

//***************************************************************************//


//**********PROCESSING SECTION**********//

    //Calls the function mealCostCalculations, which calculates the amount of total food costs, without taxes
    mealCostCalculations(costPerMeal,adultsServed,childrenServed, piecesofDessert,childCostPerMeal,totalAdultMealCost,totalChildMealCost,totalDessertCost,totalFoodCost);
    
    //Calls the function totalCostCalculations, which calculates the amount of tax, tips, total bill, and balance with the deposit.
    totalCostCalculations(totalFoodCost, roomFee, depositAmount,taxAmount, tipAmount, totalBill, balanceDue);
//**************************************//
 

//********************OUTPUT SECTION********************//
    
    //Calls the function output1, which displays the user's input + the calculations made in the functions above, all into a file called "outputProject3.txt" 
    output1 (customerName,adultsServed,childrenServed,costPerMeal,childCostPerMeal,DESSERTCOST,totalAdultMealCost,totalChildMealCost,totalDessertCost,taxAmount,tipAmount,roomFee,totalBill,depositAmount,balanceDue);
    
//******************************************************//


    return 0;
}









//*********************INPUT FUNCTIONS*********************//

/*Function: customerNamePrompt
 Description: Asks the user for the customer's name and returns it*/

string customerNamePrompt()
    {
    string a;
    cout << "Please enter the customer's name: ";
    getline(cin,a);
    return a;
}

/*Function: adultsServedPrompt
 Description: Asks the user for the amount of adults and returns it*/
int adultsServedPrompt()
    {
    int adultsServed;
    cout << "Please enter the number of adults being served: ";
    cin >> adultsServed;
    return adultsServed;

}

/*Function: childrenServedPrompt
 Description: Asks the user for the amount of children being served and returns it*/
int childrenServedPrompt() 
    {
    int childrenServed;
    cout << "Please enter the number of children being served: ";
    cin >> childrenServed;
    return childrenServed;
}

/*Function: piecesofDessertPrompt
 Description: Asks the user for the amount of dessert desired and returns it*/
int piecesofDessertPrompt() 
{
    int piecesofDessert;
    cout << "Please enter the amount of dessert desired: ";
    cin >> piecesofDessert;
    return piecesofDessert;
}

/*Function: costPerMealPrompt
 Description: Asks the user for the amount of cost per meal and returns it*/
float costPerMealPrompt () 
{
    float costPerMeal;
    cout << "Please enter the cost per meal: ";
    cin >> costPerMeal;
    return costPerMeal;
}

/*Function: roomFeePrompt
 Description: Asks the user for the room fee and returns it*/
float roomFeePrompt ()
{
    float roomFee;
    cout << "Please enter the room fee: ";
    cin >> roomFee;
    return roomFee;
}

/*Function: depositAmountPrompt
 Description: Asks the user for the deposit fee and returns it*/
float depositAmountPrompt()
{
    float depositAmount;
    cout << "How much will be paid for the deposit fee? Please enter: ";
    cin >> depositAmount;
    return depositAmount;
}



//*********************PROCESSING FUNCTIONS*********************//


/*
Function: mealCostCalculations
Description: Calculates the cost of meals for adults, children, and desserts.
Also determines the total food cost before taxes, tips, and fees.

Parameters:
    a = cost per adult meal
    b = number of adults served
    c = number of children served
    d = number of desserts ordered
    cCPM = cost per child meal (output)
    tAMC = total adult meal cost (output)
    tCMC = total child meal cost (output)
    tDC = total dessert cost (output)
    tFC = total food cost (output)
Returns: None; passed by reference
*/
void mealCostCalculations(float a,int b, int c, int d, float &cCPM, float &tAMC, float &tCMC, float &tDC, float &tFC)
{
    cCPM = a * CHILDMEALCOST; 
    tAMC = a * b; 
    tCMC = cCPM * c; 
    tDC = DESSERTCOST * d; 
    tFC = tAMC + tCMC + tDC; 
}

/*
Function: totalCostCalculations
Description: Calculates the tax amount, tip amount, total bill,
and balance due after applying the deposit.
Parameters:
    a = total food cost
    b = room fee
    c = deposit amount
    tA = tax amount (output)
    tipA = tip amount (output)
    tB = total bill (output)
    bD = balance due (output)
Returns: None; passed by reference
*/
void totalCostCalculations(float a, float b, float c, float &tA, float &tipA, float &tB, float &bD)
{

    tA = a * TAXRATE; //tA = taxAmount, a = totalFoodCost
    tipA = TIPS * a; //tipA = tipAmount
    tB = a + tA + tipA + b; //tB = totalBill, b = roomFee
    bD = tB - c;//bD = the balance due including the deposit, c = depositAmount

}   




//*********************OUTPUT FUNCTIONS*********************//

/*
Function: output1
Description: Outputs the catering bill to a .txt file
named "outputProject3.txt." It displays all input data and calculated totals.
Parameters:
    a = customer name
    b = number of adults
    c = number of children
    d = cost per adult meal
    e = cost per child meal
    f = dessert cost
    g = total adult meal cost
    h = total child meal cost
    i = total dessert cost
    j = tax amount
    k = tip amount
    l = room fee
    m = total bill
    n = deposit amount
    o = balance due
Returns: None; output is sent to .txt file
*/

void output1 (string a,int b, int c,float d, float e, float f, float g, float h, float i, float j,float k,float l, float m, float n,float o)
{

 ofstream fout("outputProject3.txt");
    fout << "\tPassaic County Catering & Convention Services\tFinal Bill" << endl << endl;

    fout << "Customer name: \t\t" << a << endl;

    fout << "Number of adults: \t" << b << endl;
    fout << "Number of children: \t" << c << endl;

    fout << endl << "Cost of Meal Per Adult: \t$" << fixed << setprecision(2) << d << endl;
    fout << "Cost of Meal Per Child: \t$" << fixed << setprecision(2) << e << endl;
    fout << "Cost Per Dessert: \t\t$" << fixed << setprecision(2) << f << endl; 

    fout << "Total Cost for Adult Meals: \t$" << fixed << setprecision(2) << g << endl;
    fout << "Total Cost for Child Meals: \t$" << fixed << setprecision(2) << h << endl;
    fout << "Total Cost for Dessert: \t$" << fixed << setprecision(2) << i << endl;

    fout << endl << "Plus 7.50% Tax: \t\t$" << fixed << setprecision(2) << j << endl;
    fout << "Plus 18.0% Tips: \t\t$" << fixed << setprecision(2) << k << endl;
    fout << "Plus Room Fee: \t\t\t$" << fixed << setprecision(2) << l << endl;

    fout << endl << "Total Bill: \t\t\t$" << fixed << setprecision(2) << m << endl;
    fout << "Less Deposit: \t\t\t$" << fixed << setprecision(2) << n << endl;

    fout << endl << "Balance Due: \t\t\t$" << fixed << setprecision(2) << o << endl;
    fout << endl << "\tThank You for Using Passaic County Catering Services." << endl;
    fout.close();

}
