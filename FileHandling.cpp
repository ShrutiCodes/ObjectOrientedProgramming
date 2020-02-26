//============================================================================
// Name        : Assignment15.cpp
// Author      : Shruti
// Roll No     : 21168
// Description : File Operations : Read and Write
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;
int main() {

	ofstream out;
	out.open("FileOps.txt",ios::out);

    if(!out)
    	cout<<"Sorry!\n";
    else{
    	out<<"Hello World! You will find this text in your file!"<<endl;
    	out.close();
    }

    string line;
    ifstream in;
    in.open("FileOps.txt", ios::in);

    if(!in)
    	cout<<"Oops! Something went wrong. The file you are trying to open does not exist!";
    else{
    	while(getline(in,line))
    		cout<<line;
    	in.close();
    }

	return 0;
}
