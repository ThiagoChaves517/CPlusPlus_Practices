#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> evenSort(vector<int> numArray){
    priority_queue < int, vector<int>, greater<int> > minHeap;
    priority_queue <int> maxHeap;
    vector<int> newArray;
    int temp = 0;

    // Inserção dos Números Pares:
    for(int i = 0; i < numArray.size(); i++){
        if(numArray[i] % 2 == 0){
            minHeap.push(numArray[i]);
        }
        else{
            maxHeap.push(numArray[i]);
        }
    }

    int heapSize1 = minHeap.size();
    for(int i = 0; i < heapSize1; i++){
        newArray.push_back(minHeap.top());
        minHeap.pop();
    }

    // Inserção dos Números Ímpares:
    int heapSize2 = maxHeap.size();
    for(int i = 0; i < heapSize2; i++){
        newArray.push_back(maxHeap.top());
        maxHeap.pop();
    }

    return newArray;
}

int main(){
    int inputsNum = 0;
    cin >> inputsNum;

    vector<int> numArray(inputsNum);

    for(int i = 0; i < inputsNum; i++){
        cin >> numArray[i];
    }

    vector<int> numArray2 = evenSort(numArray);

    for(int i = 0; i < numArray2.size(); i++){
        cout << numArray2[i] << endl;
    }
}