#include "arithmeticfunctions.h"
#include<cmath>
#include<algorithm>

// Compute x^3
int cube(int x){
    int l=x*x*x;
     return l;
}

// Compute the maximum of x and y
int max(int x, int y){
    int z;
    if(x>y){
        z=x;
    }else{
        z=y;
    }
    return z;
}

// Compute x - y
int difference(int x, int y){
    return x-y;
}
