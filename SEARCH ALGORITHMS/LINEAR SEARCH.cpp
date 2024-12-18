#include<iostream>
using namespace std;

int main(){
	
	int arr[]={1,2,3,4,5};
	int size=5;
	int target = 4;
	bool found = false;  // Add this flag
	
	for(int i=0;i<size;i++){
		if(arr[i]==target){
			cout<<i<<endl;
			found = true;  // Set the flag to true if target is found
			break;         // Optionally, break the loop after finding the target
		}
	}
	
	if (!found) {
		cout << -1 << endl;  // Print -1 if target is not found
	}

	return 0;
}

