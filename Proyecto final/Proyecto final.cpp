/*Proyecto final*/

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <vector>
#define PI 3.14159265
using namespace std;
void mostrarTablaPosiciones(int juegosGanados[], string nombres[], int totalJuegos) {

	int maxJuegosGanados = juegosGanados[0];
	int posMax = 0;


	for (int i = 1; i < 6; ++i) {
		if (juegosGanados[i] > maxJuegosGanados) {
			maxJuegosGanados = juegosGanados[i];
			posMax = i;
		}
	}


	cout << "Posicion\tEquipo\t\tJuegos Ganados\tJuegos Restantes\n";


	for (int i = 0; i < 6; ++i) {
		int juegosRestantes = totalJuegos - juegosGanados[i];
		cout << (i + 1) << "\t\t" << nombres[i] << "\t\t" << juegosGanados[i] << "\t\t" << juegosRestantes << endl;
	}
}
void conversor(double medida) {


	double  pulgadas = medida * 39.3701;
	double pies = medida * 3.28084;
	double yardas = medida * 1.09361;


	cout << "La conversion de metros= " << medida << " es:" << endl;
	cout << "Pies= " << pies << endl;
	cout << "Yardas= " << yardas << endl;
	cout << "Pulgadas= " << pulgadas << endl;


}
void mostrarOrdenados(int a, int b, int c) {
	int mayor, medio, menor;


	if (a >= b && a >= c) {
		mayor = a;
	}
	else if (b >= a && b >= c) {
		mayor = b;
	}
	else {
		mayor = c;
	}


	if (a <= b && a <= c) {
		menor = a;
	}
	else if (b <= a && b <= c) {
		menor = b;
	}
	else {
		menor = c;
	}


	if ((a >= b && a <= c) || (a <= b && a >= c)) {
		medio = a;
	}
	else if ((b >= a && b <= c) || (b <= a && b >= c)) {
		medio = b;
	}
	else {
		medio = c;
	}


	cout << "De mayor a menor: " << mayor << ", " << medio << ", " << menor << endl;


	cout << "De menor a mayor: " << menor << ", " << medio << ", " << mayor << endl;
}
void determinarMedio(int a, int b, int c) {
	if (a == b && b == c) {
		cout << "Todos los numeros son iguales." << endl;
		return;
	}
	else if (a == b || b == c || a == c) {
		cout << "Hay dos numeros iguales." << endl;
		return;
	}

	int medio;
	if ((a > b && a < c) || (a < b && a > c)) {
		medio = a;
	}
	else if ((b > a && b < c) || (b < a && b > c)) {
		medio = b;
	}
	else {
		medio = c;
	}

	cout << "El numero del medio es: " << medio << endl;
}
void cantidad(int cantidad) {

	if (cantidad < 20) {

		cout << "La cantidad debe ser mayor a 20. ";

		return;
	}
	int denominaciones[] = { 100, 50, 20, 10, 5, 2, 1 };
	int cantidades[7] = { 0 };

	for (int i = 0; i < 7; ++i) {
		if (cantidad >= denominaciones[i]) {
			cantidades[i] = cantidad / denominaciones[i];
			cantidad %= denominaciones[i];
		}
	}

	std::cout << "Papeletas necesarias:" << std::endl;
	for (int i = 0; i < 7; ++i) {
		if (cantidades[i] > 0) {
			std::cout << denominaciones[i] << " : " << cantidades[i] << std::endl;
		}
	}
}
void conversorseg(int segundos) {
	int minutos = segundos / 60;
	int horas = minutos / 60;
	int segundosf = segundos % 60;



	if (horas == 0 && minutos > 0) {
		cout << "El equivalente es " << horas << ":" << minutos << ":" << segundosf << " minutos" << endl;
	}
	if (horas > 0) {
		cout << "El equivalente es " << horas << ":" << minutos << ":" << segundosf << " horas" << endl;
	}

	if (horas == 0 && minutos == 0) {
		cout << "El equivalente es " << horas << ":" << minutos << ":" << segundosf << " segundos" << endl;
	}




}
void diaSiguiente(int dia, int mes, int anio) {
	int diaEnMeses;
	bool bisiesto;


	if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
		bisiesto = true;
	}
	else {
		bisiesto = false;
	}


	if (mes == 2) {
		diaEnMeses = bisiesto ? 29 : 28;
	}
	else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		diaEnMeses = 30;
	}
	else {
		diaEnMeses = 31;
	}


	if (dia >= diaEnMeses) {
		dia = 1;
		mes++;
	}
	else {
		dia++;
	}

	if (mes > 12) {
		mes = 1;
		anio++;
	}

	cout << "El proximo dia sera: " << dia << "/" << mes << "/" << anio << endl;
}

