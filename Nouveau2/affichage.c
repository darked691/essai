#include "definition.h"
#include "affichage.h"
void efface_num_niv()
{
	POINT num_niv,num_niv1;
	num_niv.x=650; num_niv.y=750;
	num_niv1.x=680; num_niv1.y=800;
	draw_fill_rectangle(num_niv,num_niv1,noir);
}
void efface_nb_coupjouer()
{
	POINT nb_coupjouer,nb_coupjouer1;
	nb_coupjouer.x=600; nb_coupjouer.y=750;
	nb_coupjouer1.x=630; nb_coupjouer1.y=800;
	draw_fill_rectangle(nb_coupjouer,nb_coupjouer1,noir);
}
int affiche_coup_jouer(int coup_jouer,POINT point_clic,POINT nb_coupjouer)
{
   if((point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200) || (point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200) || (point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310) || (point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310 )) 
   {
   coup_jouer++;
   efface_nb_coupjouer();
   aff_int(coup_jouer,20,nb_coupjouer,rouge);
   }
   return coup_jouer;
}
int affiche_init_coup_jouer(int coup_jouer,POINT point_clic,POINT nb_coupjouer)
{
	if(point_clic.x>70 && point_clic.x<120 && point_clic.y>720 && point_clic.y<770 || (point_clic.x>10 && point_clic.x<60 && point_clic.y>720 && point_clic.y<770) || (point_clic.x>70 && point_clic.x<120 && point_clic.y>780 && point_clic.y<830))
	{
	   coup_jouer=0;
	   efface_nb_coupjouer();
	   aff_int(coup_jouer,20,nb_coupjouer,rouge);
	}
	return coup_jouer;
}
int gestion_numero_niveau_niveauprecedent(int numero_niveau,POINT num_niv,POINT point_clic)
{
	if(point_clic.x>10 && point_clic.x<60 && point_clic.y>720 && point_clic.y<770)
	{

    efface_num_niv();
    aff_int(numero_niveau,20,num_niv,bleu);
    }
    return numero_niveau;
}
int gestion_numero_niveau_niveausuivant(int numero_niveau,POINT num_niv,POINT point_clic)
{
	if(point_clic.x>70 && point_clic.x<120 && point_clic.y>720 && point_clic.y<770)		    
	{
    efface_num_niv();
    aff_int(numero_niveau,20,num_niv,bleu);
    }
    return numero_niveau;
}
int gestion_numero_niveau(int numero_niveau,POINT num_niv,POINT point_clic)
{
numero_niveau=gestion_numero_niveau_niveausuivant(numero_niveau,num_niv,point_clic);
numero_niveau=gestion_numero_niveau_niveauprecedent(numero_niveau,num_niv,point_clic);
}
void lire_ecrire(char *fichier,int lvl)
{
	FILE *f;
	f=fopen(fichier,"r");
	int x,y,n;
	x=0;y=0;n=0;
	char c;
     while(n!=lvl)
	{
	        c=fgetc(f);
	        if(c==';')
            fscanf(f," %d",&n);
    }
	c=fgetc(f);
	while(c!='\r') c=fgetc(f);
	c=fgetc(f);
	      while(c!=';')
	       { 
	       c=fgetc(f); if(c=='#') pos[x][y]=MUR;
	                   if(c=='.') pos[x][y]=DEPOT;
	                   if(c=='@') pos[x][y]=PERSO;
	                   if(c=='$') pos[x][y]=CAISSE;
	                   if(c==' ') pos[x][y]=VIDE2 ;
	                   x++;
	      if(c=='\r'){ x=0; y++;}
	    }
	}
void dessine_ligne_H(COULEUR couleur){

	POINT p_droite,p_gauche;
	int i;
    p_droite.x=700;
    p_gauche.x=0;
       for(i=20;i<700;i=i+20)
       {
        p_droite.y=i;p_gauche.y=i;
        draw_line(p_droite,p_gauche,couleur);
       }
}
void dessine_ligne_V(COULEUR couleur ){
	int i;
	POINT p_haut,p_bas;
	p_haut.y= 700;
	p_bas.y=0;
        for(i=20;i<700;i=i+20)
        {
	    p_haut.x=i;p_bas.x=i;
	    draw_line(p_haut,p_bas,couleur);
        }
}

