#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int n = 6;
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++) {
        // Skip duplicate first elements
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                cout << "[" << arr[i] << ", " << arr[j] << ", " << arr[k] << "]" << endl;
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }

    return 0;
}