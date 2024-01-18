// les bibliotheques
#include <stdio.h> //la bibliotheque standard pour la lecture et l'affichage.
#include <stdlib.h>//l'allocation de memoire.
#include<string.h>// pour manipuler les chaines de  caracteres.
#include <windows.h>//le temps.
#include<time.h>// permet la temporisation du programme


//pour le temps
 void pause (int seconds)
      {
         clock_t endpause;
         endpause = clock () + seconds * CLOCKS_PER_SEC ;
         while (clock() < endpause) {}
      }


 //pour le temps
void main1(void)
{
SYSTEMTIME t;
GetSystemTime(&t);
printf("%d-%d-%d %d:%d:%d ",t.wDay,t.wMonth,t.wYear,t.wHour,t.wMinute,t.wSecond);
}

//Menu d'acceuil
    void page_accueil ()
      {
         int space;

         printf("\n\n\n");
         system("color 9");
         for(space=0;space<20;space++) printf(" ");pause(1);
         printf("                                    ___  \n");
          for(space=0;space<20;space++) printf(" ");pause(1);
         printf("                                  _______ \n");
         for(space=0;space<20;space++) printf(" ");pause(1);
         printf("||||||    |||||||||||||         ||||   ||||\n");
         for(space=0;space<20;space++) printf(" ");pause(1);
         printf("||||||    |||||||||||||         ||||   |||| \n");
          for(space=0;space<20;space++) printf(" ");pause(1);
         printf("||||||    |||||                 ||||   ||||  \n");
          for(space=0;space<20;space++) printf(" ");pause(1);
         printf("||||||    |||||                 ||||   ||||\n");
         for(space=0;space<20;space++) printf(" ");pause(1);
         printf("||||||    |||||                 ||||___||||  \n");
         for(space=0;space<20;space++) printf(" ");pause(1);
         printf("||||||    |||||    ||||||       ||||___||||     \n");
         for(space=0;space<20;space++) printf(" ");pause(1);
         printf("||||||    |||||||||||||||       ||||   ||||  \n");
         for(space=0;space<20;space++) printf(" ");pause(1);
         printf("||||||    |||||||||||||||       ||||   ||||  \n");
         for(space=0;space<20;space++) printf(" ");pause(1);
         printf("||||||    |||||||||||||||       ||||   ||||   \n");pause(1);
         printf("\n\n\n                      INSTITUT     SUPERIEUR    DU GENIE     APPLIQUE\n\n\n\n");pause(3);
         printf("                           _______________°°°°°________________             \n");pause(1);
         printf("                           _______________°°°°°________________            \n\n\n");pause(1);
         printf("                                    PROJET D'ALGORITHME :\n\n");pause(3);
         printf("                       PROGRAMME SIMULANT LA GESTION DES COMPTES BANCAIRES  \n");pause(3);
         printf("                                   ____________________            \n\n");pause(1);
         printf("                                    - Avril 2020\n\n\n");pause(3);
         printf(" CONCEPTION :\n\n");pause(1);
         printf(" NABE MAMOUDOU\n");pause(2);
         printf("EL OUEDGHIRI INTISSAR\n");pause(2);
        printf("BOUHMALA SALIM\n");pause(2);
         printf("              \n");pause(2);
         printf("              \n\n");pause(2);
         printf("                                                          SUPERVISION : \n\n");pause(1);
       printf("                                                          M.KHALID AISSAOUI \n\n\n\n\n");pause(3);
         printf("______________________________________________________________________________\n\n\n\n");

         printf("\n\n\n\n\n\n\n\n\n\n\n\n                       Chargement du programme ...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");pause(5);
         printf("______________________________________________________________________________\n\n");
         printf("                       BIENVENUE A LAGENCE DE LA SOCIETE GENERALE. \n");
         printf("______________________________________________________________________________\n\n\n\n");pause(5);

      };


      // la structure.
    typedef struct identifiant identifiant;
    struct identifiant
{
char nom[30];
char prenom[30];
char profession[30];
char compte[30];
char password[30];
double sold;
char tel[30];
char email[30];
};


// partie de l'inscription des nouveaux clients.

