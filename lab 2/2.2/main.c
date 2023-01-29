int input1;
int input2;
void main( ){
    printf("Enter two numbers: ");
    scanf( "%d", &input1 ) ;
    scanf( "%d", &input2 ) ;

    if(input1 + input2 > 100){
        printf("more than 100");
    }
    else{
        printf("less than 100");
    }
}