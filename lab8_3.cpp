#include<iostream>
using namespace std;

char before(char x){
	if (x>65&&x<91){
		x = x-1;
	    return x;
	}
	else if (x==65){
		x = x+25;
		return x;
	}
	else{
		return '0';
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
