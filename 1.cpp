#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

void bubble_sort(vector<int> &arr) {
    int swapped;
    int size = sizeof(arr)/ sizeof(arr[0]);
    int n = size - 1;

    do {
        swapped = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        n--;
    } while (swapped);
}


void print_array(const vector<int> &arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> array = {10, 7, 8, 9, 1, 5};

    selection_sort(array);
    print_array(array);

    bubble_sort(array);
    print_array(array);

    return 0;
}
