#include "definition.h"

void zero(){
	int x,y;
  for(x=0;x<35;x++)
  {
	   for(y=0;y<35;y++)
      {
	   pos[x][y]=VIDE1;
	  }
  }
}
int est_vide(liste l)
{
	if(l==NULL)return 1;
    else 
    return 0;
}
void libere(liste l)
{
	if(!est_vide(l))
	{
		
		libere(l->suiv);
		free(l);
	}
}
void init_tab(){
	int x,y;
  for(x=0;x<35;x++)
  {
	   for(y=0;y<35;y++)
      {
	   pos[x][y]=VIDE2 ;
	  }
  }
}
liste creer_vide(){
	return NULL;
}
liste insere_debut(liste l){
	int x,y;
	liste new=malloc(sizeof(element));
	for(x=0;x<35;x++)
	{
		for(y=0;y<35;y++)
		{
	      new->tab[x][y]=pos[x][y];
	    }
	}
	new->suiv=l;
	new->prec=NULL;
	return new;}
	
	
void affiche(liste l){
     int x,y;
	element *tmp=l;
	while(tmp!=NULL)
	{
		for(x=0;x<35;x++)
	{
		for(y=0;y<35;y++)
		{
			printf("%d",tmp->tab[x][y]);
		}
		printf("\n");
	}
	tmp=tmp->prec;
    }
}

liste retour(liste l){
    int x,y;
	element *tmp=l;
	if(tmp!=NULL)
	{
		for(x=0;x<35;x++)
	    {
		    for(y=0;y<35;y++)
		    {
			pos[x][y]=tmp->tab[x][y];	
		    }	
	    }
	tmp->prec=l; tmp=tmp->suiv;
    }
    return tmp;
}

liste delete(liste l)
{
	if(l!=NULL)
	{
		element *tmp=l->suiv;
		free(l);
	    return tmp;
    }
   else
    {
	   return NULL;
    }
}
liste supprimer_tout_element(liste l)
{
	element *tmp=l;
	element *tmp1;
	while(tmp!=NULL)
	{
		tmp1=tmp->suiv;
		free(tmp);
		tmp=tmp1;
	}	
	return NULL;
}

void modifie_cadrillage_editeur_mur(POINT point_clic)
{
	int i,j;
	j=point_clic.x/20;
	i=point_clic.y/20;

	if(point_clic.x<TAILLE_CADRILLAGE && point_clic.y<TAILLE_CADRILLAGE && pos[i][j]!=PERSO && pos[i][j]!=CAISSE && pos[i][j]!=DEPOT && pos[i][j]!=MUR)
	pos[i][j]=MUR;
}
void modifie_cadrillage_editeur_caisse(POINT point_clic)
{
	int i,j;
	j=point_clic.x/20;
	i=point_clic.y/20;

	if(point_clic.x<TAILLE_CADRILLAGE && point_clic.y<TAILLE_CADRILLAGE && pos[i][j]!=PERSO && pos[i][j]!=CAISSE && pos[i][j]!=DEPOT && pos[i][j]!=MUR)
	pos[i][j]=CAISSE;
}
void modifie_cadrillage_editeur_depot(POINT point_clic)
{
	int i,j;
	j=point_clic.x/20;
	i=point_clic.y/20;

	if(point_clic.x<TAILLE_CADRILLAGE && point_clic.y<TAILLE_CADRILLAGE && pos[i][j]!=PERSO && pos[i][j]!=CAISSE && pos[i][j]!=DEPOT && pos[i][j]!=MUR)
	pos[i][j]=DEPOT;
}
void modifie_cadrillage_editeur_perso(POINT point_clic)
{
	int i,j;
	j=point_clic.x/20;
	i=point_clic.y/20;

	if(point_clic.x<TAILLE_CADRILLAGE && point_clic.y<TAILLE_CADRILLAGE  && pos[i][j]!=PERSO && pos[i][j]!=CAISSE && pos[i][j]!=DEPOT && pos[i][j]!=MUR)
	pos[i][j]=PERSO;
}

