#include <iostream>
using namespace std;

template <typename T>
void replace_element(T arr[], int size, T oldElement, T newElement) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == oldElement) {
            arr[i] = newElement;
        }
    }
}


template <>
void replace_element<char>(char arr[], int size, char oldElement, char newElement){
    for (int i = 0; i < size; ++i){
        if (arr[i] != oldElement) {
            arr[i] = newElement;
        }
    }
}

template <typename T>
void print_array(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    replace_element(arr, size, 2, 5);
    print_array(arr, size);

    double arr2[] = {2.3, 64.2, 23.4, 55.9, 2.1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    replace_element(arr2, size2, 2.3, 2.1);
    print_array(arr2, size2);

    char arr3[] = {'a', 'b', 'c', '\0'};
    int size3 = sizeof(arr3) / sizeof(arr3[0]) - 1;
    replace_element(arr3, size3, 'a', 'b');
    print_array(arr3, size3);

    return 0;
}
