//
// Created by Anthony Fonseca on 10/5/24.
//

#include <iostream>
#include <iomanip>
using namespace std;

typedef int tempType[50];

float averageTemp(tempType, int);
int highestTemp(tempType, int);
int lowestTemp(tempType, int);

int main() {
  int numOfTemps;
  tempType temps;

  cout << setprecision(2) << fixed << showpoint;

  cout << "Please input the number of temperatures to be read" << endl;
  cin >> numOfTemps;

  for (int i = 0; i < numOfTemps; i++) {
    cout << "Input temperature " << i+1 << ":" << endl;
    cin >> temps[i];
  }

  cout << "The average temperature is " << averageTemp(temps, numOfTemps) << endl;
  cout << "The highest temperature is " << highestTemp(temps, numOfTemps) << endl;
  cout << "The lowest temperature is " << lowestTemp(temps, numOfTemps) << endl;

  return 0;
}

float averageTemp(tempType temps, int numOfTemps) {
  float average;
  int total = 0;

  for (int i = 0; i < numOfTemps; i++) {
    total += temps[i];
  }

  average = static_cast<float>(total) / numOfTemps;

  return average;
}

int highestTemp(tempType temps, int numOfTemps) {
  int highest = -200;

  for (int i = 0; i < numOfTemps; i++) {
    if (temps[i] > highest) {
      highest = temps[i];
    }
  }

  return highest;
}

int lowestTemp(tempType temps, int numOfTemps) {
  int lowest = 200;

  for (int i = 0; i < numOfTemps; i++) {
    if (temps[i] < lowest) {
      lowest = temps[i];
    }
  }

  return lowest;
}
