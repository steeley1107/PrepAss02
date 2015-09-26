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

//function declaration.
void fuzzBizzNezz (int fuzz, int bizz, int nezz);

int main(int argc, const char * argv[]) {
    
    fuzzBizzNezz(3, 5, 100);
    
    return 0;
}


//function implementation.
void fuzzBizzNezz (int fuzz, int bizz, int nezz){

    for (int i = 1; i <= nezz; i++) {
        
        if (i%fuzz==0 && i%bizz==0)
        {
            printf("FuzzBuzz\n");
            
        }else if (i%bizz==0)
        {
            printf("Bizz\n");
            
        }else if (i%fuzz==0)
        {
            printf("Fuzz\n");
            
        }else
        {
            printf("%i\n", i);
            
        }
    }
}
