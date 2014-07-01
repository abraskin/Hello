//
//  main.c
//  Hello
//
//  Created by Aaron Braskin on 6/29/14.
//  Copyright (c) 2014 Aaron Braskin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    // insert code here...
    printf("Using for loops to sum ranges of numbers!\n");
    int number, sum;
    sum = 0;
    for ( number = 1; number <= 10; number++ ) sum+=number;
    printf(" The sum of the numbers from 1 to 10 is %d.\n", sum );
    
    sum = 0;
    for ( number = 1; number <= 20; number+=2 ) sum+=number;
    printf(" The sum of the odd numbers from 1 to 20 is %d.\n", sum );
    
    sum = 0;
    for ( number = 2; number <= 10; number+=2 ) sum+=number;
    printf(" The sum of the even numbers from 1 to 10 is %d.\n", sum );
    
    sum = 0;
    for ( number = 10; number <= 100; number+=3 ) sum+=number;
    printf(" The sum of every third number from 10 to 100 is %d.\n", sum );

    return 0;
}

