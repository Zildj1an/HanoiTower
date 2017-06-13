#include <iostream>
using namespace std;

void hanoi(int n, char source, char auxiliary, char target);
int numMovs(int n);

int main(){
	int num;
	cout << "TORRE DE HANOI" << endl;
	cout << "Numero de pilas?" << endl;
	cin >> num;
	cout << "Siendo A la torre con todas las pilas, B la del medio y C la del fondo (el objetivo) " << endl;
	hanoi(num, 'A','B','C');
	cout << "Y resuelto! " << endl;
	cout << "Número de movimientos: " << numMovs(num) << endl;
return 0;
}

void hanoi(int n, char source, char auxiliary, char target){
if(n > 0){
	hanoi(n - 1, source, target, auxiliary);
	cout << source  << " --> " << target << endl;
	hanoi(n - 1, auxiliary, source, target);
}
}

int numMovs(int n){
int movs = 0;
if(n > 0){
	movs = 2 * numMovs(n - 1) + 1;
}
return movs;
}
