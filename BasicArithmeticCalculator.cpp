//============================================================================
// Name        : Assignment5.cpp
// Author      : Shruti
// Description : Arithmetic Operations
//============================================================================

#include <iostream>
using namespace std;
int main() {
	float o1,o2,x;
	char z,op;
	do
	{
	  cout<<"Enter first operand, operator, second operand \n";
	  cin>>o1>>op>>o2;
	  switch(op)
	  {
	  case '+': x=o1+o2;
	            cout<<"Answer = "<<x<<endl;
	  break;
	  case '-': x=o1-o2;
                cout<<"Answer = "<<x<<endl;
	  break;
	  case '*': x=o1*o2;
                cout<<"Answer = "<<x<<endl;
	  break;
	  case '/': x=o1/o2;
                cout<<"Answer = "<<x<<endl;
      break;
	  default: cout<<"Invalid input. Please enter again \n";
	  }
	  cout<<"Perform another operation? Enter y/n \n";
	  cin>>z;
	}while(z!='n');

	return 0;
}