void dias(int dias) {
	int meses = dias / 30;
	int diasRestantes = dias % 30;
	int semanas = diasRestantes / 7;
	int diasFinales = diasRestantes % 7;

	cout << "Estuviste " << meses << " meses, " << semanas << " semanas y " << diasFinales << " dias." << endl;

}
void imprimirUltimoCaracter(const string& texto) {
	if (!texto.empty()) {
		cout << "El ultimo caracter del texto es: " << texto.back() << endl;
	}
	else {
		cout << "El texto esta vacio." << endl;
	}
}
bool ecuacion(int a, int b, int c, double& e, double& f) {

	double d = pow(b, 2) - 4 * a * c;
	if (d >= 0) {
		double g = sqrt(d);

		e = (-b + g) / (2 * a);
		f = (-b - g) / (2 * a);
		return true;
	}

	else {
		return false;
	}
}
bool esprimo1(int num) {

	if (num <= 1)return false;
	if (num == 2)return true;
	if (num % 2 == 0)return false;
	for (int i = 3; i * i <= num; i += 2) {
		if (num % i == 0)return false;
	}
}
bool esPrimo(int numero) {
	if (numero <= 1) return false;
	if (numero <= 3) return true;
	if (numero % 2 == 0 || numero % 3 == 0) return false;
	for (int i = 5; i * i <= numero; i += 6) {
		if (numero % i == 0 || numero % (i + 2) == 0) return false;
	}
	return true;
}
void imprimirPrimos(const vector<int>& vec) {
	for (int num : vec) {
		if (esPrimo(num)) {
			cout << num << " ";
		}
	}
	cout << std::endl;
}
void programa1(){

	double porcentajeMensual = 0.0, cantidadPrestado, totalApagar, porcientoAGanar, cantidadDeMeses, tiempo;
	double porcentaje = 0.10;
	system("cls");
	cout << "Un prestamista presta al 10 %, mensual realizar un programa para que dada la" << endl;
	cout << "cantidad y los meses a prestar le imprima :" << endl;
	cout << "a.Valor prestado" << endl;
	cout << "b.Porciento a ganar." << endl;
	cout << "c.Meses." << endl;
	cout << "d.Total a pagar." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;


	cout << "Dinero prestado: ";
	cin >> cantidadPrestado;

	cout << "Cantidad de meses: ";
	cin >> tiempo;

	system("cls");

	cantidadDeMeses = tiempo / 12;
	porcientoAGanar = cantidadPrestado * cantidadDeMeses * porcentaje;
	totalApagar = porcientoAGanar + cantidadPrestado;

	cout << "Tus ganacias son de: " << round(porcientoAGanar) << " a " << tiempo << " meses " << endl;
	cout << "Con un total de: " << round(totalApagar) << endl;

	system("pause");
	system("cls");

}
void programa2() {

	double valorDolar, valorEuro, pesos, dolares, euros, seleccion;

	cout << "Un programa que acepte un valor de dinero en pesos y los convierta en Euros y en" << endl;
	cout << "Dólares, luego de pedir las tasas del día." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;


	cout << "Cuantos dinero en pesos dominicanos desea convertir? ";
	cin >> pesos;


	cout << "A que tipo de moneda desea hacer conversion? " << endl;
	cout << "Seleccione ingresando el numero que tenga la moneda de su preferencia " << endl;
	cout << "1-> Dolares      2-> euros " << endl;
	cin >> seleccion;


	if (seleccion == 1) {
		cout << "Ingrese la tasa el dolar en pesos dominicanos: ";
		cin >> dolares;
		valorDolar = pesos / dolares;
		cout << " Son " << valorDolar << " dolares" << endl;
	}

	if (seleccion == 2) {
		cout << "Ingrese la tasa del euro en pesos dominicanos: ";
		cin >> euros;
		valorEuro = pesos / euros;
		cout << "Son " << valorEuro << " euros " << endl;

		system("pause");
		system("cls");
	}
	system("pause");
	system("cls");
}
void programa3() {
	int numero;
	cout << "Escribir un programa que lea un entero y, a continuación, visualice su doble y su triple." << endl;

	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;


	cout << "ingrese el valor:";
	cin >> numero;

	cout << "Su numero seleccionado a sido el " << numero << " su dobre es " << pow(numero, 2) << " Y su triple es " << pow(numero, 3) << endl;

	system("pause");
	system("cls");
}
void programa4() {
	int numero1, numero2, numero3;
	cout << "Escribir un programa que lea tres enteros y calcule y visualice su suma y su producto." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;

	cout << "Ingrese el primer entero: ";
	cin >> numero1;

	cout << "Ingrese el segundo entero: ";
	cin >> numero2;

	cout << "Ingrese el tercer entero: ";
	cin >> numero3;

	cout << "La suma de estos tres numeros enteros es " << numero1 + numero2 + numero3 << " y la multiplicacion de los mismos es de " << numero1 * numero2 * numero3 << endl;

	system("pause");
	system("cls");
}
void programa5() {
	double numero1, numero2, numero3, numero4;

	cout << "Escribir un programa que lea cuatro números y calcule la media aritmética." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;

	cout << "Ingrese el primer valor: ";
	cin >> numero1;
	cout << "Ingrese el segundo valor: ";
	cin >> numero2;
	cout << "Ingrese el tercer valor: ";
	cin >> numero3;
	cout << "Ingrese el cuarto valor: ";
	cin >> numero4;

	system("cls");

	cout << "La media aritmetica es igual a " << (numero1 + numero2 + numero3 + numero4) / 4 << endl;

	system("pause");
	system("cls");
}
void programa6() {
	int numero1, numero2;
	cout << "Escribir un programa que lea dos enteros y calcule e imprima su cociente y el resto." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;


	cout << "Ingrese el valor del dividendo: ";
	cin >> numero1;

	cout << "Ingrese el del divisor: ";
	cin >> numero2;

	system("cls");

	cout << "El cociente de los dos enteros es de " << numero1 / numero2 << endl;
	cout << "El resto de los dos enteros es de " << numero1 % numero2 << endl;

	system("pause");
	system("cls");

}
void programa7() {
	double valorEnPies;
	double pies = 0;
	double yardas;
	double pulgadas;
	double centimetros;
	double metros;

	cout << "Escribir un programa para convertir una medida dada en pies a sus equivalentes en:" << endl;
	cout << "a) yardas; b) pulgadas c) centímetros, y d) metros(1 pie = 12 pulgadas, 1 yarda = 3" << endl;
	cout << "pies, 1 pulgada = 2, 54 cm, 1 m = 100 cm).Leer el número de pies e imprimir el número" << endl;
	cout << "de yardas, pies, pulgadas, centímetros y metros." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;

	cout << "ingrese los pies que desea integrar en el conversor: ";
	cin >> valorEnPies;
	pulgadas = valorEnPies * 12;
	centimetros = pulgadas * 2.54;
	metros = centimetros / 100;
	yardas = valorEnPies / 3;
	system("cls");

	cout << "El valor de " << valorEnPies << " en pies, es de: " << endl;
	cout << yardas << " yardas" << endl;
	cout << pulgadas << " pulgadas" << endl;
	cout << centimetros << " centimetros" << endl;
	cout << metros << " metros" << endl;
	system("pause");
	system("cls");

}
void programa8() {
	double celcius, farenheit;

	cout << "Un programa que acepte una unidad de temperatura en Celsius y los lleve a" << endl;
	cout << "Fahrenheit." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;


	cout << "Ingrese los grados en celcius que desea convertir a farenheit: ";
	cin >> celcius;

	farenheit = celcius * 32;

	cout << celcius << " grados celisius es " << farenheit << " grados farenheit" << endl;

	system("pause");
	system("cls");

}
void programa9() {
	double primero, segundo, tercero, cuarto, quinto, c1, c2, c3, c4, c5, index;

	cout << "Escribir un programa que acepte las calificaciones y los créditos de 5 asignaturas y" << endl;
	cout << "calcule el índice académico." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;

	cout << "ingrese la calificacion de la primera asignatura: ";
	cin >> primero;

	cout << "ingrese la cantidad de creditos que contaba la primera asignatura: ";
	cin >> c1;

	cout << "ingrese la calificacion de la primera asignatura: ";
	cin >> segundo;

	cout << "ingrese la cantidad de creditos que contaba la primera asignatura: ";
	cin >> c2;

	cout << "ingrese la calificacion de la primera asignatura: ";
	cin >> tercero;

	cout << "ingrese la cantidad de creditos que contaba la primera asignatura: ";
	cin >> c3;

	cout << "ingrese la calificacion de la primera asignatura: ";
	cin >> cuarto;

	cout << "ingrese la cantidad de creditos que contaba la primera asignatura: ";
	cin >> c4;

	cout << "ingrese la calificacion de la primera asignatura: ";
	cin >> quinto;

	cout << "ingrese la cantidad de creditos que contaba la primera asignatura: ";
	cin >> c5;

	system("cls");

	index = ((primero * c1) + (segundo * c2) + (tercero * c3) + (cuarto * c4) + (quinto * c5)) / (c1 + c2 + c3 + c4 + c5);



	cout << "Su indice academico es de: " << index;
	system("pause");
	system("cls");
}
void programa10() {
	double numero;
	cout << "Dado un numero calcular tangente, cotangente, secante cosecante, seno, coseno," << endl;
	cout << "logaritmo natura y neperiano." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;

	cout << "introduzca el numero al cual desea buscar la tangente, cotangente, secante, cosecante, seno, coseno y logratimo natura o logaritmo neperiano: ";
	cin >> numero;

	system("cls");

	cout << "El coseno de " << numero << " es " << cos(numero * PI / 180) << endl;
	cout << "El seno de " << numero << " es " << sin(numero * PI / 180) << endl;
	cout << "La tangente de " << numero << " es " << tan(numero * PI / 180) << endl;
	cout << "La cotantangete de " << numero << " es " << atan(numero * PI / 180) << endl;
	cout << "La cosecante de " << numero << " es " << (1) / (sin(numero * PI / 180)) << endl;
	cout << "La cotangente de " << numero << " es " << (cos(numero * PI / 180)) / (sin(numero * PI / 180)) << endl;
	cout << "El logaritmo natural o neperiano de " << numero << " es " << log10(numero) << endl;

	system("Pause");
	system("cls");
}
void programa11() {
	int entero1, entero2;
	char caracter;

	cout << "Lee dos enteros y un carácter. Si el carácter es un +, se visualiza la suma; si es un –, se visualiza la diferencia; si es un" << endl;
	cout << "*, se visualiza el producto; si es un /, se visualiza el cociente; y si es un % se imprime el resto." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;


	cout << "Ingrese el primer numero entero: ";
	cin >> entero1;

	cout << "Ingrese el segundo entero: ";
	cin >> entero2;

	system("cls");

	cout << "Que desea?" << endl;
	cout << "+ == Sumarlos   - == Restarlos   * == Multiplicarlos   / == Dividirlos    % == Ver el residuo" << endl;
	cin >> caracter;

	if (caracter == '+') {
		cout << "La suma entre " << entero1 << " y " << entero2 << " es: " << entero1 + entero2 << endl;
	}
	if (caracter == '-') {
		cout << "La resta entre " << entero1 << " y " << entero2 << " es: " << entero1 - entero2 << endl;
	}

	if (caracter == '*') {
		cout << "La multiplicacion entre " << entero1 << " y " << entero2 << " es: " << entero1 * entero2 << endl;
	}

	if (caracter == '/') {
		cout << "La division entre " << entero1 << " y " << entero2 << " es: " << entero1 / entero2 << endl;
	}

	if (caracter == '%') {
		cout << "El residuo entre " << entero1 << " y " << entero2 << " es: " << entero1 % entero2 << endl;
	}

	system("pause");
	system("cls");

}
void programa12() {

	double lado1, lado2, lado3;
	cout << "Escribir un programa que lea los valores de tres lados posibles de un triángulo a, b y c y que indique si es isósceles," << endl;
	cout << "escaleno o equilátero." << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;

	cout << "Ingrese el valor del lado A: ";
	cin >> lado1;

	cout << "Ingrese el valor del lado B: ";
	cin >> lado2;

	cout << "Ingrese el valor del lado C: ";
	cin >> lado3;

	system("cls");

	if (lado1 == lado2 && lado2 == lado3 && lado3 == lado1) {
		cout << "Es un triangulo equilatero" << endl;
	}
	else if (lado1 != lado2 && lado2 == lado3) {
		cout << "Es un triangulo escaleno" << endl;
	}
	else if (lado2 != lado1 && lado1 == lado3) {
		cout << "Es un triangulo escaleno" << endl;
	}
	else if (lado3 != lado1 && lado1 == lado2) {
		cout << "Es un triangulo escaleno" << endl;
	}
	else
		cout << " Es un triangulo isoceles" << endl;

	system("pause");
	system("cls");

}
void programa13() {
	int mes, dia;
	cout << "Que acepte día y mes y diga que signo zodiacal pertenece" << endl;

	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;

	cout << "Ingrese el numero del mes del anio: ";
	cin >> mes;

	cout << "Ingrese el dia del mes: ";
	cin >> dia;

	system("cls");

	if (mes == 1 && dia >= 20 && dia <= 30) {
		cout << "Su signo sodiacal es acuario" << endl;
	}
	else if (mes == 2 && dia <= 18) {
		cout << "Su signo sodiacal es acuario" << endl;
	}
	else if (mes == 2 && dia >= 19 && dia <= 28) {
		cout << "Su signo sodiacal es picis";
	}
	else if (mes == 3 && dia <= 20) {
		cout << "Su signo sodiacal es picis" << endl;
	}
	else if (mes == 3 && dia >= 20 && dia <= 30) {
		cout << "Su signo sodiacal es aries" << endl;
	}
	else if (mes == 4 && dia <= 19) {
		cout << "Su signo sodiacal es aries" << endl;
	}
	else if (mes == 4 && dia >= 20 && dia <= 31) {
		cout << "Su signo sodiacal es tauro" << endl;
	}
	else if (mes == 5 && dia <= 20) {
		cout << "Su signo sodiacal es tauro" << endl;
	}
	else if (mes == 5 && dia >= 21 && dia <= 30) {
		cout << "Su signo sodiacal es gemini" << endl;
	}
	else if (mes == 6 && dia <= 20) {
		cout << "Su signo sodiacal es gemini" << endl;
	}
	else if (mes == 6 && dia >= 21 && dia <= 31) {
		cout << "Su signo sodiacal es cancer" << endl;
	}
	else if (mes == 7 && dia <= 22) {
		cout << "Su signo sodiacal es cancer" << endl;
	}
	else if (mes == 7 && dia >= 23 && dia <= 30) {
		cout << "Su signo sodiacal es leo" << endl;
	}
	else if (mes == 8 && dia <= 22) {
		cout << "Su signo sodiacal es leo" << endl;
	}
	else if (mes == 8 && dia >= 23 && dia <= 31) {
		cout << "Su signo sodiacal es virgo" << endl;
	}
	else if (mes == 9 && dia <= 22) {
		cout << "Su signo sodiacal es virgo" << endl;
	}
	else if (mes == 9 && dia >= 23 && dia <= 30) {
		cout << "Su signo sodiacal es libra" << endl;
	}
	else if (mes == 10 && dia <= 22) {
		cout << "Su signo sodiacal es libra" << endl;
	}
	else if (mes == 10 && dia >= 23 && dia <= 31) {
		cout << "Su signo sodiacal es escorpion" << endl;
	}
	else if (mes == 11 && dia <= 21) {
		cout << "Su signo sodiacal es escorpion" << endl;
	}
	else if (mes == 11 && dia >= 22 && dia <= 30) {
		cout << "Su signo sodiacal es sagitario" << endl;
	}
	else if (mes == 12 && dia <= 21) {
		cout << "Su signo sodiacal es sagitario" << endl;
	}
	else if (mes == 12 && dia >= 22 && dia <= 31) {
		cout << "Su signo sodiacal es capricornio" << endl;
	}
	else if (mes == 1 && dia <= 19) {
		cout << "Su signo sodiacal es capricornio" << endl;
	}
	system("pause");
	system("cls");
}
void programa14() {

	int entero;

	cout << "Que acepte un número y me diga si es múltiplo de 2, de 3, 4, 7, o de 15." << endl;

	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;

	cout << "ingrese el numero entero: ";
	cin >> entero;

	if (entero % 2 == 0) {
		cout << "Es un multiplo de 2" << endl;
	}
	if (entero % 3 == 0) {
		cout << "Es un multiplo de 3" << endl;

	}
	if (entero % 4 == 0) {
		cout << "Es un multiplo de 4" << endl;

	}
	if (entero % 7 == 0) {
		cout << "Es un multiplo de 7" << endl;

	}
	if (entero % 15 == 0) {
		cout << "Es un multiplo de 15" << endl;


	}
	system("pause");
	system("cls");



}
void programa15() {

	int hora, minuto;

	cout << "Que acepte la hora y minutos y le diga al usuario si es mañana, tarde, noche., meridiano o media noche." << endl;

	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;

	cout << "Que conste, este reloj esta en formato 24 horas, tome eso en cuenta" << endl;
	cout << "Ingrese la hora: ";
	cin >> hora;

	cout << "Ingrese los minutos: ";
	cin >> minuto;

	system("cls");
	if (hora == 24 && minuto == 00) {
		cout << "Es media noche" << endl;
	}
	else if (hora == 12 && minuto == 00) {
		cout << "Es meridiano" << endl;

	}
	else if (hora >= 1 && hora <= 11 && minuto >= 00 && minuto <= 59) {
		cout << "Estás en la mañana" << endl;
	}

	else if (hora >= 12 && hora <= 17 && minuto >= 00 && minuto <= 59) {
		cout << "Es de tarde" << endl;
	}

	else if (hora > 17 && hora <= 23 && minuto >= 00 && minuto <= 59) {
		cout << "Es de noche" << endl;
	}

	else
		cout << "Quizas, el valor que nos estas dando esta superando nuestros parametros, intentelo de nuevo con un valor diferente" << endl;

	system("pause");
	system("cls");
}
void programa16() {
	int numero1, numero2, numero3;
	cout << "Que acepte 3 números y los ordene de mayor a menor (Valide si son iguales los 3 números)." << endl;

	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;

	cout << "Ingrese el primer numero: ";
	cin >> numero1;

	cout << "Ingrese el segundo numero: ";
	cin >> numero2;

	cout << "Ingrese el tercer numero: ";
	cin >> numero3;

	system("cls");

	if (numero1 == numero2 && numero2 == numero3) {
		cout << "Los tres numeros son iguales" << endl;
	}
	else if (numero1 < numero2 && numero2 > numero3 && numero3 > numero1) {
		cout << numero2 << endl;
		cout << numero3 << endl;
		cout << numero1 << endl;
	}
	else if (numero1 > numero2 && numero2 < numero3 && numero3 < numero1) {
		cout << numero1 << endl;
		cout << numero3 << endl;
		cout << numero2 << endl;
	}
	else if (numero1 < numero2 && numero2 < numero3 && numero3 > numero1) {
		cout << numero3 << endl;
		cout << numero2 << endl;
		cout << numero1 << endl;
	}
	else if (numero1 > numero2 && numero2 > numero3 && numero3 < numero1) {
		cout << numero1 << endl;
		cout << numero2 << endl;
		cout << numero3 << endl;

	}
	else if (numero1 < numero2 && numero2 > numero3 && numero3 < numero1) {
		cout << numero2 << endl;
		cout << numero1 << endl;
		cout << numero3 << endl;
	}
	else if (numero1 > numero2 && numero2 < numero3 && numero3 > numero1) {
		cout << numero3 << endl;
		cout << numero1 << endl;
		cout << numero2 << endl;
	}
	else if (numero1 == numero2 && numero2 == numero3 && numero3 == numero1) {
		cout << numero3 << endl;
		cout << numero1 << endl;
		cout << numero2 << endl;
		cout << "Los tres numeros son iguales." << endl;

	}

	system("pause");
	system("cls");

}
 void programa17() {
	int numero1, numero2, numero3;
	cout << "Que acepte 3 números y diga si existió alguno que se repitió (Valide si todos son diferentes)." << endl;

	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "Ingrese el primero numero: ";
	cin >> numero1;

	cout << "Ingrese el segundo numero: ";
	cin >> numero2;

	cout << "Ingrese el tercer numero: ";
	cin >> numero3;

	system("cls");

	if (numero1 == numero2 && numero2 == numero3 && numero3 == numero1) {
		cout << "Todos lo numeros se repiten" << endl;
	}
	else if (numero1 != numero2 && numero2 != numero3 && numero3 != numero1) {
		cout << "Todos los numero son difernetes" << endl;
	}
	else if (numero1 != numero2 && numero2 == numero3 && numero3 != numero1) {
		cout << "El segundo y tercer numero se repetiten" << endl;
	}
	else if (numero1 == numero2 && numero2 != numero3 && numero3 != numero1) {
		cout << "El primer y segundo numero se repiten" << endl;
	}
	else if (numero1 != numero2 && numero2 != numero3 && numero3 == numero1) {
		cout << "El primer y tercer numero se repiten" << endl;
	}

	system("pause");
	system("cls");
 }
 void programa18() {
	 int numero1, numero2, numero3;

	 cout << "Dado 3 números decir si están en orden creciente ,decreciente o desorganizados." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese el primer numero: ";
	 cin >> numero1;

	 cout << "Ingrese el segundo numero: ";
	 cin >> numero2;

	 cout << "Ingrese el tercer numero: ";
	 cin >> numero3;

	 system("cls");

	 if (numero1 > numero2 && numero2 > numero3) {
		 cout << "Estan en orden decreciente" << endl;
	 }
	 else  if (numero1 < numero2 && numero2 < numero3) {
		 cout << "Estan en orden creciente" << endl;
	 }
	 else  if (numero1 == numero2 && numero2 == numero3) {
		 cout << "Son iguales" << endl;
	 }
	 else {
		 cout << "Estan desorganizados" << endl;
	 }
	 system("pause");
	 system("cls");
 }
 void programa19() {

	 int primerParcial, segundoParcial, parcialFinal, practicas;

	 cout << "Un programa que me acepte la nota del 1er y 2do parcial, practica y examen final de una asignatura y le diga, Su" << endl;
	 cout << "calificación literal (A,B,C,D,E,)" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Considando que cada examen vale 25 puntos, por igual la suma de todas las practicas hacen 25 puntos " << endl;
	 cout << "Ingrese la nota del 1er parcial: ";
	 cin >> primerParcial;



	 cout << "Ingrese la nota del segundo parcial: ";
	 cin >> segundoParcial;

	 cout << "Ingrese la nota del ultimo parcial: ";
	 cin >> parcialFinal;

	 cout << "Ingrese la nota de la suma de las practicas: ";
	 cin >> practicas;

	 system("cls");

	 if (primerParcial + segundoParcial + parcialFinal + practicas >= 90 && primerParcial + segundoParcial + parcialFinal + practicas <= 100) {
		 cout << "Usted tiene una 'A' en la asigntura" << endl;
	 }
	 else if (primerParcial + segundoParcial + parcialFinal + practicas >= 80 && primerParcial + segundoParcial + parcialFinal + practicas <= 89) {
		 cout << "Usted tiene una 'B' en la asigntura" << endl;
	 }
	 else if (primerParcial + segundoParcial + parcialFinal + practicas >= 70 && primerParcial + segundoParcial + parcialFinal + practicas <= 79) {
		 cout << "Usted tiene una 'C' en la asigntura" << endl;
	 }
	 else if (primerParcial + segundoParcial + parcialFinal + practicas >= 60 && primerParcial + segundoParcial + parcialFinal + practicas <= 69) {
		 cout << "Usted tiene una 'D' en la asigntura" << endl;
	 }
	 else if (primerParcial + segundoParcial + parcialFinal + practicas >= 80 && primerParcial + segundoParcial + parcialFinal + practicas <= 89) {
		 cout << "Usted tiene una 'B' en la asigntura" << endl;
	 }
	 else if (primerParcial + segundoParcial + parcialFinal + practicas <= 60) {
		 cout << "Usted tiene una 'E o F' en la asigntura" << endl;
	 }
	 else {
		 cout << "Los valores que ha puesto cruzan nuestros parametros, ingrese nuevamente con valores que sumandolos no sean mayores de 100." << endl;
	 }

	 system("pause");
	 system("cls");


 }
 void programa20() {
	 int dia, mes, hemisferios;
	 cout << "Que acepte día y mes y diga y la estación del año." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Seleccione el hemisferio que desea para saber la estacion: " << endl;
	 cout << "1-->  Hemisferio norte              2--> Hemisferio sur" << endl;
	 cin >> hemisferios;

	 system("cls");






	 if (hemisferios == 1) {
		 cout << "Ingrese el mes: ";
		 cin >> mes;

		 cout << "Ingrese el dia: ";
		 cin >> dia;

		 system("cls");

		 if (mes == 3 && dia >= 20 && dia <= 30) {
			 cout << "Es primavera!!" << endl;
		 }
		 else if (mes >= 4 && mes <= 5 && dia >= 1 && dia <= 31) {
			 cout << "Es primevera!!" << endl;
		 }
		 else if (mes == 6 && dia >= 1 && dia <= 21) {
			 cout << "Es primavera!!" << endl;
		 }
		 else if (mes == 6 && dia >= 22 && dia <= 30) {
			 cout << "Es verano!!" << endl;
		 }
		 else if (mes >= 7 && mes <= 8 && dia >= 1 && dia <= 31) {
			 cout << "Es verano!!" << endl;
		 }
		 else if (mes == 8 && dia >= 1 && dia <= 23) {
			 cout << "Es verano!!" << endl;
		 }
		 else if (mes == 8 && dia >= 24 && dia <= 30) {
			 cout << "Es otonio!!" << endl;
		 }
		 else if (mes >= 9 && mes <= 11 && dia >= 1 && dia <= 31) {
			 cout << "Es otonio!!" << endl;
		 }
		 else if (mes == 12 && dia >= 1 && dia <= 22) {
			 cout << "Es otonio!!" << endl;
		 }
		 else if (mes == 12 && dia >= 23 && dia <= 31) {
			 cout << "Es invierno!!" << endl;
		 }
		 else if (mes >= 1 && mes <= 2 && dia >= 1 && dia <= 31) {
			 cout << "Es invierno!!" << endl;
		 }
		 else if (mes == 3 && dia >= 1 && dia <= 21) {
			 cout << "Es invierno!!" << endl;
		 }
		 else
			 cout << "Los valores que usted puso cruzan nuestros parametros. Vuelva a intentarlo con los parametros correctos" << endl;


	 }
	 
	 if (hemisferios == 2) {
		 cout << "Ingrese el mes: ";
		 cin >> mes;

		 cout << "Ingrese el dia: ";
		 cin >> dia;

		 if (mes == 3 && dia >= 20 && dia <= 30) {
			 cout << "Es otonio!!" << endl;
		 }
		 else if (mes >= 4 && mes <= 5 && dia >= 1 && dia <= 31) {
			 cout << "Es otonio!!" << endl;
		 }
		 else if (mes == 6 && dia >= 1 && dia <= 21) {
			 cout << "Es otonio!!" << endl;
		 }
		 else if (mes == 6 && dia >= 22 && dia <= 30) {
			 cout << "Es invierno!!" << endl;
		 }
		 else if (mes >= 7 && mes <= 8 && dia >= 1 && dia <= 31) {
			 cout << "Es invierno!!" << endl;
		 }
		 else if (mes == 8 && dia >= 1 && dia <= 23) {
			 cout << "Es invierno!!" << endl;
		 }
		 else if (mes == 8 && dia >= 24 && dia <= 30) {
			 cout << "Es primavera!" << endl;
		 }
		 else if (mes >= 9 && mes <= 11 && dia >= 1 && dia <= 31) {
			 cout << "Es primavera!!" << endl;
		 }
		 else if (mes == 12 && dia >= 1 && dia <= 22) {
			 cout << "Es primavera!!" << endl;
		 }
		 else if (mes == 12 && dia >= 23 && dia <= 31) {
			 cout << "Es verano!!" << endl;
		 }
		 else if (mes >= 1 && mes <= 2 && dia >= 1 && dia <= 31) {
			 cout << "Es verano!!" << endl;
		 }
		 else if (mes == 3 && dia >= 1 && dia <= 21) {
			 cout << "Es verano!!" << endl;
		 }
		 else
			 cout << "Los valores que usted puso cruzan nuestros parametros. Vuelva a intentarlo con los parametros correctos" << endl;


	 }


	 else {
		 cout << "Ingrese un numero que refiera a uno de los dos valores que se encuentran en cada emisferio." << endl;
	 }

	 system("pause");
	 system("cls");
 }
 void programa21() {


	 int numero;
	 cout << "Aceptar un número y decir cuál es el próximo número primo y cuál es el anterior número primo." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;


	 cout << "Ingrese el numero: ";
	 cin >> numero;

	 system("cls");

	 if (numero % 4 == 0 || numero % 2 == 0 || numero < 7) {
		 cout << "Numero primo no pudo ser encontrado ingrese un numero que sea primo";
	 }
	 else {

		 cout << "Su proximo numero primero primo es " << numero + 4 << endl;
		 cout << "Su numero primo anterior es " << numero - 4 << endl;
	 }

	 system("pause");
	 system("cls");
 }
 void programa22() {
	 int numero1, numero2, n;

	 cout << "Usando bucles, acepte 2 números e imprima la serie Fibonacci entre ellos." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese el primer numero :";
	 cin >> numero1;

	 cout << "Ingrese el segundo numero: ";
	 cin >> numero2;

	 system("cls");

	 cout << numero1 << endl;
	 cout << numero2 << endl;


	 for (int o = 1; o <= 50; o++) {
		 n = numero1 + numero2;
		 cout << n << endl;
		 numero1 = numero2;
		 numero2 = n;





	 }


	 system("pause");
	 system("cls");
 }
 void programa23() {
	 int num1, num2;
	 cout << "Dado 2 números calcular el promedio del intervalo de numeros entre ellos que sean Pares." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese el primer numero: ";
	 cin >> num1;
	 cout << "Ingrese el segundo numero: ";
	 cin >> num2;

	 system("cls");

	 if (num1 % 2 != 0) {
		 num1 = num1 + 1;
	 }
	 if (num2 % 2 != 0) {
		 num2 = num2 + 1;
	 }

	 cout << "el promedio del intervalo de numeros pares es " << (num1 + num2) / 2 << endl;

	 system("pause");
	 system("cls");
 }
 void programa24() {
	 int num1, num2;
	 cout << "Aceptar 2 números y decir la suma y promedio de los múltiplos de 3 entre ellos." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese el primer numero: ";
	 cin >> num1;

	 cout << "Ingrese el segundo numero: ";
	 cin >> num2;

	 system("cls");

	 if (num1 % 3 != 0) {
		 num1 = num1 + (3 - num1 % 3);
	 }
	 if (num2 % 3 != 0) {
		 num2 = num2 - (num2 % 3);
	 }
	 int n = ((num2 - num1) / 3) + 1;

	 int suma = n * (num1 + num2) / 2;

	 int promedio = (num1 + num2) / 2;


	 cout << "La suma es: " << suma << endl;
	 cout << "El promedio es: " << promedio << endl;

	 system("pause");
	 system("cls");

 }
 void programa25() {
	 int num1, num2;

	 cout << "Que acepte 2 números y sume los impares entre ellos." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese el primer numero: ";
	 cin >> num1;

	 cout << "Ingrese el segundo numero: ";
	 cin >> num2;

	 system("cls");

	 if (num1 % 2 == 0) {
		 num1 = num1 + 1;

	 }
	 if (num2 % 2 == 0) {
		 num2 = num2 - 1;

	 }
	 int n = ((num2 - num1) / 2) + 1;

	 int suma = (n * (num1 + num2)) / 2;


	 cout << "La suma de los impares entre ellos es de: " << suma << endl;
	 system("pause");
	 system("cls");
 }
 void programa26() {
	 int num, o = 1;
	 cout << "Aceptar un número y e imprimir sus múltiplos entre 1 y 100." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese el valor del numero que desea imprimir sus multiplos: ";
	 cin >> num;

	 system("cls");

	 cout << "El multiplo de " << num << " Son: " << endl;
	 for (int i = 1; o < 100; ++i) {
		 o = num * i;
		 cout << num << " X " << i << "= " << o << endl;

	 }
	 system("pause");
	 system("cls");
 }
 void programa27() {
	 cout << "Imprimir los números del 1 al 50 con su cuadrado al lado." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 system("pause");
	 system("cls");
	 for (int num = 1; num <= 50; ++num) {

		 cout << "El cuadrado de " << num << " Es: " << num * num << endl;

	 }
	 system("pause");
	 system("cls");
 }
 void programa28() {
	 int num;
	 cout << "Aceptar un número y decir si es primo o no." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "ingrese el numero: ";
	 cin >> num;

	 system("cls");

	 if (num % 2 == 0 || num % 4 == 0 || num == 1) {
		 cout << num << " No es primo." << endl;

	 }
	 else {
		 cout << num << " Es primo." << endl;

	 }
	 system("pause");
	 system("cls");

 }
 void programa29() {
	 int num, max_num;
	 cout << "Usando bucles aceptar 5 números y decir cuál es el mayor." << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingresa un numero: ";
	 cin >> num;
	 system("cls");
	 max_num = num;

	 for (int i = 1; i < 5; i++) {
		 cout << "Ingresa un numero: ";
		 cin >> num;


		 if (num > max_num) {
			 max_num = num;
		 }
	 }


	 cout << "El mayor numero es: " << max_num << endl;

	 system("pause");
	 system("cls");
 }
 void programa30() {
	 int ano;
	 cout << "Escribir un programa que determine si un año es bisiesto. Un año es bisiesto si es múltiplo de 4 (1988), excepto los" << endl;
	 cout << "múltiplos de 100 que no son bisiestos salvo que a su vez también sean múltiplos de 400 (1800 no es bisiesto, 2000 sí)" << endl;

	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;


	 cout << "Ingrese el anio que desea saber si es bisiesto: ";
	 cin >> ano;

	 system("cls");
	 if (ano % 4 == 0 || ano % 400 == 0) {
		 cout << "Es bisiesto" << endl;
	 }
	 else if (ano % 100 == 0) {
		 cout << "No es bisiesto" << endl;
	 }
	 else { cout << "No es bisiesto" << endl; }


	 system("pause");
	 system("cls");

 }
 void programa31() {
	 int num1, num2;
	 cout << "Un programa que acepte 2 números e imprima las tablas de Multiplicar entre ellos." << endl;


	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese el primer numero: ";
	 cin >> num1;

	 cout << "Ingrese el segundo numero: ";
	 cin >> num2;

	 system("cls");

	 cout << "La tabla del numero " << num1 << " es: ";
	 for (int i = 1; i <= 12; ++i) {

		 int mult1 = i * num1;
		 cout << num1 << " X " << i << "= " << mult1 << endl;
	 }

	 cout << "La tabla del numero " << num2 << " es: " << endl;
	 for (int o = 1; o <= 12; ++o) {

		 int mult2 = o * num2;
		 cout << num2 << " X " << o << "= " << mult2 << endl;
	 }

	 system("pause");
	 system("cls");
 }
 void programa32() {
	 int num1, num2;
	 cout << "Usando bucles, acepte 2 números e imprima la serie Fibonacci entre ellos." << endl;


	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << " Ingrese el primer numero: ";
	 cin >> num1;

	 cout << " Ingrese el segundo numero: ";
	 cin >> num2;

	 system("cls");

	 for (int i = 1; i <= 20; ++i) {

		 int sum = num1 + num2;

		 num1 = num2;
		 num2 = sum;

		 cout << sum << endl;
	 }
	 system("pause");
	 system("cls");
 }
 void programa33() {
	 int num = 0, o = 0, cantidad = 0;
	 cout << "Aceptar números y calcular el promedio de los que sean Pares hasta que escriba un numero múltiplo de 13." << endl;


	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 for (int i = 0; i <= 1000; ++i) {
		 cout << "Ingrese numero: ";
		 cin >> o;

		 if (o % 2 == 0) {
			 num += o;
			 cantidad++;

		 }
		 if (o % 13 == 0)
			 break;

	 }
	 cout << "El resultado al calcular el promedio de los que son pares es: " << num / cantidad << endl;

 }
 void programa34() {
	 int numero;
	 int sumaPositivos = 0;
	 int sumaNegativos = 0;
	 cout << "Aceptar un grupo de números y decir la suma de Positivos y suma de negativos hasta se introduzca el 0." << endl;


	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 do {
		 cout << " Ingrese numero (ingrese 0 para terminar)";
		 cin >> numero;
		 if (numero > 0) {
			 sumaPositivos += numero;
		 }
		 else if (numero < 0) {
			 sumaNegativos += numero;
		 }


	 } while (numero != 0);
	 system("cls");


	 cout << "La suma de todos los numeros positivos es de: " << sumaPositivos << endl;
	 cout << "La suma de todos los numeros negativos es de: " << sumaNegativos << endl;


	 system("pause");
	 system("cls");

 }
 void programa35() {
	 int nums;
	 int sumaImpar = 0;
	 cout << "Que acepte números y sume los impares entre ellos, hasta que se digite un número mayor que 50." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 do {
		 cout << "Ingrese numero (El numero mayor es 50 para terminar): ";
		 cin >> nums;

		 if (nums % 2 != 0) {

			 sumaImpar += nums;

		 }


	 } while (nums <= 49);
	 cout << "La suma de los numeros impares es de: " << sumaImpar << endl;

	 system("pause");
	 system("cls");

 }
 void programa36() {
	 int num, suma = 0, cantidad = 0;
	 cout << "Aceptar solo números positivos y calcular el promedio de los múltiplos de 7 , hasta que digite un múltiplo de 13." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 do {
		 cout << "ingrese numero: ";
		 cin >> num;
		 if (num < 0) {
			 cout << "Ingrese un numero positivo mayor a cero. ";
		 }
		 if (num % 7 == 0) {
			 suma += num;
			 cantidad++;
		 }
	 } while (num % 13 != 0);

	 system("cls");

	 cout << "el promedio de los multiplos de 7 es: " << suma / cantidad;

	 system("pause");
	 system("cls");

 }
 void programa37() {
	 int numero, positivos = 0, negativos = 0, ceros = 0;
	 cout << "Aceptar números y decir cuántos fueron positivos, cuantos negativos y cuantos cero hasta digitar el 23." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 do {
		 cout << "ingrese numero (Ingrese el 23 para finalizar): ";
		 cin >> numero;

		 if (numero > 0) {
			 positivos++;
		 }
		 if (numero < 0) {
			 negativos++;
		 }
		 if (numero == 0) {
			 ceros++;
		 }
	 } while (numero != 23);

	 cout << "La cantidad de numeros positivos es de: " << positivos << endl;
	 cout << "La cantidad de numeros negativos es de: " << negativos << endl;
	 cout << "La cantidad de ceros es de: " << ceros << endl;


 }
 void programa38() {
	 int numero, cantidad = 0, suma = 0;
	 cout << "Un programa que pida valores e imprima el promedio de los que sean primos hasta que digite un valor mayor a 100." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 do {
		 cout << "Ingrese numero(escribe 101 o un numero mayor para terminar): ";
		 cin >> numero;

		 if (numero % 3 == 0 || numero == 1) {
			 suma += numero;
			 cantidad++;
		 }
		 if (numero > 100)break;
	 } while (numero <= 100);

	 system("cls");

	 cout << " El promedio de los numero primos ingresados es de: " << suma / cantidad << endl;

	 system("pause");
	 system("cls");



 }
 void programa39() {
	 int dia, mes, anio, diaEnMeses, bisiesto;
	 cout << "Realizar un programa que acepte una fecha e imprima la fecha del día siguiente." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese el dia: ";
	 cin >> dia;

	 cout << "Ingrese el mes: ";
	 cin >> mes;

	 cout << "Ingrese anio: ";
	 cin >> anio;

	 system("cls");

	 dia++;

	 bisiesto = (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0));

	 if (mes == 2) {

		 diaEnMeses = bisiesto ? 29 : 28;
	 }

	 else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {

		 diaEnMeses = 30;

	 }
	 else {
		 diaEnMeses = 31;
	 }
	 if (dia > diaEnMeses) {
		 dia = 1;
		 mes++;

	 }
	 if (mes > 12) {
		 mes = 1;
		 anio++;
	 }

	 cout << "El proximo dia sera: " << dia << "/" << mes << "/" << anio << endl;

	 system("pause");
	 system("cls");
 }
 void programa40() {
	 int dia, mes, año;
	 cout << "Diseñar e implementar un programa que solicite al usuario una entrada como un dato tipo fecha y , a continuación," << endl;
	 cout << "visualice el número del día correspondiente del año. Ejemplo, si la fecha es 30 12 1999, el número visualizado es 364." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese el día: ";
	 cin >> dia;
	 cout << "Ingrese el mes: ";
	 cin >> mes;
	 cout << "Ingrese el año: ";
	 cin >> año;

	 system("cls");

	 bool esBisiesto = (año % 4 == 0 && (año % 100 != 0 || año % 400 == 0));


	 int diaDelAño = dia;


	 for (int i = 1; i < mes; i++) {
		 if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			 diaDelAño += 31;
		 }
		 else if (i == 4 || i == 6 || i == 9 || i == 11) {
			 diaDelAño += 30;
		 }
		 else if (i == 2) {
			 diaDelAño += esBisiesto ? 29 : 28;
		 }
	 }


	 cout << "El número del día del año es: " << diaDelAño << endl;

	 system("pause");
	 system("cls");

 }
 void programa41() {
	 int valor;

	 cout << "Realizar un programa que acepte un valor en el rango de 0 a 129 y diga :" << endl;
	 cout << "• Si el carácter es una letra minúscula:" << endl;
	 cout << "• Si el carácter es una letra mayúscula" << endl;
	 cout << "• Si el carácter es un dígito" << endl;
	 cout << "• Si el carácter es un espacio" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 do {
		 cout << "Ingrese un valor entre 0 y 129: ";
		 cin >> valor;

		 if (valor < 0 || valor > 129) {
			 cout << "Valor fuera de rango. Intente de nuevo." << endl;
		 }
	 } while (valor < 0 || valor > 129);

	 char caracter = static_cast<char>(valor);

	 system("cls");

	 cout << "El caracter correspondiente es: " << caracter << endl;

	 if (islower(caracter)) {
		 cout << "Es una letra minúscula." << endl;
	 }
	 else if (isupper(caracter)) {
		 cout << "Es una letra mayúscula." << endl;
	 }
	 else if (isdigit(caracter)) {
		 cout << "Es un dígito." << endl;
	 }
	 else if (isspace(caracter)) {
		 cout << "Es un espacio." << endl;
	 }
	 else {
		 cout << "Es otro tipo de carácter." << endl;
	 }





 }
 void programa42() {
	 char consonante;
	 cout << "Un programa que acepte un carácter y determine si es consonante o vocal" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese el caracter: ";
	 cin >> consonante;

	 system("cls");

	 if (consonante == 'a' || consonante == 'e' || consonante == 'i' || consonante == 'o' || consonante == 'u') {
		 cout << consonante << " es una vocal";
	 }
	 if (consonante == 'b' || consonante == 'c' || consonante == 'd' || consonante == 'f' || consonante == 'g' || consonante == 'h' || consonante == 'j' || consonante == 'k' || consonante == 'l' || consonante == 'n' || consonante == 'm' || consonante == 'P' || consonante == 'q' || consonante == 'r' || consonante == 's' || consonante == 't' || consonante == 'v' || consonante == 'w' || consonante == 'x' || consonante == 'y' || consonante == 'z') {
		 cout << consonante << " es una consonante";
	 }
	 if (consonante == 'A' || consonante == 'E' || consonante == 'I' || consonante == 'O' || consonante == 'U') {
		 cout << consonante << " es una vocal";
	 }
	 if (consonante == 'B' || consonante == 'C' || consonante == 'D' || consonante == 'F' || consonante == 'G' || consonante == 'H' || consonante == 'J' || consonante == 'K' || consonante == 'L' || consonante == 'N' || consonante == 'M' || consonante == 'P' || consonante == 'q' || consonante == 'R' || consonante == 'S' || consonante == 'T' || consonante == 'V' || consonante == 'W' || consonante == 'X' || consonante == 'Y' || consonante == 'Z') {
		 cout << consonante << " es una consonante";
	 }
	 system("pause");
	 system("cls");

 }
 void programa43() {
	 string nombre;
	 string apellido;
	 cout << "Un programa que acepte un carácter y determine si es consonante o vocal" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Escriba el nombre: ";
	 getline(cin, nombre);

	 cout << "Escriba el apellido: ";
	 getline(cin, apellido);

	 system("cls");

	 if (islower(apellido[0])) {
		 apellido[0] = toupper(apellido[0]);
	 }
	 if (islower(nombre[0])) {
		 nombre[0] = toupper(nombre[0]);
	 }

	 cout << nombre[0] << endl;
	 cout << apellido[0] << endl;

	 system("pause");
	 system("cls");


 }
 void programa44() {
	 cout << "Un programa que acepte nombre y apellido y le cree un correo de Gmail con la 1era letra de nombre, un punto y su" << endl;
	 cout << "apellido completo" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 char nombre[10], apellido[10], pln, e[20];
	 cout << " Creador de E-MAIL" << endl;


	 cout << " Introduca su nombre: ";
	 cin >> nombre;
	 cout << " Introduzca su apellido: ";
	 cin >> apellido;
	 cout << "Como se llama la empresa:";
	 cin >> e;

	 system("cls");

	 pln = nombre[0];

	 cout << "\n Su nuevo correo es: " << pln << "." << apellido << "@" << e << ".com" << endl;

	 system("Pause");
	 system("cls");




 }
 void programa45() {
	 string nombre;
	 string apellido;
	 string matricula;
	 string cedula;
	 cout << "Aceptar nombre, cedula y matricula y crear una contraseña de 8 caracteres con:" << endl;
	 cout << "a. 2 primeras letras de 1er nombre" << endl;
	 cout << "b. 2 primeras letras de 1er apellido" << endl;
	 cout << "c. 2 últimos números de cedula" << endl;
	 cout << "d. 2 últimos números de la matricula" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese su nombre: ";
	 cin >> nombre;

	 cout << "Ingrese su apellido: ";
	 cin >> apellido;

	 cout << "Ingrese su matricula: ";
	 cin >> matricula;

	 cout << "Ingrese su cedula: ";
	 cin >> cedula;

	 system("cls");

	 cout << "Su contraseña es: " << nombre[0] << nombre[1] << apellido[0] << apellido[1] << matricula[0] << matricula[1] << cedula[0] << cedula[1] << endl;

	 system("pause");
	 system("cls");

 }
 void programa46() {
	 string nombre;
	 cout << "Dada una palabra imprimir al revés ejemplo en ’David’ que imprima ‘divaD’" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese nombre: ";
	 cin >> nombre;

	 system("cls");

	 reverse(nombre.begin(), nombre.end());

	 cout << "Su nombre al reves es: " << nombre;
	 system("pause");
	 system("cls");
 }
 void programa47() {
	 string frase;
	 char caracter;

	 cout << "Aceptar un carácter y una frase y decir cuantas veces se repite el carácter aceptado en la frase." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Escriba una frase: ";
	 getline(cin, frase);

	 cout << "Cual caracter desea usted saber cuantas veces se repite? ";
	 cin >> caracter;

	 system("cls");

	 int cantidad = count(frase.begin(), frase.end(), caracter);

	 cout << "Las veces que aparecio " << caracter << " es de " << cantidad << endl;

	 system("pause");
	 system("cls");

 }
 void programa48() {
	 string palabra;
	 cout << "Dado una palabra determina si es palíndromo (Un palíndromo se escribe igual en ambos lados, ejemplo “ojo”)." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Escriba la palabnra que desea saber si es palindromo o no: ";
	 cin >> palabra;

	 system("cls");
	 string alreves = palabra;
	 reverse(alreves.begin(), alreves.end());

	 if (palabra == alreves) {
		 cout << "La palabra " << palabra << " es un palindromo";
	 }
	 else {
		 cout << "La palabra " << palabra << " no es un palindromo";
	 }



 }
 void programa49() {
	 string frase;
	
	 cout << "Aceptar una frase y decir cuales letras se repiten." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Introduce una frase: ";
	 getline(cin, frase);

	 system("cls");

	 int frecuencia[26] = { 0 };


	 for (char c : frase) {

		 if (isalpha(c)) {
			 c = tolower(c);

			 frecuencia[c - 'a']++;
		 }
	 }


	 cout << "Letras que se repiten: " << endl;
	 for (int i = 0; i < 26; ++i) {
		 if (frecuencia[i] > 1) {
			 cout << static_cast<char>('a' + i) << ": " << frecuencia[i] << " veces" << endl;
		 }
	 }
	 system("pause");
	 system("cls");
 }
 void programa50() {
	 string oracion;
	 cout << "Dado una oración decir cuantos y cuales caracteres están en mayúscula." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Introduce una oracion: ";
	 getline(cin, oracion);

	 system("cls");

	 int contador = 0;
	 string mayusculas;

	 for (char c : oracion) {
		 if (isupper(c)) {
			 contador++;

			 if (mayusculas.find(c) == string::npos) {
				 mayusculas += c;
			 }
		 }
	 }

	 cout << "Numero de caracteres en mayuscula: " << contador << endl;
	 cout << "Caracteres en mayuscula encontrados: " << mayusculas << endl;

	 system("pause");
	 system("cls");

 }
 void programa51() {
	 double cantidades[50] = { 0 }, c, suma = 0;
	 cout << "Un programa que calcule el promedio de “N” cantidades de un vector." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << " cuantas cantidades desea promediar? ";
	 cin >> c;



	 for (int numero = 1; numero <= c; ++numero) {

		 cout << "ingrese la cantidad numero " << numero << " : ";
		 cin >> cantidades[numero];

		 suma += cantidades[numero];
	 }
	 system("cls");

	 cout << "La suma de " << c << " cantidades es de: " << suma << endl;
	 cout << "El promedio de " << c << " cantidades es de: " << suma / c << endl;


	 system("pause");
	 system("cls");

 }
 void programa52() {
	 vector<int> numeros;
	 int n, num;
	 cout << "Un programa que me imprima los números primos de un vector." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "¿Cuántos números desea ingresar? ";
	 cin >> n;

	 cout << "Ingrese los números:\n";
	 for (int i = 0; i < n; ++i) {
		 cin >> num;
		 numeros.push_back(num);
	 }
	 system("cls");

	 cout << "Números primos en el vector: ";
	 imprimirPrimos(numeros);

	 system("pause");
	 system("cls");

 }
 void programa53() {
	 int vectores[50] = { 0 };
	 int vector, i, o = 0;
	 cout << "Un programa que calcule la suma de los elementos pares de “N” elementos de un vector." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "cuantos vectores desea sumar? ";
	 cin >> vector;

	 system("cls");

	 for (i = 1; i <= vector; ++i) {

		 cout << "Inserte vector numero " << i << ": ";
		 cin >> vectores[i];
		 if (vectores[i] % 2 == 0) {
			 o += vectores[i];
		 }
	 }

	 system("cls");

	 cout << "La suma de los elementos pares es de: " << o << endl;

	 system("pause");
	 system("cls");
 }
 void programa54() {
	 int vectores[50] = { 0 }, vector, i;
	 cout << "Un programa que me imprima los elementos pares de un vector de ‘’N” elementos." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese la cantidad de numeros de vectores que desea digitar: ";
	 cin >> vector;

	 system("cls");

	 for (i = 1; i <= vector; ++i) {

		 cout << "Ingrese el vector numero " << i << ": ";
		 cin >> vectores[i];


	 }
	 system("cls");

	 cout << "Los numeros pares de la los vectores son: " << endl;
	 for (i = 1; i <= vector; ++i) {

		 if (vectores[i] % 2 == 0) {
			 cout << vectores[i] << endl;

		 }
	 }
	 system("pause");


 }
 void programa55() {
	 int vector, vector1 = 0, vectores1[50] = { 0 }, vector3[50] = { 0 }, vectores2[50] = { 0 }, i, o = 0;

	 cout << "Un programa que realice la multiplicación escalar de 2 vectores de ‘’N” elementos." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "De cuantas dimensiones quiere que se la operacion? ";
	 cin >> vector;

	 for (i = 1; i <= vector; ++i) {
		 cout << "Ingrese del primer vector el elemento numero " << i << ": ";
		 cin >> vectores1[i];



	 }
	 system("cls");

	 for (i = 1; i <= vector; ++i) {
		 cout << "Ingrese del segundo vector el elemento numero " << i << ": ";
		 cin >> vectores2[i];


		 vector3[i] = vectores1[i] * vectores2[i];
	 }

	 system("cls");

	 for (i = 1; i <= vector; ++i) {
		 cout << vectores1[i] << "                     " << vectores2[i] << "                    " << vector3[i] << endl;
	 }


	 system("pause");



 }
 void programa56() {
	 int i, n, v1[50] = { 0 }, v2[50] = { 0 }, vr[50] = { 0 };
	 cout << "Un programa que genere el vector resultante de 2 vectores de ‘’N” elementos." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Longitud de los vectores:";
	 cin >> n;

	 for (i = 1; i <= n; i = i + 1)
	 {
		 cout << "Digitar el valor no " << i << " del vector 1:";
		 cin >> v1[i];
	 }
	 system("cls");
	 for (i = 1; i <= n; i = i + 1)
	 {
		 cout << "Digitar el valor no " << i << " del vector 2:";
		 cin >> v2[i];
		 vr[i] = v1[i] + v2[i];
	 }
	 cout << "Vector 1   vector 2  vector resultado" << endl;
	 for (i = 1; i <= n; i = i + 1)
	 {
		 cout << v1[i] << "        " << v2[i] << "         " << vr[i] << endl;
	 }
	 system("pause");
	 system("cls");

 }
 void programa57() {
	 double cantidad, sueldoNeto[50] = { 0 };
	 string nombre[50];
	 string apellido[50];
	 double sueldoBruto[50] = { 0 };
	 double afp[50] = { 0 }, ars[50] = { 0 }, prestamo[50] = { 0 }, totalDescuento[50] = { 0 };
	 int codigo[50] = { 0 };
	 cout << "Un programa que calcule la siguiente nómina de “N” empleados" << endl;
	 cout << "Código, Nombre, Apellido, Sueldo bruto" << endl;
	 cout << "bruto AFP 2% sueldo, ARS 3% sueldo Préstamo 5% sueldo" << endl;
	 cout << " Total descuento= afp+ars+prestamo" << endl;
	 cout << "Sueldo neto Sueldo bruto - total descuentos" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Longitud de los vectores:";
	 cout << "Ingrese la cantidad de empleados que desea calcular la nomina: ";
	 cin >> cantidad;
	 cin.ignore();

	 system("cls");
	 for (int i = 1; i <= cantidad; ++i) {
		 cout << "Ingrese codigo del empleado " << i << ": ";
		 cin >> codigo[i];
		 cin.ignore();

		 cout << "Ingrese el nombre del empleado " << i << ": ";
		 getline(cin, nombre[i]);


		 cout << "Ingrese el apellido del empleado " << i << ": ";
		 getline(cin, apellido[i]);


		 cout << "Ingrese sueldo bruto del empleado " << i << ": ";
		 cin >> sueldoBruto[i];

		 system("cls");
		 afp[i] = sueldoBruto[i] * 0.02;

		 ars[i] = sueldoBruto[i] * 0.03;

		 prestamo[i] = sueldoBruto[i] * 0.05;

		 totalDescuento[i] = prestamo[i] + ars[i] + afp[i];

		 sueldoNeto[i] = sueldoBruto[i] - totalDescuento[i];

		 cout << "El empleado con codigo: " << codigo[i] << endl;
		 cout << "Nombre " << nombre[i] << " " << apellido[i] << endl;
		 cout << "Sueldo bruto de " << sueldoBruto[i] << endl;

		 cout << "tiene un descuento de: " << totalDescuento[i] << endl;
		 cout << "AFP: " << afp[i] << endl;
		 cout << "ARS: " << ars[i] << endl;
		 cout << "Prestamo: " << prestamo[i] << endl;
		 cout << "Total de descuento: " << totalDescuento[i] << endl;
		 cout << "Sueldo neto es de: " << sueldoNeto[i] << endl;

		 system("pause");
		 system("cls");
	 }


	 system("pause");


 }
 void programa58() {
	 double cantidad, sueldoNeto[50] = { 0 };
	 string nombre[50];
	 string apellido[50];
	 double sueldoBruto[50] = { 0 };
	 double afp[50] = { 0 }, ars[50] = { 0 }, prestamo[50] = { 0 }, totalDescuento[50] = { 0 };
	 double codigo[50] = { 0 }, incentivo[50] = { 0 };
	 int zona;
	 cout << "Un programa que calcule las comisiones por zonas de “N” empleados." << endl;
	 cout << "a. Zona A (Guachupita, Capotillo), Incentivo es 20% sueldo" << endl;
	 cout << "b. Zona B (Naco, Piantini), Incentivo es 1% sueldo" << endl;
	 cout << "Código, Nombre, Apellido, Sueldo bruto" << endl;
	 cout << "zona" << endl;
	 cout << "Sueldo neto Sueldo + incentivo" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Longitud de los vectores:";
	 cout << "Ingrese la cantidad de empleados que desea calcular la nomina: ";
	 cout << "Ingrese la cantidad de empleados que desea calcular la nomina: ";
	 cin >> cantidad;
	 cin.ignore();

	 system("cls");
	 for (int i = 1; i <= cantidad; ++i) {
		 cout << "De que zona es el empleado " << i << "? " << endl;
		 cout << "1=> Zona A(Guachupita, Capotillo).                2=> Zona B (Naco, Piantini)." << endl;
		 cin >> zona;

		 system("cls");

		 if (zona == 1) {
			 cout << "Ingrese codigo del empleado " << i << ": ";
			 cin >> codigo[i];
			 cin.ignore();

			 cout << "Ingrese el nombre del empleado " << i << ": ";
			 getline(cin, nombre[i]);


			 cout << "Ingrese el apellido del empleado " << i << ": ";
			 getline(cin, apellido[i]);


			 cout << "Ingrese sueldo bruto del empleado " << i << ": ";
			 cin >> sueldoBruto[i];

			 system("cls");
			 incentivo[i] = sueldoBruto[i] * 0.20;

			 cout << "El empleado con codigo: " << codigo[i] << endl;
			 cout << "Nombre " << nombre[i] << " " << apellido[i] << endl;
			 cout << "Sueldo bruto de " << sueldoBruto[i] << endl;
			 cout << "Zona A(Guachupita, Capotillo)" << endl;
			 cout << "Incentivo de: " << incentivo[i] << endl;
			 cout << "Sueldo neto de: " << incentivo[i] + sueldoBruto[i] << endl;
		 }

		 if (zona == 2) {
			 cout << "Ingrese codigo del empleado " << i << ": ";
			 cin >> codigo[i];
			 cin.ignore();

			 cout << "Ingrese el nombre del empleado " << i << ": ";
			 getline(cin, nombre[i]);


			 cout << "Ingrese el apellido del empleado " << i << ": ";
			 getline(cin, apellido[i]);


			 cout << "Ingrese sueldo bruto del empleado " << i << ": ";
			 cin >> sueldoBruto[i];

			 incentivo[i] = sueldoBruto[i] * 0.01;

			 system("cls");

			 cout << "El empleado con codigo: " << codigo[i] << endl;
			 cout << "Nombre " << nombre[i] << " " << apellido[i] << endl;
			 cout << "Sueldo bruto de " << sueldoBruto[i] << endl;
			 cout << "Zona B (Naco, Piantini)" << endl;
			 cout << "Incentivo de: " << incentivo[i] << endl;
			 cout << "Sueldo neto de: " << incentivo[i] + sueldoBruto[i] << endl;

		 }






		 system("pause");
		 system("cls");
	 }



 }
 void programa59() {
	 double cantidad, sueldoNeto[50] = { 0 };
	 string nombre[50];
	 string apellido[50];
	 double sueldoBruto[50] = { 0 };
	 int codigo[50] = { 0 };
	 double descuento[50] = { 0 };
	 cout << "Un programa que calcule los impuestos de “N” empleados." << endl;
	 cout << "a. Si el sueldo es mayor de 33 mil que le calcule un 1.5% del excedente del sueldo" << endl;
	 cout << "b. Si es menor de 33 mil no le cobran impuesto" << endl;
	 cout << "Código, Nombre, Apellido, Sueldo bruto" << endl;
	 cout << "Excediente = sueldo-33 mil" << endl;
	 cout << "Descuento= Excediente x 1.5%." << endl;
	 cout << "Sueldo neto Sueldo - descuento" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << "------Menu de todo lo realizado este semestre------------------- " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese la cantidad de empleados que desea calcular la nomina: ";
	 cin >> cantidad;
	 cin.ignore();

	 system("cls");
	 for (int i = 1; i <= cantidad; ++i) {
		 cout << "Ingrese codigo del empleado " << i << ": ";
		 cin >> codigo[i];
		 cin.ignore();

		 cout << "Ingrese el nombre del empleado " << i << ": ";
		 getline(cin, nombre[i]);


		 cout << "Ingrese el apellido del empleado " << i << ": ";
		 getline(cin, apellido[i]);


		 cout << "Ingrese sueldo bruto del empleado " << i << ": ";
		 cin >> sueldoBruto[i];

		 system("cls");

		 if (sueldoBruto[i] >= 33000) {
			 descuento[i] = sueldoBruto[i] * 0.015;


		 }


		 cout << "El empleado con codigo: " << codigo[i] << endl;
		 cout << "Nombre " << nombre[i] << " " << apellido[i] << endl;
		 cout << "Sueldo bruto de " << sueldoBruto[i] << endl;
		 if (sueldoBruto[i] >= 33000) {
			 cout << "Con un descuento por el excediente de: " << descuento[i] << endl;
			 cout << "Con un sueldo neto de: " << sueldoBruto[i] - descuento[i] << endl;
		 }

		 system("pause");
		 system("cls");
	 }




 }
 void programa60() {
	 double cantidad, sueldoNeto[50] = { 0 };
	 string nombre[50];
	 string apellido[50];
	 double sueldoBruto[50] = { 0 };
	 double afp[50] = { 0 }, ars[50] = { 0 }, prestamo[50] = { 0 }, totalDescuento[50] = { 0 };
	 int codigo[50] = { 0 }, unidadesDeunidad[50] = { 0 }, unidad = 20, unidades[50] = { 0 };
	 cout << "Un distribuidor le da un bono de 2 mil pesos por cada 100 unidades vendidas, calcular la siguiente nómina de “N”" << endl;
	 cout << "empleados." << endl;
	 cout << "Código, Nombre, Apellido, Sueldo bruto" << endl;
	 cout << "Unidades vendidas" << endl;
	 cout << "Cantidad de bonos= unidades/100" << endl;
	 cout << "incentivo en bonos = cantidad por 2mil" << endl;
	 cout << "Sueldo neto Sueldo + incentivo" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese la cantidad de empleados que desea calcular la nomina: ";
	 cin >> cantidad;
	 cin.ignore();

	 system("cls");
	 for (int i = 1; i <= cantidad; ++i) {
		 cout << "Ingrese codigo del empleado " << i << ": ";
		 cin >> codigo[i];
		 cin.ignore();

		 cout << "Ingrese el nombre del empleado " << i << ": ";
		 getline(cin, nombre[i]);


		 cout << "Ingrese el apellido del empleado " << i << ": ";
		 getline(cin, apellido[i]);


		 cout << "Ingrese sueldo bruto del empleado " << i << ": ";
		 cin >> sueldoBruto[i];

		 cout << "cuantas unidades ha vendido el empleado " << i << ": ";
		 cin >> unidadesDeunidad[i];

		 system("cls");

		 unidades[i] = unidadesDeunidad[i] * unidad;

		 cout << "El empleado con codigo: " << codigo[i] << endl;
		 cout << "Nombre: " << nombre[i] << " " << apellido[i] << endl;
		 cout << "Sueldo bruto de: " << sueldoBruto[i] << endl;
		 cout << "Cantidad de unidades vendidas: " << unidadesDeunidad[i] << endl;
		 cout << "El incentivo en bonos es de: " << unidades[i] << endl;
		 cout << "El sueldo neto es: " << sueldoBruto[i] + unidades[i] << endl;
	 }

	 system("pause");
	 system("cls");


 }
 void programa61() {

	 int i, j, f, c, m1[50][50] = { 0 }, v[50] = { 0 };
	 cout << "Un programa que sume los números enteros positivos la diagonal principal." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "cuantas filas tienen las matrices ";
	 cin >> f;
	 cout << "Cuantas columnas tienen las matrices ";
	 cin >> c;
	 system("cls");

	 for (i = 1; i <= f; i = i + 1)
	 {
		 for (j = 1; j <= c; j = j + 1)
		 {
			 cout << "Entre elemento de la matriz M1[" << i << "," << j << "] : ";
			 cin >> m1[i][j];
			 if (i == j)
			 {
				 v[i] = m1[i][j];
			 }
		 }
	 }
	 system("cls");
	 cout << "Diagonal Principal" << endl;
	 for (j = 1; j <= c; j = j + 1)
	 {
		 cout << v[j] << endl;
	 }

	 system("pause");
	 system("cls");

 }
 void programa62() {
	 int i = 0, o = 0, columnas, filas, acumulado = 0;
	 double acumulado1 = 0;
	 int matriz[50][50] = { 0 };
	 cout << "Un programa que calcule el promedio de “N” cantidades de una Matriz." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese la cantidad de filas que desea poner: ";
	 cin >> filas;

	 cout << "Ingrese la cantidad de columnas que desea poner: ";
	 cin >> columnas;

	 system("cls");

	 for (int i = 1; i <= filas; i++) {


		 for (int o = 1; o <= columnas; ++o) {


			 cout << "Ingrese el valor de la matriz [" << i << ", " << o << "]: ";
			 cin >> matriz[i][o];


			 acumulado1 += matriz[i][o];
			 acumulado = filas * columnas;
		 }

	 }
	 double promedio = acumulado1 / acumulado;
	 cout << "El promedio de dicha matriz Es: " << promedio << endl;


	 system("pause");
	 system("cls");
 }
 void programa63() {
	 double matriz[25][25] = { 0 };
	 double suma = 0;
	 int filas, columnas;
	 cout << "Un programa que sume los elementos negativos de una matriz" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese la cantidad de filas que desee: ";
	 cin >> filas;

	 cout << "Ingrese la cantidad de columnas que desee: ";
	 cin >> columnas;

	 system("cls");

	 for (int i = 1; i <= filas; i++) {

		 for (int o = 2; o <= columnas; o++) {

			 cout << "Ingrese el valor de la matriz [" << i << ", " << o << "]";
			 cin >> matriz[i][o];

			 if (matriz[i][o] < 0) {

				 suma += matriz[i][o];

			 }



		 }


	 }

	 cout << "La suma de los numeros negativos de la matriz es de: " << suma << endl;

	 system("pause");
	 system("cls");



 }
 void programa64() {
	 int i, j, com, f, c, m1[50][50] = { 0 }, v[50] = { 0 }, impares = 0;
	 cout << "Un programa que calcule la suma de los números impares de “N” elementos de la diagonal secundaria." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 system("cls");

	 cout << "cuantas filas tienen las matrices ";
	 cin >> f;
	 cout << "Cuantas columnas tienen las matrices ";
	 cin >> c;

	 system("cls");

	 for (i = 1; i <= f; i = i + 1)
	 {
		 for (j = 1; j <= c; j = j + 1)
		 {
			 cout << "Entre elemento de la matriz M1[" << i << "," << j << "] : ";
			 cin >> m1[i][j];
			 com = i + j;
			 if (com == (c + 1))
			 {
				 v[i] = m1[i][j];
			 }
		 }
	 }
	 system("cls");
	 cout << "Diagonal Secunadaria" << endl;
	 for (j = 1; j <= c; j = j + 1)
	 {
		 cout << v[j] << endl;


	 }
	 cout << "La suma de los numeros imprares es de: ";

	 for (j = 1; j <= c; j = j + 1)
	 {
		 if (v[j] % 2 != 0) {
			 impares += v[j];

		 }

	 }
	 cout << impares << endl;

	 system("pause");
	 system("cls");



 }
 void programas65() {
	 int matriz[50][50] = { 0 }, filas, columnas, i, o;
	 cout << "Un programa que me imprima los números primos de un una matriz." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese la cantidad de filas que desee: ";
	 cin >> filas;

	 cout << "Ingrese la cantidad de columnas que desee: ";
	 cin >> columnas;

	 system("cls");

	 for (i = 1; i <= filas; ++i) {
		 for (o = 1; o <= columnas; ++o) {

			 cout << "Ingrese el valor del elemento [" << i << ", " << o << "]: "; \
				 cin >> matriz[i][o];

		 }

	 }
	 system("cls");

	 cout << "Los numeros primos de la matriz son: " << endl;
	 for (i = 1; i <= filas; ++i) {
		 for (o = 1; o <= columnas; ++o) {
			 if (esprimo1(matriz[i][o])) {
				 cout << matriz[i][o] << endl;
			 }
		 }
	 }

	 system("pause");
	 system("cls");

 }
 void programa66() {
	 int i, j, com, f, c, m1[50][50] = { 0 }, v[50] = { 0 };
	 cout << "Un programa que me imprima los elementos impares dela diagonal Secundaria." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 system("cls");

	 cout << "cuantas filas tienen la matriz: ";
	 cin >> f;
	 cout << "Cuantas columnas tienen las matriz: ";
	 cin >> c;

	 system("cls");

	 for (i = 1; i <= f; i = i + 1)
	 {
		 for (j = 1; j <= c; j = j + 1)
		 {
			 cout << "Entre elemento de la matriz M1[" << i << "," << j << "] : ";
			 cin >> m1[i][j];
			 com = i + j;
			 if (com == (c + 1))
			 {
				 v[i] = m1[i][j];
			 }
		 }
	 }
	 system("cls");
	 cout << "Los numeros impares de la diagonal secundaria son: " << endl;

	 for (j = 1; j <= c; j = j + 1)
	 {
		 if (v[j] % 2 != 0) {
			 cout << v[j] << endl;

		 }

	 }


	 system("pause");
	 system("cls");


 }
 void programa67() {
	 int matriz[50][50] = { 0 }, vectores[50] = { 0 }, filas, columnas, vector, i = 0, o = 0, u = 0, e = 0, a = 0, multiplicacion[50] = { 0 };
	 cout << "Un programa que acepte un vector y lo multiplique por cada fila de una matriz." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Inserte la cantidad de filas que desee: ";
	 cin >> filas;

	 cout << "Inserte la cantidad de columnas que desee: ";
	 cin >> columnas;

	 system("cls");

	 cout << "OJO: Se utilizara la misma cantidad de elementos del vector de lo que hay en filas" << endl;
	 vector = filas;

	 system("pause");
	 system("cls");


	 for (i = 1; i <= filas; ++i) {
		 for (o = 1; o <= columnas; ++o) {

			 cout << "Ingrese el valor correspondiente a [" << i << ", " << o << "]: ";
			 cin >> matriz[i][o];
		 }

	 }


	 system("cls");

	 for (u = 1; u <= vector; ++u) {
		 cout << "Ingrese el elemento del vector numero " << u << ": ";
		 cin >> vectores[u];
	 }


	 cout << "La multiplicacion de cada una de las filas de la matriz es: " << endl;
	 for (e = 1; e < filas + 1; ++e) {

		 for (a = 0; a <= columnas; ++a) {
			 multiplicacion[e] += matriz[e][a] * vectores[a];

		 }

		 cout << "Resultado de la fila " << e << ": " << multiplicacion[e] << endl;
	 }




	 system("pause");

	 system("cls");


 }
 void programa68() {
	 double cantidad, sueldoNeto[50] = { 0 };
	 string nombre[50];
	 string apellido[50];
	 double sueldoBruto[50] = { 0 };
	 double afp[50] = { 0 }, ars[50] = { 0 }, prestamo[50] = { 0 }, totalDescuento[50] = { 0 };
	 int codigo[50] = { 0 }, departamento;
	 cout << "Un programa que calcule la siguiente nómina de por departamentos." << endl;
	 cout << "Código, Nombre, Apellido, Sueldo bruto" << endl;
	 cout << "bruto AFP 2% sueldo, ARS 3% sueldo Préstamo 5% sueldo" << endl;
	 cout << " Total descuento= afp+ars+prestamo" << endl;
	 cout << "Sueldo neto Sueldo bruto - total descuentos" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese la cantidad de empleados que desea calcular la nomina: ";
	 cin >> cantidad;
	 cin.ignore();

	 if (cantidad == 1) {
		 cout << "De que departamento es el empleado?" << endl;


	 }
	 else if (cantidad >= 2) {
		 cout << "De que departamentos son los empleados?" << endl;

	 }
	 cout << "1=> Contabilidad                    2=> Informatica" << endl;
	 cin >> departamento;

	 system("cls");



	 for (int i = 1; i <= cantidad; ++i) {
		 cout << "Ingrese codigo del empleado " << i << ": ";
		 cin >> codigo[i];
		 cin.ignore();

		 cout << "Ingrese el nombre del empleado " << i << ": ";
		 getline(cin, nombre[i]);


		 cout << "Ingrese el apellido del empleado " << i << ": ";
		 getline(cin, apellido[i]);


		 cout << "Ingrese sueldo bruto del empleado " << i << ": ";
		 cin >> sueldoBruto[i];

		 system("cls");
		 afp[i] = sueldoBruto[i] * 0.02;

		 ars[i] = sueldoBruto[i] * 0.03;

		 prestamo[i] = sueldoBruto[i] * 0.05;

		 totalDescuento[i] = prestamo[i] + ars[i] + afp[i];

		 sueldoNeto[i] = sueldoBruto[i] - totalDescuento[i];

		 if (departamento == 1) {
			 cout << "Departamento de Contabilidad: " << endl;
		 }
		 else if (departamento == 2) {
			 cout << "Departamento de Informatica" << endl;
		 }


		 cout << "El empleado con codigo: " << codigo[i] << endl;
		 cout << "Nombre " << nombre[i] << " " << apellido[i] << endl;
		 cout << "Sueldo bruto de " << sueldoBruto[i] << endl;

		 cout << "tiene un descuento de: " << totalDescuento[i] << endl;
		 cout << "AFP: " << afp[i] << endl;
		 cout << "ARS: " << ars[i] << endl;
		 cout << "Prestamo: " << prestamo[i] << endl;
		 cout << "Total de descuento: " << totalDescuento[i] << endl;
		 cout << "Sueldo neto es de: " << sueldoNeto[i] << endl;


	 }

	 system("pause");
	 system("cls");


 }
 void programa69() {
	 int matriz1[3][3] = { 0 }, matriz2[3][3] = { 0 }, matrizResultante[3][3] = { 0 };

	 for (int i = 1; i < 3; ++i) {
		 for (int o = 1; o < 3; ++o) {

			 cout << "Ingrese el valor de la matriz [" << i << ", " << o << "]";
			 cin >> matriz1[i][o];
		 }

	 }

	 system("cls");

	 for (int i = 1; i < 3; ++i) {
		 for (int o = 1; o < 3; ++o) {

			 cout << "Ingrese el valor de la matriz [" << i << ", " << o << "]";
			 cin >> matriz2[i][o];
		 }

	 }

	 system("cls");


	 matrizResultante[1][1] = (matriz1[1][1] * matriz2[1][1]) + (matriz1[1][2] * matriz2[2][1]);
	 matrizResultante[1][2] = (matriz1[1][1] * matriz2[1][2]) + (matriz1[1][2] * matriz2[2][2]);
	 matrizResultante[2][1] = (matriz1[2][1] * matriz2[1][1]) + (matriz1[2][2] * matriz2[2][1]);
	 matrizResultante[2][2] = (matriz1[2][1] * matriz2[1][2]) + (matriz1[2][2] * matriz2[2][2]);

	 cout << "La matriz resultante de la multiplicacio entre las 2 matrices 2 x 2 es:" << endl;
	 cout << matrizResultante[1][1] << "     " << matrizResultante[1][2] << endl;
	 cout << matrizResultante[2][1] << "     " << matrizResultante[2][2] << endl;

	 system("pause");



 }
 void programa70() {
	 double cantidad, sueldoNeto[50] = { 0 };
	 string nombre[50];
	 string apellido[50];
	 double sueldoBruto[50] = { 0 };
	 double afp[50] = { 0 }, ars[50] = { 0 }, prestamo[50] = { 0 }, totalDescuento[50] = { 0 };
	 int codigo[50] = { 0 }, unidadesDeunidad[50] = { 0 }, unidad = 20, unidades[50] = { 0 };
	 cout << "Un distribuidor le da un bono de 2 mil pesos por cada 100 unidades vendidas, calcular la siguiente nómina de “N”" << endl;
	 cout << "empleados." << endl;
	 cout << "Código, Nombre, Apellido, Sueldo bruto" << endl;
	 cout << "Unidades vendidas" << endl;
	 cout << "Cantidad de bonos= unidades/100" << endl;
	 cout << "incentivo en bonos = cantidad por 2mil" << endl;
	 cout << "Sueldo neto Sueldo + incentivo" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;           
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese la cantidad de empleados que desea calcular la nomina: ";
	 cin >> cantidad;
	 cin.ignore();

	 system("cls");
	 for (int i = 1; i <= cantidad; ++i) {
		 cout << "Ingrese codigo del empleado " << i << ": ";
		 cin >> codigo[i];
		 cin.ignore();

		 cout << "Ingrese el nombre del empleado " << i << ": ";
		 getline(cin, nombre[i]);


		 cout << "Ingrese el apellido del empleado " << i << ": ";
		 getline(cin, apellido[i]);


		 cout << "Ingrese sueldo bruto del empleado " << i << ": ";
		 cin >> sueldoBruto[i];

		 cout << "cuantas unidades ha vendido el empleado " << i << ": ";
		 cin >> unidadesDeunidad[i];

		 system("cls");

		 unidades[i] = unidadesDeunidad[i] * unidad;

		 cout << "El empleado con codigo: " << codigo[i] << endl;
		 cout << "Nombre: " << nombre[i] << " " << apellido[i] << endl;
		 cout << "Sueldo bruto de: " << sueldoBruto[i] << endl;
		 cout << "Cantidad de unidades vendidas: " << unidadesDeunidad[i] << endl;
		 cout << "El incentivo en bonos es de: " << unidades[i] << endl;
		 cout << "El sueldo neto es: " << sueldoBruto[i] + unidades[i] << endl;
	 }

	 system("pause");
	 system("cls");
 }
 void programa71() {
	 int variableA, variableB, variableC;
	 double resultado1, resultado2;
	 cout << "Realizar un programa que capture a, b, c y devuelva los valores x positiva y x negativa de una ecuación de 2do grado" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese el valor de la variable A: ";
	 cin >> variableA;

	 cout << "Ingrese el valor de la variable B: ";
	 cin >> variableB;

	 cout << "Ingrese el valor de la variable C: ";
	 cin >> variableC;

	 system("cls");

	 if (ecuacion(variableA, variableB, variableC, resultado1, resultado2)); {
		 cout << "Los resultados de la ecuacion son " << resultado1 << " y " << resultado2 << endl;
	 }

	 system("pause");
	 system("cls");

 }
 void programa72() {

	 string texto;
	 cout << "Crear una función que lea una cadena de texto y devuelva el ultimo carácter" << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;

	 cout << "Ingrese un texto: ";
	 getline(cin, texto);

	 system("cls");

	 imprimirUltimoCaracter(texto);

	 system("pause");
	 system("cls");
 }
 void programa73() {
	 int mesesPandemia;
	 cout << "Una función que acepte una cantidad de días bajo pandemia y diga cuantos meses tiene sin salir (si es menor de 30," << endl;
	 cout << "cuantas semanas)." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese los dias que estuvo durante pandemia: ";
	 cin >> mesesPandemia;
	 system("cls");
	 dias(mesesPandemia);

	 system("pause");
	 system("cls");

 }
 void programa74() {
	 int dia, mes, anio;
	 cout << "Realizar un programa que capture una fecha (Dia, mes, año) devuelva la fecha del día siguiente." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese el dia: ";
	 cin >> dia;

	 cout << "Ingrese el mes: ";
	 cin >> mes;

	 cout << "Ingrese el anio: ";
	 cin >> anio;
	 system("cls");
	 diaSiguiente(dia, mes, anio);

	 system("pause");
	 system("cls");
 }
 void programa75() {
	 int segundos;
	 cout << "Realizar un programa que capture una fecha (Dia, mes, año) devuelva la fecha del día siguiente." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese la cantidad de segundos: ";
	 cin >> segundos;

	 system("cls");
	 conversorseg(segundos);

	 system("pause");
	 system("cls");


 }
 void programa76() {
	 int papeles;
	 cout << "Aceptar una cantidad mayor 20 y decir cuales y cuantas papeletas pueden representar esa cantidad." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.          " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese el valor: ";
	 cin >> papeles;
	 system("cls");
	 cantidad(papeles);

	 system("pause");
	 system("cls");

 }
 void programa77() {
	 int a, b, c;
	 cout << "Una función que capture 3 números y diga cual esta en el medio (Validar si existen 2 iguales o los 3)." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese el primer numero: ";
	 cin >> a;

	 cout << "Ingrese el primer numero: ";
	 cin >> b;

	 cout << "Ingrese el primer numero: ";
	 cin >> c;

	 system("cls");

	 determinarMedio(a, b, c);

	 system("pause");
	 system("cls");
 }
 void programa78() {
	 int a, e, i;
	 cout << "Captures 3 números y mostrarlos de mayor a menor y de menor a mayor." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese el primer valor: ";
	 cin >> a;
	 cout << "Ingrese el primer valor: ";
	 cin >> e;
	 cout << "Ingrese el primer valor: ";
	 cin >> i;

	 mostrarOrdenados(a, e, i);

	 system("pause");
	 system("cls");

 }
 void programa79() {
	 int medida;
	 cout << "Aceptar una medida en metros y trasformar en pies, yardas, pulgadas." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese el valor en metros que desea convertir: ";
	 cin >> medida;

	 system("cls");

	 conversor(medida);

	 system("pause");
	 system("cls");
 }
 void programa80() {
	 string nombres[6];
	 int juegosGanados[6] = { 0 };
	 const int totalJuegos = 20;
	 cout << "Aceptar los juegos ganados por los 6 equipos de Pelota y realizar una columna de posiciones y otra con los juegos" << endl;
	 cout << "restantes para el 1er lugar." << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	 cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.          " << endl;
	 cout << "---------------------------------------------------------------- " << endl;
	 cout << "Ingrese el valor en metros que desea convertir: ";

	 for (int i = 0; i < 6; ++i) {
		 cout << "Ingrese el nombre del equipo " << i + 1 << ": ";
		 cin >> nombres[i];
		 cout << "Ingrese los juegos ganados por " << nombres[i] << ": ";
		 cin >> juegosGanados[i];
	 }

	 mostrarTablaPosiciones(juegosGanados, nombres, totalJuegos);

	 system("pause");
	 system("cls");
 }









