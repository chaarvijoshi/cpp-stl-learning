// sets give unique sorted elemnts only
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<int> v={1,1,2,2,3,3,4,4,5};
    set<int> s;
    for(int x : v){
        s.insert(x);
    }
    for(int x : s){
        cout<<x<<" ";
    }
}