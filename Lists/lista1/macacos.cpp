#include <bits/stdc++.h>
#define lli long long int

using namespace std; // para uso do C++

// por comodidade
#define X first
#define Y second

typedef long long ll;
typedef pair<ll,ll> dot;

// declaro as variáveis que vou usar
int n;
vector<dot> pilha, tree;

// função que checa se o ângulo ABC é côncavo
bool chega(dot a, dot b, dot c){

    // declaro os vetores v1=A-B e v2=C-B
    dot v1=dot(a.X-b.X, a.Y-b.Y), v2=dot(c.X-b.X, c.Y-b.Y);

    // calculo o produto vetorial de v1 e v2
    ll cross_product = v1.X*v2.Y-v1.Y*v2.X;

    // se o produto for não positivo, o ângulo é côncavo
    return cross_product<=0;
}

int main(){

    // leio o valor de n
    cin >> n;

    // para cada ponto da entrada
    for(int i=0; i<n; i++){

        // lendo suas coordenadas X e Y
        ll x, y;
        cin >> x >> y;

        // e o adiciono ao vetor tree
        tree.push_back(dot(x,y));
    }

    // ordeno os pontos por coordenada X
    sort(tree.begin(), tree.end());

    // percorro os pontos ordenadamente
    for(int i=0; i<n; i++){

        // chamo de p o ponto que estou olhando
        dot p=tree[i];

        // enquanto hoouver mais de um ponto na pilha
        while(pilha.size()>1){

            // vejo quem são os dois pontos do topo da pilha
            int last=pilha.size()-1, semi_last=pilha.size()-2;

            // se p formar um ângulo côncavo com os pontos do topo da pilha
            // significa que o macaco não precisa do ponto do meio para chegar a p
            // logo elimino o ponto do topo da pilha
            if(chega(pilha[semi_last], pilha[last], p)) pilha.pop_back();

                // caso contrário, ou seja, o ângulo seja convexo
                // não preciso mais tirar pontos e continuo o algoritmo
            else break;
        }

        // adiciono p à pilha e vou para a próxima iteração
        pilha.push_back(p);
    }

    // no fim, imprimo o número de elementos na pilha menos 1
    cout << pilha.size()-1;

    return 0;
}
