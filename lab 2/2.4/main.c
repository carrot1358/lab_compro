int a;
int b;
void main( ){
    printf( "a = ");
    scanf( " %d", &a ) ;
    printf( "b = ");
    scanf( " %d", &b ) ;
    if( a > b ) {
        printf("a - b : %d", a - b);
    }
    else {
        printf( "b - a : %d", b - a);
    }

}