void Nouveau(identifiant *a, char *b)
{

	printf("Entrez les renseignements du nouveau client:\n");
    fflush(stdin);
    printf("Entrez le nom:\n");
    gets(a->nom);
     printf("Entrez le prenom:\n");
	gets(a->prenom);
	fflush(stdin);
	printf("Entrez la profession:\n");
	gets(a->profession);
	 printf("Entrez le mot de pass souhaite:\n");
	gets(a->password);
	 printf("Entrez votre numero de portable:\n");
	gets(a->tel);
	 printf("Entrez votre email:\n");
	gets(a->email);
	printf("compte cree avec succes!!!\n");
	fflush(stdin);
	a->sold=0;// le nouveau est vide au depart.
	ident(b,strlen(b)-1);//permet d'incrementer le numero de compte
	 strcpy(a->compte,b);
	Sleep(5000);//pour temporiser l'affichage vant que l'ecran ne disparaisse.
}


//le traitement des depots.
void depot(identifiant *a)
{
double som;

 printf(" Entrer La somme a depose\n");
 	scanf("%lf",&som);
	a->sold=a->sold+som;
	printf("votre nouveau sold est de %lf:\n",a->sold);
	Sleep(10000);

}



// traitement des retraits
void Retrait(identifiant *a)
{
int	essai=3;
 double montant;//som a retiré
	int ten=3;//tententive pour le recu
int option,recu,e=3;

	printf("\n--------------------------------\n\nBienvenu au service de retrait !\n\n--------------------------------\n\nQuel montant voulez-vous retirer ?");

	 printf("\n1.50                               4.500");
     printf("\n2.100                              5.1000");
     printf("\n3.200                              6.Autre");

     	do{
		if(essai!=3)
		printf("il vous reste %d essai",essai);
	printf("\n");
		scanf("%d",&option);
		essai--;
	}while(option!=1 && option!=2 && option!=3 && option !=4 && option!=5 && option != 6 && essai>0);
	if(essai==0)
	printf("tentatenive finie.\n");
	else
	{
		system("cls");
      switch (option)
      {
              case 1:
                    montant=50;
                    break;
            case 2: montant=100;
			          break;
			case 3:
			       montant=200;
			         break;

            case 4: montant =500;
			          break;
			case 5:
				     montant=1000;
					 break;
			case 6:
					do{
						printf("Entrez le montant:\n");
						 scanf("%lf",&montant);
						if(e!=3)
						printf("Entrez un montant multiple de 20:\n");//on doit forcer l'utilisqateur à suivre les consignes donnés
						e--;
					  }while(((int) montant)%20!=0 && e>0);
					   break;
		}

				 if(a->sold >= montant)
                    	{
                        	a->sold=a->sold-montant;

                       printf("\n\n Retrait effectue avec succes \n \n $$ Veuillez retirer votre argent $$ \n \n Voulez vous un recu pour cette operation\n");

                      printf(" Taper: 1 OUI\n");
                      printf("      : 2 NON\n");
                    	do{
		                     if(ten!=3)
		                 printf("il vous reste %d essai",ten);
		                printf("entrez une option:	\n");
		                 scanf("%d",&recu);//recu
		                    ten--;
	                      }while(recu!=1 && recu!=2 && ten>0);
	                   if(ten==0)
	                  printf("tentatenive finie.\n");
                      printf("\n Veuillez retirer votre carte !\n");
                      if(recu==2)//pas besoin de recu
                       printf("\n");
                      else
                       {system("cls");
                       	
                       printf("\n_________________________________________________\n");
                       printf("Numero de compte : %s\n",a->compte) ;
                       printf("NOM : %s\n", a->nom) ;
                       printf("Prenom : %s \n", a->prenom) ;
                       printf("Montant retire : %lf\n Solde disponible : %lf \n ",montant,a->sold) ;
                       printf("Date&Heure : ");
                       void main1(void);// qui gère l'heure
                       main1();  printf("\n_________________________________________________\n");
                        }
					      printf("\n");
				}
	           else

	            printf("sold insuffisant\n");



     }
     Sleep(5000);

}


