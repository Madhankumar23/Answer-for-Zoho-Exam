#include <stdio.h>
#include <string.h>
int main()
{

    char s[1000];
    scanf("%s",s);
    int i,j,l=strlen(s),length,count=0;;
    length=l;
    while(length>0){
        for(i=0;i<length-1;i++)
            printf("  ");
        j=l/2;
        int a=l-length+1;
        for(i=0;i<a&&j<l;i++){
            printf("%c ",s[j]);
            j++;
        }
        if(length-1<l/2){
            count++;
            j=0;
            for(i=0;i<count;i++){
                printf("%c ",s[j]);
                j++;
            }
            

        }
        printf("\n");
        length--;
        
    }
    
}
