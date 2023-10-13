#include <iostream>
using namespace std;

int main() {
    char a[30];

    cout << "Enter the character in the array:" << endl;
    for (int i = 0; i < 26; i++) {
        cin >> a[i];
    }

    cout << "The characters in the array are:" << endl;

    for (int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
