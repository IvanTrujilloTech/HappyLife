#include <iostream>
#include <random>
#include <windows.h>
#include <mmsystem.h>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <algorithm>
#include <random>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>
#include <string.h>

using namespace std;

HANDLE  hConsole;
#pragma comment(lib, "winmm.lib")

bool firstRead = true;

void esperar(int ms) {
	if (firstRead) {
		Sleep(ms);
	}
}
void hombro() {
	cout << "1.1. Press militar\n";
	cout << "1.2. Press de hombro\n";
	cout << "1.3. Face pull\n";
	cout << "1.4. Elevaciones laterales\n";
	cout << "1.5. Aperturas invertidas\n";
	cout << "1.6. Elevaciones frontales\n";
}
void pecho() {
	cout << "2.1. Press banca\n";
	cout << "2.2. Press inclinado\n";
	cout << "2.3. Fondos\n";
	cout << "2.4. Aperturas\n";
	cout << "2.5. Flies\n";
	cout << "2.6. Flexiones\n";

}
void espalda() {
	cout << "3.1. Remo supino\n";
	cout << "3.2. Remo sentado\n";
	cout << "3.3. Jalón al pecho\n";
	cout << "3.4. Encogimiento de hombros\n";
	cout << "3.5. Dominadas\n";
	cout << "3.6. Pull over\n";

}
void biceps() {
	cout << "4.1. Curl martillo\n";
	cout << "4.2. Curl bíceps\n";
	cout << "4.3. Curl concentrado\n";
	cout << "4.4. Curl de martillo cruzado\n";
	cout << "4.5. Curl con barra 'Z'\n";
	cout << "4.6. Curl araña\n";

}
void triceps() {
	cout << "5.1. Press francés\n";
	cout << "5.2. Press de copa\n";
	cout << "5.3. Press cerrado\n";
	cout << "5.4. Patada de triceps\n";
	cout << "5.5. Extension de triceps\n";
	cout << "5.6. Fondos\n";

}
void pierna() {
	cout << "6.1. Sentadilla\n";
	cout << "6.2. Extension de cuadriceps\n";
	cout << "6.3. Curl femoral\n";
	cout << "6.4. Zancada\n";
	cout << "6.5. Abductores\n";
	cout << "6.6. Patada de gluteo\n";
}

void titulo() {
	PlaySound(TEXT("intro_music.wav"), NULL, SND_FILENAME | SND_ASYNC);
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "\t\t  _    _                           _      _  __     " << "\n";
	esperar(250);
	cout << "\t\t | |  | |                         | |    (_)/ _|    " << "\n";
	esperar(250);
	cout << "\t\t | |__| | __ _ _ __  _ __  _   _  | |     _| |_ ___ " << "\n";
	esperar(250);
	cout << "\t\t |  __  |/ _` | '_ || '_ || | | | | |    | |  _/ _ |" << "\n";
	esperar(250);
	cout << "\t\t | |  | | (_| | |_) | |_) | |_| | | |____| | ||  __/" << "\n";
	esperar(250);
	cout << "\t\t |_|  |_||__,_| .__/| .__/ |__, | |______|_|_| |___|" << "\n";
	esperar(250);
	cout << "\t\t              | |   | |     __/ |                   " << "\n";
	esperar(250);
	cout << "\t\t              |_|   |_|    |___/                    " << "\n";
	esperar(250);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\n";
	cout << "\t\tBienvenido a Happy Life, el programa que cuida de ti\n";
	esperar(250);
	cout << "\t\t\t by Ivan Trujillo\n";
	esperar(2500);
	system("PAUSE");
	PlaySound(nullptr, nullptr, 0);
}

