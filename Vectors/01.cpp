#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums;
      nums = {12,13,24,56,87};
      for(int num : nums){
        cout<<num<<" ";
      }
      cout<<endl;
    vector<char> chars;
    chars = {'a','c','d','g'};
    for(char var : chars){
        cout<<var<<" ";
    }
    cout<<endl;
    chars.push_back('z');
    for(char var : chars){
        cout<<var<<" ";
    }
    cout<<endl;
}