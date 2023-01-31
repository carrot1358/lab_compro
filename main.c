#include "stdio.h"

int nLines;
int nColumns;
int input[8];
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
} //clear 2D array
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
}   //draw 2D array
void print_digit2D() {
    for (int i = 0; i < 2*s+3; i++) { //collumn
        for (int j = 0; j < s+2; j++) { //row
            printf("%c", lcdNumber[i][j]);
        }
        printf("\n");
    }
} //print 2D array
void n_to_array(int n){

    for(int i = 7 ; i>=0 ; i --)
    {
        input[i]=n%10;
        n/=10;
    }
} //convert number to array
void drawIN3D(){
    for(int i = 0 ; i<=7 ; i++)//position
    {
        draw_digit(input[i]);
        if(input[i]>0){
            //printf("%d",input[i]); //debug
            //print_digit2D(); //debug
            //printf("\n%d\n",i); //debug
            for(int j = 0; j < s+2; j++) { //rows
                for (int k = 0; k < 2*s+3; k++) { //columns
                    lcdNumbers[i][j][k] = lcdNumber[j][k];
                }
            }
        }

    }
}void print_onedigit3D(){
    for (int i = 0; i < 2*s+3; i++) { //collumn
        for (int j = 0; j < s+2; j++) { //row
            printf("%c", lcdNumbers[7][i][j]);
        }
        printf("\n");
    }
}

void print_digit3D(){
    for (int i = 0; i < 2*s+3; i++) { //collumn
        for(int k = 0 ; k<=7 ; k++){
            for (int j = 0; j < s+2; j++) { //row
                printf("%c", lcdNumbers[k][i][j]);
            }
        }
        printf("\n");
    }
}
void lcdclear3D(){
    for(int k = 0 ; k<=7 ; k++){
        for(int i=0;i<23;i++){ //collumn
            for(int j=0;j<12;j++){ //row
                lcdNumbers[k][i][j]=' ';
            }
        }
    }

}
void main(){
    scanf("%d %d",&s,&n);
    n_to_array(n);
    for(int i = 0 ; i<=7 ; i++){
        //printf("%d\n",input[i]);
    }
    drawIN3D();
    print_onedigit3D();

}