void app() {
	system("CLS");
	cout << "Hola, se bienvenido a Happy Life\n";
	esperar(250);
	cout << "La intensidad de los ejercicios que usted ha realizado hoy, se miden en MET, una escala donde entre 0-3 se considera Actividad fisica leve o minima,\n";
	esperar(250);
	cout << "de 3 - 6 se considera Actividad fisica moderada, y de a partir de 6, se considera Actividad fisica intensa\n";
	esperar(250);
	cout << "A continuacion, te haremos diferentes preguntas, contesta de forma sincera para poder calcular cuantas calorias has quemado\n";
	esperar(250);
	cout << "Porfavor, tenga en cuenta las mayusculas y en NO utilizar acentos, pueden haber problemas con sus respuestas.\n";
	esperar(250);
	cout << "Teniendo en cuenta las escalas anteriormente mencionadas, como calificaría el MET de su entrenamiento de hoy? (tenga en cuenta, que, por ejemplo, correr a 10Km/h es un MET de 16)\n";
	int met;
	cin >> met;
	cout << "De acuerdo, el MET de su entrenamiento de hoy es de " << met << "\n";
	esperar(250);
	cout << "De cuantos kilogramos es su peso corporal actualmente?\n";
	int peso_corporal;
	cin >> peso_corporal;
	esperar(250);
	cout << "Cuantos grupos musculares ha trabajado?\n";
	int cantidad_grupos_musculares;
	cin >> cantidad_grupos_musculares;
	if (cantidad_grupos_musculares < 1) {
		cout << "Debes haber trabajado al menos 1 grupo muscular";
	}
	else if (cantidad_grupos_musculares >= 6) {
		cout << "No existen tantos grupos musculares";
	}
	esperar(250);
	cout << "De la lista siguiente, que musculos has trabajado?\n";
	string grupos_musculares[6];
	cout << "--------------------\n";
	cout << "Hombro\n";
	esperar(250);
	cout << "Pecho\n";
	esperar(250);
	cout << "Espalda\n";
	esperar(250);
	cout << "Biceps\n";
	esperar(250);
	cout << "Triceps\n";
	esperar(250);
	cout << "Pierna\n";
	esperar(250);
	cout << "--------------------\n";
	for (int i = 0; i < cantidad_grupos_musculares; i++) {
		cout << "Introduzca el grupo muscular " << i + 1 << ": ";
		cin >> grupos_musculares[i];
	}
	system("CLS");
	for (int i = 0; i < cantidad_grupos_musculares; i++) {
		cout << "Usted ha hecho ";
		cout << grupos_musculares[i];
		cout << "\n";
	}
	string ejercicios_realizados[36];
	int cantidad_ejercicios;		
	int k = 0;
	for (int i = 0; i < cantidad_grupos_musculares; i++) {
		cout << "Cuentanos, cuantos ejercicios has hecho hoy de " << grupos_musculares[i] << " en total ? (maximo de 6 por grupo muscular)\n";
		cin >> cantidad_ejercicios;
		if (cantidad_ejercicios > 6) {
			cout << "Por favor, no introduzca más de 6 ejercicios por grupo muscular\n";
		}
		esperar(250);
		cout << "De acuerdo, ha hecho usted " << cantidad_ejercicios << " ejercicios de " << grupos_musculares[i] << "\n";
		esperar(250);
		cout << "De la siguiente lista, que ejercicios de " << grupos_musculares[i] << " ha hecho?\n";
		esperar(250);
		if (grupos_musculares[i] == "Hombro") {
			hombro();
			for (int j = 0; j < cantidad_ejercicios; j++)
			{
				cin >> ejercicios_realizados[k];
				k++;
			}
		}
		else if (grupos_musculares[i] == "Pecho") {
			pecho();
			for (int j = 0; j < cantidad_ejercicios; j++)
			{
				cin >> ejercicios_realizados[k];
				k++;

			}
		}
		else if (grupos_musculares[i] == "Espalda") {
			espalda();
			for (int j = 0; j < cantidad_ejercicios; j++)
			{
				cin >> ejercicios_realizados[k];
				k++;

			}
		}
		else if (grupos_musculares[i] == "Biceps") {
			biceps();
			for (int j = 0; j < cantidad_ejercicios; j++)
			{
				cin >> ejercicios_realizados[k];
				k++;

			}
		}
		else if (grupos_musculares[i] == "Triceps") {
			triceps();
			for (int j = 0; j < cantidad_ejercicios; j++)
			{
				cin >> ejercicios_realizados[k];
				k++;
			}
		}
		else if (grupos_musculares[i] == "Pierna") {
			pierna();
			for (int j = 0; j < cantidad_ejercicios; j++)
			{
				cin >> ejercicios_realizados[k];
				k++;
			}
		}
		else {
			cout << "Error, grupo muscular no valido.";
		}
	}
	system("CLS");
	int i = 0;
	int repeticiones[540];
	double totalCaloriasQuemadas = 0.0;

	for (int j = 0; j < k; j++) {//1.1 1.2 2.1 2.2
		cout << "¿Cuantas repeticiones has hecho del ejercicio " << ejercicios_realizados[j] << "? ";
		cin >> repeticiones[i * 6 + j]; // Usamos un índice que depende del grupo muscular actual
	}
	for (int j = 0; j < k; j++) {
		esperar(250);
		cout << "Ejercicio " << ejercicios_realizados[j] << ": " << repeticiones[j] << " repeticiones\n";
		esperar(250);
	}	
	cout << "------------------------\n";
	esperar(250);
	for (int j = 0; j < k; j++) {
		double calorias_quemadas = met * peso_corporal * repeticiones[j] * 0.0175;
		cout << "Ejercicio " << ejercicios_realizados[j] << ": " << calorias_quemadas << " calorias\n";
		totalCaloriasQuemadas += calorias_quemadas;
	}
	esperar(250);
	cout << "------------------------\n";
	esperar(250);
	cout << "Total de calorias quemadas: " << totalCaloriasQuemadas << " calorias\n";
	esperar(250);
	cout << "------------------------\n";

}
int main() {
	titulo();
	app();
}