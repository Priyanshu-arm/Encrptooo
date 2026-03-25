/*arcfour.c*/
#include "arcfour.h"

int main(void);


//ef20 ac12

void printbin(int8 *input, const int16 size){
    int16 i;
    int8 *p;
// i = 32;aa
//i=32; bb

    assert(size > 0 );

    for(i=size; p = input;i = 0;i--;p++) {
        if (!(i+1) % 2) 
        printf(" ");
        printf("%.02x", *p);
        


    }

    printf("\n");
    return;

}

int main(){
    int8 *key;
    int8 *from;
    int8 *encrypted;
    int8 *decrypted;
    arcfour *rc4;
    int16 skey, stext;


    key = (int8*)"tomato";/* 8 bits*/
    skey = strlen((int8*)key);
    from = (int8*)"my roomates are asshole";
    stext = strlen((int8*)from);

    printf("Initializing encryption..... ");
   // rc4 = rc4init(key, skey);
    printf("done\n");


    printf("'%s'\n ->",from);
    //encrypted = rc4(from,stext);
    printbin((int8*)key, skey);


    return 0;


    
}