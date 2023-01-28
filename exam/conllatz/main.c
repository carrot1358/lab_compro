#include<stdio.h>
int m,n;
int cycle_length;
int highest_cycle_length;

//conllatz
int conllatz(int constant){

    while(constant > 1){
        if(constant % 2 == 0){ //for even numbers
            constant = constant / 2;
            cycle_length++;
        }
        else{ //for odd numbers
            constant = constant * 3 + 1;
            cycle_length++;
        }
    }
    return ++cycle_length;
}

//main
int main(){
    scanf("%d %d", &m,&n);
    printf("%d %d", m,n);
    while(m<=n){
        cycle_length = conllatz(m);
        if(cycle_length > highest_cycle_length){
            highest_cycle_length = cycle_length;
        }
        cycle_length=0;
        m++;
    }
    printf(" %d",highest_cycle_length);
}




