#include <iostream>
#include <map>
#include <cmath>

using namespace std;

// Function to calculate frequency
map<int, int> calculateFrequency(int data[], int size) {
    map<int, int> frequency;
    for (int i = 0; i < size; i++) {
        frequency[data[i]]++;
    }
    return frequency;
}

// Function to calculate mean
double calculateMean(int data[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

// Function to calculate variance
double calculateVariance(int data[], int size) {
    double mean = calculateMean(data, size);
    double temp = 0;
    for (int i = 0; i < size; i++) {
        temp += (data[i] - mean) * (data[i] - mean);
    }
    return temp / size;
}

// Function to calculate standard deviation
double calculateStdDev(int data[], int size) {
    return sqrt(calculateVariance(data, size));
}

int main() {
    
    int size;
cout << "Size Of Dataset: ";
cin >> size;

int data[size];

cout << "Enter the dataset values: " << endl;
for (int i = 0; i < size; i++) {
    cin >> data[i];
}


    map<int, int> frequency = calculateFrequency(data, size);
    cout << "Frequency:" << endl;
    for (auto it = frequency.begin(); it != frequency.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << "Mean: " << calculateMean(data, size) << endl;
    cout << "Variance: " << calculateVariance(data, size) << endl;
    cout << "Standard Deviation: " << calculateStdDev(data, size) << endl;

    return 0;
}
