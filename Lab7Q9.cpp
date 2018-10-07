#include<iostream>
using namespace std;

//Writting a program to find reverse of any number
int foo(int n,int nnt){
//nnt is nn't as in the memen't(s)
	if(n==0){
        return nnt;	
	}
	else{
	return foo(n/10,nnt*10+(n%10));	//function to call recursively
	}
}
int main(){
	int n;
	int nnt;
	cout <<"enter number to check if palindromic"<<endl;
	cin >>n;
	//call function
	nnt = foo(n, nnt);
	if (n == nnt){
	cout <<"the number is palindromic" <<endl;}
	else{
	cout <<"no the number is not palindromic" <<endl;
	
}
}
