#include "stdio.h"

int nLines;
int nColumns;
char lcdNumber[23][12];
char lcdNumbers[8][23][12];
int s,n;

void drawA(){
    for(int i = 1 ; i <= s ; i++){
        lcdNumber[0][i] = '-';
    }
}
void drawG(){
    for(int i = 1 ; i <= s ; i++){
        lcdNumber[s+1][i] = '-';
    }
}
void drawD(){
    for(int i = 1 ; i <= s ; i++){
        lcdNumber[2*s+2][i] = '-';
    }
}
void drawF(){
    for(int i = 1 ; i <= s ; i++){
        lcdNumber[i][0] = '|';
    }
}
void drawB(){
    for(int i = 1 ; i <= s ; i++){
        lcdNumber[i][s+1] = '|';
    }
}
void drawE(){
    for(int i = s+2 ; i <= 2*s+1 ; i++){
        lcdNumber[i][0] = '|';
    }
}
void drawC(){
    for(int i = s+2 ; i <= 2*s+1 ; i++){
        lcdNumber[i][s+1] = '|';
    }
}
void clear_digit(){
    for(int i=0;i<23;i++){ //collumn
        for(int j=0;j<12;j++){ //row
            lcdNumber[i][j]=' ';
        }
    }
}
void draw_digit(int n){
    clear_digit();
    if(n==0){
        drawA();
        drawB();
        drawC();
        drawD();
        drawE();
        drawF();
    }
    else if(n==1){
        drawB();
        drawC();
    }
    else if(n==2){
        drawA();
        drawB();
        drawG();
        drawE();
        drawD();
    }
    else if(n==3){
        drawA();
        drawB();
        drawG();
        drawC();
        drawD();
    }
    else if(n==4){
        drawF();
        drawG();
        drawB();
        drawC();
    }
    else if(n==5){
        drawA();
        drawF();
        drawG();
        drawC();
        drawD();
    }
    else if(n==6){
        drawA();
        drawF();
        drawG();
        drawC();
        drawD();
        drawE();
    }
    else if(n==7){
        drawA();
        drawB();
        drawC();
    }
    else if(n==8){
        drawA();
        drawB();
        drawC();
        drawD();
        drawE();
        drawF();
        drawG();
    }
    else if(n==9){
        drawA();
        drawB();
        drawC();
        drawD();
        drawF();
        drawG();
    }
}

void print_digit() {
    for (int i = 0; i < 23; i++) { //collumn
        for (int j = 0; j < 12; j++) { //row
            printf("%c", lcdNumber[i][j]);
        }
        printf("\n");
    }
}

void main(){
    scanf("%d %d",&s,&n);
    draw_digit(n);
    print_digit();
}