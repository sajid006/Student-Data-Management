#include "headers.h"
void show()
{
    int a,x,i,j,k;

    printf("1.Show according to Name.\n2.Show according to Merit Position.\n3.Show according to Roll Number.\n");
    scanf("%d",&a);
    system("color 4f");
    //system("figlet hello");
    for(i=0;i<119;++i)printf("*");
    printf("\n");
    for(i=0;i<20;++i)printf(" ");
    for(i=0;i<69;++i)printf("*");
    printf("\n");
    for(i=0;i<40;++i)printf(" ");
    for(i=0;i<35;++i)printf("*");
    printf("\n");
    system("cls");
    printf("                          Result sheet of %s year %s semester ",str3,str4);
    if(str1==1)printf("BSc ");
    else if(str1==2)printf("MSc ");
    printf("students of department of %s:\n\n",str2);

    if(a==2){
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(s[j].tm>s[i].tm){
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
            if(s[j].tm==s[i].tm){
                if(s[j].tc>s[i].tc){
                    temp=s[j];
                    s[j]=s[i];
                    s[i]=temp;
                }
            }
        }
    }

    for(i=0;i<n;i++){
        if(s[i].roll!=-1){
        printf("Merit Position:%d\nName:%s\nRoll:%d\nTotal Marks:%d\nTotal Credit Earned:%lf\n",i+1,s[i].name,s[i].roll,s[i].tm,s[i].tc);
        }
    }
    }
    else if(a==3){
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(s[j].roll<s[i].roll){
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        //printf("\nname:%s\nroll:%d\nmerit:%d\n",s[i].name,s[i].roll,i+1);
        if(s[i].roll!=-1){
        printf("Merit Position:%d\nName:%s\nRoll:%d\nTotal Marks:%d\nTotal Credit Earned:%lf\n",i+1,s[i].name,s[i].roll,s[i].tm,s[i].tc);
        }
    }
    }
    else if(a==1){
        for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(s[i].name,s[j].name)>0){
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        //printf("\nname:%s\nroll:%d\nmerit:%d\n",s[i].name,s[i].roll,i+1);
        if(s[i].roll!=-1){
        printf("Merit Position:%d\nName:%s\nRoll:%d\nTotal Marks:%d\nTotal Credit Earned:%lf\n",i+1,s[i].name,s[i].roll,s[i].tm,s[i].tc);
        }
    }
    }

    showfile();
    system("pause");
    system("color 1c");
    mteachers();
}
