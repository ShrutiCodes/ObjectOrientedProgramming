//============================================================================
// Name        : Assignment13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class PersonalRecord
{
protected:
	string name;
	int age;
public:
	void acceptPersonal()
	{
		cin>>name;
		cin>>age;
	}
	void printPersonal()
	{
		cout<<"     Name: "<<name<<endl;
		cout<<"     Age: "<<age<<endl;
	}
};
class ProfessionalRecord
{
protected:
	string qual;
public:
	void acceptProfessional()
	{
		cin>>qual;
	}
	void printProfessional()
	{
		cout<<"     Qualification: "<<qual<<endl;
	}
};
class AcademicRecord
{
protected:
	float gpa;
	float att;
public:
	void acceptAcademic()
	{
		cin>>gpa;
		cin>>att;
	}
	void printAcademic()
	{
		cout<<"    GPA: "<<gpa<<endl;
		cout<<"     Attendance: "<<att<<endl;
	}
};
class Biodata : public PersonalRecord, public ProfessionalRecord, public AcademicRecord
{
public:
	 void AcceptBio()
	 {
		 cout<<"Enter name and age \n";
		 acceptPersonal();
		 cout<<"Enter qualification \n";
		 acceptProfessional();
		 cout<<"Enter GPA and attendance \n";
		 acceptAcademic();
	 }
	 void PrintBio()
	 {
		 cout<<"Biodata: \n";
		 cout<<"Personal Record: \n";
		 printPersonal();
		 cout<<"Professional Record: \n";
		 printProfessional();
		 cout<<"Academic Record: \n ";
		 printAcademic();
	 }
};
int main() {
	Biodata ob;
	ob.AcceptBio();
	ob.PrintBio();
	return 0;
}
