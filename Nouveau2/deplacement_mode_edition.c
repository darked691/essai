#include "definition.h"


void deplacement_bas_editeur(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==PERSO && pos[i-1][j]==VIDE1 && pos[i-2][j]!=MUR && pos[i+1][j]!=CAISSE && pos[i+1][j]!=CAISSE_DS_DEPOT)
	{
		pos[i-1][j]=PERSO;
		pos[i][j]=VIDE1;
	}
}
void deplacement_haut_editeur(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic) && pos[i][j]==PERSO && pos[i+1][j]==VIDE1 && pos[i-1][j]!=CAISSE && pos[i-1][j]!=CAISSE_DS_DEPOT)
	{
		pos[i+1][j]=PERSO;
		pos[i][j]=VIDE1;
	}
}
void deplacement_gauche_editeur(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if( BOUTON_DEPLACEMENT_DROITE(point_clic) && pos[i][j]==PERSO && pos[i][j-1]==VIDE1  && pos[i][j+1]!=CAISSE && pos[i][j+1]!=CAISSE_DS_DEPOT)
	{
		pos[i][j-1]=PERSO;
		pos[i][j]=VIDE1;
     }
}
void deplacement_droite_editeur(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) &&  pos[i][j]==PERSO && pos[i][j+1]==VIDE1 && pos[i][j-1]!=CAISSE && pos[i][j-1]!=CAISSE_DS_DEPOT)
	{
		pos[i][j+1]=PERSO;
		pos[i][j]=VIDE1;
	}
}
void deplacement_bas_editeur_perso_aveccaisse(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==PERSO  && pos[i+1][j]==CAISSE && pos[i-1][j]==VIDE1)
	{
		pos[i+1][j]=VIDE1; 
		pos[i][j]=CAISSE;
		pos[i-1][j]=PERSO;
	}
}
void deplacement_droite_editeur_perso_aveccaisse(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) &&  pos[i][j]==PERSO && pos[i][j-1]==CAISSE && pos[i][j+1]==VIDE1)
	{
		pos[i][j+1]=PERSO;
		pos[i][j]=CAISSE;
		pos[i][j-1]=VIDE1;
	}
}
void deplacement_gauche_editeur_perso_aveccaisse(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_DROITE(point_clic) && pos[i][j]==PERSO && pos[i][j-1]==VIDE1 && pos[i][j+1]==CAISSE )
	{
		pos[i][j-1]=PERSO;
		pos[i][j]=CAISSE;
		pos[i][j+1]=VIDE1;
	}	
}
void deplacement_haut_editeur_perso_aveccaisse(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic) && pos[i][j]==PERSO  && pos[i-1][j]==CAISSE && pos[i+1][j]==VIDE1  )
	{ 
		
		pos[i][j]=CAISSE;
		pos[i+1][j]=PERSO;
		pos[i-1][j]=VIDE1;
		
	}
}
void deplacement_haut_editeur_perso_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic) && pos[i][j]==PERSO  && pos[i-1][j]!=CAISSE && pos[i-1][j]!=CAISSE_DS_DEPOT && pos[i+1][j]==DEPOT)
	{
		pos[i][j]=VIDE1;
		pos[i+1][j]=PERSO_DS_DEPOT;
	}
}
void deplacement_bas_editeur_perso_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==PERSO  && pos[i+1][j]!=CAISSE && pos[i+1][j]!=CAISSE_DS_DEPOT && pos[i-1][j]==DEPOT)
	{
		pos[i][j]=VIDE1;
		pos[i-1][j]=PERSO_DS_DEPOT;
	}	
}
void deplacement_droite_editeur_perso_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) && pos[i][j]==PERSO  && pos[i][j-1]!=CAISSE && pos[i][j-1]!=CAISSE_DS_DEPOT && pos[i][j+1]==DEPOT)
	{
		pos[i][j]=VIDE1;
		pos[i][j+1]=PERSO_DS_DEPOT;
	}
}
void deplacement_gauche_editeur_perso_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_DROITE(point_clic) && pos[i][j]==PERSO  && pos[i][j-1]!=CAISSE && pos[i][j-1]!=CAISSE_DS_DEPOT && pos[i][j+1]==DEPOT)
	{
		pos[i][j]=VIDE1;
		pos[i][j+1]=PERSO_DS_DEPOT;
	}
}
void deplacement_haut_editeur_persodsdepot_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i+1][j]==VIDE1 && pos[i-1][j]!=CAISSE_DS_DEPOT && pos[i-1][j]!=CAISSE)
	{
			pos[i][j]=DEPOT;
			pos[i+1][j]=PERSO;
	}
}
void deplacement_droite_editeur_persodsdepot_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i][j-1]!=CAISSE && pos[i][j-1]!=CAISSE_DS_DEPOT && pos[i][j+1]==VIDE1)
	{
		pos[i][j]=DEPOT;
		pos[i][j+1]=PERSO;
	}
}
void deplacement_gauche_editeur_persodsdepot_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_DROITE(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i][j+1]!=CAISSE && pos[i][j+1]!=CAISSE_DS_DEPOT && pos[i][j-1]==VIDE1)
	{
		pos[i][j]=DEPOT;
		pos[i][j-1]=PERSO;
	}
}
void deplacement_bas_editeur_persodsdepot_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i-1][j]==VIDE1 && pos[i+1][j]!=CAISSE_DS_DEPOT && pos[i+1][j]!=CAISSE)
	{
			pos[i][j]=DEPOT;
			pos[i-1][j]=PERSO;
	}
}
void deplacement_haut_editeur_persodsdepot_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i+1][j]==DEPOT && pos[i-1][j]!=CAISSE)
	{
			pos[i][j]=DEPOT;
			pos[i+1][j]=PERSO_DS_DEPOT;
	}
}
void deplacement_bas_editeur_persodsdepot_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i-1][j]==DEPOT && pos[i+1][j]!=CAISSE)
	{
				pos[i][j]=DEPOT;
				pos[i-1][j]=PERSO_DS_DEPOT;
	}
}
void deplacement_gauche_editeur_persodsdepot_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_DROITE(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i][j+1]!=CAISSE && pos[i][j-1]==DEPOT)
	{
		pos[i][j]=DEPOT;
		pos[i][j-1]=PERSO_DS_DEPOT;
	}
}
void deplacement_droite_editeur_persodsdepot_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i][j-1]!=CAISSE  && pos[i][j+1]==DEPOT)
	{
		pos[i][j]=DEPOT;
		pos[i][j+1]=PERSO_DS_DEPOT;
	}
}	  
void deplacement_haut_editeur_persoavccaisse_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic) && pos[i-1][j]==CAISSE && pos[i][j]==PERSO  && pos[i+1][j]==DEPOT)
	{
		pos[i-1][j]=VIDE1;
		pos[i][j]=CAISSE;
		pos[i+1][j]=PERSO_DS_DEPOT;
	}  	
}
void deplacement_bas_editeur_persoavccaisse_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==PERSO  && pos[i-1][j]==DEPOT && pos[i+1][j]==CAISSE)
	{
		        pos[i+1][j]=VIDE1;
				pos[i][j]=CAISSE;
				pos[i-1][j]=PERSO_DS_DEPOT;
	}
}
void deplacement_gauche_editeur_persoavccaisse_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_DROITE(point_clic)&& pos[i][j]==PERSO  && pos[i][j+1]==CAISSE && pos[i][j-1]==DEPOT)
	{
		pos[i][j+1]=VIDE1;
		pos[i][j]=CAISSE;
		pos[i][j-1]=PERSO_DS_DEPOT;
	}
}
void deplacement_droite_editeur_persoavccaisse_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) && pos[i][j]==PERSO  && pos[i][j-1]==CAISSE  && pos[i][j+1]==DEPOT)
	{
		pos[i][j-1]=VIDE1;
		pos[i][j]=CAISSE;
		pos[i][j+1]=PERSO_DS_DEPOT;
	}
}
void deplacement_haut_editeur_caisse_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic) && pos[i-1][j]==CAISSE && pos[i][j]==PERSO_DS_DEPOT  && pos[i+1][j]==DEPOT)
	{
		pos[i-1][j]=VIDE1;
		pos[i][j]=CAISSE_DS_DEPOT;
		pos[i+1][j]=PERSO_DS_DEPOT;
	}
}
void deplacement_droite_editeur_caisse_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i][j-1]==CAISSE  && pos[i][j+1]==DEPOT)
	{
		pos[i][j-1]=VIDE1;
		pos[i][j]=CAISSE_DS_DEPOT;
		pos[i][j+1]=PERSO_DS_DEPOT;
	}
}
void deplacement_gauche_editeur_caisse_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_DROITE(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i][j+1]==CAISSE && pos[i][j-1]==DEPOT)
	{
		pos[i][j+1]=VIDE1;
		pos[i][j]=CAISSE_DS_DEPOT;
		pos[i][j-1]=PERSO_DS_DEPOT;
	}
}	
void deplacement_bas_editeur_caisse_dsdepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i-1][j]==DEPOT && pos[i+1][j]==CAISSE)
	{
		        pos[i+1][j]=VIDE1;
				pos[i][j]=CAISSE_DS_DEPOT;
				pos[i-1][j]=PERSO_DS_DEPOT;
	}		
}
void deplacement_haut_editeur_depotpersoavcdepotcaisse_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic) && pos[i-1][j]==CAISSE_DS_DEPOT && pos[i][j]==PERSO_DS_DEPOT  && pos[i+1][j]==VIDE1)
	{
		pos[i-1][j]=DEPOT;
		pos[i][j]=CAISSE_DS_DEPOT;
		pos[i+1][j]=PERSO;
	}
}
void deplacement_bas_editeur_depotpersoavcdepotcaisse_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==7  && pos[i-1][j]==VIDE1 && pos[i+1][j]==CAISSE_DS_DEPOT)
	{
		        pos[i+1][j]=DEPOT;
				pos[i][j]=CAISSE_DS_DEPOT;
				pos[i-1][j]=PERSO;
	}	
}
void deplacement_gauche_editeur_depotpersoavcdepotcaisse_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_DROITE(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i][j+1]==CAISSE_DS_DEPOT && pos[i][j-1]==VIDE1)
	{
		pos[i][j+1]=DEPOT;
		pos[i][j]=CAISSE_DS_DEPOT;
		pos[i][j-1]=PERSO;
	}
}
void deplacement_droite_editeur_depotpersoavcdepotcaisse_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i][j-1]==CAISSE_DS_DEPOT  && pos[i][j+1]==VIDE1)
	{
		pos[i][j-1]=DEPOT;
		pos[i][j]=CAISSE_DS_DEPOT;
		pos[i][j+1]=PERSO;
	}
}
void deplacement_haut_editeur_persoavcdepotcaisse_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic) && pos[i-1][j]==CAISSE_DS_DEPOT && pos[i][j]==PERSO  && pos[i+1][j]==VIDE1)
	{
		pos[i-1][j]=DEPOT;
		pos[i][j]=CAISSE;
		pos[i+1][j]=PERSO;
	}
}
void deplacement_droite_editeur_persoavcdepotcaisse_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) && pos[i][j]==PERSO  && pos[i][j-1]==CAISSE_DS_DEPOT  && pos[i][j+1]==VIDE1)
	{
		pos[i][j-1]=DEPOT;
		pos[i][j]=CAISSE;
		pos[i][j+1]=PERSO;
	}
}
void deplacement_gauche_editeur_persoavcdepotcaisse_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_DROITE(point_clic) && pos[i][j]==PERSO  && pos[i][j+1]==CAISSE_DS_DEPOT && pos[i][j-1]==VIDE1)
	{
		pos[i][j+1]=DEPOT;
		pos[i][j]=CAISSE;
		pos[i][j-1]=PERSO;
	}
}
void deplacement_bas_editeur_persoavcdepotcaisse_dsvide(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==PERSO  && pos[i-1][j]==VIDE1 && pos[i+1][j]==CAISSE_DS_DEPOT)
	{
		        pos[i+1][j]=DEPOT;
				pos[i][j]=CAISSE;
				pos[i-1][j]=PERSO;
	}	
}
void deplacement_haut_editeur_persodepotavccaisse_dsunecasevide_etundepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic)&& pos[i-1][j]==CAISSE && pos[i][j]==PERSO_DS_DEPOT  && pos[i+1][j]==VIDE1)
	{
		pos[i-1][j]=VIDE1;
		pos[i][j]=CAISSE_DS_DEPOT;
		pos[i+1][j]=PERSO;
	}
}
void deplacement_bas_editeur_persodepotavccaisse_dsunecasevide_etundepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i-1][j]==VIDE1 && pos[i+1][j]==CAISSE)
	{
		        pos[i+1][j]=VIDE1;
				pos[i][j]=CAISSE_DS_DEPOT;
				pos[i-1][j]=PERSO;
	}	
}
void deplacement_gauche_editeur_persodepotavccaisse_dsunecasevide_etundepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_DROITE(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i][j+1]==CAISSE && pos[i][j-1]==VIDE1)
	{
		pos[i][j+1]=VIDE1;
		pos[i][j]=CAISSE_DS_DEPOT;
		pos[i][j-1]=PERSO;
	}
}
void deplacement_droite_editeur_persodepotavccaisse_dsunecasevide_etundepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) && pos[i][j]==PERSO_DS_DEPOT  && pos[i][j-1]==CAISSE  && pos[i][j+1]==VIDE1)
	{
		pos[i][j-1]=VIDE1;
		pos[i][j]=CAISSE_DS_DEPOT;
		pos[i][j+1]=PERSO;
	}
}
void deplacement_haut_editeur_persoavcdepotcaisse_dsunecasevide_etundepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_BAS(point_clic) && pos[i-1][j]==CAISSE_DS_DEPOT && pos[i][j]==PERSO  && pos[i+1][j]==DEPOT)
	{
		pos[i-1][j]=DEPOT;
		pos[i][j]=CAISSE;
		pos[i+1][j]=PERSO_DS_DEPOT;
	}	
}
void deplacement_droite_editeur_persoavcdepotcaisse_dsunecasevide_etundepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_GAUCHE(point_clic) && pos[i][j]==PERSO  && pos[i][j-1]==6  && pos[i][j+1]==DEPOT)
	{
		pos[i][j-1]=DEPOT;
		pos[i][j]=CAISSE;
		pos[i][j+1]=PERSO_DS_DEPOT;
	}
}
void deplacement_gauche_editeur_persoavcdepotcaisse_dsunecasevide_etundepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
	if(BOUTON_DEPLACEMENT_DROITE(point_clic) && pos[i][j]==PERSO  && pos[i][j+1]==CAISSE_DS_DEPOT && pos[i][j-1]==DEPOT)
	{
		pos[i][j+1]=DEPOT;
		pos[i][j]=CAISSE;
		pos[i][j-1]=PERSO_DS_DEPOT;
	}
}
void deplacement_bas_editeur_persoavcdepotcaisse_dsunecasevide_etundepot(POINT perso,POINT point_clic)
{
	    int i,j;
	    j=perso.x/20;
	    i=perso.y/20;
    if(BOUTON_DEPLACEMENT_HAUT(point_clic) && pos[i][j]==PERSO  && pos[i-1][j]==DEPOT && pos[i+1][j]==CAISSE_DS_DEPOT)
	{
		        pos[i+1][j]=DEPOT;
				pos[i][j]=CAISSE;
				pos[i-1][j]=PERSO_DS_DEPOT;
	}
}
void deplacement_hauts_editeur(POINT perso,POINT point_clic){
	deplacement_haut_editeur(perso,point_clic);
	deplacement_haut_editeur_caisse_dsdepot(perso,point_clic);
	deplacement_haut_editeur_depotpersoavcdepotcaisse_dsvide(perso,point_clic);
	deplacement_haut_editeur_perso_aveccaisse(perso,point_clic);
	deplacement_haut_editeur_perso_dsdepot(perso,point_clic);
	deplacement_haut_editeur_persoavccaisse_dsdepot(perso,point_clic);
	deplacement_haut_editeur_persoavcdepotcaisse_dsunecasevide_etundepot(perso,point_clic);
	deplacement_haut_editeur_persoavcdepotcaisse_dsvide(perso,point_clic);
	deplacement_haut_editeur_persodepotavccaisse_dsunecasevide_etundepot(perso,point_clic);
	deplacement_haut_editeur_persodsdepot_dsdepot(perso,point_clic);
	deplacement_haut_editeur_persodsdepot_dsvide(perso,point_clic);
}
void deplacement_bass_editeur(POINT perso,POINT point_clic){
	deplacement_bas_editeur(perso,point_clic);
	deplacement_bas_editeur_caisse_dsdepot(perso,point_clic);
	deplacement_bas_editeur_depotpersoavcdepotcaisse_dsvide(perso,point_clic);
	deplacement_bas_editeur_perso_aveccaisse(perso,point_clic);
	deplacement_bas_editeur_perso_dsdepot(perso,point_clic);
	deplacement_bas_editeur_persoavccaisse_dsdepot(perso,point_clic);
	deplacement_bas_editeur_persoavcdepotcaisse_dsunecasevide_etundepot(perso,point_clic);
	deplacement_bas_editeur_persoavcdepotcaisse_dsvide(perso,point_clic);
	deplacement_bas_editeur_persodepotavccaisse_dsunecasevide_etundepot(perso,point_clic);
	deplacement_bas_editeur_persodsdepot_dsdepot(perso,point_clic);
	deplacement_bas_editeur_persodsdepot_dsvide(perso,point_clic);
}
void deplacement_droites_editeur(POINT perso,POINT point_clic){
	deplacement_droite_editeur(perso,point_clic);
	deplacement_droite_editeur_caisse_dsdepot(perso,point_clic);
	deplacement_droite_editeur_depotpersoavcdepotcaisse_dsvide(perso,point_clic);
	deplacement_droite_editeur_perso_aveccaisse(perso,point_clic);
	deplacement_droite_editeur_perso_dsdepot(perso,point_clic);
	deplacement_droite_editeur_persoavccaisse_dsdepot(perso,point_clic);
	deplacement_droite_editeur_persoavcdepotcaisse_dsunecasevide_etundepot(perso,point_clic);
	deplacement_droite_editeur_persoavcdepotcaisse_dsvide(perso,point_clic);
	deplacement_droite_editeur_persodepotavccaisse_dsunecasevide_etundepot(perso,point_clic);
	deplacement_droite_editeur_persodsdepot_dsdepot(perso,point_clic);
	deplacement_droite_editeur_persodsdepot_dsvide(perso,point_clic);
}
void deplacement_gauches_editeur(POINT perso,POINT point_clic){
	deplacement_gauche_editeur(perso,point_clic);
	deplacement_gauche_editeur_caisse_dsdepot(perso,point_clic);
	deplacement_gauche_editeur_depotpersoavcdepotcaisse_dsvide(perso,point_clic);
	deplacement_gauche_editeur_perso_aveccaisse(perso,point_clic);
	deplacement_gauche_editeur_perso_dsdepot(perso,point_clic);
	deplacement_gauche_editeur_persoavccaisse_dsdepot(perso,point_clic);
	deplacement_gauche_editeur_persoavcdepotcaisse_dsunecasevide_etundepot(perso,point_clic);
	deplacement_gauche_editeur_persoavcdepotcaisse_dsvide(perso,point_clic);
	deplacement_gauche_editeur_persodepotavccaisse_dsunecasevide_etundepot(perso,point_clic);
	deplacement_gauche_editeur_persodsdepot_dsdepot(perso,point_clic);
	deplacement_gauche_editeur_persodsdepot_dsvide(perso,point_clic);
}
void deplacement_editeur(POINT perso,POINT point_clic)
{
	   deplacement_hauts_editeur(perso,point_clic);
	 deplacement_gauches_editeur(perso,point_clic);
	 deplacement_droites_editeur(perso,point_clic);
	 deplacement_bass_editeur(perso,point_clic);
}