POINT affectation_point_perso(){
	POINT perso; int i,j;
	for(i=0;i<35;i++)
	{
		for(j=0;j<35;j++)
		{        
			if(pos[i][j]==PERSO || pos[i][j]==PERSO_DS_DEPOT){ 
			perso.x=20*j+10; perso.y=20*i+10;
			return perso;
			}
			else{
			 perso.x=perso.y=0;
			}    
		}
	}
return perso;
} 

void appuie_bouton_edition_testperso(int *action_a_faires,POINT point_clic)
{
	if(BOUTON_TESTPERSO(point_clic))
	*action_a_faires=TESTPERSO;
}
void appuie_bouton_edition_save(int *action_a_faires,POINT point_clic)
{
	if(BOUTON_SAVE(point_clic))
	*action_a_faires=SAVE;
}
void appuie_bouton_edition_test_mur(int *action_a_faires,POINT point_clic)
{
	if(BOUTON_TESTMUR(point_clic))
	*action_a_faires=TEST_MUR;
}
void appuie_bouton_edition_deplacement(int *action_a_faires,POINT point_clic)
{
	if(BOUTON_EDITEUR_DEPLACEMENT_PERSO(point_clic))
	*action_a_faires=EDITION_DEPLACEMENT;
}		
void appuie_bouton_edition_mur(int *action_a_faires,POINT point_clic)
{
	if(BOUTON_POSER_MUR(point_clic))
		 *action_a_faires=POSER_MUR;
}
void appuie_bouton_edition_caisse(int *action_a_faires,POINT point_clic)
{
	if(BOUTON_POSER_CAISSE(point_clic))
		 *action_a_faires=POSER_CAISSE;
}
void appuie_bouton_edition_depot(int *action_a_faires,POINT point_clic)
{
	if(BOUTON_POSER_DEPOT(point_clic))
		 *action_a_faires=POSER_DEPOT;
}
void appuie_bouton_edition_perso(int *action_a_faires,POINT point_clic)
{
	if(BOUTON_POSER_PERSO(point_clic))
		 *action_a_faires=POSER_PERSO;
}
void appuie_bouton_edition(int *action_a_faires,POINT point_clic){
	appuie_bouton_edition_mur(action_a_faires,point_clic);
	appuie_bouton_edition_caisse(action_a_faires,point_clic);
	appuie_bouton_edition_depot(action_a_faires,point_clic);
	appuie_bouton_edition_perso(action_a_faires,point_clic);
	appuie_bouton_edition_deplacement(action_a_faires,point_clic);
	appuie_bouton_edition_save(action_a_faires,point_clic);
	appuie_bouton_edition_test_mur(action_a_faires,point_clic);
	appuie_bouton_edition_testperso(action_a_faires,point_clic);
	
}
void action_save(int *action_a_faires)
{
		 if(*action_a_faires==1)
		 {
			 save_editeur();
		 }
}
void action_poser_mur(int *action_a_faires)
{
	     POINT point_clic1;
	     while(*action_a_faires==POSER_MUR)
	     {
		 point_clic1=wait_clic();
         appuie_bouton_edition(action_a_faires,point_clic1);
	     modifie_cadrillage_editeur_mur(point_clic1);
	     affiche_plateau();
	     }
}
void action_poser_caisse(int *action_a_faires)
{
	     POINT point_clic1;
	     while(*action_a_faires==POSER_CAISSE)
	     {
		 point_clic1=wait_clic();
         appuie_bouton_edition(action_a_faires,point_clic1);
	     modifie_cadrillage_editeur_caisse(point_clic1);
		 affiche_plateau();
	     }
}
void action_poser_depot(int *action_a_faires)
{
	     POINT point_clic1;
	     while(*action_a_faires==POSER_DEPOT)
	     {
			 point_clic1=wait_clic();
             appuie_bouton_edition(action_a_faires,point_clic1);
			 modifie_cadrillage_editeur_depot(point_clic1);
			 affiche_plateau();
		 }
}
void action_poser_perso(int *action_a_faires)
{
	     POINT point_clic1;
		  while(*action_a_faires==POSER_PERSO)
	      {
			 point_clic1=wait_clic();
             appuie_bouton_edition(action_a_faires,point_clic1);
			 modifie_cadrillage_editeur_perso(point_clic1);
			 affiche_plateau();
	     }
}
POINT action_deplacer_perso(int *action_a_faires,POINT personnage)
{
	    POINT point_clic1;
		while(*action_a_faires==EDITION_DEPLACEMENT)
		{
			point_clic1=wait_clic();
			affiche_plateau();
			personnage=affectation_point_perso();
	        deplacement_editeur(personnage,point_clic1);
            appuie_bouton_edition(action_a_faires,point_clic1); 
			affiche_plateau();
		 }
		 return personnage;
}

