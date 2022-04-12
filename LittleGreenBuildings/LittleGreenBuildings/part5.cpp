#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>



int part5() {

	int ans5;
	char res1;
	char res2;

	std::string story{ "Initially this investigation really got nowhere but two months after they had been reported missing the police finally obtained a search warrant that would allow them to look at their respective cell phone records and when they looked at kayla's cell phone records they were able to triangulate roughly where her last known location was according to pings her cell phone was sending off to nearby cell phone towers and they discovered her last known location at least of her cell phone was inside of the same 95-acre plot of land that the coxies had been in before they went missing" };

	//for (int i{ 0 }; i <= 2000; i++) {
	std::cout << story/*[i]*/;
//	sleep(1 * 40);
	//}
a:
	std::cout << "\nChoose:\n";
	std::cout << "1.The police decided to go and arrest todd \n";
	std::cout << "2.The police decided to go search the property and send a team out to todds house\n";


label:

	std::cout << "-->";
	std::cin >> ans5;

	if (ans5 == 1 || ans5 == 2) {
		if (ans5 == 1) {
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
		else if (ans5 == 2) {
			return ans5;
		}
	}
	else {
		std::cout << "Error reading choise. Please type the number of the choise you'd like to make and then press enter...";
		goto label;
	}
}