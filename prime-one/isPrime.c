//
//  isPrime.c
//  prime-one
//
//  Created by Fabian Gropp on 07.02.21.
//

#include "isPrime.h"

int isPrime(int n){
    int isPrimeFalse = 0;
    for(int i = 2; i<n;i++){
        if(n%i==0){
            isPrimeFalse +=1;
        }
    }
    if(isPrimeFalse>0){
        return 0;
    }
    else{
        return 1;
    }
}
