#include <stdio.h>
#include <stdlib.h>
int shapechoice(void);
int shapesize(void);
void printasquare(int size);
void printarhombus(int size);
void printarighttriangle(int size);
void printapyramid(int size);
void printrohmbus1(int size);
void printrohmbus2(int size);
void printing(char character);
void printing_int(int character);
int main(){
    int selection = 0;
    int size ;
    for (;selection != 5;){
        selection = shapechoice();
        if (selection < 5) {
            size = shapesize();
            if (selection == 1) {
                printasquare(size);
            }
            else if (selection == 2) {
                printarhombus(size);
            }
            else if (selection == 3){
                printarighttriangle(size);
            }
            else if (selection == 4) {
                printapyramid(size);
            }
            }
        }

    return 0;
}
int shapechoice(void){
    int choice;
    printf("\n what would you like to be printed on your screen? \n");
    printf("1-a square \n");
    printf("2-a rhombus \n");
    printf("3-a right triangle \n");
    printf("4-a pyramid \n");
    printf("5-if you would like to shutdown the game \n");
    scanf("\n %d", &choice);
    return choice;
}
int shapesize(void){
    int chosen_size ;
    printf("Please input the size that you would like your shape to have(integers >0):");
    scanf("\n %d", &chosen_size);
    return chosen_size;
}
void printasquare(int size){
    int x,y,i;
    for(y=0;y<size;y++){
        i = (y+1);
        printf("\n");
        for(x=0;x<size;x++){
            if (y == 0 || x == 0 || y == (size-1) || x == (size-1)){
                printing_int(i);
            }
            else printing('-');
        }
    }

    return;
}
void printarhombus(int size){
    int z;
    if (size%2 == 0){
        z = (size+1);
    }
    else {
        z = size;
    }
    printrohmbus1(((z/2)+1));
    printrohmbus2((z/2));
    return;
}
void printarighttriangle(int size){
    int x,y,i;
    for(y=0;y<size;y++){
        i = (y+1);
        printf("\n");
        for(x=0;x<size;x++){
            if (x == 0 || y == (size-1) || y == x){
                printing_int(i);
            }
            else if (x > y){
            }
            else printing('-');;
        }
    }
    return;
}
void printapyramid(int size){
    int x,y,i;
    for(y=0;y <= size;y++){
        i = y;
        for(x=0;x < (size-y);x++){
            printing(' ');
        }
        for(x=0;x < ((2*y)-1);x++){
            if(y == (size) || y == 1 || x == 0 || x == ((2*y)-1)-1){
            printing_int(i);
            }
        else {
            printing('-');
        }
        }
        printf("\n");

    }



    return;
}
void printrohmbus1(int size){
    int x,y,i;
    for(y=0;y <= size;y++){
        i = y;
        for(x=0;x < (size-y);x++){
            printing(' ');
        }
        for(x=0;x < ((2*y)-1);x++){
            if(y == 1 || x == 0 || x == ((2*y)-1)-1){
            printing_int(i);
            }
        else {
            printing('-');
        }
        }
        printf("\n");

    }



    return;
}
void printrohmbus2(int size){
    int x,y,i;
    for(y=size;y > 0;y--){
        i = (2*size-y+2);
        printf(" ");
        for(x=0;x < (size-y);x++){
            printing(' ');
        }
        for(x= 0;x < ((2*y)-1);x++){
            if(y == 1 || x == 0 || x == ((2*y)-1)-1){
            printing_int(i);
            }
        else {
            printing('-');
        }
        }
        printf("\n");

    }



    return;
}
void printing(char character){
    printf("%c", character);
    return;
}
void printing_int(int character){
    printf("%d", character);
    return;
}
