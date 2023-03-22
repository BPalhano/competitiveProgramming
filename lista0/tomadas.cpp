#include<bits/stdc++.h>
using namespace std;

int main(void){

    int N, n_ext, shad, aux, sum = 0, res;
    cin >> N;

    for(int i = 0; i < N; i++){

        cin >> n_ext;
        shad = n_ext -1;
        
        for (int j = 0; j < n_ext; j++){
            
            cin >> aux;
            sum += aux;

        }

        res = sum - shad;
        cout << res << endl;
        sum = 0;

    }



    return 0;

}