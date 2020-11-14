#include <iostream>
#include <cstdlib>
#include <locale>


using namespace std;

int main(){
	
	/*Exercício 1: Programa que calcula o módulo da força peso aplicada sobre um corpo
	em um planeta específico. O usuário poderá escolher o planeta por meio de números.
	*/
	
	
	setlocale(LC_ALL, "portuguese");
	//Variável para a escolha do planeta
	int choice;
	//Variáveis para a aceleração gravitacional do planeta, peso no corpo escolhido e massa do corpo atraído
	double aceleracao_gravit = 0, peso, m;
	
	//Exibição dos números de cada opção
	cout << "[1] - Terra\n";
	cout << "[2] - Marte\n";
	cout << "[3] - Júpiter\n";
	cout << "[4] - Netuno\n";
	
	
	//Inserindo o valor da massa
	cout << "Massa do corpo atraído pelo planeta, em kg: ";
	cin >> m;
	//Função deste laço de repetição: Impedir que m receba um valor nulo ou negativo
	while(m <= 0){
		cout << "Massa inválida! Digite outra: ";
		cin >> m;
		
	}
	//Escolha do planeta
	cout << "Escolha um planeta: ";
	cin >> choice;
	//Função deste laço de repetição: Impedir uma escolha inválida
	while(choice > 4 || choice < 1){
		cout << "Escolha inválida! Tente de novo: ";
		cin >> choice;
	}
	
	//Estrutura condicional - Armazenar um valor na variável aceleracao_gravit
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
	
	//Cálculo do valor da força peso + Exibição do valor
	peso = m * aceleracao_gravit;
	/*Esse valor é o produto do valor da massa do corpo pelo módulo da aceleração gravitacional do
	planeta escolhido, em m/s².
	*/
	cout << "Módulo da força peso aplicada sobre o corpo no planeta escolhido: " << peso << " N.";
	
	
	return 0;
}

























