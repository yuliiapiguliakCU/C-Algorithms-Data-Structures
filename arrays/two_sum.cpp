// Find two indices in the array where the elements add up to the target

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4; //size of the array
    int target = 9; //sum to find

    int index1 = -1;
    int index2 = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { //inner loop to check another pair

            if (arr[i] + arr[j] == target) {
                index1 = i;
                index2 = j;
                break;
            }
        }
        if (index1 != -1) break;
    }
    if (index1 != -1) {
        cout << "Indices found: " << index1 << " and " << index2 << "\n";
        cout << "Values: " << arr[index1] << " + " << arr[index2] << " = " << target << "\n";
    } else {
        cout << "No two sum solution found.\n";
    }

    return 0;
}