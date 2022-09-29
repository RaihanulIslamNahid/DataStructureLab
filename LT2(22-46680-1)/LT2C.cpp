#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    int a;
    cin>>a;
    int array[a];
    for(int i=0;i<a;i++){
        cin>>array[i];
    }
    for( i=0;i<a;i++){
        for( j=0;j<i;j++){
            if(array[i]==array[j]){
                break;
            }
        }
        if(i == j){
            cout<<array[i]<<" ";
        }
    }
}