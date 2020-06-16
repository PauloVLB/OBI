// OBI - 2020 - Fase 1 - Nível Sênior - Acelarador de Partículas

#include <iostream>

using namespace std;

int d;

int main() {
    cin >> d;
    d %= 4;
    if(d != 0) d--;
    else d = 3;
    cout << d << endl;
    return 0;
}