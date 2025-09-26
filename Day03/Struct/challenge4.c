#include <stdio.h>

struct plan{
    int x,y;
};



int main(){
    struct plan p = {10,20};
    
    // utiliser des pointeurs pour creer des variables;
    struct plan *pointer = &p;
    pointer->x = 30;
    pointer->y = 40;

    printf("%d,%d",pointer->x,pointer->y);


        return 0;
}