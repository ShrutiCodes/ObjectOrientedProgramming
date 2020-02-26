//============================================================================
// Name        : Assignment6.cpp
// Author      : Shruti
// Version     :
// Description : Classes in C++
//============================================================================

#include <iostream>
using namespace std;

class StudentDetails{
	string name;
	int roll;
	string clas;
	int div;
public :
    StudentDetails()
     {
       name="Name";
       roll=1;
       clas="SE";
       div=1;
     }
    ~StudentDetails()
    {
    	cout<<"\n Student Deallocated";
    }
    StudentDetails(string name, string clas, int roll, int div)
    {
    	this->name=name;
    	this->clas=clas;
    	this->roll=roll;
    	this->div=div;
    }
    inline void Display()
    {
    	cout<<"Inline function called "<<name<<" "<<clas<<" "<<roll<<" "<<div;
    }
	friend class PersonalDetails;
};
class PersonalDetails
{
	int dob[3];
	char bg[2];
	char *p;
public:
	 PersonalDetails()
      {
		 dob[0]=24;
		 dob[1]=11;
		 dob[2]=1999;
		 bg[0]='O';
		 bg[1]='+';
       }
	 ~PersonalDetails()
	 {
		 cout<<"\n Personal Deallocated ";
		 delete p;
	 }
	 void AcceptP(StudentDetails&);
	 void DisplayP(StudentDetails&);
};
void PersonalDetails :: AcceptP(StudentDetails& s)
{
	int size;
	cout<<"Enter name ";
    cin>>s.name;
	cout<<"Enter roll number ";
	cin>>s.roll;
	cout<<"Enter class ";
	cin>>s.clas;
	cout<<"Enter division ";
	cin>>s.div;
	cout<<"Enter date of birth in the format: DD MM YYYY ";
	cin>>dob[0]>>dob[1]>>dob[2];
    cout<<"Enter blood group in the format: type, + or -";
    cin>>bg[0]>>bg[1];
    cout<<"Enter size of address ";
    cin>>size;
    p=new char[size];
    cout<<"Enter address ";
    cin>>p;
}
void PersonalDetails :: DisplayP(StudentDetails&s)
{
	cout<<"Name "<<s.name<<endl;
	cout<<"Roll number "<<s.roll<<endl;
	cout<<"Class "<<s.clas<<endl;
	cout<<"Division "<<s.div<<endl;
	cout<<"Date of Birth "<<dob[0]<<"/"<<dob[1]<<"/"<<dob[2]<<endl;
	cout<<"Blood group "<<bg[0]<<bg[1]<<endl;
	cout<<"Address "<<p;
	cout<<endl;
}
int main() {
    StudentDetails s,s1("Name","FE",68,1);
    PersonalDetails p;
    p.AcceptP(s);
    p.DisplayP(s);
    s1.Display();
	return 0;
}
