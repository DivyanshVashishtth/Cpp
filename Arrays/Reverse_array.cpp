#include <iostream>
using namespace std;
int create_array(int arr[], int n){
    if(n <= 0){
        cout<<"Invalid number of elements entered for an array";
        return 0;
    }
    cout<<"Enter the elemnts of arrays : \n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}

int reverse_array(int arr[] , int n){
    for (int i = n - 1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n ;
    cout<<"Enter the number of elements for an array: ";
    cin>>n;
    int arr[n];
    create_array(arr,n);
    reverse_array(arr,n);
    return 0 ;
}