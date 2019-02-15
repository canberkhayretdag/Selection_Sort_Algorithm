#include<iostream>

using namespace std;

void selectionSort(int arr[], int n){
	int i,j,min;
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	}
}


int main(){
	
	int arr[] = {9, 5, 1, 8, 6, 7, 2};
	
	int n = sizeof(arr)/sizeof(arr[0]); //Lenght of Array
	selectionSort(arr, n);
	
	// Printing last state of array
	for(int i=0;i<n;i++){
		cout << arr[i] << endl;
	}
	
	
	
	return 0;
}
