#include <iostream>

using namespace std; 

// Calculate the area of a room, given width and length

int main() {
 cout << "Enter the width and length of the room: ";
 int room_width {0};
 int room_length {0};
 cin >> room_width >> room_length;
 cout << room_width * room_length << "square feet" << endl;

 return 0;	
}