int compteur_perso()
{
	int x,y,compteur;
	compteur=0;
	for(x=0;x<35;x++)
		{
			for(y=0;y<35;y++)
			{
				if(pos[x][y]==PERSO)
				compteur++;
			}
		}
		return compteur;
 }
void action_testperso(int *action_a_faires){
      POINT point_clic1;
	  while(*action_a_faires==TESTPERSO){
		    point_clic1=wait_clic();
		    appuie_bouton_edition(action_a_faires,point_clic1);
		 if(compteur_perso()==1)
		 {
			 printf(" nombre perso correct\n");
		 }
	     else
	     {
		     printf("probleme  perso\n");
	     }
      } 	
}

int testdepot()
{
	int i,j;
	
	for(i=0;i<35;i++)
	{
		for(j=0;j<35;j++)
		{
			
			if(pos[i][j]==DEPOT) return 1;
			
		}
	}
}
int test_presence_mur()
{
	int i,j;
	
	for(i=0;i<35;i++)
	{
		for(j=0;j<35;j++)
		{
			
			if(pos[i][j]==MUR) return 1;
			
		}
	}
}
int testmurs_succeed(POINT p){
	        int i,j;
            j=p.x/20;  
            i=p.y/20;
			if(pos[i][j]==9 &&  (pos[i-1][j]==11 || pos[i][j+1]==11 || pos[i][j-1]==11))
			{ 
             return 1;
			}
			else
			{
			 return 0;
			 }    
}
	
POINT testmur_etape1(){
	POINT test_mur_etape1; int i,j;
	for(i=0;i<35;i++)
	{
		for(j=0;j<35;j++)
		{        
			if(pos[i][j]==5 ){ 
			test_mur_etape1.x=20*j+10; test_mur_etape1.y=20*i+10;
			j=test_mur_etape1.x/20;i=test_mur_etape1.y/20;
			pos[i][j]=11;
			return test_mur_etape1;
			}
			else{
			 test_mur_etape1.x=test_mur_etape1.y=0;
			 }    
		}
	}
return test_mur_etape1;
}
POINT testmur1_etape2(){
	POINT test_mur_etape2; int i,j;
	for(i=0;i<35;i++)
	{
		for(j=0;j<35;j++)
		{        
			if(pos[i][j]==5 ){ 
			test_mur_etape2.x=20*j+10; test_mur_etape2.y=20*i+10;
			j=test_mur_etape2.x/20;i=test_mur_etape2.y/20;
			pos[i][j]=9;
			return test_mur_etape2;
			}
			else{
			 test_mur_etape2.x=test_mur_etape2.y=0;
			 }    
		}
	}
return test_mur_etape2;
}
POINT testmur2_etape3(){
	POINT test_mur_etape3; int i,j;
	for(i=0;i<35;i++)
	{
		for(j=0;j<35;j++)
		{        
			if(pos[i][j]==9 ){ 
			test_mur_etape3.x=20*j+10; test_mur_etape3.y=20*i+10;
			return test_mur_etape3;
			}
			else{
			 test_mur_etape3.x=test_mur_etape3.y=0;
			 }    
		}
	}
return test_mur_etape3;
} 
int test_mur()
{
	int i,j;
	
	for(i=0;i<35;i++)
	{
		for(j=0;j<35;j++)
		{
			
			if(pos[i][j]==MUR) return 1;
			
		}
	}
}
liste gestion_liste2_deplacement(liste liste2,POINT point_clic)
{
	    if(BOUTON_DEPLACEMENT_DROITE(point_clic) || BOUTON_DEPLACEMENT_BAS(point_clic) || BOUTON_DEPLACEMENT_HAUT(point_clic) || BOUTON_DEPLACEMENT_GAUCHE(point_clic))
        liste2=supprimer_tout_element(liste2);
        
        
return liste2;
}
liste gestion_liste1_deplacement(liste liste1,POINT point_clic)
{
	if(BOUTON_DEPLACEMENT_DROITE(point_clic) || BOUTON_DEPLACEMENT_BAS(point_clic) || BOUTON_DEPLACEMENT_HAUT(point_clic) || BOUTON_DEPLACEMENT_GAUCHE(point_clic))
	liste1=insere_debut(liste1);

return liste1;
}	     
int test_mot_est(char* mot1,char* mot2)
{
	if(strstr(mot1,mot2))
	{
		return 1;
	}
	return 0;
}
				
