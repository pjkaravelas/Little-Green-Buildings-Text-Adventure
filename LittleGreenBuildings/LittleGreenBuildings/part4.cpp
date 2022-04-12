#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>



int part4() {

	int ans4;
	char res1;
	char res2;

	std::string story{ "The police started with absolutely no leads and so what they did to begin their investigation was basically just to interview everybody in charlie and kayla's life friends family acquaintances employers co-workers everyone but no one had any idea where this couple had gone to they had not told anyone about some trip they were going on or something they were going to do it just seemed like they had vanished" };

	//for (int i{ 0 }; i <= 2000; i++) {
	std::cout << story/*[i]*/;
//	sleep(1 * 40);
	//}
a:
	std::cout << "\nChoose:\n";
	std::cout << "1.The police decided to halt the investigation\n";
	std::cout << "2.The police decided to look at the cell phone records.\n";


label:

	std::cout << "-->";
	std::cin >> ans4;

	if (ans4 == 1 || ans4 == 2) {
		if (ans4 == 1) {
			std::cout << "Unfortunately the couple never showed any signs of life neither were they found. The case ultimately went cold and the couple is still missing to this day.\n\nThank you for playing this game. Unfortunately you havent yet reached the end of the story...";
		c:
			std::cout << "\nWould you like to restart?[y/n]:";
			std::cin >> res1;
			if (res1 == 'y') {
			b:
				std::cout << "Restart from the beggining or continue where you left off[b/c]:";
				std::cin >> res2;
				if (res2 == 'b') {
					return 9;//if ret value is 9 goto beginning
				}
				else if (res2 == 'c') {
					goto a;
				}
				else {
					std::cout << "\nInput not recognisedn\n";
					goto b;
				}
			}
			else if (res1 == 'n') {
				return 4;
			}
			else goto c;
		}
		else if (ans4 == 2) {
			return ans4;
		}
	}
	else {
		std::cout << "Error reading choise. Please type the number of the choise you'd like to make and then press enter...";
		goto label;
	}
}