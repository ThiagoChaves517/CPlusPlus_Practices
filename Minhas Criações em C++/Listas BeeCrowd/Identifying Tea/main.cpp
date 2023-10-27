#include <iostream>
using namespace std;

int main(){
    int teaType = 0; // The types tea are in the range "1 <= teaType <= 4",
                     // with each being: (1) white tea, (2) green tea, (3) black tea, or (4) herbal tea.
    cin >> teaType;

    // The challenge guests' responses:
    int guestsAnswers[5] = {0, 0, 0, 0, 0};

    // Number of Succeded Anwsers:
    int rightAnswers = 0;

    cin >> guestsAnswers[0] >> guestsAnswers[1] >> guestsAnswers[2] >> guestsAnswers[3] >> guestsAnswers[4];

    // Evaluating answers:
    for(int ans : guestsAnswers){
        if(ans == teaType){
            rightAnswers++;
        }
    }

    cout << rightAnswers << endl;

    return 0;
}