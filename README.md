# #include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int low = 0, high = 4, key = 30;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Element found at position " << mid+1;
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found";
    return 0;
}
