#include <iostream>
#include <cstdlib>
#include <math.h>
#include <locale>

using namespace std;

int main(){
	/*Programa que calcule a área de um triângulo equilátero, assim  como os valores
	do seu apótema, da sua altura e do seu perímetro, nas unidades que são padrões
	do Sistema Internacional de Unidades
	*/
	
	//a: área, ap: apótema, h: altura, p: perímetro e l: lado
	setlocale(LC_ALL, "portuguese");
	
	double l;
	
	cout << "Lado, em metros: ";
	cin >> l;
	while(l <= 0){
		cout << "Lado inválido! Tente de novo: ";
		cin >> l;
	}
	
	double a, ap, h, p;
	a = (pow(l, 2) * sqrt(3)) / 4;
	cout << "Área: " << a << " m².";
	
	h = (l * sqrt(3)) / 2;
	
	cout << "\nAltura: " << h << "  m.";
	ap = h / 3;
	double ap1 = (l * sqrt(3)) / 6;
	cout << "\nApótema: " << ap << " m.";
	cout << "\nValor do apótema: " << ap1 << " m.";
	
	p = 3 * l;
	cout << "Perímetro: " << p << " m.";
	
	return 0;
}






















