

#include <uvsqgraphics.h>
#include <stdio.h>
#include <string.h>
#include "definition.h"
#include "jeu.h"
#include "déplacement_mode_edition.h"
#include "deplacement_mode_jeu.h"
#include "affichage.h"
#include "save.h"
int main(int argc, char **argv)
{
	POINT perso,point_clic,nom_fichier,num_niv,nb_coupjouer;
       nom_fichier.x=700; nom_fichier.y=800;
       num_niv.x=650; num_niv.y=800;
       nb_coupjouer.x=600;nb_coupjouer.y=800;
       int coup_jouer=0;
	init_graphics(900,900);
	dessine_cadrillage(bleu);
	   affiche_cadrillage();
	 			 liste pile=creer_vide();
				liste pile2=creer_vide();
	   
	if(test_mot_est(argv[1],"-n") )
    {
		if(!(strcmp(&(argv[3][strlen(argv[3])-strlen(".xsb")]),".xsb")))
		 {	
			    int c=atoi(argv[2]);
				efface_nb_coupjouer();
			   aff_int(coup_jouer,20,nb_coupjouer,rouge);
			    aff_pol("sasquatch1.xsb",20,nom_fichier,bleu);
			    afficher_buton();
			    efface_num_niv();
			    aff_int(c,20,num_niv,bleu);
			    lire_ecrire("sasquatch1.xsb",atoi(argv[2]));
			    affiche_plateau();

				pile=insere_debut(pile);
				while(testdepot())
	           {      
				   perso=affectation_point_perso();
				   point_clic=wait_clic();
				   coup_jouer=affiche_coup_jouer(coup_jouer,point_clic,nb_coupjouer); 
	               if(point_clic.x<890 && point_clic.x>840  && point_clic.y>840 && point_clic.y<890)
	               {
					libere(pile);
	                 libere(pile2);   
	                exit(0);
				   }
	               if(point_clic.x<60 && point_clic.x>10 && point_clic.y>840 && point_clic.y<890)
	               {
					    pile2=insere_debut(pile2);
				        pile=retour(pile);
				        affiche_plateau();
			       }
	               if(point_clic.x<60 && point_clic.x>10 && point_clic.y>780 && point_clic.y<830)
	               {
					    pile2=retour(pile2);
				        affiche_plateau();
			       }
	               if( point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200)
	               {
				        deplacement_droites(perso,point_clic);
				        pile2=supprimer_tout_element(pile2);
				        pile=insere_debut(pile);
				        
				        affiche_plateau();
			       }
	               if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200)
	               {
				       deplacement_gauches(perso,point_clic);
				        pile2=supprimer_tout_element(pile2);
				        pile=insere_debut(pile);
				        
				       affiche_plateau();
			      }
	             if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310)
	             {
				       deplacement_hauts(perso,point_clic);
				        pile2=supprimer_tout_element(pile2);
				        pile=insere_debut(pile);
				        affiche_coup_jouer(coup_jouer,point_clic,nb_coupjouer);
				       affiche_plateau();
			     }
	            if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310 )
	             {
				      deplacement_bass(perso,point_clic);
				        pile2=supprimer_tout_element(pile2);
				        pile=insere_debut(pile);
				        affiche_coup_jouer(coup_jouer,point_clic,nb_coupjouer);
				      affiche_plateau();
			     }
			   if(point_clic.x>70 && point_clic.x<120 && point_clic.y>780 && point_clic.y<830)
		        {
				     init_tab();
			         lire_ecrire("sasquatch1.xsb",c);
			         affiche_plateau();
			 	     liste pile=creer_vide();
				     liste pile2=creer_vide();
				     pile=insere_debut(pile);
				     coup_jouer=0;
				     efface_nb_coupjouer();
			         aff_int(coup_jouer,20,nb_coupjouer,rouge);
			    }
			    if(point_clic.x>70 && point_clic.x<120 && point_clic.y>720 && point_clic.y<770)
			    {
				    init_tab();
				    c++;
				    lire_ecrire("sasquatch1.xsb",c);
			        affiche_plateau();
			 	    liste pile=creer_vide();
				    liste pile2=creer_vide();
				    pile=insere_debut(pile);
				    efface_num_niv();
			        aff_int(c,20,num_niv,bleu);
			   	    coup_jouer=0;
				    efface_nb_coupjouer();
			        aff_int(coup_jouer,20,nb_coupjouer,rouge);
			    }
			    if(point_clic.x>10 && point_clic.x<60 && point_clic.y>720 && point_clic.y<770)
			    {
				    init_tab();
				    c--;
				    lire_ecrire("sasquatch1.xsb",c);
			        affiche_plateau();
			 	    liste pile=creer_vide();
				    liste pile2=creer_vide();
				    pile=insere_debut(pile);
				    efface_num_niv();
			        aff_int(c,20,num_niv,bleu);
			        coup_jouer=0;
				    efface_nb_coupjouer();
			        aff_int(coup_jouer,20,nb_coupjouer,rouge);
			    }
		  }

	  }

  }


		if(!(strcmp(&(argv[1][strlen(argv[1])-strlen(".xsb")]),".xsb")))
		 {	
			   int c=1; int coup_jouer1=0;
			   afficher_buton();
			   aff_pol("sasquatch1.xsb",20,nom_fichier,bleu);
			   	efface_num_niv();
			   aff_int(c,20,num_niv,bleu);
			    lire_ecrire("sasquatch1.xsb",c);
			    affiche_plateau();
				pile=insere_debut(pile);
				while(testdepot())
	           {      
				   perso=affectation_point_perso();
				   point_clic=wait_clic();
			   if(point_clic.x>70 && point_clic.x<120 && point_clic.y>780 && point_clic.y<830)
		        {
				     init_tab(); 
			         lire_ecrire("sasquatch1.xsb",c);
			         affiche_plateau();
			    }
			    if(point_clic.x>70 && point_clic.x<120 && point_clic.y>720 && point_clic.y<770)
			    {
				    init_tab();c=c+1;
				    lire_ecrire("sasquatch1.xsb",c);
			        affiche_plateau();
			    }
			    if(point_clic.x>10 && point_clic.x<60 && point_clic.y>720 && point_clic.y<770)
			    {
				    init_tab();c=c-1;
				    lire_ecrire("sasquatch1.xsb",c);
			        affiche_plateau();
			    }
			       deplacement_plateau(perso,point_clic);
				   coup_jouer1=affiche_coup_jouer(coup_jouer1,point_clic,nb_coupjouer);
				   pile=gestion_liste1_deplacement(pile,point_clic);
				   pile2=gestion_liste2_deplacement(pile2,point_clic);
				   pile=gestion_liste1_nouvellepartie_niveausuivprec(pile,point_clic);
                   pile2=gestion_liste2_nouvellepartie_niveausuivprec(pile2,point_clic);
                   coup_jouer1=affiche_init_coup_jouer(coup_jouer1,point_clic,nb_coupjouer);
				   c=gestion_numero_niveau(c,num_niv,point_clic);
				   pile=gestion_liste1_undo(pile,point_clic);
				   pile2=gestion_liste2_undo(pile2,point_clic);
				   pile2=gestion_liste2_redo(pile2,point_clic);
				   quitter_lejeu(pile,pile2,point_clic);
				   affiche_plateau();
		  }
    libere(pile);
	libere(pile2);
	free(pile);
	free(pile2);
	  }

  	if(test_mot_est(argv[1],"-c" ))
	{
		if(!(strcmp(&(argv[2][strlen(argv[2])-strlen(".xsb")]),".xsb")))
		{
		 POINT p_clic1,point_testmur1,point_testmur,personnage;
		 int fois=0;  int action_a_faires=0;
		 zero();
	     affiche_plateau();
         affiche_tous_les_boutons_editeur();
	     int *action_a_faires1=&action_a_faires;
		 while(*action_a_faires1!=7)
		 {
		 p_clic1=wait_clic();
         appuie_bouton_edition(&action_a_faires,p_clic1);
         action_poser_mur(&action_a_faires);
         action_poser_caisse(&action_a_faires);
         action_poser_depot(&action_a_faires);
         action_poser_perso(&action_a_faires);
         action_save(&action_a_faires);
		 personnage=action_deplacer_perso(&action_a_faires,personnage);
		 action_testperso(&action_a_faires);
		  while(*action_a_faires1==6){
		 p_clic1=wait_clic(); 
		 affiche_plateau();
		 if(fois==0){
		 point_testmur=testmur_etape1();
		 fois++;
	    }
	    if(fois==1){
		 point_testmur=testmur1_etape2();
		 fois++;
	    }
	    while(test_mur()==1){
	     point_testmur1=testmur2_etape3();
		 deplacement_haut_editeur_testmur(point_testmur1);
	     deplacement_bas_editeur_testmur(point_testmur1);
	     deplacement_gauche_editeur_testmur(point_testmur1);
	     deplacement_droite_editeur_testmur(point_testmur1);
		  affiche_plateau();
	       }
         p_clic1=action_testmur_etape3(&action_a_faires,point_testmur1,p_clic1);
         
	  }

		
	}
	 free(action_a_faires);
	 
  }
  
}
  	libere(pile);
	libere(pile2);
	
	wait_escape();
	exit(0);
	return 0;
}

