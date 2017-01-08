#ifndef DEF_1
#define DEF_1

#include "definition.h"


#endif
//fonction qui permet de lire un niveau dans un fichier et de lafficher pour y jouer
void lire_ecrire(char *fichier,int lvl);

void efface_num_niv();
void efface_nb_coupjouer();

void dessine_ligne_H(COULEUR couleur);
void dessine_ligne_V(COULEUR couleur );
void dessine_cadrillage(COULEUR couleur);
void affiche_cadrillage();

void afficher_plateau_case_vide1();
void afficher_plateau_case_vide2();
void afficher_plateau_perso();
void afficher_plateau_caisse();
void afficher_plateau_depot();
void afficher_plateau_mur();
void afficher_plateau_caisse_depot();
void afficher_plateau_perso_depot();
void afficher_plateau_testmur_processus1();
void afficher_plateau_testmur_processus2();
void afficher_plateau_testmur_processus3();
void affiche_plateau();


void afficher_buton_bas();
void afficher_buton_droite();
void afficher_buton_gauche();
void afficher_buton_haut();
void afficher_buton_init();
void afficher_buton_load();
void afficher_buton_quitter();
void afficher_buton_redo();
void afficher_buton_save();
void afficher_buton_undo();
void affiche_buton_suiv();
void affiche_buton_prec();

void affiche_bouton_editeur();

void buton_mur_editeur();
void buton_caisse_editeur();
void buton_depot_editeur();
void buton_perso_editeur();
void buton_deplacement_editeur();
void bouton_test_mur();
void bouton_save();
void bouton_test_perso();
void bouton_reset_testmur();

int affiche_coup_jouer(int coup_jouer,POINT point_clic,POINT nb_coupjouer);
int affiche_init_coup_jouer(int coup_jouer,POINT point_clic,POINT nb_coupjouer);
int gestion_numero_niveau(int numero_niveau,POINT num_niv,POINT point_clic);
int gestion_numero_niveau_niveausuivant(int numero_niveau,POINT num_niv,POINT point_clic);
int gestion_numero_niveau_niveauprecedent(int numero_niveau,POINT num_niv,POINT point_clic);
