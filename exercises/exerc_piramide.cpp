#include <iostream>
#include <locale>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(){
	/*Programa que calcula os valores das �reas total, da base e lateral
	da pir�mide, assim como o do seu volume e dos seus
	ap�temas (o da base e o da face lateral).
	
	*/
	
	int num = 0;
	string answer = "s";
	while(num == 0){
	
		setlocale(LC_ALL, "portuguese");
		system("cls");
		
		//Vari�vel para a aresta da base
		double aresta_base;
		//Vari�vel para a aresta lateral
		double aresta_lat;
		//Vari�vel para a altura
		double h;
		//Vari�vel para a metade do per�metro da base, quando ela for triangular
		double p;
		//Vari�vel para a metade do per�metro da face lateral
		double pl;
		
		//Vari�veis para as �reas
		double at, ab = 0, al = 0, ab1 = 0;
		//Vari�veis para os ap�temas
		double apb = 0, app = 0;
		//Vari�vel para o volume
		double v;
		
		cout << "Medida da aresta da base, em metros: ";
		cin >> aresta_base;
		
		while(aresta_base <= 0){
			cout << "MEDIDA INV�LIDA! TENTE DE NOVO: ";
			cin >> aresta_base;
		}
		
		cout << "Medida da aresta lateral, em metros: ";
		cin >> aresta_lat;
		while(aresta_lat <= 0){
			cout << "MEDIDA INV�LIDA! TENTE DE NOVO: ";
			cin >> aresta_lat;
		}
		
		cout << "Altura, em metros: ";
		cin >> h;
		while(h <= 0){
			cout << "MEDIDA INV�LIDA! TENTE DE NOVO: ";
			cin >> h;
		}
		
		int esc;
		cout << " esc = [1] -> Base triangular";
		cout << "\n esc = [2] -> Base hexagonal";
		cout << "\n esc = [3] -> Base quadrangular";
		
		
		cout << "\nQual � a base da sua pir�mide? ";
		cin >> esc;
		while(esc > 3 || esc < 1){
			cout << "Escolha ou resposta inv�lida! Tente de novo: ";
			cin >> esc;
		}
		
		if(esc == 1){
			p = (3 * aresta_base) / 2;
			ab = sqrt(p * pow((p - aresta_base), 3));
			
		} else if(esc == 2){
			ab = (6 * pow(aresta_base, 2) * sqrt(3)) / 4;
			
		} else if(esc == 3){
			ab = pow(aresta_base, 2);
		}
		cout << "�rea da base " << ab << " m�.";
		
		//C�lculo da �rea lateral
		switch(esc){
			case 1:
				pl = (aresta_base + 2 * aresta_lat) / 2;
				al = 3 * sqrt(pl * (pl - aresta_base) * pow((pl - aresta_lat), 2));
				break;
			case 2:
				pl = (aresta_base + 2 * aresta_lat) / 2;
				al = 6 * sqrt(pl * (pl - aresta_base) * pow((pl - aresta_lat), 2 ));
				break;
				
			case 3:
				pl = (aresta_base + 2 * aresta_lat) / 2;
				al = 4 * sqrt(pl * (pl - aresta_base) * pow((pl - aresta_lat), 2 ));
				break;
		}
		
		cout << "\n�rea lateral: " << al << " m�.";
		at = ab + al;
		cout << "\n�rea total: " << at << " m�.";
		
		v = (ab * h) / 3;
		cout << "\nVolume: " << v << " m�.";
		
		//C�lculo dos valores dos ap�temas
		switch(esc){
			case 1:
				apb = h / 3;
				app = sqrt( ( pow(apb, 2) + pow(h, 2) ) );
				break;
			case 2:
				apb = (aresta_base * sqrt(3)) / 2;
				app = sqrt( ( pow(apb, 2) + pow(h, 2) ) );
				break;
				
			case 3:
				apb = aresta_base / 2;
				app = sqrt( ( pow(apb, 2) + pow(h, 2) ) );
				break;
		}
		
		cout << "\nValor do ap�tema da base: " << apb << " m.";
		cout << "\nValor do ap�tema da pir�mide: " << app << " m.";
		
		cout << "\n s - SIM";
		cout << "\n n - N�O\n";
		cout << "Continuar? ";
		cin >> answer;
		while(answer != "s" && answer != "n"){
			cout << "RESPOSTA INV�LIDA! TENTE DE NOVO: ";
			cin >> answer;
		}
		if(answer == "s"){
			num = 0;
		} else{
			num = 1;
		}
		
		
    }
	return 0;
}
