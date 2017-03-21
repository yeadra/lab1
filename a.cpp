#include<iostream>

using namespace std;

int main(void){
	int i = 0 ;
	cin >> i ;
	while ( i != 1 ){
		cout << i << endl ;
		if (i%2 != 0){
			i = 3*i+1;
		}
		else{ 
			i = i/2;
		}
	
	}
	cout << i <<endl;
return 0 ;
}

 
