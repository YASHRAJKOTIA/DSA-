#include<iostream>
using namespace std;

void reverse(int arr[],int size){
	
	int start=0;
	int end=size-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
		
	}
}
	int main(){
		int arr[]={3,5,6,7};
		 int size=4;
		
		reverse(arr,size);
		
		for(int i=0;i<size;i++){
			cout<<arr[i];
		}
		cout<<endl;
		return 0;
	}