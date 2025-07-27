#include <iostream>

using namespace std;

int main(){

int a[50],size,i;
cout<<"Enter the size of the array : ";
cin >>size;
cout<<"Enter the elements of the array : ";
for (i=0; i<size;i++){
    cin>>a[i];
}
cout<<"The elements of the array are: ";
for(i=0 ;i <size; i++){
    cout<<a[i]<<endl;
}
    return 0;
}