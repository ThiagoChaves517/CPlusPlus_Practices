#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{   
    float n1, n2;
    char op;
    char rst;
    cout << "□ Calculator 7000 □" << endl << endl;
    do{
        cout << "     Digite os números na ordem:" << endl;
        cout << "      - Operation options: +, -, *, / and %." << endl;
        cout << "      - Digit here: ";
        cin >> n1 >> op >> n2;
        cout << endl;
    
        switch(op)
        {
        case '+':
            cout << "     -> Result: " << n1 << " + " << n2 << " = " << n1+n2 << endl;
            cout << endl;
            cout << "       - Reset? Y/N ";
            cin >> rst;
            cout << endl;
            
            break;
            
        case '-':
            cout << "     -> Result: " << n1 << " - " << n2 << " = " << n1-n2 << endl;
            cout << endl;
            cout << "       - Reset? Y/N ";
            cin >> rst;
            cout << endl;
            
            break;
            
        case '*':
            cout << "     -> Result: " << n1 << " × " << n2 << " = " << n1*n2 << endl;
            cout << endl;
            cout << "       - Reset? Y/N ";
            cin >> rst;
            cout << endl;
            
            break;
            
        case '/':
            cout << "     -> Result: " << n1 << " ÷ " << n2 << " = " << n1/n2 << endl;
            cout << endl;
            cout << "       - Reset? Y/N ";
            cin >> rst;
            cout << endl;
            
            break;
            
        case '%':
            bool isN1Int, isN2Int;
            isN1Int = (int(n1) == n1);
            isN2Int = (int(n2) == n2);
        
            if(isN1Int && isN2Int)
            {
                cout << "     -> Result: " << n1 << " % " << n2 << " = " << int(n1)%int(n2) << endl;
            }
            else
            {
                cout << "     -> Result: No float numbers permited." << endl;
            }
            
            cout << endl;
            cout << "       - Reset? Y/N ";
            cin >> rst;
            cout << endl;
            
            break;
            
        default:
            cout << "      Invalid format.";
        }
    } while (rst == 'Y');
    
    
    

    return 0;
}