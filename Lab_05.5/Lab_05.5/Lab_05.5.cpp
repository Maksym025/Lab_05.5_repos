#include <iostream>
using namespace std;


int toBinary(int n, int& depth) {
    depth++;
    if (n == 0)
        return 0;
    return (n % 2) + 10 * toBinary(n / 2, depth);
}


int toOctal(int n, int& depth)
{
    depth++;
    if (n == 0)
        return 0; 
    return (n % 8) + 10 * toOctal(n / 8, depth);
}


int toBaseN(int n, int N, int& depth) {
    depth++;
    if (n == 0)
        return 0; 
    return (n % N) + 10 * toBaseN(n / N, N, depth); 
}

int main() {
    int n;
    int N;
    int depth;

    cout << "Enter a decimal number: ";
    cin >> n;

    // Двійкова система
    depth = 0;
    int binaryValue = toBinary(n, depth);
    cout << "Binary representation: " << binaryValue << endl;
    cout << "Depth of recursion: " << depth << endl;
    cout << endl;

    // Восьмерична система
    depth = 0;
    int octalValue = toOctal(n, depth);
    cout << "Octal representation: " << octalValue << endl;
    cout << "Depth of recursion: " << depth << endl;
    cout << endl;

    // Система з основою N
    cout << "Enter the base (N > 1): ";
    cin >> N;

    depth = 0;
    int baseNValue = toBaseN(n, N, depth);
    cout << "N = " << N << " representation: " << baseNValue << endl;
    cout << "Depth of recursion: " << depth << endl;
    cout << endl;

    return 0;
}
