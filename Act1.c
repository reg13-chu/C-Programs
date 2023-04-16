#include <stdio.h>

//function-declaration
void matCompare(int row1, int col1, int row2, int col2);


int main(){
	//initialiaze the variables
	int colOne, rowOne, rowTwo, colTwo;
	int row1, row2, col1, col2;
	//initialion for 2D array
 	int matOne[20][20];
 	int matTwo[20][20];
	
	//the input will repeat if the dimensions are not equal
	do {
		printf("Enter the size of the First Matrix:\n");
		scanf("%d %d", &rowOne, &colOne);

		printf("Enter the size for Second Matrix:\n");
		scanf("%d %d", &rowTwo, &colTwo);	
	
		if (rowOne && colOne != rowTwo  && colTwo && rowOne != rowTwo || colOne  != colTwo) 
		printf("\nThe size of the 2 matrices were not equal\n");
	
	} while(rowOne && colOne != rowTwo  && colTwo && rowOne != rowTwo || colOne != colTwo);
	
	printf("--------------------------------------\n");
	//passing the values to other function
	matCompare(rowOne, colOne, rowTwo, colTwo);

	return 0;
}

//the other function
void matCompare(int row1, int col1, int row2, int col2) {
	//initialize the variables
	int a, b, equal = 1;
	int matOne[row1][col1];
 	int matTwo[row2][col2];
 	
 	//getting the input from the user for the elements of the first 2d array
 		printf("\nEnter the Element for the First Matrix (%dx%d):\n", row1, col1);
 	for (a=0; a < row1; a++){
 		for (b=0; b < col1; b++){
 			scanf("%d", &matOne[a][b]);
		 }
	 }
	  printf("---------------\n");
	//print the the inputs 
	for (a=0; a < row1; a++){
 		for (b=0; b < col1; b++){
 			printf("%d ", matOne[a][b]);
		 }
		  printf("\n");
	 }
	 
 	//getting the input from the user for the elements of the second 2d array
 		printf("\nEnter the Element for the Second Matrix (%dx%d):\n", row2, col2);
 	for (a=0; a < row2; a++){
 		for (b=0; b < col2; b++){
 			scanf("%d", &matTwo[a][b]);
		 }
	 }
	 
	 printf("---------------\n");
	 //print the values
	 for (a=0; a < row2; a++){
 		for (b=0; b < col2; b++){
 			printf("%d ", matTwo[a][b]);
		 }
		 printf("\n");
	 }
	 //comparing the two 2d arrays(matOne & matTwo) if it is equal
		for(a=0; a<row1; a++) {
			for(b=0; b<col2; b++){
				if(matOne[a][b] != matTwo[a][b]){
					equal = 0;
					break;
				}
			}
		}
		
	 printf("-----------------------------\n");
	//if equal print the line below
	if(equal == 1){
		printf("\nThe elements of both matrices are EQUAL");
		} else {
			printf("\nThe elements of both matrices are NOT EQUAL");	
		}
}

