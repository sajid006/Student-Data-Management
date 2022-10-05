#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <float.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>
#include "mteachers.h"
#include "del.h"
#include "insert.h"
#include "sea.h"
#include "show.h"
#include "showfile.h"
#include "update.h"
#include "add.h"

int str1;
char str2[100],str3[100],str4[100];
int n,subjects,x,j,i,app;

struct perf{
        int marks[100];
        double credits[100];
    };
    struct student{
        char name[100];
        int roll;
        struct perf per;
        int tm;
        double tc;
    };
typedef struct student record;
record *s,temp;