/*
int action_testmur_etape1(int *elements,int fois,POINT point_testmur){
		  while(*elements==6){
		    affiche_plateau();
		          if(fois==0)
		          {
		             point_testmur=testmur_etape1();
		             fois++;
	              }
	              if(fois==1)
	              {
		             point_testmur=testmur1_etape2();
		             fois++;
	              }
         }
         return fois;
}
POINT action_testmur_etape2(int *elements,POINT point_testmur1)
{
	while(*elements==6)
	{
         while(test_mur()==1)
         {
	     point_testmur1=testmur2_etape3();
		 deplacement_haut_editeur_testmur(point_testmur1);
	     deplacement_bas_editeur_testmur(point_testmur1);
	     deplacement_gauche_editeur_testmur(point_testmur1);
	     deplacement_droite_editeur_testmur(point_testmur1);
		 affiche_plateau();
	     }
	}
	return point_testmur1;
} 
*/ 
POINT action_testmur_etape3(int *elements,POINT point_testmur1,POINT point_clic1)
{
	while(*elements==TEST_MUR)
	{
	       point_testmur1=testmur2_etape3();
	       if(testmurs_succeed(point_testmur1)==1)
	        printf(" mur fermé\n");
	       else
	       printf(" murouvert\n");
	       appuie_bouton_edition(elements,point_clic1); 
	       point_clic1=wait_clic();
	}
	       return point_clic1;
}
int gestion_nouvelle_partie(int niveau,POINT point_clic)
{
	if(BOUTON_NOUVELLE_PARTIE(point_clic))
	{			     
	  init_tab();
	  lire_ecrire("sasquatch1.xsb",niveau);
	  affiche_plateau();
	 }
}	   
liste gestion_liste1_nouvellepartie_niveausuivprec(liste liste1,POINT point_clic)
{
   if((BOUTON_NOUVELLE_PARTIE(point_clic)) || (BOUTON_NIVEAU_PRECEDENT(point_clic)) || (BOUTON_NIVEAU_SUIVANT(point_clic)))
   {
   liste1=creer_vide();
   liste1=insere_debut(liste1);
   }
   return liste1;
}			         
liste gestion_liste2_nouvellepartie_niveausuivprec(liste liste2,POINT point_clic)
{
  if((BOUTON_NOUVELLE_PARTIE(point_clic)) || (BOUTON_NIVEAU_PRECEDENT(point_clic)) || (BOUTON_NIVEAU_SUIVANT(point_clic)))
   {
	   liste2=creer_vide();
   }
   return liste2;
}   
liste gestion_liste2_redo(liste liste2,POINT point_clic)
{
	 if(BOUTON_REDO(point_clic))
	     {
     	    liste2=retour(liste2);				   
            affiche_plateau();
         }
      return liste2;  
}
liste gestion_liste1_undo(liste liste1,POINT point_clic)
{
	if(BOUTON_UNDO(point_clic))
	{
	  liste1=retour(liste1);
	}
	return liste1;
}
liste gestion_liste2_undo(liste liste2,POINT point_clic)
{
	if( BOUTON_UNDO(point_clic))
	{
      liste2=insere_debut(liste2);
	  affiche_plateau();
	}
	return liste2;
}
void quitter_lejeu(liste liste1,liste liste2,POINT point_clic)
{		
	 if(BOUTON_QUITTER(point_clic))
	  {
		libere(liste1);
	    libere(liste2);
		exit(0);
      }
}	               
