#ifndef DEF_2
#define DEF_2

#include "definition.h"


#endif
//fonction qui initialise le tableau a zero pour la fonction zero et 1 pour la fonction init_tab
void init_tab();
void zero();

liste creer_vide(); //initialise une liste 
liste insere_debut(liste l); // insere un element dans la liste
void affiche(liste l); //affiche la liste
liste retour(liste l); // utiliser pour le redo et undo
liste delete(liste l); //supprime 1 élement de la liste
liste libere(liste l); // libere la memoire
int est_vide(liste l); // teste si une liste est vide
//fonctin qui gere les 2 listes
liste gestion_liste2_deplacement(liste pile2,POINT point_clic);
liste gestion_liste1_deplacement(liste pile,POINT point_clic);
liste gestion_liste1_nouvellepartie_niveausuivprec(liste liste1,POINT point_clic);
liste gestion_liste2_nouvellepartie_niveausuivprec(liste liste2,POINT point_clic);
liste gestion_liste2_redo(liste liste2,POINT point_clic);
liste gestion_liste1_undo(liste liste1,POINT point_clic);
liste gestion_liste2_undo(liste liste2,POINT point_clic);

// ensemble de fonction qui permets de placer les éléments(=mur,caisse,depot,perso) en mode editeur 
void modifie_cadrillage_editeur_mur(POINT point_clic);
void modifie_cadrillage_editeur_caisse(POINT point_clic);
void modifie_cadrillage_editeur_depot(POINT point_clic);
void modifie_cadrillage_editeur_perso(POINT point_clic);

// fonction qui permet de determiner si il existe un perso ou un perso dans un depot
POINT affectation_point_perso();

//ensemble de fonction qui teste si les boutons ont était cliqués et associe une fonctionalité(=deplacement ,placement element,sauvegarde ect...)
void appuie_bouton_edition_save(int *action_a_faires,POINT point_clic);
void appuie_bouton_edition_deplacement(int *action_a_faires,POINT point_clic);
void appuie_bouton_edition_mur(int *action_a_faires,POINT point_clic);
void appuie_bouton_edition_caisse(int *action_a_faires,POINT point_clic);
void appuie_bouton_edition_depot(int *action_a_faires,POINT point_clic);
void appuie_bouton_edition_perso(int *action_a_faires,POINT point_clic);
void appuie_bouton_edition_testperso(int *action_a_faires,POINT point_clic);
//fonction qui permet de poser des éléments(mur,perso...)
void action_poser_mur(int *elements);
void action_poser_caisse(int *elements);
void action_poser_depot(int *elements);
void action_poser_perso(int *elements);
void action_save(int *elements);
void action_testperso(int *elements);
//fonction qui permet de tester si il existe le bon nombre de perso
POINT action_deplacer_perso(int *elements,POINT personnage);
//fonction qui permet de faire l'étape 3 du testmur
POINT action_testmur_etape3(int *elements,POINT point_testmur1,POINT point_clic1);


//fonction qui compte le nombre de perso
int compteur_perso();

//fonction qui teste si il existe toujour un depot vide
int testdepot();
//fonction qui teste si les mot taper sur la ligne de commade sont bien les bons
int test_mot_est(char* mot1,char* mot2);
// fonctions qui fait le teste mur en plusieur etape
POINT testmur_etape1();
POINT testmur1_etape2();
POINT testmur2_etape3();
//fonction qui teste si il existe toujours un mur
int test_mur();
//fonction qui teste si le mur est ouvert ou fermé
int testmurs_succeed(POINT p);

int gestion_nouvelle_partie(int niveau,POINT point_clic);
//fonction qui permet de quitter le jeu
void quitter_lejeu(liste liste1,liste liste2,POINT point_clic);
