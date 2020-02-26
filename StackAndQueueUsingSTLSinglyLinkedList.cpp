//============================================================================
// Name        : Assignment21.cpp
// Author      : Shruti
// Roll No.    : 21168
// Description : STL Stack and Queue using SLL
//============================================================================

#include <iostream>
#include <forward_list>
using namespace std;

void showstack(forward_list<int>l1){
	cout<<"Stack: ";
	for(int&c : l1)
		cout<<c<<" ";
}

void showqueue(forward_list<int>l2){
	cout<<"Queue: ";
	for(int&c : l2)
		cout<<c<<" ";
}
int main() {
	int n,x,y;
	forward_list<int>l1;
	forward_list<int>l2;
	forward_list<int>::iterator ptr;
	do{
	cout<<"\nEnter: \n1 for Stack \n2 for Queue \n3 to Exit \n";
	cin>>y;
	switch(y){
	case 1: cout<<"Demonstrating STACK \n";
			cout<<"Enter number of integer values you want to push ";
			cin>>n;
			cout<<"Enter values: ";
			for(int i=0; i<n;i++){
				cin>>x;
				l1.push_front(x);
			}
			showstack(l1);
			break;
	case 2: cout<<"Demonstrating QUEUE \n";
			cout<<"Enter number of integer values you want to push ";
			cin>>n;
			cout<<"Enter values: ";
			for(int i=0; i<n;i++){
				cin>>x;
				l2.push_after();
			}
			showqueue(l2);
			break;
	case 3: break;
	default: cout<<"Invalid input! Enter again \n";
	}
	}while(y!=3);
	return 0;
}
