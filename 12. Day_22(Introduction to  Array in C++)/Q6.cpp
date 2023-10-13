#include <iostream>
using namespace std;

int findThirdLargest(int arr[], int size) {
    if (size < 3) {
        cout<< "invalid input" <<endl;
        
    }

    
    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;
    int thirdLargest = INT_MIN;

    
    for (int i = 0; i < size; i++) {
        if (arr[i] > firstLargest) {
            thirdLargest = secondLargest;
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < firstLargest) {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        } else if (arr[i] > thirdLargest && arr[i] < secondLargest) {
            thirdLargest = arr[i];
        }
    }

    return thirdLargest;
}

int main() {
    int arr[] = {12, 45, 1, 98, 73, 43, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int thirdLargest = findThirdLargest(arr, size);
    if (thirdLargest != -1) {
        cout << "The third largest number is: " << thirdLargest <<endl;
    }

    return 0;
}
