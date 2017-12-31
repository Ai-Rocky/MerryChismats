#include <stdio.h>

main()
{
    int i,j,k,star=1,s=30,l2=9,p=0;
    char mcd2017[50] = {'M','E','R','R','Y','C','H','R','I','S','T','M','A','S','D','A','Y','2','0','1','7'};

    system("COLOR B");
    printf("\n\t\t    By: Rocky Shamsul Alam\n\n");
//    printf("\n\tID: 15163203032\n");
//    printf("\n\tIntake: 24/1\n");
//    printf("\n\tDepartment: CSE\n");

    for(i=1;i<=25;i++)
    {
        if(i<23){
            for(k=1;k<=s;k++)
            {
                printf(" ");
            }

            for(j=0;j<star;j++)
            {
                if(i==1)
                    printf("^");
                else
                    printf("%c",mcd2017[p]);

            }
            if(i > 1)
                p++;
            printf("\n");

            if(i==6)
            {
                printf("\n");
                star = 11;
                s+=5;
            }
            else if(i==15)
            {
                printf("\n");
                star = 33;
                s+=5;
            }
            else
            {
                star += 4;
                s-=2;
            }
        }
         if(i>21){
            for(k=1;k<=28;k++)
            {
                printf(" ");
            }printf("|||\n");

        }

    }printf("\n\n");

}
