
//Appending of file

#include<iostream>
#include<fstream>
using namespace std;

int main(){

	//Appending  a file
	
	ofstream appendfile("example.txt", ios::app);

	if(!appendfile){
		cerr<<"Error file Appendeing"<<endl;
		return 1;
	}

	appendfile<< "This line is Appended file!"<<endl;

	cout<<"File Appended successfully!"<<endl;
        appendfile.close();
}