void practica1(){
	int juan;
	do{
		
		cout << "---------------------------------------------------------------- " << endl;
		cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
		cout << "-------------------Practica 1----------------------------------- " << endl;
		cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
		cout << "---------------------------------------------------------------- " << endl;

		cout << "1- Programa 1" << endl;
		cout << "2- Programa 2" << endl;
		cout << "3- Programa 3" << endl;
		cout << "4- Programa 4" << endl;
		cout << "5- Programa 5" << endl;
		cout << "6- Programa 6" << endl;
		cout << "7- Programa 7" << endl;
		cout << "8- Programa 8" << endl;
		cout << "9- Programa 9" << endl;
		cout << "10- Programa 10" << endl;
		cout << "11- Atras" << endl;
		cout << "Elija del 1 al 11: ";
	cin >> juan;

	system("cls");

	
		switch (juan) {
				case 1: programa1();
				break;			
				case 2: programa2(); 
					break;
				case 3: programa3();
					  break;
				case 4: programa4();
					  break;
				case 5: programa5();
					  break;
				case 6:  programa6();
					  break;
				case 7:  programa7();
					  break;
				case 8:  programa8();
					  break;
				case 9:  programa9(); 
					  break;
				case 10:  programa10();
					break;
				case 11: int main();
					   break;
				default: {
					cout << "opcion no valida....." << endl;
					system("Pause");
					system("cls");
					void practica1();
				}
				   

			
		}
		

	} while (juan != 11);
}
void practica2() {
	int juan=0;
	do{
		cout << "---------------------------------------------------------------- " << endl;
		cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
		cout << "-------------------Practica 2----------------------------------- " << endl;
		cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
		cout << "---------------------------------------------------------------- " << endl;

		cout << "1- Programa 1" << endl;
		cout << "2- Programa 2" << endl;
		cout << "3- Programa 3" << endl;
		cout << "4- Programa 4" << endl;
		cout << "5- Programa 5" << endl;
		cout << "6- Programa 6" << endl;
		cout << "7- Programa 7" << endl;
		cout << "8- Programa 8" << endl;
		cout << "9- Programa 9" << endl;
		cout << "10- Programa 10" << endl;
		cout << "11- Atras" << endl;
		cout << "Elija del 1 al 11: ";
	cin >> juan;
	system("cls");
	
		switch (juan) {

			case 1: programa11(); 
				  break;
			case 2:  programa12(); 
				  break;
			case 3:  programa13();
				  break;
			case 4: programa14();
				  break;
			case 5: programa15(); 
				  break;
			case 6:  programa16(); 
				  break;
			case 7:  programa17();
				  break;
			case 8:  programa18(); 
				  break;
			case 9: programa19(); 
				  break;
			case 10: programa20();
				   break;
			case 11: int main(); {}
				   break;
			default: {
				cout << "opcion no valida....." << endl;
				system("Pause");
				system("cls");
				void practica2();
			}


		}


	} while (juan != 11);


}
void practica3() {
	int juan;
	do{
		cout << "---------------------------------------------------------------- " << endl;
		cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
		cout << "-------------------Practica 3----------------------------------- " << endl;
		cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
		cout << "---------------------------------------------------------------- " << endl;

	cout << "1- Programa 1" << endl;
	cout << "2- Programa 2" << endl;
	cout << "3- Programa 3" << endl;
	cout << "4- Programa 4" << endl;
	cout << "5- Programa 5" << endl;
	cout << "6- Programa 6" << endl;
	cout << "7- Programa 7" << endl;
	cout << "8- Programa 8" << endl;
	cout << "9- Programa 9" << endl;
	cout << "10- Programa 10" << endl;
	cout << "11- Atras" << endl;
	cout << "Elija del 1 al 11: ";
	cin >> juan;

	system("cls");
	
		switch (juan) {
		case 1: programa21();
			  break;
		case 2:  programa22(); 
			  break;
		case 3:  programa23(); 
			  break;
		case 4: programa24();
			break;
		case 5: programa25();
			  break;
		case 6: programa26(); 
			break;
		case 7: programa27(); 
			break;
		case 8: programa28();
			break;
		case 9:  programa29(); 
			  break;
		case 10: programa30(); 
			break;
		case 11: int main(); 
			   break;
		default: {
			cout << "opcion no valida....." << endl;
			system("Pause");
			system("cls");
			void practica3();
		}
		}
		

	} while (juan != 11);
}
void practica4() {
	int juan;
	do{
		cout << "---------------------------------------------------------------- " << endl;
		cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
		cout << "-------------------Practica 4----------------------------------- " << endl;
		cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
		cout << "---------------------------------------------------------------- " << endl;

	cout << "1- Programa 1" << endl;
	cout << "2- Programa 2" << endl;
	cout << "3- Programa 3" << endl;
	cout << "4- Programa 4" << endl;
	cout << "5- Programa 5" << endl;
	cout << "6- Programa 6" << endl;
	cout << "7- Programa 7" << endl;
	cout << "8- Programa 8" << endl;
	cout << "9- Programa 9" << endl;
	cout << "10- Programa 10" << endl;
	cout << "11- Atras" << endl;
	cout << "Elija del 1 al 11: ";
	cin >> juan;

	system("cls");


		switch (juan){
		case 1: programa31(); 
			break;
		case 2: programa32();
			break;
		case 3: programa33();
			break;
		case 4: programa34();
			break;
		case 5: programa35();
			break;
		case 6: programa36(); 
			break;
		case 7:  programa37();
			break;
		case 8:  programa38(); 
			break;
		case 9: programa39();
			break;
		case 10: programa40();
			break;
		case 11: int main(); 
			   break;

		default: {
			cout << "opcion no valida....." << endl;
			system("Pause");
			system("cls");
			void practica4();
		}
		}


	} while (juan != 11);

}
void practica5() {
	int juan;
	do{
	
		cout << "---------------------------------------------------------------- " << endl;
		cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
		cout << "-------------------Practica 5----------------------------------- " << endl;
		cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
		cout << "---------------------------------------------------------------- " << endl;

	cout << "1- Programa 1" << endl;
	cout << "2- Programa 2" << endl;
	cout << "3- Programa 3" << endl;
	cout << "4- Programa 4" << endl;
	cout << "5- Programa 5" << endl;
	cout << "6- Programa 6" << endl;
	cout << "7- Programa 7" << endl;
	cout << "8- Programa 8" << endl;
	cout << "9- Programa 9" << endl;
	cout << "10- Programa 10" << endl;
	cout << "11- Atras" << endl;
	cout << "Elija del 1 al 11: ";
	cin >> juan;

	system("cls");
	
		switch (juan) {
		case 1: programa41();
			break;
		case 2:  programa42();
			break;
		case 3: programa43(); 
			break;
		case 4: programa44();
			break;
		case 5: programa45();
			break;
		case 6:  programa46(); 
			break;
		case 7: programa47();
			break;
		case 8: programa48(); 
			break;
		case 9: programa49(); 
			break;
		case 10: programa50(); 
			break;
		case 11: int main(); 
			   break;
		default: {
			cout << "opcion no valida....." << endl;
			system("Pause");
			system("cls");
			void practica5();
		}



		
			  
		}
		



	} while (juan != 11);
	  int main();


}
 void practica6() {
	int juan;
	do{
		cout << "---------------------------------------------------------------- " << endl;
		cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
		cout << "-------------------Practica 6----------------------------------- " << endl;
		cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
		cout << "---------------------------------------------------------------- " << endl;

	cout << "1- Programa 1" << endl;
	cout << "2- Programa 2" << endl;
	cout << "3- Programa 3" << endl;
	cout << "4- Programa 4" << endl;
	cout << "5- Programa 5" << endl;
	cout << "6- Programa 6" << endl;
	cout << "7- Programa 7" << endl;
	cout << "8- Programa 8" << endl;
	cout << "9- Programa 9" << endl;
	cout << "10- Programa 10" << endl;
	cout << "11- Atras" << endl;
	cout << "Elija del 1 al 11: ";
	cin >> juan;

	system("cls");

	
		switch (juan) {
		case 1: programa51();
			  break;
		case 2:  programa52(); 
			break;
		case 3: programa53(); 
			  break;
		case 4: programa54();
			break;
		case 5:  programa55();
			  break;
		case 6: programa56();
			  break;
		case 7: programa57();
			break;
		case 8: programa58();
			break;
		case 9: programa59(); 
			break;
		case 10: programa60();
			break;
		case 11: int main(); 
			   break;
		default: {
			cout << "opcion no valida....." << endl;
			system("Pause");
			system("cls");
			void practica6();
		}
		}

	} while (juan != 11);
}
void practica7() {
	int juan;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
	cout << "-------------------Practica 7----------------------------------- " << endl;
	cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
	cout << "---------------------------------------------------------------- " << endl;
	cout << "1- Programa 1" << endl;
	cout << "2- Programa 2" << endl;
	cout << "3- Programa 3" << endl;
	cout << "4- Programa 4" << endl;
	cout << "5- Programa 5" << endl;
	cout << "6- Programa 6" << endl;
	cout << "7- Programa 7" << endl;
	cout << "8- Programa 8" << endl;
	cout << "9- Programa 9" << endl;
	cout << "10- Programa 10" << endl;
	cout << "11- Atras" << endl;
	cout << "Elija del 1 al 11: ";
	cin >> juan;

	system("cls");

	do{
		switch(juan){
			case 1: programa61();
				break;
			case 2: programa62();
				break;
			case 3: programa63();
				break;
			case 4: programa64(); 
				break;
			case 5: programas65();
				break;
			case 6: programa66();
				break;
			case 7: programa67();
				break;
			case 8: programa68();
				break;
			case 9: programa69();
				break;
			case 10: programa70();
				break;
			case 11: int main(); 
				   break;
			default: {
				cout << "opcion no valida....." << endl;
				system("Pause");
				system("cls");
				void practica7();
			}

		
		
		
		
		}







	
	} while (juan != 11);




}
void practica8() {
	int juan;
	do{
		cout << "---------------------------------------------------------------- " << endl;
		cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
		cout << "-------------------Practica 8-----------------------------------" << endl;
		cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738           " << endl;
		cout << "---------------------------------------------------------------- " << endl;

	cout << "1- Programa 1" << endl;
	cout << "2- Programa 2" << endl;
	cout << "3- Programa 3" << endl;
	cout << "4- Programa 4" << endl;
	cout << "5- Programa 5" << endl;
	cout << "6- Programa 6" << endl;
	cout << "7- Programa 7" << endl;
	cout << "8- Programa 8" << endl;
	cout << "9- Programa 9" << endl;
	cout << "10- Programa 10" << endl;
	cout << "11- Atras" << endl;
	cout << "Elija del 1 al 11: ";
	cin >> juan;

	system("cls");
	
	
		switch (juan){
			case 1: programa71();
				break;
			case 2: programa72();
				break;
			case 3: programa73(); 
				break;
			case 4: programa74();
				break;
			case 5: programa75();
				break;
			case 6: programa76();
				break;
			case 7: programa77();
				break;
			case 8: programa78();
				break;
			case 9: programa79();
				break;
			case 10: programa80();
				break;
			case 11: int main(); {}
				   break;
			default: {
				cout << "opcion no valida....." << endl;
				system("Pause");
				system("cls");
				void practica8();
			}
			


		
		}





	} while (juan != 11);



}



