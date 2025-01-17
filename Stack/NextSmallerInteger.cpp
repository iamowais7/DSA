#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextsmallerinteger(vector<int> &arr,int n){
    stack <int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n-1 ; i>=0 ; i--)
    {
        int curr = arr[i];

        while (s.top()>= curr)
        {
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}


int main(){

vector<int> arr = {2,1,4,3};
int n = arr.size();

vector<int> ans = nextsmallerinteger(arr,n);

cout<<"Next Smaller Element for Each Element is :"<<endl;
for (int i = 0; i < n; i++)
{
   cout<< ans[i] <<" ";
}

return 0;
}