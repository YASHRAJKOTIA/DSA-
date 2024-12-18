#include<iostream>
using namespace std;

int main(){
	
	int arr[]={ 12,4,-5,10};
	int size =5;

	// for infinity we will use INT_MAX;
	
	int smallest=INT_MAX;
	int largest = INT_MIN;
	
	for(int i=0;i<size ; i++){
		smallest = min(arr[i],smallest);
		largest = max(arr[i],largest);
	}
	cout<<"SMALLEST ELEMENT IS "<<smallest<<endl;
	cout<<"largest number is"<<largest<<endl;	
	}
