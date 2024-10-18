#include <iostream>



using namespace std;
int main(){
	int n1,n2,n3,n4,aux;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	if(n4 < n1){
		aux = n1;
		n1 = n4;
		n4 = aux;
	}
	
	if(n4 < n2){
		aux = n2;
		n2 = n4;
		n4 = aux;
	}
	
	if(n4 < n3){
		aux = n3;
		n3 = n4;
		n4 = aux;
	}
	
	
	cout << n1 << " " << n2 << " " << n3 << " " << n4;
return 0;
}
