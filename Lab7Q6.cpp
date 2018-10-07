//include library
#include <iostream>
using namespace std;
//define functiont to call
int foo(int n){

	if(n==0){
}
		
        else{
	cout<<n%10;
	foo(n/10);
}
}		
//main function	
int main()
{
	int n; 
	cout<<"enter the number to reverse"<<endl;
	cin>>n;
	//calling the function
	 foo(n);
	
	return 0;
}
