#ifndef ANY_H
#define ANY_H

#include "any_enums.h"
#include "any_get_used.h"

typedef struct {
    enum AnyUsing using;
    union {
        char* v_char;
        char** v_char_l;
        short int* v_short;
        short int** v_short_l;
        int* v_int;
        int** v_int_l;
        long int* v_long;
        long int** v_long_l;
        long long* v_llong;
        long long** v_llong_l;
        unsigned char* v_u_char;
        unsigned char** v_u_char_l;
        unsigned short int* v_u_short;
        unsigned short int** v_u_short_l;
        unsigned int* v_u_int;
        unsigned int** v_u_int_l;
        unsigned long int* v_u_long;
        unsigned long int** v_u_long_l;
        unsigned long long* v_u_llong;
        unsigned long long** v_u_llong_l;
        float* v_float;
        float** v_float_l;
        double* v_double;
        double** v_double_l;
        long double* v_ldouble;
        long double** v_ldouble_l;
        void* v_void_p;
    }
} any_t;

void free_any_t(any_t* obj, enum AnyUsing id_to_free) {
    switch (id_to_free) {
        case CHAR:      free(obj->v_char);      break;
        case CHAR_L:    free(obj->v_char_l);    break;
        case SHORT:     free(obj->v_short);     break;
        case SHORT_L:   free(obj->v_short_l);   break;
        case INT:       free(obj->v_int);       break;
        case INT_L:     free(obj->v_int_l);     break;
        case LONG:      free(obj->v_long);      break;
        case LONG_L:    free(obj->v_long_l);    break;
        case LLONG:     free(obj->v_llong);     break;
        case LLONG_L:   free(obj->v_llong_l);   break;
        case UCHAR:     free(obj->v_u_char);    break;
        case UCHAR_L:   free(obj->v_u_char_l);  break;
        case USHORT:    free(obj->v_u_short);   break;
        case USHORT_L:  free(obj->v_u_short_l); break;
        case UINT:      free(obj->v_u_int);     break;
        case UINT_L:    free(obj->v_u_int_l);   break;
        case ULONG:     free(obj->v_u_long);    break;
        case ULONG_L:   free(obj->v_u_long_l);  break;
        case ULLONG:    free(obj->v_u_llong);   break;
        case ULLONG_L:  free(obj->v_u_llong_l); break;
        case FLOAT:     free(obj->v_float);     break;
        case FLOAT_L:   free(obj->v_float_l);   break;
        case DOUBLE:    free(obj->v_double);    break;
        case DOUBLE_L:  free(obj->v_double_l);  break;
        case LDOUBLE:   free(obj->v_ldouble);   break;
        case LDOUBLE_L: free(obj->v_ldouble_l); break;
        case VOID_P:    free(obj->v_void_p);    break;
    }
}

void malloc_any_t(any_t* obj, enum AnyUsing id_to_malloc, size_t s) {
    switch (id_to_malloc) {
        case CHAR:      obj->v_char      = malloc(sizeof(char) * s);        break;
        case CHAR_L:    obj->v_char_l    = malloc(sizeof(char) * s);        break;
        case SHORT:     obj->v_short     = malloc(sizeof(short int) * s);   break;
        case SHORT_L:   obj->v_short_l   = malloc(sizeof(short int) * s);   break;
        case INT:       obj->v_int       = malloc(sizeof(int) * s);         break;
        case INT_L:     obj->v_int_l     = malloc(sizeof(int) * s);         break;
        case LONG:      obj->v_long      = malloc(sizeof(long int) * s);    break;
        case LONG_L:    obj->v_long_l    = malloc(sizeof(long int) * s);    break;
        case LLONG:     obj->v_llong     = malloc(sizeof(long long) * s);   break;
        case LLONG_L:   obj->v_llong_l   = malloc(sizeof(long long) * s);   break;
        case UCHAR:     obj->v_u_char    = malloc(sizeof(char) * s);        break;
        case UCHAR_L:   obj->v_u_char_l  = malloc(sizeof(char) * s);        break;
        case USHORT:    obj->v_u_short   = malloc(sizeof(short int) * s);   break;
        case USHORT_L:  obj->v_u_short_l = malloc(sizeof(short int) * s);   break;
        case UINT:      obj->v_u_int     = malloc(sizeof(int) * s);         break;
        case UINT_L:    obj->v_u_int_l   = malloc(sizeof(int) * s);         break;
        case ULONG:     obj->v_u_long    = malloc(sizeof(long int) * s);    break;
        case ULONG_L:   obj->v_u_long_l  = malloc(sizeof(long int) * s);    break;
        case ULLONG:    obj->v_u_llong   = malloc(sizeof(long long) * s);   break;
        case ULLONG_L:  obj->v_u_llong_l = malloc(sizeof(long long) * s);   break;
        case FLOAT:     obj->v_float     = malloc(sizeof(float) * s);       break;
        case FLOAT_L:   obj->v_float_l   = malloc(sizeof(float) * s);       break;
        case DOUBLE:    obj->v_double    = malloc(sizeof(double) * s);      break;
        case DOUBLE_L:  obj->v_double_l  = malloc(sizeof(double) * s);      break;
        case LDOUBLE:   obj->v_ldouble   = malloc(sizeof(long double) * s); break;
        case LDOUBLE_L: obj->v_ldouble_l = malloc(sizeof(long double) * s); break;
        case VOID_P:    obj->v_void_p    = malloc(sizeof(void*));           break;
    }
}

