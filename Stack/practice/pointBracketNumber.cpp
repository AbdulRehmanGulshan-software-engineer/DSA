// point bracket number
//(aa(bc))abc(rr)  bracket ka number return krny hai 
// 122133

#include<iostream>
#include<string>
#include<stack>


using namespace std;

int main(){
    string s;
    cout<<"Input: ";
    cin>>s;
    stack<int>st;
    int i=0,count=0;
    string ans;
    while(i<s.size()){
        if(s[i]=='('){
            st.push(++count);
            ans.push_back('0'+count); //push_back only push charcter so here we have to push integer
        }else if(s[i]==')'){
          ans.push_back('0'+st.top());//same push_back condition
          st.pop();
        }
        i++;
    }
    cout<<ans;
    return 0;
}