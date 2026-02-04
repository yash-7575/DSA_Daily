#include <bits/stdc++.h>
using namespace std;

// arr1 and arr2 are sorted
vector<int> unionOfTwoArrays(const vector<int> &arr1, const vector<int> &arr2) {
    vector<int> uni;

    int n1 = arr1.size();
    int n2 = arr2.size();

    if (n1 == 0 && n2 == 0) return uni;

    // 1) Add unique elements from first array
    if (n1 > 0) {
        uni.push_back(arr1[0]);
        for (int i = 1; i < n1; i++) {
            if (arr1[i] != arr1[i - 1]) {
                uni.push_back(arr1[i]);
            }
        }
    }

    // 2) For each element in arr2, check if it exists in uni
    for (int i = 0; i < n2; i++) {
        bool exists = false;

        // Since both are sorted, we can stop when uni[j] > arr2[i]
        for (int j = 0; j < (int)uni.size(); j++) {
            if (uni[j] == arr2[i]) {
                exists = true;
                break;
            }
            if (uni[j] > arr2[i]) {
                break;
            }
        }

        if (!exists) {
            uni.push_back(arr2[i]);
        }
    }

    return uni;
}

int main() {
    vector<int> arr1 = {1, 2, 4, 5};
    vector<int> arr2 = {2, 3, 5, 6};

    vector<int> uni = unionOfTwoArrays(arr1, arr2);

    for (int x : uni) cout << x << " ";
    cout << endl;

    return 0;
}
