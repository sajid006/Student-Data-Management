#include "headers.h"
void mteachers()
{
    system("cls");
    printf("1.Enter students info\n2.Insert info of a new student\n3.Delete info of a student\n");
    printf("4.Search info of a student\n5.Update info of a student\n6.Show Result sheet\n7.Exit.\n");
    int i;
    scanf("%d",&i);
    system("cls");
    if(i==1)add();
    else if(i==2)ins();
    else if(i==3)del();
    else if(i==4)sea();
    else if(i==5)update();
    else if(i==6)show();
    else if(i==7) return ;
    else mteachers();

}
