#include<iostream>

using namespace std;

bool linear( int arr[][3], int rows , int col, int key){
	
	for(int i=0 ;i<rows; i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]==key){
				return true;
			}
		}
	}
	return false;
}

int main(){
	
	 int arr[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	 int rows =4;
	 int col=3;
	
	cout<<linear(arr,rows,col,8);
	
	return 0;
}
