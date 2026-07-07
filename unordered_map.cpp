// no duplicates and not ordered
// why unorder map because seraching becames O(1)

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
 vector<int> v={1,1,2,1,2,3,2,3,4};
 unordered_map<int , int> freq;
 for(int x : v){
    freq[x]++;
 }

 for(auto x : freq){
    cout<<x.first<<" "<<x.second;
    cout<<endl;
 }

}