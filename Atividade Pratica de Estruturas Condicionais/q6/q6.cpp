#include <iostream>

using namespace std;
int main(){
	char classe;
	double peso, altura;
	
	cin >> peso >> altura;
	if(altura<1.20){
		if(peso < 60){
			classe = 'A';
		}else if(peso >= 60 && peso <= 90){
			classe = 'D';
		}else if(peso>90){
			classe = 'G';
		}
	}else if(altura >= 1.20 && altura <= 1.70 ){
		if(peso < 60){
			classe = 'B';
		}else if(peso >= 60 && peso <= 90){
			classe = 'E';
		}else if(peso>90){
			classe = 'H';
		}
	}else if(altura > 1.70){
		if(peso < 60){
			classe = 'C';
		}else if(peso >= 60 && peso <= 90){
			classe = 'F';
		}else if(peso>90){
			classe = 'I';
		}
	}
	
	cout << classe;	
return 0;
}