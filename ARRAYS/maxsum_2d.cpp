#include<iostream>
#include<climits> // For INT_MIN

using namespace std;

// Linear search to find the key in 2D array
bool linear(int arr[][3], int rows, int cols, int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

// Find the row with the maximum sum
int maxx(int arr[][3], int rows, int cols) {
    int maxsum = INT_MIN;
    for (int i = 0; i < rows; i++) {
        int rsum = 0;
        for (int j = 0; j < cols; j++) {
            rsum += arr[i][j];
        }
        maxsum = max(maxsum, rsum);
    }
    return maxsum;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    
    int key = 5;
    // Testing linear search
    if (linear(arr, rows, cols, key)) {
        cout << "Key " << key << " found in the array." << endl;
    } else {
        cout << "Key " << key << " not found in the array." << endl;
    }
    
    // Testing maxx function
    int rowWithMaxSum = maxx(arr, rows, cols);
    cout << "Maximum row sum is: " << rowWithMaxSum << endl;
    
    return 0;
}

