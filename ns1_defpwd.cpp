#include<iostream>
#include<conio.h>
using namespace std;
string user;
string pwd;
string def_user="admin";
string def_pwd="admin";
int main(){
	cout<<"enter user name: ";
	cin>>user;
	cout<<"\nenter password: ";
	cin>>pwd;
	if(user==def_user && pwd==def_pwd)
		cout<<"\nLogin successful";
	else
		cout<<"\nWrong credentials";
	return 0;
}
