#include<iostream>
 using namespace std;

 int main(){

int a[50],size,pos,i;
cout<<"Enter the size of the array: ";
cin>>size;
cout<<"Enter the data items of the array : ";
for (i=0;i<size;i++){
    cin>>a[i];
}
cout<<"The elements of the array are : ";
for(i=0;i<size;i++){
    cout<<a[i]<<endl;
}
cout<<"From which position do you want to delete? ";
cin>> pos;
if(pos<=0 || pos>size){
    cout<<"Invalid position";
}
else{
for(i=pos-1;i<size-1;i++){
    a[i]=a[i+1];
    
}
   size--;
   }
   for(i=0;i<size;i++){
    cout<<a[i]<<" ";
   }
      return 0;
 }