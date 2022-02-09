#include <iostream>
#include <vector>

using namespace std;

int main (){
  double arr[] = {98.6, 93.2, 97.3, 103.5, 105.1};
  cout << arr[6] << endl;
  cout << "size of array " << sizeof(arr) << endl;
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  cout << "correct size of array " << arrSize << endl;

  cout << "\n";
  vector<int> emptyVector; //empty
  vector<char> random(5); // size 5, initialized to zero
  vector<double> stations (arr, arr + sizeof(arr) / sizeof(double) );
  cout << stations[5] << endl;
  cout << "size of vector " << stations.size() << endl;

  char vowelArr[] = {'a','e','i','o','u'};
  vector<char> vowels (vowelArr, vowelArr + sizeof(vowelArr) / sizeof(char) );
  return 0;
}
