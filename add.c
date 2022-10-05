#include "headers.h"
void add(){
    int i;
    printf("Please enter the number of students:\n");
    scanf("%d",&n);
    s=(record*)calloc(n,sizeof(record));
    printf("Number of subjects:\n");
    scanf("%d",&subjects);
    for(i=0;i<n;i++){
        printf("input the informations of student no. %d:\n",i+1);
        printf("Name: ");
        scanf(" %[^\n]",s[i].name);
        printf("Roll no: ");
        scanf("%d",&s[i].roll);
        s[i].tc=0;
        s[i].tm=0;

        for(j=0;j<subjects;j++){
            printf("Marks in subject no. %d:",j+1);
            scanf("%d",&s[i].per.marks[j]);
            printf("Credits in subject no. %d:",j+1);
            scanf("%lf",&s[i].per.credits[j]);
            s[i].tc+=s[i].per.credits[j];
            s[i].tm+=s[i].per.marks[j];

        }

    }
    showfile();
    system("pause");
    mteachers();

}
