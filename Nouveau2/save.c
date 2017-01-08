#include "definition.h"

char convertir_tableau(int i ,int j){
	    
	  char save[35][35];

				if(pos[i][j]==VIDE1)save[i][j]=' ';
			    if(pos[i][j]==CAISSE)save[i][j]='@';     
			    if(pos[i][j]==PERSO) save[i][j]='$';
			    if(pos[i][j]==DEPOT)save[i][j]='.';
			    if(pos[i][j]==MUR)save[i][j]='#';  
				if(pos[i][j]==CAISSE_DS_DEPOT)save[i][j]='%';
				if(pos[i][j]==PERSO_DS_DEPOT)save[i][j]='*';
	   return save[i][j];
   }
void save_editeur(){
	int x,y; char save[35][35];
	 FILE *f;
	 printf("saving..\n");
	 f=fopen("save.xsb","w+");
	 for(x=0;x<35;x++)
	{
		for(y=0;y<35;y++)
		{
		  save[x][y]=convertir_tableau(x,y);
	      fprintf(f,"%c",save[x][y]);
	    }
	    fprintf(f,"\n");
    }    
	 fclose(f);
	 printf("save complete\n");
}

