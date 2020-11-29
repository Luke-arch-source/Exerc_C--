#include <iostream>
#include <locale>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(){
	/*Programa que calcula os valores das áreas total, da base e lateral
	da pirâmide, assim como o do seu volume e dos seus
	apótemas (o da base e o da face lateral).
	
	*/
	
	int num = 0;
	string answer = "s";
	while(num == 0){
	
		setlocale(LC_ALL, "portuguese");
		system("cls");
		
		//Variável para a aresta da base
		double aresta_base;
		//Variável para a aresta lateral
		double aresta_lat;
		//Variável para a altura
		double h;
		//Variável para a metade do perímetro da base, quando ela for triangular
		double p;
		//Variável para a metade do perímetro da face lateral
		double pl;
		
		//Variáveis para as áreas
		double at, ab = 0, al = 0, ab1 = 0;
		//Variáveis para os apótemas
		double apb = 0, app = 0;
		//Variável para o volume
		double v;
		
		cout << "Medida da aresta da base, em metros: ";
		cin >> aresta_base;
		
		while(aresta_base <= 0){
			cout << "MEDIDA INVÁLIDA! TENTE DE NOVO: ";
			cin >> aresta_base;
		}
		
		cout << "Medida da aresta lateral, em metros: ";
		cin >> aresta_lat;
		while(aresta_lat <= 0){
			cout << "MEDIDA INVÁLIDA! TENTE DE NOVO: ";
			cin >> aresta_lat;
		}
		
		cout << "Altura, em metros: ";
		cin >> h;
		while(h <= 0){
			cout << "MEDIDA INVÁLIDA! TENTE DE NOVO: ";
			cin >> h;
		}
		
		int esc;
		cout << " esc = [1] -> Base triangular";
		cout << "\n esc = [2] -> Base hexagonal";
		cout << "\n esc = [3] -> Base quadrangular";
		
		
		cout << "\nQual é a base da sua pirâmide? ";
		cin >> esc;
		while(esc > 3 || esc < 1){
			cout << "Escolha ou resposta inválida! Tente de novo: ";
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
		cout << "Área da base " << ab << " m².";
		
		//Cálculo da área lateral
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
		
		cout << "\nÁrea lateral: " << al << " m².";
		at = ab + al;
		cout << "\nÁrea total: " << at << " m².";
		
		v = (ab * h) / 3;
		cout << "\nVolume: " << v << " m³.";
		
		//Cálculo dos valores dos apótemas
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
		
		cout << "\nValor do apótema da base: " << apb << " m.";
		cout << "\nValor do apótema da pirâmide: " << app << " m.";
		
		cout << "\n s - SIM";
		cout << "\n n - NÃO\n";
		cout << "Continuar? ";
		cin >> answer;
		while(answer != "s" && answer != "n"){
			cout << "RESPOSTA INVÁLIDA! TENTE DE NOVO: ";
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
