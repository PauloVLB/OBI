// OBI - 2020 - Fase 1 - Nível Sênior - Fissura Perigosa
#include <iostream>
#include <queue>

using namespace std;

int n, f, x, y, atual;
char res [501][501];
string m[501];

int main() {
    cin >> n >> f;

    for (int i = 0; i < n; i++) {
        cin >> m[i];
        for(int j = 0; j < n; j++) {
            x = i;
            y = j;

            atual = (int) m[x][y] - '0';
            
            if(i == 0 && j == 0) {
                res[i][j] = '*';
            } else if(atual <= f) {
                res[x][y] = m[x][y];
                if(y > 0) {
                    if(res[x][y-1] == '*') {
                        res[x][y] = '*';
                    }    
                }    
                if (y < n) {
                    if(res[x][y+1] == '*') {
                        res[x][y] = '*';
                    }
                }  
                if (x > 0) {
                    if(res[x-1][y] == '*') {
                        res[x][y] = '*';
                    } 
                }         
            } else {
                res[x][y] = m[x][y];
            }
        }
    }

    cout << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << res[i][j];
        }
        cout << endl;
    }
    return 0;
}