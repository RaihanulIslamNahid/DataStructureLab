#include<iostream>
using namespace std;

void LT(int key1,int key2)
{
  /*user input
  int n;cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  */
    int arr[]={1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,91,13,16,19};
    cout<<"Odd:";

    for(int i=0;i<21;i++){
        for(int j=key1;j<=key2;j++){
            if(arr[i]==j&&j%2!=0) cout<<j<<" ";
        }
    }

}
int main()
{

    int key1,key2;
    cin>>key1>>key2;
    LT(key1,key2);
}
