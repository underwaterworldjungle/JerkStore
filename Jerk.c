/* Jerk Store by Jeremy Bird (github.com/underwaterworldjungle) 2022 */

#include <stdio.h>
#include <unistd.h>
#include <conio.h>

int main(void)
{
	// TITLE SCREEN
	
	printf("\n        @@@  @@@@@@@@  @@@@@@@   @@@  @@@\n        @@@  @@@@@@@@  @@@@@@@@  @@@  @@@\n        @@!  @@!       @@!  @@@  @@!  !@@\n        !@!  !@!       !@!  @!@  !@!  @!!\n        !!@  @!!!:!    @!@!!@!   @!@@!@!\n        !!!  !!!!!:    !!@!@!    !!@!!!\n        !!:  !!:       !!: :!!   !!: :!!\n   !!:  :!:  :!:       :!:  !:!  :!:  !:!\n   ::: : ::   :: ::::  ::   :::   ::  :::\n    : :::    : :: ::    :   : :   :   :::\n\n\n @@@@@@   @@@@@@@   @@@@@@   @@@@@@@   @@@@@@@@\n@@@@@@@   @@@@@@@  @@@@@@@@  @@@@@@@@  @@@@@@@@\n!@@         @@!    @@!  @@@  @@!  @@@  @@!\n!@!         !@!    !@!  @!@  !@!  @!@  !@!\n!!@@!!      @!!    @!@  !@!  @!@!!@!   @!!!:!\n !!@!!!     !!!    !@!  !!!  !!@!@!    !!!!!:\n     !:!    !!:    !!:  !!!  !!: :!!   !!:\n    !:!     :!:    :!:  !:!  :!:  !:!  :!:\n:::: ::      ::    ::::: ::  ::   :::   :: ::::\n:: : :       :      : :  :    :   : :  : :: ::\n");	
	sleep(2);
	printf("\n\nJERK STORE  v0.10\n");
	sleep(1);
	printf("A gritty tale of existensial horror by Jeremy Bird\n\n");
	sleep(2);
	printf("PRESS [ENTER] TO START");
	while(getchar()!='\n');

	// SETTING
	
	printf("\nIn a dark corner of a dark room, atop a dark table...\n");
	sleep(3);
	printf("\n\ta telephone.\n\n");
	sleep(3);
	
	// THE RING
	
	printf("\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNNXXXXKKKKKXXXXNNWWMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXKOxdolc:;,,,'''..''''',,;;:cloxkOKXWWMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMWXKkdoc;'..................................';codkKNWMMMMMMM\nMMMMMMMMMMMMMMMMN0kol:,.............'',;;;::ccccc::;;,''...............,:lx0NMMM\nMMMMMMMMMNKOxk0x;..   ............,:cc;',,,;;;:;;;,,''..''.............    .,xNM\nMMMMMMMM0l,,,;,.        ...,..:oocokkxc,;;,,,,,,,,,,,;;'''''':;......        .oN\nMMMMMMNk:'.,,..            ...cKW0dxxxc,,''..........''.'''',k0;.''.          .k\nMMMMMMO;cxllkd.      ..        'xx;'''.    .',;..;;'.   .....d0:...     .      :\nMMMMNk:;,l0WM0'    .......      :c.   .';::;oxd:;odl:cl;.    :c.     ..,'.     .\nMMMMNo,:dONMM0,     ..;c:..   .cOc   .,dkOx;.,;;:;,.,x0x,           ..:l;..    .\nMMMKc::;lXMMMX:     ..,:;....ckNK; .,ldol;.'cdxkkkdl,...     ...    ..,,..      \nMMWO:'ckNMMMMWd.     ....'cxKWWO:. .lOkl;..lkkkkkkkkd,        ,do:........     '\nMMO;';:kNMMMMMXo.....,cdOXWMMMO,   .;xxc'.'oOOOOOOOOx;.        ;0NXOxol:;,''',ck\nMXxc',kWMMMMMMMN0kkO0XWMMMMMMK:.  ..oO0d:'.,lk0KK0ko,.........  ;0MMMMMWNXXXXNWM\nWk,.,oKWMMMMMMMMMMMMMMMMMMMMNd..   .';cdddl,.';cc:'..;ddo,...   .cXMMMMMMMMMMMMM\nKdc''dWMMMMMMMMMMMMMMMMMWNKOo,..   ...:O00kl:lo:':ooclxkd,...   .'oNMMMMMMMMMMMM\nk,.'lKMMMMMMMMMMMMMN0xol:;'......   ..,:c:,;xK0d:o00x,.''..     ...xWMMMMMMMMMMM\no'..oNMMMMMMMMMMWXx;.   .,:.  ...    ...''',coo:',cc;'...       .. '0MMMMMMMMMMM\nc..'xWMMMMMMMMMMO;.  'cdOX0,  ...         ....''......          ..  cNMMMMMMMMMM\nc..'xWMMMMMMMMMNo.  'OWMMWd.  .                                  .  .xWMMMMMMMMM\nc'..:KMMMMMMMMMXc.  ;KMMMK,                                          'OMMMMMMMMM\nd,. .lXWMMMMMMXl.  .oNMMWo.                                           :XMMMMMMMM\nKdc,..,:odxkxo,.  .;0MMMX:             ............    .....          ,0MMMMMMMM\nMMKoll'..  .    .'oKMMMMK:........................................... 'OMMMMMMMM\nMMWWWKxd:'...,cdkXWMMMMMXc............................................,0MMMMMMMM\nMMMMMMMWNX00KNWMMMMMMMMMNl............................................,0MMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMNo............................................'OMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMWx.........:dxxxxxxxxxxxxxxxkkkkkkkkxl,'....',lKMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMNOdooodddkXMMMMMMMMMMMMMMMMMMMMMMMMMWK0OOO0KXNMMMMMMMMM\n");
	sleep(1);
	printf("\n*RING RING*");
	
	while(!kbhit())
	{
		sleep(2);
		printf("\t*RING RING*");
	}
	
	// THE CALL
	
	printf("\n\nYou collect the handset and draw it near to your ear and mouth.\n");
	sleep(3);
	printf("\nYou:	Hello?\n\t(Your voice quivers.)\n");
	sleep(3);
	printf("\nCaller:	It's the JERK STORE calling.\n");
	sleep(3);
	printf("\nYou:	...\n");
	sleep(3);
	printf("\nCaller:	We're running out of you.\n");
	sleep(2);
	printf("\n	*Click*\n");
	sleep(10);
	
	//THE END
	
	printf("\nYou ponder the futility of your existence.\n");
	sleep(5);
	printf("\n\tMotionless.\n");
	sleep(5);
	printf("\n\tDread and despair grip your feeble heart.\n");
	sleep(5);
	printf("\n\tYour mind is lost to the depths of eternity unfathomable.\n");
	sleep(20);
	printf("\nYour hands have withered now. The world is not as clear as it once seemed...\n");
	sleep(5);
	printf("\n\tlong ago...\n");
	sleep(5);
	printf("\n\tbefore the JERK STORE called.\n");
	sleep(5);
	printf("\nGAME OVER\n");
	sleep(5);
    
	return 0;
}
