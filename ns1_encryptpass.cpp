#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

string file="pass.txt";
string user;
string entered_pass;

string def_user="admin";
string def_pass="admin";
string pass=def_pass;

int key=5;
char pin[100];

void change_pass(){
	int k=0;
	fstream fout;
	fout.open("pass.txt", fstream::out);
	cout<<"Enter password: ";
	while(pin[k-1]!='\r'){
		pin[k]=getch();
		int temp=(pin[k]-key);
		fout<<(char)temp;
		if(pin[k-1]!='\r')
			cout<<"*";
		k++;
	}
	pin[k-1]='\0';
	pass=pin;
	fout.close();
	cout<<"\nFile saved\n";

}


void view_pass(){
	fstream fin;
	char c;
	fin.open("pass.txt",fstream::in);
	while(fin>>noskipws>>c){
		int temp=(c+key);
		cout<<(char)temp;

	}
	cout<<"\nYour password: ";
	cout<<pass<<endl;
	fin.close();
}



int main() {
	char ch;
	do{
		cout<<"Enter your username: \n";
    cin>>user;
    cout<<"Enter your password: \n";
    cin>>entered_pass;

    if (user == def_user && entered_pass == pass){
        cout<<"Login successfull!!\n";
        
            char c;
            cout<<"Enter your choice: \n";
            cout<<"1. Change password \n";
            cout<<"2. View password \n";
            cin>>c;
	        cin.ignore();

	        switch (c) {
	            case '1': {
		            change_pass();
		            break;
	            }
	            case '2': {
		            view_pass();
		            break;
	            }
	        
        	}
        	cout<<"\nDo u want to continue? [y/n]: ";
        	cin>>ch;
        
        }
        else{
        	cout<<"Wrong credentials, try again\n";
        }
	}while(ch=='y');
    
    return 0;    
}