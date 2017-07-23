#include<iostream>
#include<map>
using namespace std;

void foo(string str)
{
  int current_index = str.size()-1;
  bool initial_space = false;
  for(int i=str.size()-1; i>=0; i--)
  {
    if(str[i] == ' ' && initial_space == true)
    {
      //copy %20 in the current current_index
      str[current_index] = '0';
      current_index--;
      str[current_index] = '2';
      current_index--;
      str[current_index] = '%';
      current_index--;
    }
    else if(str[i] != ' ')
    {
      initial_space = true;
      str[current_index] = str[i];
      current_index--;
    }
  }
  cout<<str;
}

int main()
{
  foo("Mr John smith    ");
  return 0;
}