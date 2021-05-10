/*#+/+/+/+/+/+/+/+/+/+/+/+/+/#
#    Escape the Mansion  	 #
#						     #
#       ©H GRAY 2021    	 #
#+/+/+/+/+/+/+/+/+/+/+/+/+/#*/

#include "../include/game.h"

void	animate_fire(s *fire) {

		perform_delay(15);
		set_sprite_tile(0, 4);
		set_sprite_tile(1, 4+2);
		perform_delay(15);
		set_sprite_tile(0, 8);
		set_sprite_tile(1, 8+2);
		perform_delay(15);
		set_sprite_tile(0, 12);
		set_sprite_tile(1, 12+2);
		perform_delay(15);
		set_sprite_tile(0, 0);
		set_sprite_tile(1, 2);
}

void	game(s *fire) {

	if (!fire->o)
		init_sprites(fire);
	animate_fire(fire);
}

void	init_game(void) {

	HIDE_BKG;
	SHOW_SPRITES;
	SPRITES_8x16;
	init_map();
}