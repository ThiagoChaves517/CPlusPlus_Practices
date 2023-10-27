#include <iostream>
#include <algorithm>
#define MAX 100

using namespace std;

int main(){
    int N = 0;
    int fita1[MAX];
    int fita2[MAX];

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> fita1[i];
    }
    for(int i = 0; i < N; i++){
        cin >> fita2[i];
    }

    bool flag = false;

    for(int  j = 1; j < N-1; j++){
        int aux = fita1[j-1];
        fita1[j-1] = fita1[j+1];
        fita1[j+1] = aux;
    }

    if(equal(fita1, fita1 + N, fita2) == true){
        flag = true;
    }

    if(flag == true){
        cout << "Sim";
    }
    else{
        cout << "Nao";
    }

    
    return 0;
}