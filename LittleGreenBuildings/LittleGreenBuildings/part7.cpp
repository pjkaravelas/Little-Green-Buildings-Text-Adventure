#include <iostream>
#include <stdio.h> 
#include <cstdlib>
#include <string>
#include <conio.h>



int part7() {

	
	char res1;
	

	std::string story{ "Right away the police went inside of the left building the shack because it was easier to get into there weren't padlocks all over it and when they got inside there really was nothing of note. Kayla was not in there charlie was not in there there was no cell phone in there it was just gardening tools. So they went over to the right building the shipping container and they got out their metal cutting saws and their bolt cutters and they began cutting into all of these locks and chains and when they finally got that door open they were absolutely astounded at what they saw.\n\nThe police had just discovered kayla.\n\nShe was in rough shape and she had a metal chain wrapped around her neck that was anchored to the wall and she was handcuffed but she was alive. After they cut her freeand got her out of the shipping container she told them what happened...\n\nShe said back on august 31st 2016 so this was the same day that charlie's father had realized his son was not responding to his text messages and when he was calling kayla she wasn't answering either. On that day kayla says she was contacted by a friend of hers todd kohlhepp and he told her that he was still looking for people to come outand help clean up the property because he was getting ready to develop it and so kayla she was looking for work. So she agreed to do it and after getting this job kayla would tell charlie. Charlie just being a good boyfriend said you know what i'll tag along with you and i'll help you do this job i won't ask todd for any money i'm just gonna go and help you and so kayla was totally thrilled about this. Later that day she and charlie they made their way out to the 95 - acre property they reached that fence that kind of borders the entire property they followed it until they hit that break in the fence. They hopped on the access road and they began driving into the heart of this very thick forest and after driving for several minutes they reached this clearingand in this clearing they see todd up ahead on the left he's smiling and waving at them and he's standing in front of the shack and the metal shipping container. So charlie pulls the car in right in front of todd and then charlie and kayla they get out they walk up to todd to you know see what he needs see what he wants them to do. As soon as the couple is standing in front of todd todd just casually pulls out a gun and shoots charlie three times in the chest. As soon as charlie falls to the ground todd aims the gun at kayla and says if you go anywhere i will kill you and i will kill your family and then he put the gun away walked over to charlie and he wrapped him up in a blue tarp. He carried his lifeless bodyand dumped him in the nearby bucket of a tractor and then todd just walked back over to kayla who's witnessed this entire thing. She is so terrified she can't even move and she's just staring at todd and todd draws his gun again at her and orders her to go into the shipping container. He brings her inside he locks her up and for 65 days she would remain his prisoner. Over the course of those 65 days todd would once or twice a day come down and do whatever he wanted with her and he told her at the outset that if she ever tried to resist him in any way and didn't do whatever he wanted with her he would not only kill her he would also kill her family. And so kayla very early on decided she would not put up a fight she just kind of accepted that this was her life that she would be horribly mistreated and then probably at some point he would grow tired of her and kill her but at least she would be sparing her family and so when the police finally went into that shipping container kayla truly did not expect ever to be rescued. After kayla tells the police officers this totally horrible and traumatic story they immediately radio over to the other team of police officers that were still at todd kohlhepp's residence still talking to him and they tell them hey this is what kayla just told us todd's reaction to this news was also captured on video.\n\n-We have kayla. We have kayla in your property. She was locked in a container. She has told us that you shot and killed charlie. Why did you shoot him?\n\n-I didn't shoot him.\n\n-Okay why did you lock her in a container in your property. She's on your property right now locked in a container and she's saying you buried charlie's body on that property.\n\n-I dont know what you are talking about.\n\n-So you're saying you didn't lock her up you didn't put her in the conex box or anything.\n\n-Im gonna need my lawyer.\n\n-Uh probably a good thing. Go ahead and put him in the back of your car.\n\nEven though todd would initially deny any wrongdoing and would claim he had nothing to do with what happened to kayla or charlie he would eventually confess not only to killing charlie and kidnapping kayla but also to killing johnny and megan coxey. Apparently he had done to them what he did to kayla and charlie. He had lured the coxies onto his property on the promise of work and then when they reached those two structures he drew a gun and he shot johnny and killed him and then he ordered megan to go inside of the shipping container. Now unlike kayla who would ultimately comply and it did save her life megan did not she fought back she was totally resistant she wouldn't do anything that he wanted her to do and so after only five days of her being in captivity he would kill her and the way he would describe her was 'oh you know she was acting like a wild animal so i had to put a bullet in the back of her head'. He didn't care at all about these people he had killed.\n\nCharlie johnny and megan's bodies would all be discovered in shallow graves right outside of that shipping container" };

	//for (int i{ 0 }; i <= 2000; i++) {
	std::cout << story/*[i]*/;
	//	sleep(1 * 40);
		//}

	std::cout << "\n\n\nThis is the end! Thank you for playing! Want some more? Press y and press enter. To exit press n and then enter!\n";

	a:
	std::cout << "-->";
	std::cin >> res1;
	if (res1 == 'y') {
		return 1;
	}
	else if (res1 == 'n') {
		return 0;
	}
	else {
		std::cout << "\nInput not recognisedn\n";
		goto a;
	}

}