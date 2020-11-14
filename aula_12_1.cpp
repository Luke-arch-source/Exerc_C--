#include <iostream>
#include <cstdlib>
#include <locale>


using namespace std;

int main(){
	
	//(expressão) ? valor1 : valor2:
	
	int n1, n2, nota;
	string res;
	setlocale(LC_ALL, "portuguese");
	system("cls");
	
	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	nota = n1 + n2;
	
	// >= 60 Aprovado
	// < 60 Reprovado
	
	//(nota >= 60) ? res="Aprovado" : res = "Reprovado";
	
	res = (nota >= 60) ? "Aprovado" : "Reprovado";
	
	cout << "\nSituação do aluno: " << res << ".\n";
	
	
	system("Pause");
	return 0;
}













































