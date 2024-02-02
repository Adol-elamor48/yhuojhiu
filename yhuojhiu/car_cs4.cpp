#include <iostream>
#include <vector>
using namespace std;

int find_transposition(vector<int>& arr, int value) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == value) {
            if (i > 0) {

                swap(arr[i], arr[i - 1]);
                return i - 1;
            }
            else {
                return i;
            }
           /*int x = arr[i];
            arr[i ] = arr[i+1];
            arr[i + 1] = x;*/
        }
    }
    return -1; // Return -1 if the value is not found in the array
}

int main() {
   vector<int> arr = { 10, 20, 30, 40, 50 };
    int value = 30;

    int index = find_transposition(arr, value);

    if (index != -1) {
       cout << "New array: ";
        for (int num : arr) {
          cout << num << " ";
        }
        cout << "\nReturn index: " << index << endl;
    }
    else {
       cout << "Value not found in the array." << endl;
    }

    return 0;
}
