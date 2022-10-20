//bubble sort
/*
#input:
Size of Array:8
Elemnt of Array:1 8 5 6 7 2 3 4

#Output:
Bubble Sort:1 2 3 4 5 6 7 8

*/	
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;

			}
		}
		counter++;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
