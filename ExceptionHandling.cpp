//============================================================================
// Name         : Assignment14.cpp
// Author       : Shruti
// Roll no.     : 21168
// Description  : Exception Handling
//============================================================================

#include <iostream>
#include <exception>
using namespace std;
int main() {
int age,v;
float inc;
string city;

cout<<"Enter Age :";
cin>>age;
cout<<"Enter Income :";
cin>>inc;
cout<<"Enter Vehicle type (4 wheeler or 2 wheeler :";
cin>>v;
cout<<"Enter city :";
cin>>city;

try{
	if((age<18)||(age>55))
	  throw age;
	else if((inc<50000)||(inc>100000))
	  throw inc;
	else if(v!=4)
	  throw 1;
	else if(city!="Pune" || city!="Mumbai" || city!="Chennai" || city!="Bangalore")
	  throw 'i';
}
catch(int a){
	cout<<"Age should be in between 18 and 55!\n";
}
catch(float b){
	cout<<"Income should be in between 50,000 and 1,00,000! \n";
}
catch(char c){
	cout<<"City must be either of the following : Bangalore, Chennai, Mumbai, Pune! \n";
}
catch(...){
	cout<<"Vehicle must be a 4 wheeler! \n";
}
return 0;
}
