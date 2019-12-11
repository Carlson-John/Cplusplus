#include <iostream>
#include <string>
#include <fstream>  ///Stream class to both read and write from/to files
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include "Info.h"

using namespace std;

    ofstream outputFile;
void Info::buildFile()
{

    cout<< "Please create a txt File to save your data in "<< " (example: File.txt) " <<endl;
    cin >> file;
     outputFile.open(file.c_str());
}

void Info::getInfo()
{   cout<< "Please enter your Firstname "<<endl;
    cin>> firstname;
    cout<< "Please enter your Lastname "<<endl;
    cin>> lastname;
    cout<< "Please enter the amount of hours you work per week "<< " (example: 40) " <<endl;
    cin >> hours;
    cout<< "Please enter the amount of money you get paid per hour "<< " (example: 69.25) " <<endl;
    cin >>wage;
     ///if (hours <0 || salary <0)
        ///cout <<"Error Please enter numbers greater than 0 " <<endl;
while ((hours < 0) || wage < 0) ///This while loop checks to make sure users enter above 0 if not they are notified to run this program again
  {
   cout << "Please enter valid values (Positive numbers): " << endl;
   cin >> hours>> wage;
  }
}
double Info::calcInfo()
{ if(hours >40)
    {
        overtime = (hours - 40) *1.5 * wage;///This works as time and a half for people who work more than 40 hours a week
        total= set_hours *wage +overtime; ///total hours worked is equal to the set_hours (40)default times wage plus overtime.

    cout <<"Overtime included: "<<endl;
    }
    else {
    total = hours * wage;
    }

    return total;
}
void Info::printInfo()
{   cout<<"Name: "<<firstname<<" "<<lastname<<endl;
    cout<< "Time worked: " << hours<<endl;
    cout<< "Salary is: " <<wage<<endl;
    cout<< "Total earned: " <<total<<endl;
    outputFile << "-----------------------------------------------\n";
    outputFile <<"Name: "<<firstname<<" "<<lastname<<endl;
    outputFile <<"Time worked: " << hours<<endl;
    outputFile <<"Salary is: " <<wage<<endl;
    outputFile <<"Total earned: " <<total<<endl;
    outputFile << "------------------------------------------------\n";
}
