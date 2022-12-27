#include<iostream>
using namespace std;

void printO(int N , int M){
	if(N > 0){
		for(int i = 0 ; i < N ; i++){
			if(M > 0){
				for(int x = 0 ; x < M ; x++){
					cout <<  "O";
				}
				cout << "\n";
			}
			else{
				cout << "Invalid input";
				break;
			}
			}
		}
	else{
		cout << "Invalid input";
	}
}

//Write the function printO() here

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}

//Kong >w<


