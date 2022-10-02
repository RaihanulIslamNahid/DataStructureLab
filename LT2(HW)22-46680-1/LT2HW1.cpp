#include<bitd/stdc++.h>
uing namespace std;
int main(){
int array[10] = {1,2,3,5,6,3,2,3,1,10};
int n,counter=0;
cin>>n;
    for(int i = 0; i<10; i++){
        if(n == array[i]) counter++;
    }

    cout<<counter;
}
