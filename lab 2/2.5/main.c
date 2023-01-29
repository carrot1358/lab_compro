void main(){
    //program check right triangle
    int a,b,c;
    printf("Enter a,b,c : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("a*a is %d\n",a*a);
    printf("b*b is %d\n",b*b);
    printf("c*c is %d\n",c*c);
    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) {
        printf("This is a right triangle");
    }
    else printf("This is not a right triangle");
}
