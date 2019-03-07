/* game.cpp
 *
 * Copyright 2019 River <rivepace@outlook.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

int main()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *win = SDL_CreateWindow ("new win",
                                        SDL_WINDOWPOS_CENTERED,
                                        SDL_WINDOWPOS_CENTERED,
                                        640,
                                        480,
                                        SDL_WINDOW_FULLSCREEN_DESKTOP);
    SDL_Renderer *renderer = SDL_CreateRenderer (win, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor (renderer, 255, 0, 0, 255);
    SDL_RenderClear (renderer);
    SDL_RenderPresent (renderer);
    SDL_Delay (2000);
    SDL_DestroyWindow (win);
    SDL_Quit ();

    return 0;
}
      