void dessine_cadrillage(COULEUR couleur){
	dessine_ligne_H(couleur);
	dessine_ligne_V(couleur);
}
void affiche_cadrillage()
{
			POINT p_haut,p_bas;
			p_bas.x=0;p_bas.y=0;
			p_haut.x=700;p_haut.y=700;
			draw_fill_rectangle(p_bas,p_haut,gris);
			dessine_cadrillage(bleu);
}
void afficher_plateau_case_vide1(){
	POINT rien,rien1,rien2; int i , j;
	for(i=0 ;i < 35; i++)
	{
		for(j=0;j < 35; j++)
		{
			if(pos[i][j]==VIDE1 || pos[i][j]==VIDE2 )
			{
				rien.x=20*j+10; rien.y=20*i+10;
				rien1.x=rien.x-8; rien1.y=rien.y-8;
				rien2.x=rien.x+8; rien2.y=rien.y+8;
			    draw_fill_rectangle(rien1,rien2,gris);
		    }
	     }
	 }	
}

void afficher_plateau_case_vide2(){
	POINT rien,rien1,rien2; int i , j;
	for(i=0 ;i < 35; i++)
	{
		for(j=0;j < 35; j++)
		{
			if(pos[i][j]==VIDE2 )
			{
				rien.x=20*j+10; rien.y=20*i+10;
				rien1.x=rien.x-8; rien1.y=rien.y-8;
				rien2.x=rien.x+8; rien2.y=rien.y+8;
			    draw_fill_rectangle(rien1,rien2,gris);
		    }
	     }
	 }	
}

void afficher_plateau_perso(){
    int i , j;
    POINT perso;
	for(i=0 ;i < 35; i++)
	{
		for(j=0;j < 35; j++)
		{
	       if(pos[i][j]==PERSO)
			  {
				perso.x=20*j+10;
				perso.y=20*i+10;
			  draw_fill_circle(perso,5,blanc);
			  }
		}
	}	
}

void afficher_plateau_caisse(){
     POINT caisse,caissebg,caissehd; int i , j;
     for(i=0 ;i < 35; i++)
	 {
		for(j=0;j < 35; j++)
		{ 
	         if(pos[i][j]==CAISSE)
			   {
				caisse.x=20*j+10;caisse.y=20*i+10;
				caissebg.x=caisse.x-8; caissebg.y=caisse.y-8;
				caissehd.x=caisse.x+8; caissehd.y=caisse.y+8;
			    draw_fill_rectangle(caissebg,caissehd,marron);
			   }
		}
	}
}


void afficher_plateau_depot(){
     POINT depot,depotbg,depothd; int i , j;
     for(i=0 ;i < 35; i++)
	 {
		for(j=0;j < 35; j++)
		{ 
		    if(pos[i][j]==DEPOT)
			{
			    depot.x=20*j+10;depot.y=20*i+10;
				depotbg.x=depot.x-8;  depotbg.y=depot.y-8;
				depothd.x=depot.x+8;  depothd.y=depot.y+8;
			  draw_fill_rectangle(depotbg,depothd,noir);
			}
		}
	}
}
void afficher_plateau_mur(){
     POINT mur,murbg,murhd; int i , j;
     for(i=0 ;i < 35; i++)
	 {
		for(j=0;j < 35; j++)
		{ 
			if(pos[i][j]==MUR)
			 {   
				mur.x=20*j+10;mur.y=20*i+10;
				murbg.x=mur.x-8; murbg.y=mur.y-8;
				murhd.x=mur.x+8; murhd.y=mur.y+8;
			    draw_fill_rectangle(murbg,murhd,rouge);
			 }
		}
	}
}

void afficher_plateau_caisse_depot(){
     POINT caissedepot,caissedepot1,caissedepot2; int i , j;
     for(i=0 ;i < 35; i++)
	 {
		for(j=0;j < 35; j++)
		{
			if(pos[i][j]==CAISSE_DS_DEPOT)
			{
				caissedepot.x=20*j+10;caissedepot.y=20*i+10;
				caissedepot1.x=caissedepot.x-8;caissedepot1.y=caissedepot.y-8;
				caissedepot2.x=caissedepot.x+8;caissedepot2.y=caissedepot.y+8;
				draw_fill_rectangle(caissedepot1,caissedepot2,violet);
			}
		}
	}
}


