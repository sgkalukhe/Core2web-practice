#include<iostream>
using namespace std;

int squre(int x) {
	return x*x;
}

float square(float x) {
	return x*x;
}

int main(){
	cout<<square(5)<<endl;
	cout<<square(5.5f)<<endl;
return 0;
}
