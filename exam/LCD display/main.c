#include "stdio.h"

int input[8];
char lcdNumber[23][12];
char lcdNumbers[8][23][12];
int len_count,s,n;


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
        if(n!=0){
            len_count++;
            input[i]=n%10;
            n/=10;
        }
    }
} //convert number to array
void print_digit3D(){
    for (int i = 0; i < 2*s+3; i++) { //rows
        for(int k = 8-len_count; k<8 ; k++){
            for (int j = 0; j < s+3; j++) { //collumns
                printf("%c", lcdNumbers[k][i][j]);
            }
        }
        printf("\n");
    }
}

void drawto3D(){
    for(int i = 7; i>=0;i--){
        draw_digit(input[i]); //วาดใน2D

        for(int j = 0; j < 2*s+3; j++) { //rows
            for (int k = 0; k < s+2; k++) { //columns
                lcdNumbers[i][j][k] = lcdNumber[j][k];
            }
        }
    }
}
void drawdebug(){
    printf("im printer debug!!\n");
    for(int k = 8-len_count; k<8 ; k++){ //position
        printf("input[%d] : %d\n",k,input[k]);
        for(int i = 0 ; i<2*s+3 ; i++){ //rows
            for(int j = 0 ; j<s+2 ; j++){ //collumns
                printf("%c",lcdNumbers[k][i][j]);
            }
            printf("\n");
        }
    }
    printf("\nlen_count : %d",len_count);
}

void main(){
    scanf("%d %d",&s,&n);
    n_to_array(n);
    drawto3D();
    printf("\n");
    print_digit3D();
}