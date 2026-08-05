#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,12,15,28,32};

    int target = 15;
    int n = sizeof(arr)/sizeof(arr[0]);

    int s = 0 , e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == target){
            ans = mid;
            break;
        }else if (arr[mid] < target){
            s = mid+1;
        }else
            e = mid-1;
        
    }
    cout<<ans;
    return 0;
}