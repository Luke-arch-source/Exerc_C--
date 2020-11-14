#include <iostream>
#include <cstdlib>
#include <locale>


using namespace std;

int main(){
	
	/*Exerc�cio 1: Programa que calcula o m�dulo da for�a peso aplicada sobre um corpo
	em um planeta espec�fico. O usu�rio poder� escolher o planeta por meio de n�meros.
	*/
	
	
	setlocale(LC_ALL, "portuguese");
	//Vari�vel para a escolha do planeta
	int choice;
	//Vari�veis para a acelera��o gravitacional do planeta, peso no corpo escolhido e massa do corpo atra�do
	double aceleracao_gravit = 0, peso, m;
	
	//Exibi��o dos n�meros de cada op��o
	cout << "[1] - Terra\n";
	cout << "[2] - Marte\n";
	cout << "[3] - J�piter\n";
	cout << "[4] - Netuno\n";
	
	
	//Inserindo o valor da massa
	cout << "Massa do corpo atra�do pelo planeta, em kg: ";
	cin >> m;
	//Fun��o deste la�o de repeti��o: Impedir que m receba um valor nulo ou negativo
	while(m <= 0){
		cout << "Massa inv�lida! Digite outra: ";
		cin >> m;
		
	}
	//Escolha do planeta
	cout << "Escolha um planeta: ";
	cin >> choice;
	//Fun��o deste la�o de repeti��o: Impedir uma escolha inv�lida
	while(choice > 4 || choice < 1){
		cout << "Escolha inv�lida! Tente de novo: ";
		cin >> choice;
	}
	
	//Estrutura condicional - Armazenar um valor na vari�vel aceleracao_gravit
	switch(choice){
		case 1:
			aceleracao_gravit = 10;
			break;
		case 2:
			aceleracao_gravit = 3.7;
			break;
		case 3:
			aceleracao_gravit = 24.79;
			break;
		case 4:
			aceleracao_gravit = 11.15;
			break;
	}
	
	//C�lculo do valor da for�a peso + Exibi��o do valor
	peso = m * aceleracao_gravit;
	/*Esse valor � o produto do valor da massa do corpo pelo m�dulo da acelera��o gravitacional do
	planeta escolhido, em m/s�.
	*/
	cout << "M�dulo da for�a peso aplicada sobre o corpo no planeta escolhido: " << peso << " N.";
	
	
	return 0;
}

























