#include <cstdlib>
#include <iostream>
using namespace std;

// Este código indica o tempo se que passou entre dois horários que serão digitados pelo usuário. 
// Obs: Estes dois horários precisam estar no mesmo mês.
int main(){
    // Variáveis do Primeiro Horário:
    int dia_1 = 0;
    int horas_1 = 0;
    int min_1 = 0;
    int seg_1 = 0;
    int seg_Total1 = 0;

    // Variáveis do Segundo Horário:
    int dia_2 = 0;
    int horas_2 = 0;
    int min_2 = 0;
    int seg_2 = 0;
    int seg_Total2 = 0;

    // Diferença entre os segundos do primeiro e do segundo horário.
    int seg_Total3 = 0;

    // Variáveis do Resultado (ou seja, o quanto de tempo que se passou):
    int dia_F = 0;
    int horas_F = 0;
    int min_F = 0;
    int seg_F = 0;

    //Input dos dois horários:
    scanf("Dia %d ", &dia_1);
    scanf("%d : %d : %d ", &horas_1, &min_1, &seg_1);

    scanf("Dia %d ", &dia_2);
    scanf("%d : %d : %d ", &horas_2, &min_2, &seg_2);

    // Conversão dos Tempos Digtados para Segundos:
    seg_Total1 = (dia_1 * 86400) + (horas_1 * 3600) + (min_1 * 60) +  seg_1;
    seg_Total2 = (dia_2 * 86400) + (horas_2 * 3600) + (min_2 * 60) +  seg_2;
    seg_Total3 = abs(seg_Total2 - seg_Total1);

    // Conversão de seg_Total3 para Dias, Horas, Minutos e Segundos:
    dia_F = (seg_Total3/86400);
    horas_F = (seg_Total3%86400)/3600;
    min_F = ((seg_Total3%86400)%3600)/60;
    seg_F = ((seg_Total3%86400)%3600)%60;

    // Impressão do Resultado:
    cout << dia_F << " dia(s)" << endl;
    cout << horas_F << " hora(s)" << endl;
    cout << min_F << " minuto(s)" << endl;
    cout << seg_F << " segundo(s)" << endl;

    return 0;
}