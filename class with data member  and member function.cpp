   // C++ Program to Store value entered by user in
// three dimensional array and display it.
#include <iostream>
using namespace std;
int main() { 
    // This array can store upto 18 elements (2*3*3)
     int a[2][3][3]={
         {{5,3,6},{1,7,9},{2,8,4}},
         {{4,7,1},{5,8,9},{6,3,2}}
         };
         int x,y,z;
          // Displaying the values with proper index.
          //use of nested for loop
         for (x=0;x<2;x++)
         {
             //access rows of the array
             for (y=0;y<3;y++)
             {
                  //access columns of the array
                 for (z=0;z<3;z++)
                 {
             cout<<a[x][y][z]<<",";
             }
         }
     }
    return 0;
}