// Next greater element
// arr = [8,6,4,7,4,9,10,8,12]
// ans = [9,7,7,9,9,10,12,12,-1]



#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

// this method is brute force we have to optimize this ;

/*

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int *arr=new int[size];
    cout<<"Enter the Elements in array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    } 

    vector <int> ans(size,-1);

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]>arr[i]){
                ans[i]=arr[j];
                break;
            }
        }
    }

    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }

    delete[] arr;

return 0;
}     */

int main(){
      int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int *arr=new int[size];
    cout<<"Enter the Elements in array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    } 

    vector <int> ans(size,-1);
    stack<int>st;

    for(int i=0;i<size;i++){
        while(!st.empty()&& arr[st.top()]<arr[i]){
            ans[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }


    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }

    delete[] arr;

    return 0;
}