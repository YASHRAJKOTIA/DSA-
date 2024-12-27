#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>arr,int tar){
	int st=0;
	int end=arr.size()-1;
	while(st<=end){
		int mid=st+(end-st)/2;
		
		if(tar>arr[mid]){
			st=mid+1;
		}
		else if(tar<arr[mid]){
			end=mid-1;
			
		}
		else{
			return mid;
		}
		
	}
	return -1;
	
}

int main(){
 vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd-sized array
    int tar1 = 12;
    cout << binarysearch(arr1, tar1) << endl; // Should return the index of 12
    
    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // Even-sized array
    int tar2 = 0;
    cout << binarysearch(arr2, tar2) << endl; // Should return the index of 0
}
