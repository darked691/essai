jouer: compil
				./sokoban sasquach1.xsb


tests:  clean compil
						./sokoban -n 8 sasquach1.xsb		
				 
editeur: 	  compil
				./sokoban -c save.xsb



compil: sokoban
				

sokoban:    principale.o  affichage.o deplacement_mode_jeu.o déplacement_mode_edition.o  jeu.o save.o
	gcc -Wall   principale.o affichage.o deplacement_mode_jeu.o jeu.o save.o deplacement_mode_edition.o  -o sokoban -luvsqgraphics `sdl-config --libs` -lm -lSDL_ttf
  
principale.o:       principale.c affichage.h  deplacement_mode_jeu.h  déplacement_mode_edition.h  jeu.h save.h
	gcc  -c   `sdl-config --cflags` principale.c  jeu.c  affichage.c deplacement_mode_jeu.c deplacement_mode_edition.c  save.c -luvsqgraphics
       
affichage.o:        affichage.c definition.h
	gcc -c   `sdl-config --cflags` affichage.c
					
				
deplacement_mode_jeu.o:        deplacement_mode_jeu.c definition.h
	gcc -c   `sdl-config --cflags` deplacement_mode_jeu.c

déplacement_mode_edition.o:        deplacement_mode_edition.c  definition.h
	gcc -c   `sdl-config --cflags` deplacement_mode_edition.c					
					
jeu.o:              jeu.c definition.h
	gcc -c  `sdl-config --cflags`  jeu.c	
				
save.o:              save.c definition.h
	gcc -c  `sdl-config --cflags`  save.c						
 
clean: 
		  rm -f  sokoban
		rm  -f *.o 
