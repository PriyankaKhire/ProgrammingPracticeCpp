#include<iostream>
#include<map>
using namespace std;

void permutation(string str, int a[], string result)
{
  //Once the result array is filled then print it out
  if(str.size() == result.size())
  {
    cout<<result<<endl;
    return;
  }
  
  for(int i = 0; i<str.size(); i++)
  {
    if(a[i] > 0)
    {
      //Add it to the result
      a[i] --;
      permutation(str, a, result+str[i]);
      a[i] ++;
    }
  }
  
}

void foo(string str)
{
  int n = str.size();
  int arr[n];
  
  //initialise the array FALSE
  for(int i = 0; i<n; i++)
  {
    arr[i] = 1;
  }
  
  permutation(str, arr, "");
}

int main()
{
  foo("abc");
  return 0;
}