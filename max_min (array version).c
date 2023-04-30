#include <stdio.h>
#define size 20

//function delaraction
void maxMin(int arr2[size][size], int row_size, int col_size);

int main() {
	
	//variable delcaration
	int arr[size][size];
	int row, col, r, s;
	
	printf("== MAXIMUM AND ELEMENTS OF 2D ARRAY (ARRAY VERSION) ==\n\n");
	
	//asking for the size of the 2D Array
	printf("Enter a size of the 2D Array ");
	printf("\nRow: ");
	scanf("%d", &row);
	printf("Column: ");
	scanf("%d", &col);
	
	printf("---------------------------------------------\n");
	
	printf("Enter the elements for a 2D Array: \n");
	
	//input the elements of 2D Array
	for(r = 0; r < row; r++) {
		for(s = 0; s < col; s++) {
			printf("arr[%d][%d] = ", r, s);
			scanf("%d", &arr[r][s]);
		}
	}
	
	//function
	maxMin(arr, row, col);
	
	return 0;
}

void maxMin(int arr2[size][size], int row_size, int col_size) {
	
	//variable declaration
	int max = arr2[0][0], min = arr2[0][0];
	int r, s;
	
		//loop to determine the max and min element
		for(r = 0; r < row_size; r++) {
			for(s = 0; s < col_size; s++) {
				
				if(arr2[r][s] > max) {
					max = arr2[r][s];
				}
				
				if(arr2[r][s] < min) {
					min = arr2[r][s];
				}
			}	
		}
		
		//print the max and min elements of the 2D array
		printf("--------------------------------------\n");
		printf("The maximum element is: %d", max);
		printf("\nThe minimum element is: %d", min);
}
