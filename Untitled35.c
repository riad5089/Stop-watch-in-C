#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int hour, minute, second,h=8, m=54, s=40;
    printf("Enter hour, minute, second:");
    scanf("%d%d%d",&hour,&minute,&second);
    system("cls");

      while(1){
        printf("\n\n#########Stop Watch##########\n\n");

        printf("%.2d:%.2d:%.2d\n",h,m,s);
        printf("\n\n###################\n\n");
        s++;
        sleep(1);
        if(h==hour && m==minute && s==second){
          break;
        }else{
          system("cls");
        }
        if(s==60){
          m++;
          s=0;
        }
        if(m==60){
            h++;
            m=0;
        }


      }
        return 0;
}
