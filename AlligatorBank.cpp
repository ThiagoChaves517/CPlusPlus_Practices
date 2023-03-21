#include <iostream>

using std::cout; using std::endl; using std::cin;

int main()
{
    //I have created an ATM app that checks balance, deposits and withdraws money. It will also have a menu.

    double balance = 0;
    double deposit;
    double withdraw;
    char answer1;
    char answer2;
    bool Ans2 = false;

    do
    {
        cout << "Very welcome to Alligator Bank´s System!\n";
        cout << "- Please, choose one of the referred options:" << endl << endl;
        cout << "     | Deposit (1) | Withdraw (2) | See balance (3) | ";
        cin >> answer1;
        cout << endl;

        switch (answer1)
        {
        case 1:
            cout << "How much do you want to deposit? ";
            cin >> deposit;
            balance = deposit;
            cout << endl;

            break;

        case 2:
            cout << "How much do you want to withdraw? ";
            cin >> withdraw;
            if (withdraw > balance)
                cout << "Not enough money to withdraw." << endl;
            else
                balance = balance - withdraw;
            cout << endl;

            break;

        case 3:
            cout << "Your current balance is: $" << balance << '.' << endl;
            cout << endl;

            break;

        default:
            cout << "Invalid answer." << endl;
            cout << endl;

            break;
        }

        cout << "Want to go back to menu? Y/N ";
        cin >> answer2;
        cout << endl;
        
        switch (answer2)
        {
        case 'Y':
            Ans2 = true;
            break;

        case 'y':
            Ans2 = true;
            break;

        case 'N':
            Ans2 = false;
            break;

        case 'n':
            Ans2 = false;
            break;

        default:
            cout << "Invalid answer." << endl;
            cout << endl;
            Ans2 = true;

            cout << "Want to go back to menu? Y/N ";
            cin >> answer2;
            cout << endl;

            break;
        }

    } while (Ans2 == true);
    
    cout << "Thanks for coming. See later!";
    
    return 0;
}
