#include <iostream>
using namespace std;
//function to call
int foo(int n){
	
	//condition
	if(n == 0 ){
	return 0;
}
	//call function
	else if(n%2 == 0)
	cout <<n<<endl;
	return foo(n-1);
}
//main
int main(){
	cout << "enter number upto which to print all even naturals" <<endl;
	int n;
	cin >>n;
	cout << foo(n) <<endl;
return 0;
}

	
