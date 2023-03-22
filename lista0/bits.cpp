#include<bits/stdc++.h>
using namespace std;

// Existem apenas notas de 50, 10, 5 e 1;
// Problema clássico de minimização de laços;

int main(void){

    int val, I,J,K,L, counter = 0; // inicializando as variáveis
    cin >> val; // coletando o primeiro valor

    while(val != 0){
        
        I = 0;
        J = 0;
        K = 0;
        L = 0;
        counter++;
        
        while(val > 0){

            if(val > 50){
                val -= 50;
                I++;
            }

            else if(val > 10){
                val -= 10;
                J++;
            }

            else if(val > 5){
                val -= 5;
                K++;
            }

                val -= 1;
                L++;
            }

        }

        cout << "Teste " << counter << "\n";
        cout << I << " " << J << " " << K << " " << L << endl;
        cout << endl;

        cin >> val;
    }

    return 0;


}