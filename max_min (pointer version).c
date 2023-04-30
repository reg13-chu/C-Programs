#include <stdio.h>
#include <stdlib.h>

//function declaration
void maxMin(int *arr, int row, int col);

int main() {
	
	//variable declaration
	int row, col, r, s;

	printf("== MAXIMUM AND MINIMUM ELEMENTS OF 2D ARRAY (POINTER VERSION)==\n\n");
	
	//asking the user to input the size of the array
	printf("Enter a size of the 2D Array ");
	printf("\nRow: ");
	scanf("%d", &row);
	printf("Column: ");
	scanf("%d", &col);
	
	//variable declaration for 2D array
	int arr[row][col];
	
	printf("---------------------------------------------\n");
	
	printf("Enter the elements for a 2D Array: \n");
	
	//asking the user to input the elements for the 2D Array
	for(r = 0; r < row; r++) {
		for(s = 0; s < col; s++) {
			printf("arr[%d][%d] = ", r, s);
			scanf("%d", &arr[r][s]);
		}
	}
	
	//function
	maxMin(*arr, row, col);
	
	return 0;
}

void maxMin(int *arr, int row, int col) {

	//variable declaration
	int r, s, max, min;
	
	//loop to determine the max and min value/element in 
	//2D array using pointers
	for (r = 0; r < row; r++) {
		for (s = 0; s < col; s++) {
            int value = *(arr+r*col+s);
            if (value > max) {
                max = value;
            }
            if (value < min) {
               min = value;
        	}
		}
	}
	
	//print the max and min value
	printf("--------------------------------------\n");
	printf("The maximum element is: %d", max);
	printf("\nThe minimum element is: %d", min);
}
