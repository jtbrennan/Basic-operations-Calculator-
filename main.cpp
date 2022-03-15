// This is a Simple Calculator Program in C++

#include <iostream> 
using namespace std;


int main()
{
  char oper;

// Creating the float variables for the person two Inputs
  float a;
  float b;

  cout << "Enter two Numbers:";

  cin>> a>> b;

  cout << "Enter operator: ";

  cin>> oper;

// This is a switch statemnt with cases for all of the different operators
  switch (oper)
  {
    case '+':
        cout << a + b;
        break;
    
    case '-':
        cout << a - b;
        break;
    
    case '*':
        cout << a * b;
        break;
    
    case '/':
        cout << a / b;
        break;
    
    default:
        cout << "Error! Incorrect operator";
        break;
  } 
  return 0;
}
