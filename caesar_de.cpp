#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string m,t;
	int key=3;
	cout<<"Enter msg to be decrypted: ";
	cin>>m;
	for(int i=0;i<m.size();i++){
		t+=(m[i] - 'A' - key)%26 + 'A';
	}
	cout<<"\nDecrypted message is: "<<t;
	return 0;
}

