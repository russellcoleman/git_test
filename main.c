//
//  main.c
//  Learn C
//
//  Created by Russell Coleman on 8/27/22.
//

#include <stdio.h>

int sum ( int x, int y );

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
      int theSum = sum (10, 11);
      printf ( "Sum: %i\n", theSum );
    }

    int sum ( int x, int y )
    {
      return x + y;
    
    }
