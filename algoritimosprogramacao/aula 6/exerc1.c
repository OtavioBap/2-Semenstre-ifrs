#include <stdio.h>

int main(){
    int v[5] = {1, 2, -1, 4, 5};
    int n = 5;
    for(int *p = v; p < v + n; p++){
        if(*p < 0){
            printf("V = %d\n", *p);
            break;
        }else{
            printf("V = %d\n", *p);
        }
    } 
}