//le traitement des virements.
void Virement(identifiant *a,identifiant *b,int n)
{
 double som;
 char compte[30];
 int i,essai=3;
 int correct=0;
 int client_actuel;
 printf("Donner le numero de compte du destinateur?\n");
    do{
	if(essai!=3)
		printf("il vous reste %d essai:",essai);
	    scanf("%s",compte);
	for(i=0;i<n && correct==0;i++)
{
	if(strcmp(b[i].compte,compte)==0 && strcmp(a->compte,compte)!=0)// on parcourt tous les mot_de_pass.//a->compte!=compte pour qu'on vire pas dans son compe.
	{
	   client_actuel=i; // avec i on a accès à toutes ces info...
	   correct=1;
	}
}
essai--;
}while(essai>0&&correct==0);
if(correct)
{
 printf("La somme a vire\n");
 	scanf("%lf",&som);
 	if(a->sold>=som)
 	{
 		a->sold=a->sold-som;
 		b->sold=b->sold+som;
 		printf("le montant transfer est de %lf:\n",som);
	 }
	 else
	 printf("Sold present insuffiant:\n");
}
 }

 // fonction qui sert à faire la modification desirée.
 void modifier(identifiant *a)
{
	int option;
	int essai=3;
	printf("Que voulez vous modifier?\n");
	printf("\n1.nom");
	printf("\n2.prenom");
	printf("\n3.profession");
	printf("\n4.mot de pass");
	printf("\n5.Tel");
	printf("\n6.Email");
	do{
		if(essai!=3)
		printf("il vous reste %d essai",essai);
		printf("entrez une option:\n");
		scanf("%d",&option);
		essai--;
	}while(option!=1 && option!=2 && option!=3 && option !=4 && option!=5 && option!=6 && essai>0);
	if(essai==0)
	{
	printf("tentatenive finie.\n");
    }
	else
	{
		system("cls");
		fflush(stdin);
		switch (option)
		{


		case 1: printf("Entrez le nouveau nom:\n");
			     gets(a->nom);
			    printf("modification reussite!!!\n");
			    fflush(stdin);
			break;
		case 2:printf("Veuillez Saisir le nouveau prenom :\n");
		    gets(a->prenom);
		    printf("modification reussite!!!\n");
		        fflush(stdin);
		    break;
		case 3: printf("Veuillez Entrer la nouvelle profession:\n");
		         gets(a->profession);
		          printf("modification reussite!!!\n");
		              fflush(stdin);
		              break;
		case 4:
			 printf("Veuillez Saisir le nouveau password :\n");
		     	gets(a->password);
		    printf("modification reussite!!!\n");
		        fflush(stdin);
		    break;
		case 5:
		    	printf("Veuillez Saisir le nouveau tel :\n");
		    	scanf("%s",a->tel);
		    	 printf("modification reussite!!!\n");
		    	     fflush(stdin);
		    	break;
		case 6:
		       printf("Veuillez Saisir le nouveau email:\n");
		       gets(a->email);
		        printf("modification reussite!!!\n");
		            fflush(stdin);
		       break;
		}

	}
}

//  pour la consultation du sold.

void consultationsold(identifiant *a)
{

	printf("Votre solde prent est %lf",a->sold);
}

//Supprimer compte
void suppression(identifiant *a,int *n)
{
int client_actuel,i,option,essai=3;
int correct=0;
char mot_de_pass[30];
//variable booleenne qui verifie si le mot de pass est correct

printf("\n\t\t\t        _______________________________________");
printf("\n\t\t\t       /                                      /");
printf("\n\t\t\t      /  Veuillez entrez votre mot de passe  / ");
printf("\n\t\t\t     /______________________________________/   \n\n\n");


    do{

	if(essai!=3)
		printf("il vous reste %d essai:\n",essai);
	    scanf("%s",mot_de_pass);
	for(i=0;i<*n && correct==0;i++)
{
	if(strcmp(a[i].password,mot_de_pass)==0)// on parcourt tous les mot_de_pass.
	{
	   client_actuel=i; // avec i on a accès à toutes ces info...
	   correct=1;
	}
}
       essai--;
     }while(essai>0 && correct==0);
	if(correct)
	{
		for(i=client_actuel;i<*n-1;i++)
		a[i]=a[i+1];
		*n=*n-1;
		system("cls");
		printf("Operation effectuee avec succes!!!\n");
	}
	else
	printf("Ce client nexiste pas.\n");
}



