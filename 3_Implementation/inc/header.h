/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   header.h
 * Author: Dishan Dev
 *
 * Created on 7 September, 2021, 5:23 PM
 */

#ifndef HEADER_H
#define HEADER_H

#ifdef __cplusplus
extern "C" {
#endif
    
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <stdbool.h>

int i,j;
int main_exit;
void menu();
int atm();
void close();
struct date{
    int month,day,year;

    };
struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;

    }add,upd,check,rem,transaction;


#ifdef __cplusplus
}
#endif

#endif /* HEADER_H */