void afficher_plateau_perso_depot(){
    POINT persodepot,persodepot1,persodepot2;    int i , j;
	for(i=0 ;i < 35; i++)
	{
		for(j=0;j < 35; j++)
		{
			if(pos[i][j]==PERSO_DS_DEPOT)
			{
				persodepot.x=20*j+10;persodepot.y=20*i+10;
				persodepot1.x=persodepot.x-8;persodepot1.y=persodepot.y-8;
				persodepot2.x=persodepot.x+8;persodepot2.y=persodepot.y+8;
				draw_fill_rectangle(persodepot1,persodepot2,noir);
				draw_fill_circle(persodepot,5,blanc);
			}
		}
	}
}
void afficher_plateau_testmur_processus3(){
     POINT testmur,testmur1,testmur2; int i , j;
     for(i=0 ;i < 35; i++)
	 {
		for(j=0;j < 35; j++)
		{
			if(pos[i][j]==9)
			{
				testmur.x=20*j+10;testmur.y=20*i+10;
				testmur1.x=testmur.x-8;testmur1.y=testmur.y-8;
				testmur2.x=testmur.x+8;testmur2.y=testmur.y+8;
				draw_fill_rectangle(testmur1,testmur2,bleu);
			}
		}
	}
}
void afficher_plateau_testmur_processus2(){
     POINT testmurs,testmurs1,testmurs2; int i , j;
     for(i=0 ;i < 35; i++)
	 {
		for(j=0;j < 35; j++)
		{
			if(pos[i][j]==10)
			{
				testmurs.x=20*j+10;testmurs.y=20*i+10;
				testmurs1.x=testmurs.x-8;testmurs1.y=testmurs.y-8;
				testmurs2.x=testmurs.x+8;testmurs2.y=testmurs.y+8;
				draw_fill_rectangle(testmurs1,testmurs2,vert);
			}
		}
	}
}
void afficher_plateau_testmur_processus1(){
     POINT testmurs3,testmurs4,testmurs5; int i , j;
     for(i=0 ;i < 35; i++)
	 {
		for(j=0;j < 35; j++)
		{
			if(pos[i][j]==11)
			{
				testmurs3.x=20*j+10;testmurs3.y=20*i+10;
				testmurs4.x=testmurs3.x-8;testmurs4.y=testmurs3.y-8;
				testmurs5.x=testmurs3.x+8;testmurs5.y=testmurs3.y+8;
				draw_fill_rectangle(testmurs4,testmurs5,jaune);
			}
		}
	}
}

void affiche_plateau()
{
	afficher_plateau_case_vide1();
    afficher_plateau_testmur_processus1();
    afficher_plateau_testmur_processus2();
    afficher_plateau_testmur_processus3();
	afficher_plateau_perso();
	afficher_plateau_mur();
	afficher_plateau_caisse();
	afficher_plateau_depot();
	afficher_plateau_caisse_depot();
	afficher_plateau_perso_depot();
	printf("\n");
}			
void afficher_buton_gauche()
{
	//~ buton gauche
	POINT hd,bg,g,d,j1,j2,j3;
	bg.x=800; bg.y=200;
	hd.x=850; hd.y=250;
	draw_fill_rectangle(bg,hd,blanc);
	d.x=hd.x-20; d.y=225;
    g.x=bg.x;    g.y=225;
    draw_line(d,g,noir);
    j1.x=d.x; j1.y=bg.y;
    j2.x=d.x; j2.y=hd.y;
    j3.x=hd.x;j3.y=d.y;
    draw_fill_triangle(j1,j2,j3,noir);
}
void afficher_buton_droite()
{
	 //~ buton droite
    POINT hd1,bg1,g1,d1,h1,h2,h3;
    bg1.x=710; bg1.y=200;
    hd1.x=760; hd1.y=250;
    draw_fill_rectangle(bg1,hd1,blanc);
    d1.x=hd1.x; d1.y=225;
    g1.x=bg1.x+20; g1.y=225;
    draw_line(d1,g1,noir);
    h1.x=g1.x; h1.y=bg1.y;
    h2.x=g1.x; h2.y=hd1.y;
    h3.x=bg1.x;h3.y=d1.y;
    draw_fill_triangle(h1,h2,h3,noir);
}
void afficher_buton_haut()
{
     //~ buton haut 
     POINT hd2,bg2,g2,d2,v1,v2,v3;
    bg2.x=800; bg2.y=310;
    hd2.x=850; hd2.y=360;
    draw_fill_rectangle(bg2,hd2,blanc);
    d2.x=825; d2.y=bg2.y;
    g2.x=825; g2.y=hd2.y-20;
    draw_line(d2,g2,noir);
    v1.x=bg2.x; v1.y=g2.y;
    v2.x=hd2.x; v2.y=g2.y;
    v3.x=d2.x;v3.y=hd2.y;
    draw_fill_triangle(v1,v2,v3,noir);
}

