#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 3, 4, 10, 40};
    int x = 10;
    int i;
    for ( i = 0; i < 5; i++) {
        if (arr[i] == x) {
            cout<<"Element is present at index " << i << endl;
                    break;
        }
    }
    if (i==5) {
        cout << "Element is not present in array" << endl;
    }

    return 0;
}
