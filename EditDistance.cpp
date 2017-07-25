#include<iostream>
#include<string.h>
using namespace std;

int fill_first_row_col(int rows, int cols, int matrix[][], string str1, string str2)
{
  // fill first cell
  if(str1[0] != str2[0])
  {
    matrix[0][0] = 1;
  }
  else
  {
    matrix[0][0] = 0;
  }
  //fill first row
   for(int col = 1; col<cols; col++)
  {
    if(str2[0] != str1[col])
    {
      matrix[0][col] = matrix[0][col-1]+1; 
    }
    else
    {
      matrix[0][col] = matrix[0][col-1]
    }
  }
  //fill first col
  for(int row = 1; row< rows; row++)
  {
    if(str1[0] != str2[row])
    {
      matrix[row][0] = matrix[row][0]+1;
    }
    else
    { 
      matrix[row][0] = matrix[row][0];
    }
  }
  
  return matrix;
}

void foo(string str1, string str2)
{
  //Declare a matrix
  int rows = str2.size();
  int cols = str1.size();
  int matrix[rows][cols];
  
  matrix = fill_first_row_col(rows, cols, matrix, str1, str2);
  
  //Start filling the matrix
  for(int row = 0; row<rows; row++)
  {
    for(int col = 0; col<cols; col++)
    {
      cout<<matrix[row][col]<< " ";
    }
    cout << endl;
  }
}

int main()
{
  foo("abc", "edf");
  return 0;
}