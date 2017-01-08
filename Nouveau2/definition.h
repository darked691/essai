#ifndef DEFINITION
#define DEFINITION

#include <uvsqgraphics.h>
#include <stdio.h>
#include <string.h>
int pos[35][35];
struct element
{int tab[35][35];
struct element* suiv;
struct element* prec;
};
typedef struct element element;
typedef element* liste;
#define VIDE1 0
#define VIDE2 1
#define PERSO 2
#define CAISSE 3
#define DEPOT 4
#define MUR 5
#define CAISSE_DS_DEPOT 6
#define PERSO_DS_DEPOT 7
#define TAILLE_CADRILLAGE 700

#define BOUTON_DEPLACEMENT_BAS(point_clic) point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310
#define BOUTON_DEPLACEMENT_HAUT(point_clic) point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310
#define BOUTON_DEPLACEMENT_GAUCHE(point_clic) point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200
#define BOUTON_DEPLACEMENT_DROITE(point_clic) point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200                                                                                  
#define BOUTON_REDO(point_clic) point_clic.x<60 && point_clic.x>10 && point_clic.y>780 && point_clic.y<830
#define BOUTON_UNDO(point_clic) point_clic.x<60 && point_clic.x>10 && point_clic.y>840 && point_clic.y<890
#define BOUTON_QUITTER(point_clic) point_clic.x<890 && point_clic.x>840  && point_clic.y>840 && point_clic.y<890
#define BOUTON_NOUVELLE_PARTIE(point_clic) point_clic.x>70 && point_clic.x<120 && point_clic.y>780 && point_clic.y<830
#define BOUTON_NIVEAU_PRECEDENT(point_clic) point_clic.x>10 && point_clic.x<60 && point_clic.y>720 && point_clic.y<770
#define BOUTON_NIVEAU_SUIVANT(point_clic) point_clic.x>70 && point_clic.x<120 && point_clic.y>720 && point_clic.y<770

#define BOUTON_EDITEUR_DEPLACEMENT_PERSO(point_clic) point_clic.x<830 && point_clic.x>770 && point_clic.y<530 && point_clic.y>470
#define BOUTON_POSER_MUR(point_clic) point_clic.x>840 && point_clic.y>860 && point_clic.x<890 && point_clic.y<890
#define BOUTON_POSER_CAISSE(point_clic) point_clic.x>780 && point_clic.y>820 && point_clic.x<830 && point_clic.y<850
#define BOUTON_POSER_PERSO(point_clic) point_clic.x<530 && point_clic.x>470 && point_clic.y>770 && point_clic.y<830
#define BOUTON_POSER_DEPOT(point_clic)  point_clic.x>720 && point_clic.y>780 && point_clic.x<770 && point_clic.y<810
#define BOUTON_TESTMUR(point_clic)  point_clic.x<890 && point_clic.x>850 && point_clic.y<40 && point_clic.y>00 
#define BOUTON_TESTPERSO(point_clic) point_clic.x<890 && point_clic.x>850 && point_clic.y<140 && point_clic.y>100
#define BOUTON_SAVE(point_clic) point_clic.x<890 && point_clic.x>850 && point_clic.y<90 && point_clic.y>50


#define TESTPERSO 8
#define SAVE 1
#define TEST_MUR 6
#define EDITION_DEPLACEMENT 0
#define POSER_MUR 2
#define POSER_CAISSE 3
#define POSER_DEPOT 4
#define POSER_PERSO 5
#endif



