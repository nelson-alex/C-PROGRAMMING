 //program to convert degrees celsius temp to fahrenheit temp
 #include <iostream>
using namespace std;
 
int main() 
{
float far, celsius;
cout << " Enter temperature in degrees celsius\n";
cin >> celsius;
 
 
 far = (celsius * 9 / 5) + 32;

cout <<"Temp in far is " << far<<" fahreneheit ";
return 0;
}