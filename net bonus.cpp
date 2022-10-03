//program to print net bonus
 #include <iostream>
 using namespace std;
int main() 
{
    int Salary;
    int Years;
    float fBonus;
    int counter;
    bool okcontinue = true;
    char idontchar; 

    while (okcontinue) { 
        cout << "You are employee #" << counter<< " to use this.\n";
        cout << "Enter your salary: \n";
        cin >> Salary;
        cout << "Enter number of years of service: \n";
        cin >>Years;

        if (Years >= 10) fBonus = Salary * 0.1;
        if ((Years < 10) && (Years >= 5)) fBonus = Salary * 0.05;
        if ((Years < 5) && (Years >= 1)) fBonus = Salary * 0.025;
        cout << "Your bonus is " << fBonus   << "  Enter 'e' to exit or 'c' to continue.\n";
        cin >> idontchar;

        if (idontchar == 'e') return 0;
      }
  
      }