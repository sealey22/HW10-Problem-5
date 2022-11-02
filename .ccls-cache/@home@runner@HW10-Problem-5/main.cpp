//6. (Desk check) a. Determine the output of the following program:

#include <iostream>
#include <iomanip>

using namespace std;

const int ROWS = 2;
const int COLS = 3;
void arr(int [1][2] [COLS]);

int main(){  
  
  int nums[ROWS][COLS] = { {33,16,29},                         
                           {54,67,99}}; 
  
  arr(nums);  
  
  
  return 0;}

void arr(int (*val) [1][2]){  
  cout << endl << *(*val); 
  
  cout << endl << *(*val + 1);  
  
  cout << endl << *(*(val + 1) + 2);  
  
  cout << endl << *(*val) + 1;  
  
  return;
  }

//b. Given the declaration for val in the arr() function, is the notation val[1][2] valid in the function?