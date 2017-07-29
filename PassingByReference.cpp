#include <iostream>
#include <string>
using namespace std;

void passingByReference(int &var)
{
    cout<<"Passing values by reference is used to Returning multiple values via out parameters"<<endl;
    cout<<"Variable value in passingByReference "<<var<<endl;
    cout<<"Variable address in passingByReference function "<<&var<<endl;
    var++;
}
void passingByValue(int var)
{
    cout<<"Variable value in passingByValue "<<var<<endl;
    cout<<"Variable address in passingByValue function "<<&var<<endl;
    var++;
}

int main()
{
  
  int var = 5;
  //Remember & is used to access the memory of a variable.
  cout<<"Variable value "<<var<<endl;
  cout<<"Variable address "<<&var<<endl;
  passingByReference(var);
  cout<<"Variable value "<<var<<endl;
  passingByValue(var);
  cout<<"Variable value "<<var<<endl;//not 7 but 6
  return 0;
}
