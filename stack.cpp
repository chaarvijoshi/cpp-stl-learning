#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool paranthesis(string s){
    stack<char> st;

    for(char ch : s){
        if(ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }
        else{
            if(st.empty()){
                return false;
            }
            else if((ch==')' && st.top()=='(')||(ch=='}' && st.top()=='{')||(ch==']' && st.top()=='['))
            {
                st.pop();
            }
            else 
            return false;
        }
    }
    return st.empty();
}
int main(){
    string s;
    cout<<"enter exp : ";
    cin>>s;
    if(paranthesis(s)){
        cout<<"valid";
    }
    else
    cout<<"not valid";
}