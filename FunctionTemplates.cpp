//============================================================================
// Name        : Assignment18.cpp
// Author      : Shruti
// Roll No     : 21168
// Description : Selection Sort using Templates
//============================================================================

#include <iostream>
using namespace std;
template <typename T>
void SelectionSort(int n){
	T *arr;
	int i,j, min=0, temp;

	arr = new T[n];
	cout<<"Enter elements \n";
    for(i=0;i<n;i++)
    	cin>>arr[i];

    for(i=0;i<n;i++){
    	min=i;
    	for(j=i+1;j<n;j++){
    		if(arr[j]<arr[min])
    			min=j;
    	}
    	if(min!=i)
    	{
    		temp=arr[i];
    		arr[i]=arr[min];
    		arr[min]=temp;
    	}
    }

    for(i=0;i<n;i++)
        cout<<arr[i]<<"	";
}
int main(){
	int n,x;
    do{
    	cout<<"\nEnter \n1 for a integer array, \n2 for a float array, \n3 to exit \n";
    	cin>>x;
    	switch(x){
			case 1: cout<<"Enter size of array you want to sort \n";
					cin>>n;
				    SelectionSort<int>(n);
					break;
			case 2: cout<<"Enter size of array you want to sort \n";
					cin>>n;
				    SelectionSort<float>(n);
					break;
			case 3: break;
			default: cout<<"Invalid menu number! Please enter again \n";
    	}
    }while(x!=3);
    return 0;
}
