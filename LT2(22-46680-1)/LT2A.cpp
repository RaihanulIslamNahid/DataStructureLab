#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int array1[a];

	for(int i=0;i<a;i++){
		cin>>array1[i];
		cout<<"\n";
	}
	int b;
	cin>>b;
	int array2[b];
	for(int i=0;i<b;i++){
		cin>>array2[i];
		cout<<"\n";
	}
	int array3[a+b];
	int j=0;
	for(int i=0;i<a+b;i++){
		if(i<a){
			array3[i]=array1[i];
		}
		else{
			array3[i]=array2[j];
			j++;
		}
	}
	for(int i=a+b-1;i>=0;i--){
		cout<<array3[i]<<" ";
	}
	
	return 0;
}	
