//============================================================================
// Name        : Assignment8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Rational
{
	float p;
	float q;
public:
void operator =(Rational r)
{
	if((p==r.p)&&(q==r.q))
		cout<<"Equal \n";
	else
		cout<<"Not Equal \n";
}
Rational operator +(Rational r)
{
	Rational temp;
	if(q==r.q)
	{
		temp.p=(p+r.p);
		temp.q=q;
		return temp;
	}
	else
	{
	   temp.p=(p*r.q)+(q*r.p);
	   temp.q=(q*r.q);
	   return temp;
	}
}
Rational operator -(Rational r)
{
	Rational temp;
	temp.p=((p*r.q)-(q*r.p));
	temp.q=(q*r.q);
	return temp;
}
Rational operator *(Rational r)
{
	Rational temp;
	temp.p=(p*r.p);
	temp.q=(q*r.q);
	return temp;
}
Rational operator /(Rational r)
{
	Rational temp;
	temp.p=(p*r.q);
	temp.q=(q*r.p);
	return temp;
}
void operator <(Rational r)
{
	float d,e;
	d=(p/q);
	e=(r.p/r.q);
	if(d<e)
	  cout<<p<<"/"<<q<<" is less than "<<r.p<<"/"<<r.q;
	else
	  cout<<p<<"/"<<q<<" is not less than "<<r.p<<"/"<<r.q;
}
void operator >(Rational r)
{
	float d,e;
	d=p/q;
	e=r.p/r.q;
	if(d>e)
	cout<<p<<"/"<<q<<" is greater than "<<r.p<<"/"<<r.q;
	else
	cout<<p<<"/"<<q<<" is not greater than "<<r.p<<"/"<<r.q;
}
void Accept()
{
	cout<<"Enter rational number \n Numerator ";
	cin>>p;
    cout<<"Denominator ";
	cin>>q;
}
void Display()
{
	if(q==0)
		cout<<"Not Rational \n";
	else if(p==0)
		cout<<p;
	else if(p==q)
		cout<<"1";
	else
    	cout<<p<<"/"<<q;
}
void Simplify()
{
	int a,b;
	a=p;
	b=q;
	do
	{
	  if(a>b)
	   a=a-b;
      else if(b>a)
	   b=b-a;
	}while(a!=b);

	p=p/a;
	q=q/a;
}
};
int main() {
	Rational ob1,ob2;
    int x;
    cout<<"        RATIONAL NUMBER OPERATIONS        \n ";
    ob1.Accept();
    ob2.Accept();
	do
	{
		cout<<"\n Enter: \n 1. Simplify \n 2. Add \n 3. Subtraction \n 4. Multiplication \n 5. Division \n 6. Greater than \n 7. Less than \n 8. Equal or not \n 9. Exit";
		cin>>x;
	     switch(x)
	         {
	            case 1: ob1.Simplify();
	                    ob2.Simplify();
	                    cout<<"Simplified: \n";
	                    ob1.Display();
	                    cout<<endl;
	                    ob2.Display();
                        break;
	            case 2: cout<<"Addition is \n";
	                    (ob1+ob2).Simplify();
                        (ob1+ob2).Display();
                        break;
	            case 3: cout<<"Subtraction is \n";
	                    (ob1-ob2).Simplify();
	                    (ob1-ob2).Display();
                        break;
	            case 4: cout<<"\n Multiplication is \n";
                        (ob1*ob2).Simplify();
	                    (ob1*ob2).Display();
                        break;
	            case 5: cout<<"\n Division is \n";
	                    (ob1/ob2).Simplify();
	                    (ob1/ob2).Display();
                        break;
	            case 6: cout<<endl;
	                    ob1<ob2;
                        break;
	            case 7: cout<<endl;
       	                ob1>ob2;
       	                break;
	            case 8: ob1=ob2;
	                    break;
	            case 9: break;
	            default: cout<<"Invalid option. Please enter again. \n";
	         }
	  }while(x!=9);
	return 0;
}
