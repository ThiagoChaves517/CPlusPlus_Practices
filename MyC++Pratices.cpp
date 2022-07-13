#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string;

void tellTheTruth();
void introYourSelf(string salutation, string name, string knownAs);
void primeNumDetector();

bool isPrimeNumber(int number)
{
    for (int i = 2; i < number; i++) {
        if (number % i == 0)
        {
            return false;
        }
    }

    if (number == 1 || number == 0)
    {
        return false;
    }

    return true;


}

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime == true)
        {
            cout << i << " is a Prime Number!" << endl;
        }
    }

    primeNumDetector();


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