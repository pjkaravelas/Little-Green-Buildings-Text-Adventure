#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>

int intro() {
	int x;
	std::cout << "Welcome to little green buildings! Thank you for playing! The rules are simple. You are going to read a story. While you are reading, you are gonna be prompted to make choises. These choises change the outcome of the game. There is only one correct outcome while playing the game. GOOD LUCK AND HAVE FUN!!!\n\n\n\nDISCLAIMER:The game is based on true events. The scenes portrayed in the story may be disturbing to some audiences. Player discretion is advised...\n\nTo continue press 1 followed by the enter key...\n-->";
	std::cin >> x;

	if (x == 1) {
		return x;
	}
	else {
		std::cout << "Thank you for playing!";
		return 0;
	}
}