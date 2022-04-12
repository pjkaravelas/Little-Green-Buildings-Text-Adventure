#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>



int part3() {

	int ans3;
	char res1;
	char res2;

	std::string story{ "At this point the police decide their best bet is just to wait and see what happens. Although they did not tell johnny or megan's families this the police force did have a running suspicion that you know it was possible if not likely that the couple had used the money from cleaning up this property to go buy drugs and then they went on a drug binge and they would either turn up in a couple of days alive or dead from an overdose. But a couple of days went by and the couple did not re-emerge and no one had any idea where they were. Then a couple of months went by and it wasn't long before the case went cold. But it would not stay cold for very long. On august 31st 2016 so roughly eight months after the coxies were reported missing two more residents of spartanburg went missing as well. They were 30 year old kayla brown and her boyfriend 32 year old charlie carver. The pair had only been dating for about a month but they were becoming quite serious with charlie already introducing kayla to his family a step that charlie's father said was a very big deal for him. Unlike the coxies kayla and charlie were not struggling with drug addiction or with financial issues. Charlie worked full-time operating a printer at a local business and kayla made a living by doing odd jobs around town. According to their families it seemed like the couple was very happy with their lives and the directions they were going. But starting on the evening of august 31st kayla and charlie stopped returning text messages or answering phone calls. Charlie's father was especially close with charlie so this sudden silence was immediately noticed by him. But he kind of ruled it out and thought there would be a reasonable explanation for why he's not texting back and that he'd hear from him over the next couple of days. But over the next couple of days charlie continued not to answer text messages or pick up phone calls same with kayla. And so after 48 hours of this total silence charlie's father finally hopped in his car and drove to his son's house to see if he was there and he wasn't and then he drove to kayla's place and she wasn't there either. None of it made any sense so he called the police and he reported them missing." };

	//for (int i{ 0 }; i <= 2000; i++) {
	std::cout << story/*[i]*/;
//	sleep(1 * 40);
	//}
a:
	std::cout << "\nChoose:\n";
	std::cout << "1.The police decided to talk to the family members \n";
	std::cout << "2.The police decided to go get a warrant and search the victims houses for evidence.\n";


label:

	std::cout << "-->";
	std::cin >> ans3;

	if (ans3 == 1 || ans3 == 2) {
		if (ans3 == 2) {
			std::cout << "The police got the warrant aproved and went in to check into charlie's and kayla's houses but nothing unusual came from the search. Both the victims houses looked as if they had just left for the day and so the case ultimately went cold. The victims are still missing to this day and nothing has been found to maybe suggest were they could have gone.\n\nThank you for playing this game. Unfortunately you havent yet reached the end of the story...";
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
		else if (ans3 == 1) {
			return ans3;
		}
	}
	else {
		std::cout << "Error reading choise. Please type the number of the choise you'd like to make and then press enter...";
		goto label;
	}
}