#include "headers.h"
void del(){
    int i,ex,rolltodel,co=0;
    char emp[2]=" ";
    char nametodel[100];
    printf("1.Delete by Roll.\n2.Delete by Name.\n");
    scanf("%d",&ex);
    system("cls");

    if(ex==1){
        printf("Enter Roll to delete:\n");
        scanf("%d",&rolltodel);
        for(i=0;i<n;i++){
            if(s[i].roll==rolltodel){
                s[i].roll=-1;
                break;
            }
        }
        if(i==n)printf("Roll no. %d not found.\n",rolltodel);
        else printf("Deleted.\n");
    }
    else if(ex==2){
        printf("Enter student Name:\n");
        scanf(" %[^\n]",nametodel);

        for(i=0;i<n;++i){
            if(strcmp(s[i].name,nametodel)==0){
                s[i].roll=-1;
                co++;
            }
        }
        if(co==0)printf("Any student named %s not found.\n",nametodel);
        else printf("Deleted.\n");
    }
    showfile();
    system("pause");

    mteachers();
}
