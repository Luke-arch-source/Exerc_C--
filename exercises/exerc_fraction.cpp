#include <iostream>
#include <locale>
#include <math.h>

using namespace std;


int main(){
	//Programa que calcule a soma entre duas fra��es
	
	//Vari�veis para os denominadores e para os numeradores
	int n1, d1, n2, d2;
	
	//Vari�veis para o numerador e para o denominador finais
	int nf = 0;
	int df = 0;
	
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "Numerador da primeira fra��o: ";
	cin >> n1;
	
	cout << "Denominador da primeira fra��o: ";
	cin >> d1;
	while(d1 == 0){
		cout << "O denominador desta fra��o n�o pode ser nulo!";
		cout << "\nTente de novo: ";
		cin >> d1;
	}
	
	cout << "Numerador da segunda fra��o: ";
	cin >> n2;
	
	cout << "Denominador da segunda fra��o: ";
	cin >> d2;
	while(d2 == 0){
		cout << "O denominador desta fra��o n�o pode ser nulo!";
		cout << "\nTente de novo: ";
		cin >> d2;
	}
	
	cout << " Primeira fra��o: " << n1 << " / " << d1 << ".";
	cout << "\n Segunda fra��o: " << n2 << " / " << d2 << ".";
	
	if(d1 == d2){
		nf = n1 + n2;
		df = d1;
	} else {
		nf = n1 * d2 + n2 * d1;
		df = d1 * d2;
	}
	
	cout << "\nSoma ou total entre as duas fra��es: " << nf << " / " << df << ".";
	
	return 0;
}
