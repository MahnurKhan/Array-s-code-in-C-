//Getting values of Array from user and then display it. 
#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"Enter sixe on an array: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements in the array: " <<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"\n";
	cout<<"Elements in array: " <<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i] << " " ;
	}
}
