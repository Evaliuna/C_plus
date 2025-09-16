#include <bits/stdc++.h>
using namespace std;

void display(vector<int>&v2){
    for(int i = 0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
}
int main(){
    vector<int>v1;
    int element;
    for(int i = 0; i<5; i++){
        cin>>element;
        v1.push_back(element);
    }
    display(v1);
}
