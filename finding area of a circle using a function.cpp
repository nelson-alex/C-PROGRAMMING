#include <iostream>
 using namespace std;
float circle(int r) ;   
int main(){
    int radius;
    float Area;
    cout<< "Enter radius "<<endl;
    cin>> radius;
    Area = circle(radius);  
    cout<< " The area of the circle is " << Area <<endl;
    return 0;
}
float circle (int r){      
float area ;
area=3.142*r*r;
return area;
    
}