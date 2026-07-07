#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){
    pair<int,int> p(10,20);
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    // pair inside vector
    vector<pair<int,int>> v;
    v.push_back({1,90});
    v.push_back({2,98});
    v.push_back({3,100});

    for(pair<int,int> x : v){
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
}
