/*************************************************************************
 * *Author: Paul Leone
 * *Date: 2/13/2019
 * *Description: This is the class specification for Team that takes five
 * *		 data members of type Player.
 * ***********************************************************************/

#ifndef TEAM_HPP
#define TEAM_HPP
#include "Player.hpp"

class Team
{
	private:
		Player pointGuard, shootingGuard, smallForward, powerForward, center;

	public:
		Team(Player, Player, Player, Player, Player);
		void setPointGuard(Player);
		Player getPointGuard();
		void setShootingGuard(Player);
		Player getShootingGuard();
		void setSmallForward(Player);
		Player getSmallForward();
		void setPowerForward(Player);
		Player getPowerForward();
		void setCenter(Player);
		Player getCenter();
		int totalPoints();
};
#endif
