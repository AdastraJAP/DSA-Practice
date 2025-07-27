#include<iostream>
using namespace std;

int main(){
int n[100],k,size,i;

cout<<"Enter the size of the array: ";
cin>>size;
cout<<"Enter the number k: "<<endl;
cin>>k;
cout<<"Enter the elements of the array: ";
for (int i=0; i<size;i++){
    cin>>n[i];

}
/*
for( i=0;i<size;i++){
    cout<<n[i]<<" ";
    cout<<endl;
}
for( i=0;i<size;i++){
 if ( n[i]==k ){
        cout<<"Yes";
        return 0;
    }
}
    

  cout<<"No";
    return 0;
}
    */
bool found=false;
for (i=0;i<size;i++){

    if (n[i]==k){
        found =true;
         cout<<"YES";
    
        break;
    
    }
        
}
if(found==false){
    cout<<"NO";
}
 return 0;
}




    

/* problem description: You're given an array of integers and target number k.Your job is to determine  whether k exists in the array.
input format : the first line contains an integer n(1 <=n<= 10^5)- the number of elements in the array.
The second line contains n space-separated integers -the elements of the array.
The third line contains a single integer k.



OUTPUT FORMAT: Print "yes" (without quotes) if k exists in the array , otherwise print "NO"
Constraints: Time limit: 1 second 
             Use cin and cout for faster input/output


*/