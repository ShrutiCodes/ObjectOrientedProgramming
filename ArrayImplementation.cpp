//============================================================================
// Name        : Assignment4.cpp
// Author      : 
// Version     :
// Roll Num.   : 21168
// Description : CppArray Assignmnent 4
//============================================================================

#include <iostream>
using namespace std;
class CppArray
{
	int arr[80];
public:
	bool RangeCheck(int r1, int r2);
	int CalcSize();
	void operator =(CppArray &c);
	friend ostream & operator <<(ostream &, CppArray &);
	friend istream & operator >>(istream &, CppArray &);
};
int CppArray :: CalcSize()
{
	int l=0,i;
	for(i=0;arr[i]!=0;i++)
		 l++;
	return l;
}
void CppArray :: operator =(CppArray &c)
{
	int i,l;
	l=c.CalcSize();
	for(i=0;i<l;i++)
	{
		arr[i]=c.arr[i];
	}
	arr[i]=0;
}
ostream & operator <<(ostream &out, CppArray &c)
{
	int i,l;
	l=c.CalcSize();
	for(i=0;i<l;i++)
    out<<c.arr[i]<<" ";
    return out;
}
istream & operator >>(istream &in, CppArray &c)
{
	int i,size;
    cout<<"Enter size";
	cin>>size;
	for(i=0;i<size;i++)
	{
		in>>c.arr[i];
	}
	c.arr[size]=0;
	return in;
}
bool CppArray :: RangeCheck(int r1, int r2)
{
	int i,l,f=0;
	l=CalcSize();
	for(i=0;i<l;i++)
	{
		if((arr[i]>=r1)&&(arr[i]<=r2))
		   f++;
		else
			return false;
	}
	if(f==l)
		return true;
}
int main() {
	CppArray a1,a2;
	int lb,ub;
	bool c;
	cout<<"Enter array 1 \n";
	cin>>a1;
	cout<<"Size of array "<<a1.CalcSize()<<endl;
	cout<<"Copied array : \n";
	a2=a1;
	cout<<a2;
	cout<<"\n Enter range in the form : \n Lower bound \n Upper bound \n";
	cin>>lb>>ub;
	c=a1.RangeCheck(lb,ub);
	if(c==true)
		cout<<"All elements within range "<<lb<<" to "<<ub<<endl;
	else
		cout<<"All elements NOT within range! \n";
	return 0;
}
