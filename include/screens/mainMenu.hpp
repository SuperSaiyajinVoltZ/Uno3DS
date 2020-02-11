/*
*   This file is part of 3DEins
*   Copyright (C) 2019-2020 DeadPhoenix8091, Epicpkmn11, Flame, RocketRobz, StackZ, TotallyNotGuy
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
*       * Requiring preservation of specified reasonable legal notices or
*         author attributions in that material or in the Appropriate Legal
*         Notices displayed by works containing it.
*       * Prohibiting misrepresentation of the origin of that material,
*         or requiring that modified versions of such material be marked in
*         reasonable ways as different from the original version.
*/

#ifndef MAINMENU_HPP
#define MAINMENU_HPP

#include "cardHelper.hpp"
#include "common.hpp"
#include "structs.hpp"

#include <vector>

class MainMenu : public Screen
{
public:
	void Draw(void) const override;
	void Logic(u32 hDown, u32 hHeld, touchPosition touch) override;
	MainMenu();
private:
	int Selection = 0;

	CardType Card1;
	CardColor Color1;
	CardType Card2;
	CardColor Color2;
	CardType Card3;
	CardColor Color3;

	std::vector<Structs::ButtonPos> mainButtons = {
		{90, 40, 140, 35}, // New Game
		{90, 100, 140, 35}, // Colors?
		{90, 160, 140, 35}, // Credits
	};
};

#endif