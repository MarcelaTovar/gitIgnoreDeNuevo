#include <iostream>
#include <locale>
using namespace std;

void verdadero_falso_parte1() {
    int a, b;
    if (6.66) cout << "1. 6.66" << endl;
    if (!0) cout << "2. 0 < - - - OJO!" << endl;
    if (-1) cout << "2. -1" << endl;
    if ('A') cout << "3. 'A'" << endl;
    if (2 > 1) cout << "4. 2 > 1" << endl;
    if (1 > 2) cout << "4. 1 > 2 < - - - OJO!" << endl;
    //if (a == 0) cout << "5. a = 0 < - - - OJO!" << endl;
    a = 1; b = 2;
    if (a == b)cout << "5. a(" << a << ") == b(" << b << ") < - OJO!" << endl;
    a = 1; b = 2 - 1;
    if (a == b)cout << "5. a(" << a << ") == b(" << b << ")" << endl;
    if ('\0') cout << "6. '\0' < - OJO!" << endl;
}
void verdadero_falso_parte2() {
    bool a = !true;
    if (a == false) cout << "6. a(" << bool(a) << ")" << endl;
    a = true;
    if (!(!a)) cout << "7. a(" << (bool)a << ")" << endl;
    if (a == true) cout << "8. a(" << (bool)a << ")" << endl;
    if (a)cout << "9. a(" << (bool)a << ")" << endl;
    if (a == false) cout << "10. a(" << (bool)a << ") < - OJO!" << endl;
    if (!a) cout << "10. a(" << (bool)a << ") < - OJO!" << endl;
    a = !a;
    if (!a)cout << "10. a(" << (bool)a << ")" << endl;
    if ('O') cout << "11. '0'" << endl;
}
void uso_for() {
    for (int i = 9; i; i--) {
        cout << i << " ";
    }
}

int seleccion() {
    int codigo;
    setlocale(LC_ALL, "spanish");
    cout << "Codigo: ";
    cin >> codigo;
    return codigo;
}


int main() {
    // verdadero_falso_parte1();
   // verdadero_falso_parte2();
    //uso_for();
    seleccion();
}