void realloc_any_t(any_t* obj, enum AnyUsing id_to_realloc) {
    switch (id_to_realloc) {
        case CHAR:      obj->v_char      = realloc(obj->v_char, sizeof(char) * s);             break;
        case CHAR_L:    obj->v_char_l    = realloc(obj->v_char_l, sizeof(char) * s);           break;
        case SHORT:     obj->v_short     = realloc(obj->v_short, sizeof(short int) * s);       break;
        case SHORT_L:   obj->v_short_l   = realloc(obj->v_short_l, sizeof(short int) * s);     break;
        case INT:       obj->v_int       = realloc(obj->v_int, sizeof(int) * s);               break;
        case INT_L:     obj->v_int_l     = realloc(obj->v_int_l, sizeof(int) * s);             break;
        case LONG:      obj->v_long      = realloc(obj->v_long, sizeof(long int) * s);         break;
        case LONG_L:    obj->v_long_l    = realloc(obj->v_long_l, sizeof(long int) * s);       break;
        case LLONG:     obj->v_llong     = realloc(obj->v_llong, sizeof(long long) * s);       break;
        case LLONG_L:   obj->v_llong_l   = realloc(obj->v_llong_l, sizeof(long long) * s);     break;
        case UCHAR:     obj->v_u_char    = realloc(obj->v_u_char, sizeof(char) * s);           break;
        case UCHAR_L:   obj->v_u_char_l  = realloc(obj->v_u_char_l, sizeof(char) * s);         break;
        case USHORT:    obj->v_u_short   = realloc(obj->v_u_short, sizeof(short int) * s);     break;
        case USHORT_L:  obj->v_u_short_l = realloc(obj->v_u_short_l, sizeof(short int) * s);   break;
        case UINT:      obj->v_u_int     = realloc(obj->v_u_int, sizeof(int) * s);             break;
        case UINT_L:    obj->v_u_int_l   = realloc(obj->v_u_int_l, sizeof(int) * s);           break;
        case ULONG:     obj->v_u_long    = realloc(obj->v_u_long, sizeof(long int) * s);       break;
        case ULONG_L:   obj->v_u_long_l  = realloc(obj->v_u_long_l, sizeof(long int) * s);     break;
        case ULLONG:    obj->v_u_llong   = realloc(obj->v_u_llong, sizeof(long long) * s);     break;
        case ULLONG_L:  obj->v_u_llong_l = realloc(obj->v_u_llong_l, sizeof(long long) * s);   break;
        case FLOAT:     obj->v_float     = realloc(obj->v_float, sizeof(float) * s);           break;
        case FLOAT_L:   obj->v_float_l   = realloc(obj->v_float_l, sizeof(float) * s);         break;
        case DOUBLE:    obj->v_double    = realloc(obj->v_double, sizeof(double) * s);         break;
        case DOUBLE_L:  obj->v_double_l  = realloc(obj->v_double_l, sizeof(double) * s);       break;
        case LDOUBLE:   obj->v_ldouble   = realloc(obj->v_ldouble, sizeof(long double) * s);   break;
        case LDOUBLE_L: obj->v_ldouble_l = realloc(obj->v_ldouble_l, sizeof(long double) * s); break;
        case VOID_P:    obj->v_void_p    = realloc(obj->v_void_p, sizeof(void*));              break;
    }
}

void* init_any_t(any_t* obj, const int a) {
    obj = malloc(sizeof(any_t) * s);
    *obj->using = AnyUsing::INT;
    obj->v_int = malloc(sizeof(int) * s);
    *obj->v_int = a;
}

void free_any_t(any_t* obj) {
    free(obj);
}

void any_set(any_t* obj, any_t* other) {

}

void* any_get(any_t* obj) {
    switch (obj->using) {
        case CHAR:      return *obj->v_char;
        case CHAR_L:    return *obj->v_char_l;
        case SHORT:     return *obj->v_short;
        case SHORT_L:   return *obj->v_short_l;
        case INT:       return *obj->v_int;
        case INT_L:     return *obj->v_int_l;
        case LONG:      return *obj->v_long;
        case LONG_L:    return *obj->v_long_l;
        case LLONG:     return *obj->v_llong;
        case LLONG_L:   return *obj->v_llong_l;
        case UCHAR:     return *obj->v_u_char;
        case UCHAR_L:   return *obj->v_u_char_l;
        case USHORT:    return *obj->v_u_short;
        case USHORT_L:  return *obj->v_u_short_l;
        case UINT:      return *obj->v_u_int;
        case UINT_L:    return *obj->v_u_int_l;
        case ULONG:     return *obj->v_u_long;
        case ULONG_L:   return *obj->v_u_long_l;
        case ULLONG:    return *obj->v_u_llong;
        case ULLONG_L:  return *obj->v_u_llong_l;
        case FLOAT:     return *obj->v_float;
        case FLOAT_L:   return *obj->v_float_l;
        case DOUBLE:    return *obj->v_double;
        case DOUBLE_L:  return *obj->v_double_l;
        case LDOUBLE:   return *obj->v_ldouble;
        case LDOUBLE_L: return *obj->v_ldouble_l;
        case VOID_P:    return *obj->v_void_p;
    }
}

int main(void) {
    any_t* obj; init_any(obj, 0);

    any_set(obj, 13);

    any_free(obj);

    any_t obj[5];

    for (int i = 0; i != sizeof(obj)/sizeof())
    return 0
}

#endif