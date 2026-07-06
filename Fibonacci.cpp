#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n <= 0) {
        cout << "No terms to print." << endl;
        return 0;
    }

    int first = 0;
    int second = 1;

    cout << first << " ";
    if (n > 1) {
        cout << second << " ";
    }

    for (int i = 2; i < n; i++) {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }

    return 0;
}