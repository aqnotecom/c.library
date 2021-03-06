/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  测试sizeof对指针的使用 
 *
 *        Version:  1.0
 *        Created:  08/20/2018 04:48:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int aqnote_stdlib_sizeof(int args, char *argv[])
{
    int array[10];
    int(*ptr)[10];
    ptr = &array;

    printf("sizeof(*array) = %lu\n", sizeof(*array)); // 4 数组元素大小

    printf("sizeof(array) = %lu\n", sizeof(array));      // 40 数组大小
    printf("sizeof(int [10]) = %lu\n", sizeof(int[10])); // 40 数组大小

    printf("sizeof(ptr) = %lu\n", sizeof(ptr));               // 8/64bit
    printf("sizeof(int(*)[10]) = %lu\n", sizeof(int(*)[10])); // 8/64bit

    return 0;
}
