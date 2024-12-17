#include<iostream>
using namespace std;

int main(){
	
	int arr[]={ 2,4,-5,10};
	int size =5;
	
	// for infinity we will use INT_MAX;
	
	int smallest=INT_MAX;
	
	for(int i=0;i<size ; i++){
		if(arr[i]<smallest){
			smallest=arr[i];
		}
	}
	cout<<"SMALLEST ELEMENT IS "<<smallest;
	
	}
