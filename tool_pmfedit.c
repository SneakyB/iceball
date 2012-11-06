/*
    This file is part of Iceball.

    Iceball is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Iceball is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Iceball.  If not, see <http://www.gnu.org/licenses/>.
*/

// note, this'll probably get removed when i get around to it
// it'll be much easier to do in lua --GM

#include "common.h"

SDL_Surface *screen = NULL;

void editloop(void)
{
	SDL_Delay(1000);
};

int main(int argc, char *argv[])
{
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_NOPARACHUTE);
	
	SDL_WM_SetCaption("pmfedit for Point Model Format v1", NULL);
	screen = SDL_SetVideoMode(800, 600, 32, 0);
	
	editloop();
	
	SDL_Quit();
	
	return 0;
}
