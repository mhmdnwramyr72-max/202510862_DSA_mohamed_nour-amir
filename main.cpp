#include <iostream>
using namespace std;

int main() {

    string names[5] = { "Alex", "Brian", "Daniel", "Kevin", "Michael" };
    int ages[5] = { 21, 25, 19, 30, 27 };

    string key;
    int left = 0, right = 4;
    bool found = false;

    cout << "Enter name to search: ";
    cin >> key;

    while (left <= right) {

        int mid = (left + right) / 2;

        if (names[mid] == key) {
            cout << key << " was found and is aged "
                << ages[mid];
            found = true;
            break;
        }

        else if (names[mid] < key) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    if (!found) {
        cout << "Not found";
    }

    return 0;
}
