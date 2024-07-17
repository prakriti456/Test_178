#include <iostream>
using namespace std;

int divisibleBy3(int arr[], int size) {
    if (size < 0) {
        cout << "Invalid Input" << endl;
        exit(0);
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << "Invalid Input" << endl;
            exit(0);
        }
    }

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = divisibleBy3(arr, n);
    cout << count << endl;

    return 0;
}