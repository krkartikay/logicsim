FLAGS = -Wall

linux:
	g++ -DLINUX $(FLAGS) main.cpp display.cpp logic.cpp -lGL -lGLU -lglut

windows:
	g++ -DWINDOWS $(FLAGS) main.cpp display.cpp logic.cpp  glut32.lib -lopengl32 -lglu32