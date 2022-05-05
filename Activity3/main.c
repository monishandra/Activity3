/**
 * @file main.c
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
#include "activity.h"
void sumofcharacters(char name[size]);
int main(){
    union my_char m1;
    char name[size];
    printf("Enter the name:");
    scanf("%s",name);
    sumofcharacters(name);

}