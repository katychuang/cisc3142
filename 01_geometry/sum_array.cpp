#include <iostream>

using namespace std; 
int scores[5];
int topThree[3];
const int days_in_year {365};
double weather [days_in_year];

// int my_matrix [rows][cols];
int numbers [5] {5,10};   // init to 5,10 and remaining to 0
int another_array [] {1,2,3,4}; //size automatically calculated

int my_numbers [2][3] = {
 { 1, 2, 3 },
 { 0, 1, 0 },
};

int main() {

 cout << "First element in numbers is: " << numbers[0] << endl;
 cout << "First element in my_numers is: " << my_numbers[0][0] << endl;
 
 int sum = 0;

 // Calculate the sum of elements in an array
 int n = sizeof(numbers) / sizeof(numbers[0]);
 for (int i = 0; i < n; i++)
  sum += numbers[i];
 
 cout << "sum of elements in numbers is: " << sum << endl; 
 return 0;	
}
