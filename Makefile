FLAGS = -Wall

CPP_FILES = main.cpp abstraction.cpp display.cpp logic.cpp

linux:
	g++ -DLINUX $(FLAGS) $(CPP_FILES) -lGL -lGLU -lglut

windows:
	g++ -DWINDOWS $(FLAGS) $(CPP_FILES)  glut32.lib -lopengl32 -lglu32