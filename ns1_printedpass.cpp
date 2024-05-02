#include<iostream>
#include<conio.h>
using namespace std;
string user;
char pin[100];
string entered_pass;
string def_user="admin";
string def_pass="admin";
string pass=def_pass;



void change_pass(){
    int k=0;
    cout<<"Enter  password : ";
    while(pin[k-1]!='\r') {
        pin[k]=getch();
        if(pin[k-1]!='\r') {
            cout<<"*";
        }
        k++;
    }
    pin[k-1]='\0';
    pass = pin;
    cout<<"\nYou entered : "<<pin<<endl;

}


void view_pass(){
	cout<<"Your password: "<<pass;
}

int main(){

	for(int i=0;i<4;i++){
		cout<<"enter username: ";
		cin>>user;
		cout<<"\nenter password: ";
		cin>>entered_pass;
		if(user==def_user && pass==entered_pass){
			cout<<"Login succesful\n";
			char c;
			cout<<"\nEnter your choice:\n";
			cout<<"1. Change password";
			cout<<"\n2. View password\n";
			cin>>c;
			switch(c){
				case '1':{
					change_pass();
					break;
				}
				case '2':{
					view_pass();
					break;
				}
			}


		}
		else{
			cout<<"\nWrong credentials, try again\n";
		}
	}
	return 0;
}
