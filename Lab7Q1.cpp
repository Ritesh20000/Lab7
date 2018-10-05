#include <iostream> 
using namespace std;
//declare function to call
int power(int n, int p){
	if(p == 0)
	return 1;
	else
	return n*power(n, p-1);
}
int main(){
	int n; int p;
	int i;
	int b;
	
	cout <<"enter the number which is to be raised to the power"<<endl;
	cin >> n;
	cout <<"enter power"<<endl;
	cin >> p;
	cout << "the answer is " << power(n, p)<<endl;
return 0;
}
	

