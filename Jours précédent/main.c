
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int annee,mois,nbjours,jours;
  printf("Donner l'annee : ");
  scanf("%d",&annee);
  printf("Donner le mois : ");
  scanf("%d",&mois);
  printf("Donner le jours : ");
  scanf("%d",&jours);
  printf("la date saisie est : ");
  if (jours<10)
  printf("0%d/",jours);
  else printf("%d/",jours);
  if (mois<10)
  printf("0%d/%d\n\n",mois,annee);
  else printf("%d/%d\n\n",mois,annee);
  if (annee%4==0 && annee%100!=0 || annee%400==0) 
  printf("L'annee %d est bissextille\n\n",annee);
  else 
  printf("L'annee %d n'est pas bissextille\n\n",annee);
  if (mois==4 || mois==6 || mois==9 || mois==11)
  nbjours=30;
  else if (mois==2){
       if (annee%4==0 && annee%100!=0 || annee%400==0)
       nbjours=29;
       else
       nbjours=28;
       }
  else nbjours=31;
  printf("Le nombre de jours du mois %d de l'annee %d est : %d\n\n",mois,annee,nbjours);
  if (jours>1) jours--;
  else if (jours==1 && mois==1 || mois==2 || mois==4 || mois==6 || mois==9 || mois==11){
       jours=31;
       mois--;
       if (mois==0){
                    mois=12;
                    annee--;
                    }
                    }
  else if (jours==1 && mois==5 || mois==7 || mois==10 || mois==12){
       jours=30;
       mois--;}
  else if (jours==1 && mois==3 && annee%4==0 && annee%100!=0 || annee%400==0){
               jours=29;
               mois--;}
  else if (jours==1 && mois==3 && annee%4!=0 && annee%100==0 || annee%400!=0){
               jours=28;
               mois--;}
  printf("le jour precedent est : ");
  if (jours<10)
  printf("0%d/",jours);
  else printf("%d/",jours);
  if (mois<10)
  printf("0%d/%d\n\n",mois,annee);
  else printf("%d/%d\n\n",mois,annee); 
  
  system("PAUSE");	
  return 0;
}
