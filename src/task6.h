#pragma once

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