int main() {
	int resp;
	do {
		system("cls");
	
		cout << "---------------------------------------------------------------- " << endl;
		cout << "-----UNIVERSIDAD AUTONOMA DE SANTO DOMINGO---------------------- " << endl;
		cout << "------Menu de todo lo realizado este semestre------------------- " << endl;
		cout << " Nombre:  Jose Daniel Acosta Segura.     Matricula: 100727738.           " << endl;
		cout << "---------------------------------------------------------------- " << endl;
		cout << "Menu de opciones" << endl;
		cout << "1- Practica 1 (Entrada/salida)" << endl;
		cout << "2- Practica 2 (Decisiones)" << endl;
		cout << "3- Practica 3 (Ciclos)" << endl;
		cout << "4- Practica 4 (Ciclos Condicionales)" << endl;
		cout << "5- Practica 5 (Cadenas)" << endl;
		cout << "6- Practica 6 (Vectores)" << endl;
		cout << "7- Practica 7 (Matrices)" << endl;
		cout << "8- Practica 8 (Funciones)" << endl;
		cout << "9- Cerrar proyecto Final" << endl;
		cout << "Elija del 1 al 9: ";
		cin >> resp;


		system("cls");

		switch (resp) {
		case 1:
			practica1();
			break;
		case 2:
			practica2();
			break;
		case 3:
			practica3();
			break;
		case 4:
			practica4();
			break;
		case 5:
			practica5();
			break;
		case 6:
			practica6();
			break;
		case 7:
			practica7();
			break;
		case 8:
			practica8();
			break;
		case 9:
			break;
				
		default: {
			cout << "opcion no valida....." << endl;
			system("Pause");
			system("cls");
			 int main();
		}
		}
			

	} while (resp != 9);
		cout << "Fin del Programa...." << endl;
		system("Pause");
		

}

