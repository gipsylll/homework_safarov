#include <iostream>
using namespace std;


void readArray(int data[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }
}

void readArray(double data[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }
}
void printArray(int data[], int size) {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << "\n";
}

void printArray(double data[], int size) {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << "\n";
    }

void fillArray(int data[], int size, int value = 0) {
    for (int i = 0; i < size; i++) {
        data[i] = value;
    }
}


void fillArray(double data[], int size, double value = 0) {
    for (int i = 0; i < size; i++) {
        data[i] = value;
    }
}

void arrayCopy(int data1[], int size, int data2[]) {
    for (int i = 0; i < size; i++) {
        data2[i] = data1[i];
    }
}

void arrayCopy(double data1[], int size, double data2[]) {
    for (int i = 0; i < size; i++) {
        data2[i] = data1[i];
    }
}
void combineArrays(int data1[], int& size1, int data2[], int size2) {
    for (int i = 0; i < size2; i++) {
        data1[size1 + i] = data2[i];
    }
    size1 += size2;
}

void combineArrays(double data1[], int& size1, double data2[], int size2) {
    for (int i = 0; i < size2; i++) {
        data1[size1 + i] = data2[i];
    }
    size1 += size2;
}

void reverseArray(int data[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = data[i];
        data[i] = data[size - i - 1];
        data[size - i - 1] = temp;
    }
}

void reverseArray(double data[], int size) {
    for (int i = 0; i < size / 2; i++) {
        double temp = data[i];
        data[i] = data[size - i - 1];
        data[size - i - 1] = temp;
    }
}