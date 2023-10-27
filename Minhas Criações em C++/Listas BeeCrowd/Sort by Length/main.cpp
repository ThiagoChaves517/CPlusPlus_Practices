#include <iostream>
#include <vector> // Para arrays dinâmicos;
#include <algorithm> // Para usarmos o stable_sort --> O(nlog n);
#include <sstream> // Para separação de inputs;
using namespace std;

// Determina como serão comparadas as tuplas tipo pair<int, string>:
bool greaterThan(const pair<int,string> &tupleA, const pair<int,string> &tupleB){
    return tupleA.first > tupleB.first;
}

// Neste código, vamos ordenar várias arrays de string de acordo com os seus
// número de caracteres:
int main(){
    int numCases = 0;
    cin >> numCases;
    cin.ignore(); //Permite que o getline() não roube os "\n" das strings.

    string temp;

    for(int i = 0; i < numCases; i++){
        vector<pair<int,string>> strArray; //Array de Strings.

        getline(cin, temp); // Recebe uma linha inteira de input.
        istringstream iss(temp); // Tranforma temp em um fluxo de entrada.
        
        while(iss >> temp){ // O código pega cada palavra escrita na linha, as separando por espaço " ",
            strArray.push_back(make_pair(temp.size(), temp)); // inserindo cada uma em maxHeap até acabarem.
        }

        stable_sort(strArray.begin(), strArray.end(), greaterThan); // Ordena a strArray de acordo com o tamanho
                                                                    // de cada string, sendo que quando dois tamanhos
                                                                    // forem iguais, a ordem orginal entre eles será mantida.
                                                                    // Isso ocorre pois stable_sort() é uma ordenação estável,
                                                                    // assim como o Merge Sort e o Bubble Sort. 

        for(int j = 0; j < strArray.size(); j++){ // Imprime cada um dos elementos  da array.
            if(j == strArray.size()-1){
                cout << strArray[j].second;
            }
            else{
                cout << strArray[j].second << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
