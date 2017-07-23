#include<iostream>
#include<map>
using namespace std;

/*
Given a string, Determine if the string has all unique characters.
*/

//Use hash table
void approach_one(string str)
{
  map<char, bool>hashTable;
  
  //Put string in hash table as you read it.
  //Dont use strlen here, it only works for null trrminated string.
  for(int i = 0; i<str.size(); i++)
  {
    if(hashTable[str[i]])
    {
      cout<<"The string contains duplicates";
      exit(0);
    }
    else 
    {
      hashTable[str[i]] = true;
    }
  }
  cout<<"The string does not contain dublupates";
}

void second_approach(string str)
{
  //use 2 loops
  for(int current_char = 0; current_char<str.size()-1; current_char++)
  {
    for(int next_char = current_char+1; next_char <str.size(); next_char++)
    {
      if(str[current_char] == str[next_char])
      {
        cout <<"string is not unique";
        exit(0);
      }
    }
  }
  
  cout<<"string is unique";
}

int main()
{
  approach_one("abcd"); 
  second_approach("abcda");
  return 0;
}