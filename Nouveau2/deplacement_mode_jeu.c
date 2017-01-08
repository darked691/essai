#include "definition.h"



void deplacement_droite(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if( point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 && pos[i][j]==PERSO && pos[i][j+1]==VIDE2)
    {
	pos[i][j+1]=PERSO;
	pos[i][j]=VIDE2;
	}
}

void deplacement_gauche(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO && pos[i][j-1]==VIDE2 )
	{
		pos[i][j-1]=PERSO;
		pos[i][j]=VIDE2;
	}
}

void deplacement_haut(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;	
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO && pos[i+1][j]==VIDE2 )
	{
		pos[i+1][j]=PERSO;
		pos[i][j]=VIDE2;
	}
}
void deplacement_bas(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO && pos[i-1][j]==VIDE2 )
	{
		pos[i-1][j]=PERSO;
		pos[i][j]=VIDE2;
	}
}
void deplacement_gauche_caisse_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO && pos[i][j-1]==CAISSE && pos[i][j-2]==DEPOT)
	{
		pos[i][j-1]=VIDE2;
		pos[i][j-2]=CAISSE_DS_DEPOT;
	}
}
void deplacement_droite_caisse_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 && pos[i][j]==PERSO && pos[i][j+1]==CAISSE && pos[i][j+2]==DEPOT )
	{
		pos[i][j+1]=VIDE2;
		pos[i][j+2]=CAISSE_DS_DEPOT;
	}
}	
void deplacement_haut_caisse_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
   if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO  && pos[i+1][j]==CAISSE && pos[i+2][j]==DEPOT )
   {  
	pos[i+1][j]=VIDE2;
	pos[i+2][j]=CAISSE_DS_DEPOT;
   }
}
void deplacement_bas_caisse_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO  && pos[i-1][j]==CAISSE && pos[i-2][j]==DEPOT )
	{ 
		pos[i-1][j]=VIDE2;
		pos[i-2][j]=CAISSE_DS_DEPOT;
	}
}

void deplacement_gauche_caissedsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO && pos[i][j-1]==CAISSE_DS_DEPOT && pos[i][j-2]==VIDE2 )
	{
		pos[i][j-1]=DEPOT;
		pos[i][j-2]=CAISSE;
	}
}
void deplacement_droite_caissedsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 && pos[i][j]==PERSO && pos[i][j+1]==CAISSE_DS_DEPOT && pos[i][j+2]==VIDE2 )
	{
		pos[i][j+1]=DEPOT;
		pos[i][j+2]=CAISSE;
	}
}
void deplacement_bas_caissedsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO  && pos[i-1][j]==CAISSE_DS_DEPOT && pos[i-2][j]==VIDE2)
	{ 
		pos[i-1][j]=DEPOT;
		pos[i-2][j]=CAISSE;
	}
}		
void deplacement_haut_caissedsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310  && pos[i+2][j]==VIDE2  && pos[i][j]==PERSO && pos[i+1][j]==CAISSE_DS_DEPOT )
	{
		
		pos[i+1][j]=DEPOT;
		pos[i+2][j]=CAISSE;
	}
}
void deplacement_haut_persodsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO_DS_DEPOT && pos[i+1][j]==VIDE2)
	{
		pos[i][j]=DEPOT;
		pos[i+1][j]=PERSO;
	}
}
void deplacement_gauche_persodsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO_DS_DEPOT && pos[i][j-1]==VIDE2)
	{
		pos[i][j]=DEPOT;
		pos[i][j-1]=PERSO;
	}
}
void deplacement_droite_persodsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 && pos[i][j]==PERSO_DS_DEPOT && pos[i][j+1]==VIDE2)
	{
		pos[i][j]=DEPOT;
		pos[i][j+1]=PERSO;
	}
}
void deplacement_bas_persodsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO_DS_DEPOT  && pos[i-1][j]==VIDE2)
	{ 
		pos[i][j]=DEPOT;
		pos[i-1][j]=PERSO;
	}
}

