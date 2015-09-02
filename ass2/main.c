//
//  main.c
//  ass2
//
//  Created by Steele on 2015-08-19.
//  Copyright (c) 2015 Steele. All rights reserved.
//
/*
Write a program that takes three integer inputs: "Fuzz", "Bizz", and "Nezz".
Print numbers from 1 to the user's input for "Nezz". For the multiples of "Fuzz", print "Fuzz" instead of the number and for the multiples of "Bizz", print "Bizz" instead of the number. For numbers which are multiples of both "Fuzz" and "Bizz" print "FuzzBizz"
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int Nezz = 100;
    int Bizz = 3;
    int Fizz = 5;
    
    for (int i = 0; i <= Nezz; i++) {
        
        if (i%Fizz==0 && i!=0 && i%Bizz!=0)
        {
            printf("Fizz\n");
            
        }else if (i%Bizz==0 && i!=0 && i%3!=0)
        {
            printf("Bizz\n");
            
        }else if (i%Fizz==0 && i%Bizz==0 && i!=0)
        {
            printf("FizzBizz\n");
            
        }else
        {
            printf("%i\n", i);
            
        }
    }
    
    
    return 0;
}
