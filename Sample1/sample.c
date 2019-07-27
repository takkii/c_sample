/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sample.c
 * Author: Takayuki Kamiyama
 *
 * Created on 2019/07/26, 21:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

char *
func(void)
{
    static char one_string[30] = "こんにちは、世界!\n";
    printf("*from func: %s", one_string);
    printf("\n");
    return (one_string);
}

int main(int argc, char** argv) {
    printf("*from func: %s", func());
    return (0);
}
