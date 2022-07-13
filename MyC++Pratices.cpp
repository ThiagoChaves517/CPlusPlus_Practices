#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;

void tellTheTruth();
void introYourSelf(string salutation, string name, string knownAs);
void primeNumDetector();
void alligatorBanksATM();

int main()
{
    alligatorBanksATM();





    return 0;
}




void tellTheTruth() {
    if (1 + 1 == 2) {
        cout << "I´m gonna be a code master!\n";
    };
}

void introYourSelf(string salutation = "Hello", string name = "???", string knownAs = "???") {
    cout << salutation << "! " << endl;
    cout << "My name is " << name << ", " << knownAs << "." << endl;

    // Ex: "Hello! My name is Thiago, also know as the Master of Code."
    // salutation = "Hello"/ name = "Thiago"/ knownAs = "also known as the Code Master".
};

void primeNumDetector() {
    int num;

    cout << "Digit a number: ";
    cin >> num;

    bool isPrimeNum = true;


    for (int i = 2; i < num; i++) {
        if (num % i == 0)
        {
            isPrimeNum = false;
            break;
        }
        else
        {
            true;
        }
    }

    if (num == 1 || num == 0)
    {
        isPrimeNum = false;
    }

    if (isPrimeNum == true)
        cout << "This is a prime number!";
    else
        cout << "Sorry, but it is not a prime number.";


}

void alligatorBanksATM() {
    //I have created an ATM app that checks balance, deposits and withdraws money. It will also have a menu.

    double balance = 0;
    double deposit;
    double withdraw;
    int answer1;

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
        cout << "Your current balance is: " << balance << endl;
        cout << endl;

        break;

    default:
        break;
    }

    char answer2;

    cout << "Want to go back to menu? Y/N ";
    cin >> answer2;
    cout << endl;

    while (answer2 == 'Y' || answer2 == 'y')
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
            cout << "Your current balance is: " << balance << endl;
            cout << endl;

            break;

        default:
            break;
        }

        cout << "Want to go back to menu? Y/N ";
        cin >> answer2;
        cout << endl;
    }
}