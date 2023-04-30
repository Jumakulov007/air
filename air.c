#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct club
{
    char nom[50],davlat[50];
    int ball;
    bool last_res;
    int all_res,uch_res,noaniq_res,uchga_res;
    char samalyot[100];
};
struct club kiritish()
{
    struct club jamoa;
    printf("qayerga uchasiz: ");
    fgets(jamoa.nom,50,stdin);
    printf("samalyot: ");
    fgets(jamoa.samalyot,100,stdin);
    printf("uchib ketgan reyslarni kiriting:? ");
    scanf(" %d",&jamoa.uchga_res);
    printf("hamma reysni kiriting: ");
    scanf("%d",&jamoa.all_res);
    printf("uchishi kerak reyslarni kiriting: ");
    scanf("%d",&jamoa.uch_res);
    printf("uchishi noaniq reyslarni kiriting: ");
    scanf("%d",&jamoa.noaniq_res);
    printf("qayerdan ketasiz : ");
    scanf(" %s",jamoa.davlat);
    return jamoa;
}
void show_club(struct club c)
{
    printf("%s(%s)\t%d\t%d\t%d\t%d\t%d\n",c.nom,c.davlat,c.all_res,c.uch_res,c.noaniq_res,c.uchga_res,c.ball);
}
int main()
{
    system("clear");
    struct club c[100];
    int count,last_game;
    char ct,name[50],rahbar[50],zahira[100]="";
    printf("reyslar royxati sonni:");
    scanf("%d%c",&count,&ct);
    for (int i=0;i<count;i++)
    {
        c[i]=kiritish();
    }
    int n;
    bool lamp;
    tekshir:
        system("clear");
    printf("1.Nomi bo'yicha\n");
    printf("2.Oxirgi reys bo'yicha\n");
    printf("3.davlat bo'yicha\n");
    printf("yuqoridagilardan birini tanlang: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        lamp=false;
        printf("reysni  nomini kiriting: ");
        scanf("%s",name);
        for (int i=0;i<count;i++)
        {
            if (strncmp(c[i].nom,name,strlen(c[i].nom)-1)==0)
            {
                show_club(c[i]);
                lamp=true;
            }
        }
        if (lamp==false)
        printf("%s nomli res yo'q\n",name);
        break;
    case 2:
        printf("Oxirgi reys kerakmi?");
        scanf("%d",&last_game);
        for (int i=0;i<count;i++)
        {
            if (last_game==last_game)
            {
                show_club(c[i]);
            }
        }
        break;
    case 3:
        lamp=false;
        printf(" nmadrni kiriting: ");
        scanf(" %s",rahbar);
        for (int i=0;i<count;i++)
        {
            if (strncmp(c[i].samalyot,rahbar,strlen(c[i].samalyot)-1)==0)
            {
                show_club(c[i]);
                lamp=true;
            }
        }
        if (lamp==false)
        printf("%s samalyot  yo'q\n",name);
        break;
    }
    
    return 0;
}
