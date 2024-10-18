#include <iostream>

using namespace std;
int main(){
	float a, b;
	int x;
	
	cin >> a >> b >> x;
	
	switch(x){
		case 1:
			cout << (a+b)/2;
			break;
		case 2:
			if(a < b) cout << (b-a);
			else cout << (a-b); 
			break;
		case 3:
			cout << a*b;
			break;
		case 4:
			cout << a/b;
			break;
		default:
			cout << "ERRO";
			break;
	}
return 0;
}