void deplacement_haut_persodsdepot_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO_DS_DEPOT  && pos[i+1][j]==DEPOT)
	{
		pos[i][j]=DEPOT;
		pos[i+1][j]=PERSO_DS_DEPOT;
	}
}
void deplacement_gauche_persodsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO_DS_DEPOT && pos[i][j-1]==DEPOT)
	{
		pos[i][j]=DEPOT;
		pos[i][j-1]=PERSO_DS_DEPOT;
	}
}

void deplacement_droite_persodsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 && pos[i][j]==PERSO_DS_DEPOT && pos[i][j+1]==DEPOT)
	{
		pos[i][j]=DEPOT;
		pos[i][j+1]=PERSO_DS_DEPOT;
	}
}
void deplacement_bas_persodsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==7  && pos[i-1][j]==DEPOT)
	{ 
		pos[i][j]=DEPOT;
		pos[i-1][j]=PERSO_DS_DEPOT;
	}
}
void deplacement_haut_persodsdepotpousse_caissedsdepot_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO_DS_DEPOT  && pos[i+1][j]==CAISSE_DS_DEPOT && pos[i+2][j]==DEPOT)
	{
		pos[i][j]=DEPOT;
		pos[i+1][j]=PERSO_DS_DEPOT;
		pos[i+2][j]=CAISSE_DS_DEPOT;
	}
}
void deplacement_gauche_persodsdepot_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO_DS_DEPOT && pos[i][j-1]==CAISSE_DS_DEPOT && pos[i][j-2]==DEPOT)
	{
		pos[i][j]=DEPOT;
		pos[i][j-1]=PERSO_DS_DEPOT;
		pos[i][j-2]=CAISSE_DS_DEPOT;
	}
}
void deplacement_droite_persodsdepot_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 && pos[i][j]==PERSO_DS_DEPOT && pos[i][j+1]==CAISSE_DS_DEPOT && pos[i][j+2]==DEPOT)
	{
		pos[i][j]=DEPOT;
		pos[i][j+1]=PERSO_DS_DEPOT;
		pos[i][j+2]=CAISSE_DS_DEPOT;
	}
}
void deplacement_bas_persodsdepot_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO_DS_DEPOT  && pos[i-1][j]==CAISSE_DS_DEPOT && pos[i-2][j]==DEPOT)
	{ 
		pos[i][j]=DEPOT;
		pos[i-1][j]=PERSO_DS_DEPOT;
		pos[i-2][j]=CAISSE_DS_DEPOT;
	}
}
void deplacement_haut_persodepotpousse_caissedsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310  && pos[i+2][j]==VIDE2  && pos[i][j]==PERSO_DS_DEPOT && pos[i+1][j]==CAISSE_DS_DEPOT )
	{
		pos[i][j]=DEPOT;
		pos[i+1][j]=PERSO_DS_DEPOT;
		pos[i+2][j]=CAISSE;
	}
}
void deplacement_bas_persodepotpousse_caissedsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310  && pos[i-2][j]==VIDE2  && pos[i][j]==PERSO_DS_DEPOT && pos[i-1][j]==CAISSE_DS_DEPOT )
	{
		pos[i][j]=DEPOT;
		pos[i-1][j]=PERSO_DS_DEPOT;
		pos[i-2][j]=CAISSE;
	}
}
void deplacement_gauche_persodepotpousse_caissedsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO_DS_DEPOT && pos[i][j-1]==CAISSE_DS_DEPOT && pos[i][j-2]==VIDE2)
	{
		pos[i][j]=DEPOT;
		pos[i][j-1]=PERSO_DS_DEPOT;
		pos[i][j-2]=CAISSE;
	}
}
void deplacement_droite_persodepotpousse_caissedsdepot_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO_DS_DEPOT && pos[i][j+1]==CAISSE_DS_DEPOT && pos[i][j+2]==VIDE2)
	{
		pos[i][j]=DEPOT;
		pos[i][j+1]=PERSO_DS_DEPOT;
		pos[i][j+2]=CAISSE;
	}
}			
void deplacement_haut_pousseperso_dsdepot_poussecaissedepot_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310  && pos[i+2][j]==DEPOT  && pos[i][j]==PERSO && pos[i+1][j]==CAISSE_DS_DEPOT )
	{
		pos[i][j]=VIDE2;
		pos[i+1][j]=PERSO_DS_DEPOT;
		pos[i+2][j]=CAISSE_DS_DEPOT;
	}
}
void deplacement_bas_pousseperso_dsdepot_poussecaissedepot_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310  && pos[i-2][j]==DEPOT  && pos[i][j]==PERSO && pos[i-1][j]==CAISSE_DS_DEPOT )
	{
		pos[i][j]=VIDE2;
		pos[i-1][j]=PERSO_DS_DEPOT;
		pos[i-2][j]=CAISSE_DS_DEPOT;
	}
}
void deplacement_gauche_pousseperso_dsdepot_poussecaissedepot_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO && pos[i][j-1]==CAISSE_DS_DEPOT && pos[i][j-2]==DEPOT)
	{
		pos[i][j]=VIDE2;
		pos[i][j-1]=PERSO_DS_DEPOT;
		pos[i][j-2]=CAISSE_DS_DEPOT;
	}
}
void deplacement_droite_pousseperso_dsdepot_poussecaissedepot_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO && pos[i][j+1]==CAISSE_DS_DEPOT && pos[i][j+2]==DEPOT)
	{
		pos[i][j]=VIDE2;
		pos[i][j+1]=PERSO_DS_DEPOT;
		pos[i][j+2]=CAISSE_DS_DEPOT;
	}
}		
void deplacement_haut_persodsdepotpousse_caisse_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310  && pos[i+2][j]==VIDE2  && pos[i][j]==PERSO_DS_DEPOT && pos[i+1][j]==CAISSE )
	{
		pos[i][j]=PERSO_DS_DEPOT;
		pos[i+1][j]=VIDE2;
		pos[i+2][j]=CAISSE;
	}
}			
void deplacement_bas_persodsdepotpousse_caisse_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310  && pos[i-2][j]==VIDE2  && pos[i][j]==PERSO_DS_DEPOT && pos[i-1][j]==CAISSE )
	{
		pos[i][j]=PERSO_DS_DEPOT;
		pos[i-1][j]=VIDE2;
		pos[i-2][j]=CAISSE;
	}
}	
void deplacement_gauche_persodsdepotpousse_caisse_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO_DS_DEPOT && pos[i][j-1]==CAISSE && pos[i][j-2]==VIDE2)
	{
		pos[i][j]=PERSO_DS_DEPOT;
		pos[i][j-1]=VIDE2;
		pos[i][j-2]=CAISSE;
	}
}
void deplacement_droite_persodsdepotpousse_caisse_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO_DS_DEPOT && pos[i][j+1]==CAISSE && pos[i][j+2]==VIDE2)
	{
		pos[i][j]=PERSO_DS_DEPOT;
		pos[i][j+1]=VIDE2;
		pos[i][j+2]=CAISSE;
	}
}	
void deplacement_bas_persodsdepotpousse_caisse_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310  && pos[i-2][j]==DEPOT  && pos[i][j]==PERSO_DS_DEPOT && pos[i-1][j]==CAISSE )
	{
		pos[i][j]=PERSO_DS_DEPOT;
		pos[i-1][j]=VIDE2;
		pos[i-2][j]=CAISSE_DS_DEPOT;
	}
}
void deplacement_haut_persodsdepotpousse_caisse_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310  && pos[i+2][j]==DEPOT  && pos[i][j]==PERSO_DS_DEPOT && pos[i+1][j]==CAISSE )
	{
		pos[i][j]=PERSO_DS_DEPOT;
		pos[i+1][j]=VIDE2;
		pos[i+2][j]=CAISSE_DS_DEPOT;
	}
}
void deplacement_gauche_persodsdepotpousse_caisse_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO_DS_DEPOT && pos[i][j-1]==CAISSE && pos[i][j-2]==DEPOT)
	{
		pos[i][j]=PERSO_DS_DEPOT;
		pos[i][j-1]=VIDE2;
		pos[i][j-2]=CAISSE_DS_DEPOT;
	}
}
void deplacement_droite_persodsdepotpousse_caisse_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO_DS_DEPOT && pos[i][j+1]==CAISSE && pos[i][j+2]==DEPOT)
	{
		pos[i][j]=PERSO_DS_DEPOT;
		pos[i][j+1]=VIDE2;
		pos[i][j+2]=CAISSE_DS_DEPOT;
	}
}
void deplacement_haut_perso_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO  && pos[i+1][j]!=DEPOT && pos[i+1][j]==DEPOT)
	{
		pos[i][j]=VIDE2;
		pos[i+1][j]=PERSO_DS_DEPOT;
	}
}
void deplacement_gauche_perso_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO && pos[i][j-1]==DEPOT && pos[i][j-1]!=CAISSE_DS_DEPOT )
	{
		pos[i][j]=VIDE2;
		pos[i][j-1]=PERSO_DS_DEPOT;
	}
}
void deplacement_droite_perso_dsdepot(POINT p,POINT point_clic)
{
   int i,j;
   j=p.x/20;  
   i=p.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 && pos[i][j]==PERSO && pos[i][j+1]==DEPOT && pos[i][j+1]!=CAISSE_DS_DEPOT )
	{
		pos[i][j]=VIDE2;
		pos[i][j+1]=PERSO_DS_DEPOT;
	}
}
void deplacement_bas_perso_dsdepot(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO  && pos[i-1][j]==DEPOT && pos[i-1][j]!=CAISSE_DS_DEPOT)
	{ 
		pos[i][j]=VIDE2;
		pos[i-1][j]=PERSO_DS_DEPOT;
	}
}	
void deplacement_haut_poussecaisse_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO  && pos[i+1][j]==CAISSE )
	{
		pos[i+1][j]=VIDE2; 
		pos[i+2][j]=CAISSE;
	}		
}
void deplacement_gauche_poussecaisse_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<250 && point_clic.y>200 &&  pos[i][j]==PERSO && pos[i][j-1]==CAISSE  )
	{
		pos[i][j-1]=VIDE2;
		pos[i][j-2]=CAISSE;
	}
}	
void deplacement_droite_poussecaisse_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>800 && point_clic.x<850 && point_clic.y<250 && point_clic.y>200 && pos[i][j]==PERSO && pos[i][j+1]==CAISSE  )
	{
		pos[i][j+1]=VIDE2;
		pos[i][j+2]=CAISSE;
	}
}
void deplacement_bas_poussecaisse_dsvide(POINT perso,POINT point_clic)
{
   int i,j;
   j=perso.x/20;  
   i=perso.y/20;
	if(point_clic.x>710 && point_clic.x<760 && point_clic.y<360 && point_clic.y>310 && pos[i][j]==PERSO  && pos[i-1][j]==CAISSE )
	{ 
		pos[i-1][j]=VIDE2;
		pos[i-2][j]=CAISSE;
	}
}
void deplacement_bass(POINT perso,POINT point_clic)
{
	deplacement_bas(perso,point_clic);
	deplacement_bas_caisse_dsdepot(perso,point_clic);
	deplacement_bas_caissedsdepot_dsvide(perso,point_clic);
	deplacement_bas_perso_dsdepot(perso,point_clic);
	deplacement_bas_persodepotpousse_caissedsdepot_dsvide(perso,point_clic);
	deplacement_bas_persodsdepot(perso,point_clic);
	deplacement_bas_persodsdepot_dsdepot(perso,point_clic);
	deplacement_bas_persodsdepot_dsvide(perso,point_clic);
	deplacement_bas_persodsdepotpousse_caisse_dsdepot(perso,point_clic);
	deplacement_bas_persodsdepotpousse_caisse_dsvide(perso,point_clic);
	deplacement_bas_poussecaisse_dsvide(perso,point_clic);
	deplacement_bas_pousseperso_dsdepot_poussecaissedepot_dsdepot(perso,point_clic);
}
void deplacement_hauts(	POINT perso,POINT point_clic)
{
	deplacement_haut(perso,point_clic);
	deplacement_haut_caisse_dsdepot(perso,point_clic);
	deplacement_haut_caissedsdepot_dsvide(perso,point_clic);
	deplacement_haut_perso_dsdepot(perso,point_clic);
	deplacement_haut_persodepotpousse_caissedsdepot_dsvide(perso,point_clic);
	deplacement_haut_persodsdepot_dsdepot(perso,point_clic);
	deplacement_haut_persodsdepotpousse_caissedsdepot_dsdepot(perso,point_clic);
	deplacement_haut_persodsdepot_dsvide(perso,point_clic);
	deplacement_haut_persodsdepotpousse_caisse_dsdepot(perso,point_clic);
	deplacement_haut_persodsdepotpousse_caisse_dsvide(perso,point_clic);
	deplacement_haut_poussecaisse_dsvide(perso,point_clic);
	deplacement_haut_pousseperso_dsdepot_poussecaissedepot_dsdepot(perso,point_clic);
}
void deplacement_droites(POINT perso,POINT point_clic)
{
	deplacement_droite(perso, point_clic);
	deplacement_droite_caisse_dsdepot(perso,point_clic);
	deplacement_droite_caissedsdepot_dsvide(perso,point_clic);
	deplacement_droite_perso_dsdepot(perso,point_clic);
	deplacement_droite_persodepotpousse_caissedsdepot_dsvide(perso,point_clic);
	deplacement_droite_persodsdepot(perso,point_clic);
	deplacement_droite_persodsdepot_dsdepot(perso,point_clic);
	deplacement_droite_persodsdepot_dsvide(perso,point_clic);
	deplacement_droite_persodsdepotpousse_caisse_dsdepot(perso,point_clic);
	deplacement_droite_persodsdepotpousse_caisse_dsvide(perso,point_clic);
	deplacement_droite_poussecaisse_dsvide(perso,point_clic);
	deplacement_droite_pousseperso_dsdepot_poussecaissedepot_dsdepot(perso,point_clic);
}
void deplacement_gauches(POINT perso,POINT point_clic)
{
	deplacement_gauche(perso,point_clic);
	deplacement_gauche_caisse_dsdepot(perso,point_clic);
	deplacement_gauche_caissedsdepot_dsvide(perso,point_clic);
	deplacement_gauche_perso_dsdepot(perso,point_clic);
	deplacement_gauche_persodepotpousse_caissedsdepot_dsvide(perso,point_clic);
	deplacement_gauche_persodsdepot(perso,point_clic);
	deplacement_gauche_persodsdepot_dsdepot(perso,point_clic);
	deplacement_gauche_persodsdepot_dsvide(perso,point_clic);
	deplacement_gauche_persodsdepotpousse_caisse_dsdepot(perso,point_clic);
	deplacement_gauche_persodsdepotpousse_caisse_dsvide(perso,point_clic);
	deplacement_gauche_poussecaisse_dsvide(perso,point_clic);
	deplacement_gauche_pousseperso_dsdepot_poussecaissedepot_dsdepot(perso,point_clic);
}
void deplacement_plateau(POINT perso,POINT point_clic){

	if(BOUTON_DEPLACEMENT_BAS(point_clic))deplacement_bass(perso,point_clic);
	if(BOUTON_DEPLACEMENT_HAUT(point_clic))deplacement_hauts(perso,point_clic);
	if(BOUTON_DEPLACEMENT_GAUCHE(point_clic))deplacement_gauches(perso,point_clic);
	if(BOUTON_DEPLACEMENT_DROITE(point_clic))deplacement_droites(perso,point_clic);
	
}
