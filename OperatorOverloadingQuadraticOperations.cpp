//============================================================================
// Name        : Assignment.cpp
// Description : Complex
//============================================================================

#include<iostream>
#include<cmath>
using namespace std;
class Quadratic
{
	int a;
	int b;
	int c;
public :
	Quadratic();
	Quadratic operator +(Quadratic q);
    void eval(int n);
    void solve();
	friend ostream & operator <<(ostream &, Quadratic &);
	friend istream & operator >>(istream &, Quadratic &);
};
Quadratic :: Quadratic()
{
 a=0;
 b=0;
 c=0;
}
Quadratic Quadratic:: operator +(Quadratic q)
{
	Quadratic temp;
	temp.a=a+q.a;
	temp.b=b+q.b;
	temp.c=(c)+q.c;
	return temp;
}

ostream & operator <<(ostream &out,Quadratic &q)
{
  out<<q.a<<"x^2+"<<q.b<<"x+"<<q.c<<endl;
  return out;

}
istream & operator >>(istream &in,Quadratic &q)
{
  cout<<"Enter coefficient of second degree term ";
  in>>q.a;
  cout<<"Enter coefficient of first degree term ";
  in>>q.b;
  cout<<"Enter constant ";
  in>>q.c;
  return in;
}
void Quadratic :: eval(int n)
{
	Quadratic temp;
	temp.a=(a*n*n);
	temp.b=(b*n);
	temp.c=c;
	int sum = temp.a+temp.b+temp.c;
	cout<<"Value of expression for x="<<n<<"is "<<sum;
}
void Quadratic :: solve()
{
	float d,s1,s2;
	d=(b*b)-(4*a*c);
	d=sqrt(d);
	s1=(d-b)/(2*a);
	s2=(-d-b)/(2*a);
	cout<<"The two solutions are "<<s1<<" "<<s2<<endl;
}
int main()

{
    int y,n;
	Quadratic q1,q2;
	cout<<"First expression : "<<endl;
	cin>>q1;
	cout<<"Second expression : "<<endl;
	cin>>q2;
	do
	{
     cout<<"Enter: \n 1 to solve expression 1 \n 2 to solve expression 2 \n 3 to find value of expression 1 \n 4 to find value of expression 2 \n 5 to exit \n";
     cin>>y;
     switch(y)
     {
     case 1:q1.solve();
    	 break;
     case 2: q2.solve();
    	 break;
     case 3: cout<<"Enter value to solve for ";
             cin>>n;
             cout<<q1;
             q1.eval(n);
             break;
     case 4: cout<<"\n Enter value to solve for ";
             cin>>n;
             cout<<q2;
             q2.eval(n);
             break;
     case 5: break;
     default : cout<<"\n Invalid option enter again ";
     }
	}while(y!=5);
return (0);
}

