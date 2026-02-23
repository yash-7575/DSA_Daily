#include <iostream>
#include <vector>

int findSingleNumber(std::vector<int> arr, int n) {
    for (int i = 0; i < n; i++) {
        bool istwo = false;
        for (int j = 0; j < n; j++) {
            if (i == j) continue; // Logic to skip comparing the same index
            
            if (arr[i] == arr[j]) {
                istwo = true;
                break;
            }
        }
        
        if (!istwo) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr = {4, 1, 2, 1, 2};
    int n = arr.size();
    std::cout << findSingleNumber(arr, n);
    return 0;
}