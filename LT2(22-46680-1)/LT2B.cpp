#include<bits/stdc++.h>
using namespace std;
int main(){
	/*
	int a;
	cin>>a;
	int array1[a];
	for(int i=0;i<a;i++){
		cin>>array1[i];
	}
	int b;
	cin>>b;
	int array2[b];
	for(int i=0;i<b;i++){
		cin>>array2[i];
	}
	*/
    int array1[5]={2,4,6,7,10};
	int array2[6]={3,4,5,7,8,11};
	int array3[5+6];
	for(int i=0;i<5;i++){
		array3[i]=array1[i];
	}
	for(int i=0;i<6;i++){
		array3[i]=array2[i];
	}
	for(int i=0;i<5+6;i++){
		if(array1[i]==array2[i]){
			cout<<array3[i]<<" ";	
		}
		
	}
}
