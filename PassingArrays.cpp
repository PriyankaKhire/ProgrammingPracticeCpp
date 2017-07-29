#include <iostream>
#include <string>
using namespace std;

//The best ways to pass arrays is to make them global
// coz lets be real you wont have to do this in interview

// to pass 2D arrays the first [] can be empty but the second one should tell the size
//To pass 1D arrays the [] can be empty

//Remember when you are passing arrays this way you are passing them by reference
void foo(int a[][3])
{
    cout<<a<<endl;
}

int main()
{
  
  int a[3][3];
  foo(a);
  cout<<a<<endl;
  return 0;
}
