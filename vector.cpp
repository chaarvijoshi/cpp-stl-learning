#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    vector<int> v2(v);
   v.insert(v.begin()+3,70);
   v.erase(v.begin()+1,v.begin()+4);

    for( int x : v){
        cout<<x<<" ";
    }
      cout<<endl;
    for(int y : v2){
        cout<<y<<" ";
    }
    cout<<endl;
    cout<<v.size();

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=v.rbegin();it!=v.rend();it++){
        cout<<*it<<" ";
    }
    
    cout<<v[4];

}










