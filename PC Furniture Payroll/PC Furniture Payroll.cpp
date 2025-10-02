/*

 name: Slater Zevallos

 class: CIS-160-M01

 date: October 2, 2025

 proj. name: PCPFC Payroll

 desc: This is a program used for PCPFC Payroll per employee.

 */


#include <iostream>

#include <string>



using namespace std;



// global declarations / definitions



int main()

{

    //local declarations

        string EmployeeName; //declaring Employee's Name as a string
        unsigned short HoursWorked; //declaring the integer for hours worked by employee
        float HourlyRate; //declaring float for hourly rate
        float TotalWages; //declaring float for total wages
        float FederalWithholding; //declarSing float for Federal Withholding charge
        float StateWithholding; //declaring float for State Withholding charge
        float Hospitalization; //declaring float for Hospitalization charge
        float Union; //declaring float for union charge
        float TotalDeductions; //declaring float for the total deductions from all the charges
        float NetPay; //declaring the net pay (TotalWages - TotalDeductions)
        const float FEDERALWITHHOLDING = 0.2; //declaring CONSTANT for the federal Withholding charge
        const float STATEWITHHOLDING = 0.045; //declaring CONSTANT for the state Withholding charge
        const float HOSPITALIZATION = 0.015; //declaring CONSTANT for the hospitalization charge
        const float UNION = 0.01; //declaring CONSTANT for the union charge

        // input section
        cout << "Please enter the Employee's Name: "; //displaying prompt to user asking for name
        cin >> EmployeeName; //assigning user's input to EmployeeName

        cout << "Please enter " << EmployeeName << "'s hours worked: "; //displays prompt to user asking for the hours worked by employee
        cin >> HoursWorked; //assigning user's input to HoursWorked

        cout << "Please enter " << EmployeeName << "'s hourly rate: "; //displays prompt to user asking for the hourly rate for employee
        cin >> HourlyRate; //assigning user's input to HourlyRate
    





    //processing section

        TotalWages = HoursWorked * HourlyRate; //calculation for getting the total wage of the employee
        FederalWithholding = FEDERALWITHHOLDING * TotalWages; //calculation for getting the Federal Withholding charge for the employee based on his income
        StateWithholding = STATEWITHHOLDING * TotalWages; //calculation for getting the State Withholding charge for the employee based on his income
        Hospitalization = HOSPITALIZATION * TotalWages; //calculation for getting the Hospitalization charge for the employee based on his income
        Union = UNION * TotalWages; //calculation for getting the union charge for the employee based on his income

        TotalDeductions = FederalWithholding + StateWithholding + Hospitalization + Union; //Assigns the calculation to the float TotalDeductions, which is all the charges added up
        NetPay = TotalWages - TotalDeductions; //Assigns the calculation to the float NetPay, which is subtracting total deductions from the total wages.



    //output section

        //Introduction to the program
        cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl; //Inserting borders to display in the program
        cout << "\t\t\tThe PC Pine Furniture Company" << endl; //Displaying name of the company, centered using tabs
        cout << "\t\t\t\t123 Main Street" << endl; //Displaying address of the company, centered using tabs
        cout << "\t\t\t       Paterson, NJ 07505" << endl; //Displaying address of the company, centered using tabs
        cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/" << endl; //Inserting borders to display in the program

        //Employee information
        cout << "Employee Name: \t" << EmployeeName << endl; //Displaying Employee's name
        cout << "\t\tHours worked:\t\t" << HoursWorked << endl; //Displaying Hours worked
        cout << "\t\tHourly Rate:\t\t" << HourlyRate << endl; //Displaying Hourly Rate
        cout << "\t\tTotal Wages:\t\t$" << TotalWages << endl; //Displaying Total wages

        cout << "\t\t\t\t--------------" << endl; //displaying dashes to visually separate from next section


        //Deductions
        cout << "\tDeductions:\n"; //displaying the text "deductions"
   
        cout << "\t\tFederal Withholding\t" << FederalWithholding << endl; //Displaying the value for FederalWitholding
        cout << "\t\tState Withholding\t" << StateWithholding << endl; //Dispalying the value for StateWitholhding
        cout << "\t\tHospitalization\t\t" << Hospitalization << endl; //Displaying the value for Hospitalization
        cout << "\t\tUnion Dues\t\t" << Union << endl << endl; //Displaying the value for Union Dues
        cout << "\t\tTotal Deductions\t$" << TotalDeductions << endl; //Displaying the valeu for Total Deductions

        cout << "\t\t\t\t--------------" << endl; //displaying dashes to visually separate from next section


        //NetPay
        cout << "\tNet Pay\t\t\t\t$" << NetPay << endl; //displaying the net pay to the user

        cout << "\t\t\t\t--------------" << endl; //displaying dashes to visually separate from next section
    
        //Outro
        cout << "\tThank you for using the PCPFC Computerized Payroll System" << endl; //Thanking user for using the system

    return 0;

}
