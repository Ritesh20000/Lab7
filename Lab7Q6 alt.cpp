#include<iostream>
using namespace std;

//function to find reverse
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
	cout <<"enter number to reverse"<<endl;
	cin >>n;
	//call function
	nnt = foo(n, nnt);
	cout <<nnt<<endl;
}
