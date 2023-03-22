#include<bits/stdc++.h>
using namespace std;

void bits(){  // First question
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


void meteoros(){ // Second question

  
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

}

void tomadas(){ // Last Question

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


}

''
int main(void){

  // call any function just for test:

  // bits();
  // meteoros();
  // tomadas();

  return 0;
}