void afficher_buton_bas()
{
	//~ buton bas
    POINT hd3,bg3,g3,d3,c1,c2,c3;
    bg3.x=710; bg3.y=310;
    hd3.x=760; hd3.y=360;
    draw_fill_rectangle(bg3,hd3,blanc);
    d3.x=735; d3.y=bg3.y+20;
    g3.x=735; g3.y=hd3.y;
    draw_line(d3,g3,noir);
    c1.x=bg3.x; c1.y=d3.y;
    c2.x=hd3.x; c2.y=d3.y;
    c3.x=d3.x;c3.y=bg3.y;
    draw_fill_triangle(c1,c2,c3,noir);
}
void afficher_buton_quitter()
{
	//~buton quitter
    POINT hd4,bg4;
    bg4.x=890; bg4.y=890;
    hd4.x=840; hd4.y=840;
    draw_fill_rectangle(bg4,hd4,gris); 
}

void afficher_buton_undo()
{
    //buton undo
    POINT hd8,bg8;
    bg8.x=10; bg8.y=890;
    hd8.x=60; hd8.y=840;
    draw_fill_rectangle(bg8,hd8,orange);
}
void afficher_buton_redo()
{
    //buton redo
    POINT hd9,bg9;
    bg9.x=10;  bg9.y=830;
    hd9.x=60;  hd9.y=780;
    draw_fill_rectangle(bg9,hd9,violet);
}
void afficher_buton_init()
{	  
	//buton init
    POINT hd10,bg10;
    bg10.x=70;  bg10.y=830;
    hd10.x=120;  hd10.y=780;
    draw_fill_rectangle(bg10,hd10,blanc);
}
void affiche_buton_suiv()
{
		//buton suiv
    POINT hd11,bg11;
    bg11.x=70;  bg11.y=770;
    hd11.x=120;  hd11.y=720;
    draw_fill_rectangle(bg11,hd11,gris);
}
void affiche_buton_prec()
{
   //buton prec
    POINT hd12,bg12;
    bg12.x=10;  bg12.y=770;
    hd12.x=60;  hd12.y=720;
    draw_fill_rectangle(bg12,hd12,gris);
}
void afficher_buton(){
	afficher_buton_bas();
	afficher_buton_droite();
	afficher_buton_gauche();
	afficher_buton_haut();
	afficher_buton_init();
	afficher_buton_quitter();
	afficher_buton_redo();
	afficher_buton_undo();
	affiche_buton_suiv();
	affiche_buton_prec();
}
void affiche_bouton_deplacement_editeur(){
	afficher_buton_bas();
	afficher_buton_droite();
	afficher_buton_gauche();
	afficher_buton_haut();
}
void affiche_tous_les_boutons_editeur(){
	buton_mur_editeur();
    buton_caisse_editeur();
    buton_depot_editeur();
    buton_perso_editeur();
    bouton_test_mur();
    buton_deplacement_editeur();
    affiche_bouton_deplacement_editeur();
    bouton_save();
    bouton_test_perso();
    bouton_reset_testmur();
}
void buton_mur_editeur()
{
	POINT murbg,murhd;
	murbg.x=840; murbg.y=860;
	murhd.x=890; murhd.y=890;
	draw_fill_rectangle(murbg,murhd,rouge);
}
void buton_caisse_editeur()
{
	POINT caissebg,caissehd;
	caissebg.x=780; caissebg.y=820;
	caissehd.x=830; caissehd.y=850;
	draw_fill_rectangle(caissebg,caissehd,marron);
}
void buton_depot_editeur()
{
	POINT depotbg,depothd;
	depotbg.x=720; depotbg.y=780;
	depothd.x=770; depothd.y=810;
	draw_fill_rectangle(depotbg,depothd,violet);
}
void buton_perso_editeur()
{
	POINT perso;
	perso.x=500; perso.y=800;
	draw_fill_circle(perso,30,blanc);
}
void buton_deplacement_editeur()
{
	POINT dep;
	dep.x=800;  dep.y=500;
	draw_fill_circle(dep,30,jaune);
}
void bouton_test_mur()
{
	POINT mur;
	mur.x=870; mur.y=20;
	draw_fill_circle(mur,20,rouge);
}
void bouton_save()
{
	POINT save;
	save.x=870; save.y=70;
	draw_fill_circle(save,20,vert);
}
void bouton_reset_testmur()
{
	POINT reset_testmur;
	reset_testmur.x=800;reset_testmur.y=20;
	draw_fill_circle(reset_testmur,20,violet);
}
void bouton_test_perso()
{
	POINT mur;
	mur.x=870; mur.y=120;
	draw_fill_circle(mur,20,rouge);
}
