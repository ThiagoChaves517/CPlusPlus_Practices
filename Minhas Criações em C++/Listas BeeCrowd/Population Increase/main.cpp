#include <iostream>
using namespace std;

int main(){
    int populationA = 0; // 100 <= PA <= 1.000.000
    int populationB = 0; // 100 <= PB <= 1.000.000

    double growRateA = 0; // 0.1 <= GA <= 10.0
    double growRateB = 0; // 0.1 <= GB <= 10.0

    int howManyYears = 0;
    bool centuryFlag = false;

    int testCases = 0;
    cin >> testCases;

    for(int i = 0; i < testCases; i++){
        howManyYears = 0;
        centuryFlag = false;
        cin >> populationA >> populationB >> growRateA >> growRateB;

        while(populationA <= populationB && centuryFlag == false){
            populationA += (populationA * growRateA/100);
            populationB += (populationB * growRateB/100);
            
            howManyYears++;

            if(howManyYears > 100){
                centuryFlag = true;
            }
        }
        
        if(centuryFlag == false){
            cout << howManyYears << " anos." << endl;
        }
        else{
            cout << "Mais de 1 seculo." << endl;
        }
    }

    


    return 0;
}