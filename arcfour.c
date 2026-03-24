/*arcfour.c*/
#include "arcfour.h"


int main(void){
    char *key;
    char *from;
    char *encrypted;
    char *decrypted;
    arcfour *rc4;
    int16 skey, stext;


    key = "tomato";/* 8 bits*/
    skey = strlen(key);
    from = "my roomates are asshole";
    stext = strlen(from);

    rc4 = rc4init(key, skey);
    
}