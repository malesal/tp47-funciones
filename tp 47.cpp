#include <iostream>
using namespace std;

bool EsAbundante(int num);

int main() {
    cout << "Los primeros 10000 números abundantes son: " << endl;

    int contador = 0;
    for (int num = 1; num < 10000; num++) {
        if (EsAbundante(num)) {
            cout << num << '/';
        }
        contador++;
    }

    return 0;
}
bool EsAbundante(int num) {
	bool flag=false;
    int sumaDivisores = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sumaDivisores += i;
        }
    }
    if (num<sumaDivisores){
    	flag=true;
	}
    return flag;
}
