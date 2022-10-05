#include "headers.h"
void sea()
{
    char qq[100],p[100];
    int f,xx,e,curr=0;
    printf("1.Search by Roll.\n2.Search by Name.\n3.Search by department.\n");
    scanf("%d",&xx);
    system("cls");

    if(xx==1){
        printf("Enter the Roll No.:\n");
        scanf("%d",&f);
        for(e=0;e<n;e++){
            if(s[e].roll==f){
                printf("Information of Roll No. %d:\n",f);
                printf("\nName: %s\nRoll:%d\nMerit:%d\nTotal Marks:%d\nTotal Credits Earned:%lf\n",s[e].name,s[e].roll,e+1,s[e].tm,s[e].tc);
                break;

            }
        }
        if(e==n)printf("Roll no. %d not found.\n",f);
    }
    else if(xx==2){
        printf("Enter the Name:\n");
        scanf(" %[^\n]",qq);
        for(e=0;e<n;e++){
            if(strcmp(s[e].name,qq)==0){
                printf("Information of %s:\n",qq);
                printf("\nName: %s\nRoll:%d\nMerit:%d\nTotal Marks:%d\nTotal Credits Earned:%lf\n",s[e].name,s[e].roll,e+1,s[e].tm,s[e].tc);
                curr++;
            }
        }
        if(curr==0) printf("Any student not found.\n",qq);
    }
    else if(xx==3){
        printf("Enter department Name:\n");
        scanf(" %[^\n]",p);
        if(strcmp(p,str2)==0)show();
        else printf("Result sheet not found.\n");
    }
    system("pause");
    mteachers();
}
