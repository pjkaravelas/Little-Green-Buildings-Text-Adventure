#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>



int part2() {

	int ans2;
	int res1;
	int res2;

	std::string story{ "The police began their investigation by speaking to todd kohlhepp who was the owner of this property because presumably he was one of the last people to see them before they went missing but when they spoke to todd he said \n\n'look.I had limited interaction with them they were on my property they came out they cleaned these two buildings on my property and then i paid them and they left and we haven't had any contact since so you know unfortunately i don't have a clue where they would have gone next' \n\n"};

	//for (int i{ 0 }; i <= 2000; i++) {
	std::cout << story/*[i]*/;
	//	sleep(1 * 40);
	//}
a:
	std::cout << "\nChoose:\n";
	std::cout << "1.The police took Tedd into custody. \n";
	std::cout << "2.The police decided that due to lack of evidence it would be better to wait and see if they show up.\n";


label:

	std::cout << "-->";
	std::cin >> ans2;

	if (ans2 == 1 || ans2 == 2) {
		if (ans2 == 1) {
			std::cout << "The police arrested todd and took him into custody for the disssappearance of the Coxies. He was released shortly after due to a lack of evidence and the case was closed. Todd also sued the PD for wrongfully accusing him but the subjects are still awaiting trial for the apppeal.\n\nThank you for playing this game. Unfortunately you havent yet reached the end of the story...";
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
		else if (ans2 == 2) {
			return ans2;
		}
	}
	else {
		std::cout << "Error reading choise. Please type the number of the choise you'd like to make and then press enter...";
		goto label;
	}
}