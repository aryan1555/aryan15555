#include <stdio.h>

int main() 
{
int  diagSum,  upperSum,  lowerSum ,total;
total=0;

    diagSum = 0;
    upperSum = 0;
    lowerSum = 0;
int arr[3][3];
	
	for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	
	printf("enter the element  [%d] and [%d]:",i,j);
	scanf("%d",&arr[i][j]);
	}
	}

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                diagSum += arr[i][j];
            } else if (i < j) {
                upperSum += arr[i][j];
            } else {
            lowerSum += arr[i][j];
            }
        }
    }


printf("\n");
 
    printf("Diagonal sum: %d\n", diagSum);

    printf("Upper triangle sum: %d\n", upperSum);
    printf("Lower triangle sum: %d\n", lowerSum);
	
    return 0;
	
	}
