#ifndef ANY_GET_USED_H
#define ANY_GET_USED_H

#include "any_enums.h"

/* all call cases for the function */

enum AnyUsing get_used_from_val(char* val) {
    return AnyUsing::CHAR;
}

enum AnyUsing get_used_from_val(char** val) {
    return AnyUsing::CHAR_L;
}

enum AnyUsing get_used_from_val(short int* val) {
    return AnyUsing::SHORT;
}

enum AnyUsing get_used_from_val(short int** val) {
    return AnyUsing::SHORT_L;
}

enum AnyUsing get_used_from_val(int* val) {
    return AnyUsing::INT;
}

enum AnyUsing get_used_from_val(int** val) {
    return AnyUsing::INT_L;
}

enum AnyUsing get_used_from_val(long int* val) {
    return AnyUsing::LONG;
}

enum AnyUsing get_used_from_val(long int** val) {
    return AnyUsing::LONG_L;
}

enum AnyUsing get_used_from_val(long long* val) {
    return AnyUsing::LLONG;
}

enum AnyUsing get_used_from_val(long long** val) {
    return AnyUsing::LLONG_L;
}

enum AnyUsing get_used_from_val(unsigned char* val) {
    return AnyUsing::UCHAR;
}

enum AnyUsing get_used_from_val(unsigned char** val) {
    return AnyUsing::UCHAR_L;
}

enum AnyUsing get_used_from_val(unsigned short int* val) {
    return AnyUsing::USHORT;
}

enum AnyUsing get_used_from_val(unsigned short int** val) {
    return AnyUsing::USHORT_L;
}

enum AnyUsing get_used_from_val(unsigned int* val) {
    return AnyUsing::UINT;
}

enum AnyUsing get_used_from_val(unsigned int** val) {
    return AnyUsing::UINT_L;
}

enum AnyUsing get_used_from_val(unsigned long int* val) {
    return AnyUsing::ULONG;
}

enum AnyUsing get_used_from_val(unsigned long int** val) {
    return AnyUsing::ULONG_L;
}

enum AnyUsing get_used_from_val(unsigned long long* val) {
    return AnyUsing::ULLONG;
}

enum AnyUsing get_used_from_val(unsigned long long** val) {
    return AnyUsing::ULLONG_L;
}

enum AnyUsing get_used_from_val(float* val) {
    return AnyUsing::FLOAT;
}

enum AnyUsing get_used_from_val(float** val) {
    return AnyUsing::FLOAT_L;
}

enum AnyUsing get_used_from_val(double* val) {
    return AnyUsing::DOUBLE;
}

enum AnyUsing get_used_from_val(double** val) {
    return AnyUsing::DOUBLE_L;
}

enum AnyUsing get_used_from_val(long double* val) {
    return AnyUsing::LDOUBLE;
}

enum AnyUsing get_used_from_val(long double** val) {
    return AnyUsing::LDOUBLE_L;
}

enum AnyUsing get_used_from_val(void* val) {
    return AnyUsing::VOID_P;
}


#endif