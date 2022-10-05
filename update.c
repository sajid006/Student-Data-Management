#include "headers.h"
void update()
{
    int x1,x2,x3,x4,x5,j;
    printf("Update info:\n");
    printf("Enter the Roll No. of the student:\n");
    scanf("%d",&x1);
    for(x5=0;x5<n;x5++){
        if(s[x5].roll==x1)break;
    }
    if(x5==n){printf("Roll No. %d not found.\n",x1);system("pause");mteachers();}
    printf("Subject No.\n");
    scanf("%d",&x2);
    printf("1.Update Marks.\n2.Update Credit.\n");
    scanf("%d",&x3);
    if(x3==1){
        printf("Updated Mark:\n");
        scanf("%d",&x4);
        s[x5].per.marks[x2-1]=x4;
    }
    else if(x3==2){
        printf("Updated Credit:\n");
        scanf("%d",&x4);
        s[x5].per.credits[x2-1]=x4;
    }

    for(i=0;i<n;i++){
        s[i].tc=0;
        s[i].tm=0;
        for(j=0;j<subjects;j++){
            s[i].tc+=s[i].per.credits[j];
            s[i].tm+=s[i].per.marks[j];

        }
    }


    showfile();
    system("pause");
    mteachers();
}
