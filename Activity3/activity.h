/**
 * @file activity.h
 * @author Andra Monish (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define size 100
union my_char{
    char ch;
    uint8_t num;
};

void sumofcharacters(char name[size]){
    union my_char m1;
    int sum=0;
    int i=0;
    while(name[i]!='\0'){
        m1.num=name[i];
        printf("ASCII Value:%x\n",m1.num);
        i++;
    }
    for(int j=0;j<strlen(name);j++){
        sum=sum+name[j];
    }
    printf("sum:%x\n",sum);
    
}