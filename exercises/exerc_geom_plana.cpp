#include <iostream>
#include <cstdlib>
#include <math.h>
#include <locale>

using namespace std;

int main(){
	/*Programa que calcule a �rea de um tri�ngulo equil�tero, assim  como os valores
	do seu ap�tema, da sua altura e do seu per�metro, nas unidades que s�o padr�es
	do Sistema Internacional de Unidades
	*/
	
	//a: �rea, ap: ap�tema, h: altura, p: per�metro e l: lado
	setlocale(LC_ALL, "portuguese");
	
	double l;
	
	cout << "Lado, em metros: ";
	cin >> l;
	while(l <= 0){
		cout << "Lado inv�lido! Tente de novo: ";
		cin >> l;
	}
	
	double a, ap, h, p;
	a = (pow(l, 2) * sqrt(3)) / 4;
	cout << "�rea: " << a << " m�.";
	
	h = (l * sqrt(3)) / 2;
	
	cout << "\nAltura: " << h << "  m.";
	ap = h / 3;
	double ap1 = (l * sqrt(3)) / 6;
	cout << "\nAp�tema: " << ap << " m.";
	cout << "\nValor do ap�tema: " << ap1 << " m.";
	
	p = 3 * l;
	cout << "Per�metro: " << p << " m.";
	
	return 0;
}






















