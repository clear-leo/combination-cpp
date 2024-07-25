#include <iostream>
using namespace std;
int amount;
int picks;

long int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

long int combinatory(int n, int x) {
    return (factorial(n))/(factorial(n - x) * factorial(x));
}

int main() {
    cout << "Input the first number for the combinatorial equation \n";
    cin >> amount;
    cout << "Input the second number for the combinatorial equation \n";
    cin >> picks;
    cout << "The result is: " << combinatory(amount, picks) << "\n";

    return 0;
}