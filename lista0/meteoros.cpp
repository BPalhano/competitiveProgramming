#include<bits/stdc++.h>
using namespace std;

int main(void){

    int x1, x2, y1, y2, metnu, cordx, cordy, count = 0, positive = 0, xshift, yshift;
    cin >> x1 >> y1 >> x2 >> y2;

    while (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0){

        count++;

        cin >> metnu;
        for(int i = 0; i < metnu; i ++){

            cin >> cordx >> cordy;
            if(cordx >= x1 && cordx <= x2 && cordy  <= y1 && cordy >= y2){

                positive++;
            }

        }

        cout << "Teste " << count << endl;
        cout << positive << endl;
        cout << endl;

        cin >> x1 >> y1 >> x2 >> y2;
        positive = 0;
    }


    return 0;
}