#include<iostream>
#include<vector>

using namespace std;

int main(){
	int arr[4][3] ;
	int rows =4;
	int col=3;
	 /// input
	for(int i=0; i<rows; i++){
		for(int j=0; j<col;j++){
			cin>>arr[i][j];
			
		}
	}
	// output
for(int i=0; i<rows; i++){
	for(int j=0;j<col;j++){
		cout<<arr[i][j]<<" ";
		
	}
	cout<<endl;
}
cout<<endl;
	return 0;
	
	
	}
