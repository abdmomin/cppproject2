#include<iostream>
using namespace std;
int main()
{
    int id = 0, bsalary = 0, rental = 0, allow = 0, tax = 0, epf = 0, deduct = 0, gross = 0;
    string name, desig;
    
    while(true){
        cout << "Employee ID: ";
        cin >> id;
        cout << "Employee Name: ";
        cin >> name;
        cout << "Designation: ";
        cin >> desig;
        cout << "Basic Salary: ";
        cin >> bsalary;
        
        if(bsalary<=3000){
            rental = 500;
            cout << "Allowance: \n"<<endl;
            cout << "Medical Allowance : RM 100.00\n"<<endl;
            cout << "Travel Allowance : RM 500.00\n"<<endl;
            cout << "House Rental Allowance: RM "<<rental<<"\n\n"<<endl;
        }
        if(bsalary>3000 && bsalary<=5000){
            rental = 750;
            cout << "Allowance: \n"<<endl;
            cout << "Medical Allowance : RM 100.00\n"<<endl;
            cout << "Travel Allowance : RM 500.00\n"<<endl;
            cout << "House Rental Allowance: RM "<<rental<<"\n\n"<<endl;
        }
        if(bsalary>5000){
            rental = 1000;
            cout << "Allowance: \n"<<endl;
            cout << "Medical Allowance : RM 100.00\n"<<endl;
            cout << "Travel Allowance : RM 500.00\n"<<endl;
            cout << "House Rental Allowance: RM "<<rental<<"\n\n"<<endl;
        }
        
        
        
        allow = 100+500+rental;
        tax = (bsalary*10)/100;
        epf = (bsalary*12)/100;
        deduct = tax+epf;
        gross = bsalary+allow;
        
        cout << "Deduction:\n"<<endl;
        cout << "Income Tax 10%: RM "<<tax<<"\n"<<endl;
        cout << "EPF 12%: RM "<<epf<<"\n\n"<<endl;
        

        
        //cout <<"Employee ID: "<< id <<"\n"<<"Employee Name: "<<name<<"\n"<<"Designation: "<<desig<<"\n"<<endl;
        cout << "Gross Salary: RM "<<gross<<"\n"<<endl;
        cout << "Net Salary: RM "<<gross-deduct<<"\n"<<endl;
        
        char ch = 'n';
        cout << "Do you wish to continue, [y/n] ? ";
        cin >> ch;
        if (ch == 'Y' || ch == 'y')
            continue;
        else{
            cout << "Thank you for using the application.\n\n";
            break;
        }
    }
    
    
}
