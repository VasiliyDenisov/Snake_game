build:
	g++ snake.cpp SnakeClass.cpp Apple.cpp -o snake.out -lsfml-graphics -lsfml-window -lsfml-system
run:
	./snake.out
