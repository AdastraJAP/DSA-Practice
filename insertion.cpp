#include<iostream>

using namespace std;

int main(){

int a[50],size,i, pos,num;
cout << "Enter the size of the array (max 50): ";
cin >> size;

if (size <= 0 || size > 50) {
    cout << "Invalid size. Please enter a size between 1 and 50." << endl;
    return 1;
}
cout << "Enter the elements of the array:" << endl;
for (i = 0; i < size; i++) {
    cin >> a[i];
}

cout << "The elements of the array are:" << endl;
for (i = 0; i < size; i++) {
    cout << a[i] << endl;
}

cout << "Enter the number to be inserted: ";
cin >> num;

cout << "Enter the position where to insert the number (1 to " << size + 1 << "): ";
cin >> pos;
cout << endl;
/*// Check for valid position
if (pos <= 0 || pos > size + 1) {
    cout << "Invalid position" << endl;
    return 1;
}
else {
    for (i = size - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    size++;
}

cout << "Array after insertion:" << endl;
for (i = 0; i < size; i++) {
    cout << a[i] << endl;
}*/
int temp;
temp= a[pos-1];
a[size]=temp;
a[pos-1]=num;
size++;

for (i=0;i<size;i++){
    cout<<a[i];
}
return 0; 
}
