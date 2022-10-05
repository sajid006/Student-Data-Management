#include "headers.h"


int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    system("cls");
    system("color 1c");
    for(i=0;i<119;++i)printf("*");
    printf("\n");
    for(i=0;i<20;++i)printf(" ");
    for(i=0;i<69;++i)printf("*");
    printf("\n");
    for(i=0;i<40;++i)printf(" ");
    for(i=0;i<35;++i)printf("*");
    printf("\n");
    char s[]="Welcome to Student Data Management System of KUET";
    printf("                                 %s",s);
    printf("\n");
    for(i=0;i<40;++i)printf(" ");
    for(i=0;i<35;++i)printf("*");
    printf("\n");
    for(i=0;i<20;++i)printf(" ");
    for(i=0;i<69;++i)printf("*");
    printf("\n");
    for(i=0;i<119;++i)printf("*");
    printf("\n");
    printf("1.Create new data sheet.\n2.Edit existing data sheet.\n3.Exit.\n");
    scanf("%d",&app);
    if(app==2){
        mteachers();
    }
    else if(app==1){
    system("cls");
    printf("Course type:\n1.BSc\n2.MSc\n3.Exit\n");
    scanf("%d",&str1);
    if(str1!=1 && str1!=2){free(s);return 0;}
    system("cls");
    printf("Name of the Department:\n");
    scanf("%s",str2);
    system("cls");
    printf("Semester:\n");
    scanf("%s",str4);
    system("cls");
    printf("Year:\n");
    scanf("%s",str3);
    system("cls");
    mteachers();
    }
    free(s);
    return 0;
    }
