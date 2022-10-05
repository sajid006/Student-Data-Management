#include "headers.h"
void showfile()
{
    char old[]="info.txt";
    char ne[]="dep.txt";
    //printf("%d ",app);
    int i;
    FILE *fp,*fpp;
    int ksfl=rename(old,ne);
    if(app==1){

    fp=fopen("dep.txt","w");
    if(fp==NULL)printf("file not found.\n");
    //printf("%s %s",str3,str4);
    fprintf(fp,"Result sheet of %s year %s semester ",str3,str4);
    if(str1==1)fprintf(fp,"BSc ");
    else if(str1==2)fprintf(fp,"MSc ");
    fprintf(fp,"students of department of %s:\n\n",str2);

     for(i=0;i<n;i++){
        if(s[i].roll!=-1){
        fprintf(fp,"\nName:%s\nRoll:%d\nTotal Marks:%d\nTotal Credit Earned:%.2lf\n",s[i].name,s[i].roll,s[i].tm,s[i].tc);
        }
    }
    //printf("sklfs");
    fclose(fp);
    //system("pause");
    }
    else if(app==2){
        fp=fopen("dep.txt","a");
        if(fp==NULL)printf("file not found.\n");
        for(i=0;i<n;i++){
            if(s[i].roll!=-1){
                fprintf(fp,"\nName:%s\nRoll:%d\nTotal Marks:%d\nTotal Credit Earned:%.2lf\n",s[i].name,s[i].roll,s[i].tm,s[i].tc);
            }
        }
        fclose(fp);
    }
    fpp=fopen("info.txt","w");
    fclose(fpp);
}
