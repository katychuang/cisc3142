#include <iostream>

using namespace std; 

// Calculate the area of a room, given width and length

const double pi {3.1415926};

int main() {
 cout << "Enter the radius: ";
 int radius {0};
 cin >> radius;
 cout << 2 * radius * pi << "square feet" << endl;

 return 0;	
}