void deplacement_gauche_editeur_testmur(POINT testeurmur)
{
	    int i,j;
	    j=testeurmur.x/20;
	    i=testeurmur.y/20;
	
	if( pos[i][j]==9 && pos[i][j-1]==5)
	{
		pos[i][j-1]=9;
		pos[i][j]=10;
	}
  
}
void deplacement_droite_editeur_testmur(POINT testeurmur)
{
	    int i,j;
	    j=testeurmur.x/20;
	    i=testeurmur.y/20;
	
	if( pos[i][j]==9 && pos[i][j+1]==5)
	{
		pos[i][j+1]=9;
		pos[i][j]=10;
	}
  
}
void deplacement_bas_editeur_testmur(POINT testeurmur)
{
	    int i,j;
	    j=testeurmur.x/20;
	    i=testeurmur.y/20;
	
	if( pos[i][j]==9 && pos[i-1][j]==5)
	{
		pos[i-1][j]=9;
		pos[i][j]=10;
	}
  
}
void deplacement_haut_editeur_testmur(POINT testeurmur)
{
	    int i,j;
	    j=testeurmur.x/20;
	    i=testeurmur.y/20;
	
	if( pos[i][j]==9 && pos[i+1][j]==5)
	{
		pos[i+1][j]=9;
		pos[i][j]=10;
	}
  
}
