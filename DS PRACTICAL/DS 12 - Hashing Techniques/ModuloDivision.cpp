#include <iostream>

using namespace std;
void print(int arr[], int s) {
  cout << "Array is: ";
  for (int i = 0; i < s; i++) {
    cout << arr[i] << " ";
  }
}
int linearCollision(int arr[], int j) {
  for (int h = 0; h < 7; h++) {
    if (arr[j] == 0) {
      return j;
      break;
    } else {
      j = j + 1;
      j = j % 7;
    }
  }
  return -1;
}
void hashingSearch(int arr[]) {
  int element;
  cout << "\nWhich element do you want to find out? ";
  cin >> element;
  int j = element % 7;
  if (arr[j] == element) {
    cout << "Element " << element << " found at " << (j + 1);
  } else {
    j = linearCollision(arr, j);
    if (j != -1) {
      cout << "Element " << element << " not found!";
    } else {
      cout << "Element " << element << " found at " << (j + 1);
    }
  }
}
int main() {
  int n = 7, number;
  cout << "Hashing Searching technique using Division method.\n";
  cout << "The size of the array is 7, hence mod number will be taken as prime number 7.\n";
  int arr[7] = {
    0
  };
  for (int i = 0; i < n; i++) {
    cout << "Enter the number: ";
    cin >> number;
    int j = number % 7;
    if (arr[j] == 0) {
      arr[j] = number;
      cout << "Element " << number << " was positioned at " << (j + 1) << "\n";
    } else {
      cout << "Element " << number << " can't be positioned at " << (j + 1) << "\n";
      cout << "Element " << arr[j] << " is already at " << (j + 1) << "\n";
      j = linearCollision(arr, j);
      arr[j] = number;
      cout << "Element " << number << " was positioned at " << (j + 1) << "\n";
    }
  }
  print(arr, n);
  hashingSearch(arr);
  return 0;
}

