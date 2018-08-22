FLAGS = -Wall
LINKER_FLAGS = 

OBJS = abstraction.o display.o logic.o
MAIN_FILE = main.cpp

linux: FLAGS += -DLINUX
linux: LINKER_FLAGS += -lGL -lGLU -lglut
linux: build

windows: FLAGS += -DWINDOWS
windows: LINKER_FLAGS += glut32.lib -lopengl32 -lglu32
windows: build

build: $(OBJS) $(MAIN_FILE)
	g++ $(FLAGS) $(MAIN_FILE) $(OBJS) $(LINKER_FLAGS)

clean:
	@rm *.o
	@rm a.out

%.o: %.cpp project.h
	g++ $(FLAGS) -c $< -o $@ $(LINKER_FLAGS)
