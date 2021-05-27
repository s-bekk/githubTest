/*
Intro to C
Assignment #4
Problem #2
Author: Samuel Bekker
N11626869
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct intel { //Declaration of Struct
	int n;  //Number
    char str[50];  //String
};

void print(int nStructs, intel* structArr); //Prints out contents of each Struct

int main() {
					 //The variable nStructs refers to the number of Structs
    int nStructs, x; //The variable x is just a counter variable
    intel* structArr; //Pointer to the "list" of structs
    printf("Enter the number of structs to be made: ");
    scanf("%d",&nStructs);
    int size = sizeof(intel)
    structArr = (struct intel*)malloc(nStructs* size); //Allocate memory for each struct

    x = 0;
    while (x < nStructs) { //Ask user to input info for each struct    
        printf("Enter this struct's String: %s");
        scanf("%s", &structArr[x].str);      //User selects the string for this struct
        printf("Enter this struct's Number: %d: ");
        scanf("%d", &structArr[x].n);		 //User selects the number for this struct
        x++;
    }

    print(nStructs, structArr);   

    free(structArr); //Free Memory
    return 0;
}

void print(int nStructs, intel* structArr) { //Prints out contents of each Struct
	int y = 0;
	while (y < nStructs) {
		printf("-----Struct #%d-----\n", y+1);
        printf("Struct #%d has the Number:  \"%d\"\n", y+1, structArr[y].n);
        printf("Struct #%d has the String: \"%s\"\n", y+1, &structArr[y].str);
        y++;
    }
}









