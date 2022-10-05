#include "headers.h"
void ins()
{
    s=(record*)realloc(s,sizeof(record)*(n+1));
    int w;
    //printf("%d\n",n);
    printf("Enter number of subjects:");
    scanf("%d",&subjects);
    printf("please input the informations of the new student:\n");
        printf("Name: ");
        scanf(" %[^\n]",s[n].name);
        printf("Roll no: ");
        scanf("%d",&s[n].roll);
        s[n].tc=0;
        s[n].tm=0;

        for(w=0;w<subjects;w++){
            printf("Marks in subject no. %d:",w+1);
            scanf("%d",&s[n].per.marks[w]);
            printf("Credits in subject no. %d:",w+1);
            scanf("%lf",&s[n].per.credits[w]);
            s[n].tc+=s[n].per.credits[w];
            s[n].tm+=s[n].per.marks[w];
            //printf("%lf\n",s[n].tc);
        }
        n++;

    showfile();
    system("pause");
    mteachers();
}
