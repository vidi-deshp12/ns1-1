#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string m,t;
	int key=3;
	cout<<"Enter msg to be encrypted(in caps): ";
	cin>>m;
	for(int i=0;i<m.size();i++){
		t+=(m[i] - 'A' + key)%26 + 'A';
	}
	cout<<"\nEncrypted message is: "<<t;
	return 0;
}

/*


Certainly! Let's break down the line t += (m[i] - 'A' + key) % 26 + 'A'; with an example.

Suppose we have the input message "HELLO" and the key key = 3.

Character 'H':
ASCII value of 'H': 72
Subtracting 'A' (ASCII value 65) from 'H': 72 - 65 = 7
Adding the key 3: 7 + 3 = 10
Taking the result modulo 26: 10 % 26 = 10
Adding 'A' (ASCII value 65) to get back to the range of uppercase letters: 10 + 65 = 75
So, the encrypted character corresponding to 'H' is 'K'.


Character 'E':
ASCII value of 'E': 69
Subtracting 'A' (ASCII value 65) from 'E': 69 - 65 = 4
Adding the key 3: 4 + 3 = 7
Taking the result modulo 26: 7 % 26 = 7
Adding 'A' (ASCII value 65) to get back to the range of uppercase letters: 7 + 65 = 72
So, the encrypted character corresponding to 'E' is 'H'.

*/
