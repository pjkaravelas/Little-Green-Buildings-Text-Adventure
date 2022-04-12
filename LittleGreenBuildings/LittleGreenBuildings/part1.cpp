#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>



int part1(){

	int ans1;
	char res1;
	char res2;
	
	std::string story{"In 2015 29 year old johnny coxy and his wife 25 year old megan coxey were living in a low income section of spartanburg south carolina. They both struggled mightily with drug addiction to the point where it was nearly impossible to get steady work so they often found themselves out on the streets begging for money. Their addictions also made it nearly impossible to be a good parent to their only child. In december of that year child protective services stepped in and took their child away from them. Almost immediately after their child was taken from them both megan and johnny were arrested and thrown in jail for various offenses that were connected to their drug habits. And so johnny and megan are at absolute rock bottom at this point but they were about to get a big break. After they both got out of jail megan was contacted by a local very successful real estate agent named todd kohlhepp. Todd was someone she had met previously when she used to be a waitress at a local diner and todd was reaching out to her to somewhat unbelievably offer her and her husband pretty decent paying jobs. Apparently todd had recently purchased this massive 95-acre plot of land in the area and he needed people to come onto the property and help clean it up because his plan was to further develop this property. He had been reaching out to other people in spartanburg to see if they were interested and megan and her husband were two people he had contacted. Of course megan and johnny said yes. They were in desperate need of cash and paying jobs did not come around very often. On december 19th of that year megan spoke to her mother and told her about this job opportunity and where it was and what she'd be doing and then she and johnny made their way out to this property. When they got there they saw this huge chain-link fence wrapped around what seemed like a massive forest. This was the 95-acre plot of land that tod owned and at the center of this forest were a few buildings that johnny and megan would be responsible for cleaning. Johnie and Megan made their way down the fence line until they found the break in the fence and that led to an access road and they began driving down it deep into the heart of this forest. Three days later megan's mother tried to get in touch with her but she couldn't. When she reached out to johnny she couldn't get in touch with him either so given the couple's history with drugs megan's mother thought the worst. Maybe they overdosed. And so she panics and she rushes to megan and johnny's house but they're not there. Something in her guy tells her that something is wrong here it's not common for them to just completely go off the grid. So she called the police."};

//for (int i{ 0 }; i <= 2000; i++) {
	std::cout << story/*[i]*/;
//	sleep(1 * 40);
//}
	a:
	std::cout << "\nChoose:\n";
	std::cout << "1.The police began their investigation \n";
	std::cout << "2.The police decided that due to lack of evidence it would be better to wait and see if they show up.\n";


	label:

	std::cout << "-->";
	std::cin >> ans1;

	if (ans1==1 || ans1==2) {
		if (ans1 == 2) {
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
		else if (ans1 == 1) {
			return ans1;
		}
	}
	else{
		std::cout << "Error reading choise. Please type the number of the choise you'd like to make and then press enter...";
		goto label;
	}
}
