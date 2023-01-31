#include <stdio.h>
#include <stdbool.h>

unsigned long  long f_reversed(unsigned long long num){
    unsigned long long reversed = 0;
    while(num > 0){
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

unsigned long long main() {
    unsigned long long input , original , reversed , result;
    int count=0;
    bool is_palindrome = false;
    scanf("%llu", &input);
    result= input;
    if(input==0){
        return 0;
    }
    while(!is_palindrome){

        if(result == f_reversed(result)){ //is a palindrome
            printf("%d %llu\n",count,result);
            is_palindrome = true;
            main();
        }
        else if (count == 1000 || result >= 4294967295){
            printf("Not palindrome found\n");
            is_palindrome = true;
            main();
        }
        else{//is not a palindrome
            original = result;
            reversed = f_reversed(original);
            result = original + reversed;

            ++count;
        }
    }
}
