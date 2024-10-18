#include <iostream>

using namespace std;
int main(){
	int grupo, idade;
	float peso;
	
	cin >> idade >> peso;
	if(idade<20){
		if(peso < 60){
			grupo = 9;
		}else if(peso >= 60 && peso <= 90){
			grupo = 8;
		}else if(peso>90){
			grupo = 7;
		}
	}else if(idade >= 20 && idade <= 50 ){
		if(peso < 60){
			grupo = 6;
		}else if(peso >= 60 && peso <= 90){
			grupo = 5;
		}else if(peso>90){
			grupo = 4;
		}
	}else if(idade > 50){
		if(peso < 60){
			grupo = 3;
		}else if(peso >= 60 && peso <= 90){
			grupo = 2;
		}else if(peso>90){
			grupo = 1;
		}
	}
	
	cout << grupo;	
return 0;
}
