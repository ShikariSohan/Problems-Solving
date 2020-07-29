#include<stdio.h>
#include<string.h>
int main()
{
    char a[2000],b[]="HELLO",c[]="HALLO",d[]="BONJOUR",e[]="CIAO",F[]="ZDRAVSTVUJTE",G[]="HOLA",j[]="#";
    int i;
    for(i=1;i>0;i++)
    {
        scanf("%s",a);
        if(strcmp(a,b)==0)
            printf("Case %d: ENGLISH\n",i);
           else if(strcmp(a,c)==0)
            printf("Case %d: GERMAN\n",i);
            else if(strcmp(a,d)==0)
            printf("Case %d: FRENCH\n",i);
            else if(strcmp(a,e)==0)
            printf("Case %d: ITALIAN\n",i);
            else if(strcmp(a,F)==0)
            printf("Case %d: RUSSIAN\n",i);
            else if(strcmp(a,G)==0)
            printf("Case %d: SPANISH\n",i);
            else if(strcmp(a,j)==0)
            break;
            else
                printf("Case %d: UNKNOWN\n",i);
    }
 return 0;
}
