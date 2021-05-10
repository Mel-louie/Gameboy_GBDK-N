/*#+/+/+/+/+/+/+/+/+/+/+/+/+/#
#    Escape the Mansion  	 #
#						     #
#       ©H GRAY 2021    	 #
#+/+/+/+/+/+/+/+/+/+/+/+/+/#*/

#include "../include/game.h"

const UWORD palette_table[] =
{
	CGB_PAL(25, 31, 23), CGB_PAL(19, 29, 15), CGB_PAL(9, 16, 16), CGB_PAL(4, 4, 6), //sweet green0			//0

	CGB_PAL(25, 31, 23), CGB_PAL(25, 31, 23), CGB_PAL(9, 16, 16), CGB_PAL(4, 4, 6), //sweet green0 sprites	//4
	
	CGB_PAL(19, 29, 15), CGB_PAL(19, 29, 15), CGB_PAL(9, 16, 16), CGB_PAL(4, 4, 6), //sweet green1			//8
	CGB_PAL(9, 16, 16), CGB_PAL(9, 16, 16), CGB_PAL(9, 16, 16), CGB_PAL(4, 4, 6), //sweet green2			//12
	CGB_PAL(4, 4, 6), CGB_PAL(4, 4, 6), CGB_PAL(4, 4, 6), CGB_PAL(4, 4, 6),			//sweet green3			//16
};

void	main(void) {

	set_bkg_palette(0, 1, &palette_table[0]);
	set_sprite_palette(0, 1, &palette_table[4]);
	splash_screen();
	HIDE_BKG;
	title_screen();
	clear_title_screen();

	s	fire;

	fire.o = 0;
	init_game();
	while (1) {
		game(&fire);
	}
}