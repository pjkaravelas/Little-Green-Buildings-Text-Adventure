#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>



int part6() {

	int ans6;
	char res1;
	char res2;

	std::string story{"Immediately the police put in for a search warrant to go search this 95-acre property and they sent a team out to the property and set up outside of that big fence and just waited for the search warrant to clear. At the same time another group of police officers went to todd kohlhepp's house which was actually in town about 20 minutes away from this property to talk to him about why in the world kayla's cell phone would be pinging inside of his property. And so when the police arrived at his front doorstep todd was obviously caught off guard by suddenly there being all these police officers and he does understand very quickly how unbelievably suspicious it looks that now you have potentially two couples that have gone on to his property right before they vanished. At the same time the team of police officers were kind of grilling todd at his house the other team that was outside of the 95 acre property they found out their search warrant had been granted and so they flew through the gate they got on that access road and they begin bombing into this huge forest and as they're driving they pull out their maps they had printed out that showed the rough estimation of where her final location was within this property and it looked like the last spot was inside of a clearing. So as they're driving down this access road through all these trees they see up ahead there is a clearing and it looks very much like the clearing on their map where this final location is. When they pull into the clearing off to the left side of the road are these two green buildings the left building was like a shed like something you might keep yard tools in like lawn mowers and shovels and rakes that kind of thing and then right next to it on the right was this metal shipping container and it had all these metal chains and five padlocks keeping it shut "};

	//for (int i{ 0 }; i <= 2000; i++) {
	std::cout << story/*[i]*/;
//	sleep(1 * 40);
	//}
a:
	std::cout << "\nChoose:\n";
	std::cout << "1.The police decided to open the two green buildings\n";
	std::cout << "2.The police decided that the two buildiings were not of interest\n";


label:

	std::cout << "-->";
	std::cin >> ans6;

	if (ans6 == 1 || ans6 == 2) {
		if (ans6 == 2) {
			std::cout << "The police searched around the area for the remainder of that day but they found nothing. Unfortunately the couple never showed any signs of life neither were they found. The case ultimately went cold and the couple is still missing to this day.\n\nThank you for playing this game. Unfortunately you havent yet reached the end of the story...";
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
		else if (ans6 == 1) {
			return ans6;
		}
	}
	else {
		std::cout << "Error reading choise. Please type the number of the choise you'd like to make and then press enter...";
		goto label;
	}
}