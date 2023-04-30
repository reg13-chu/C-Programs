#include <stdio.h>
#define MAX_SIZE 20

//function delcaration
void reorder(int length, int arr2[]); 

int main() {
	//variable declaration
	int arr[MAX_SIZE];
	int r, arrSize;
	
	//asking the user to input the size of an array
	printf("== SORTING ARRAY OF INTEGERS == \n\n");
	printf("Enter the size of an array: ");
		scanf("%d", &arrSize); 
	
	//asking the user to inputs the elements of an array
	printf("\nPlease enter the elements of an array: \n");
	for(r = 0; r < arrSize; r++) {
		printf("arr[%d] = ", r);
		scanf("%d", &arr[r]);
	}
	
	//declare the function
	reorder(arrSize, arr);
	
	//printing the reordered list
	printf("----------------------------------------------");
	printf("\nHere is the reordered list an array elements: \n");
	for(r = 0; r < arrSize; r++) {
		printf("%d ", arr[r]);
	}
 	
 	return 0;
}

void reorder(int length, int arr2[]) {
	
	//variable declaration
	int r, s, temp; 
	
	//loop for the reorder list
	for(r = 0; r < length; r++) {
		for(s = r + 1; s < length; s++) {
			if(arr2[r] > arr2[s]) {
				temp = arr2[r];
				arr2[r] = arr2[s];
				arr2[s] = temp;
			}
		}
	}
}