//comptes existants.
void Existant(identifiant *a,int n)
{
int client_actuel,i,option,essai=3;
int correct=0;
char mot_de_pass[30];
//variable booleenne qui verifie si le mot de pass est correct
printf("\n\t\t\t        _______________________________________");
printf("\n\t\t\t       /                                      /");
printf("\n\t\t\t      /  Veuillez entrez votre mot de passe  / ");
printf("\n\t\t\t     /______________________________________/   \n\n\n");

    do{

	if(essai!=3)
		printf("il vous reste %d essai:\n",essai);
	    scanf("%s",mot_de_pass);
	for(i=0;i<n && correct==0;i++)
{
	if(strcmp(a[i].password,mot_de_pass)==0)// on parcourt tous les mot_de_pass.
	{
	   client_actuel=i; // avec i on a accès à toutes ces info...
	   correct=1;
	}
}
       essai--;
     }while(essai>0 && correct==0);
     system("cls");
         fflush(stdin);
 	if(correct)//si correct==1 sa veut dire le if est vrai.
	{     essai=3;
		      printf("Quelle operation desirez vous?\n");
		      printf("\n1.Depot                         4.consultation");
		      printf("\n2.Retrait                       5.Modification");
		      printf("\n3.Virement                      6.Retour au menu");
		      printf("\n");

		       do{
		           if(essai!=3)
	            	printf("\n ll vous reste %d essai:\n",essai);

	            	scanf("%d",&option);
		            essai--;
               	}while(option!=1 && option!=2 && option!=3 && option !=4 && option!=5 && option!=6 && essai>0);
	system("cls");

	if(essai==0)
	{
			printf("tentatenive finie.\n");
		}
	else
{
	switch (option)
	{system("cls");

   case 1:
   depot(&a[client_actuel]);
            break;
   case 2: Retrait(&a[client_actuel]);
            break;
   case	3: Virement(&a[client_actuel],a,n);// client,a tous les comptes trouvant dans notre base donnée et n nombre de clients
           break;
   case 4: 	consultationsold(&a[client_actuel]);
            break;
	case 5:  modifier(&a[client_actuel]);//l'adress de client actuel
	        break;
	case 6: printf("                        |patientez...");
	        break;


	}


}
 }
}

 // qui va nous permet d'avoir les caracteres dans les numeros de compte.
int ident(char *x,int n)
{
	 if(x[n]=='9')//si le dernier, caracter=9 ;le dernier caracter recoit A;
		x[n]='A';
		else if (x[n]=='Z')//si le dernier caracter est=le dernier caract recoit 0;
		{
			x[n]='0';
		   	 return ident(x,n-1); // on decremente le dernier caracter;
		}
	   else	x[n]++;
   return 0;
}


int main(void)
{
identifiant client[100];
int nbrclient=0; //nbr de clients.
int choix,essaie=3;
//int k=1;//pour repeter l'operation.
  char num_ident[20]={"0000000009"};//numero de compte initialisé.
	page_accueil ();

	do{
		essaie=3;
		system("cls");// permet d'effacer l'ecran.fait disparait la page d'acceuil,le nouveau compte saisi.

printf("==========Menu=========\n\n");
printf("1.Nouveau client:\n");
printf("2.Client existant:\n");
printf("3.Supprimer client:\n");
printf("4.Quitter:\n");



do
{
		if(essaie!=3)
		printf("il vous reste %d essai:\n",essaie);
	    scanf("%d",&choix);
	    essaie--;
}while(choix !=1 && choix !=2 && choix !=3 && choix !=4 && essaie>0);
system("cls");
	switch (choix)
	{

case 1:  Nouveau(&client[nbrclient],num_ident);
	    nbrclient++;//chaque fois qu'on crée un compte on incrémente le nombre de clients.
	    break;
case 2: Existant(client,nbrclient);
         break;
case 3:   suppression(client,&nbrclient);
         break;
case 4:
        return 0;

            //k=0;// si on appuie sur 4 la boolenne recoit 0 on repete plus.
          //break;
          


	}

Sleep(5000);
	 }while(1);//qui permet de faire une repetition infinie
	 //une variable boolenne qui repeter quand un client finit de faire ce quil veut




   	system("pause");
   	return 0;

}



