//============================================================================
// Name        : Assignment23.cpp
// Author      : Shruti
// Roll No.    : 21168
// Description : STL Dequeue
//============================================================================

#include <iostream>
#include <deque>
using namespace std;
void showdeque(deque<int>dq){
	cout<<"Dequeue: ";
	deque<int> :: iterator it;
	for(it=dq.begin(); it!=dq.end(); it++){
		cout<<*it<<" ";
	}
}
int main() {
	int n,x,v;
	deque<int>dq;
	cout<<"Demonstrating DEQUEUE \n";
	cout<<"Enter number of integer values: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter integer value: ";
		cin>>v;
		cout<<"Enter 1 to add at the end, and 2 to add at front \n";
		cin>>x;
		switch(x){
			case 1: dq.push_back(v);
					break;
			case 2: dq.push_front(v);
					break;
			default: cout<<"Invalid input! Please enter again. \n";
		}
	}
	showdeque(dq);
	return 0;
}
