/*************************************************************************
 * *Author: Paul Leone
 * *Date: 2/13/2019
 * *Description: This is the member function for Team that takes players
 * *		 to assign as positions and the nreturns total points.
 * ***********************************************************************/

#include "Team.hpp"
#include <string>

//This is the default constructor that takes five players and assigns
//them to positions

Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
	setPointGuard(p1);
	setShootingGuard(p2);
	setSmallForward(p3);
	setPowerForward(p4);
	setCenter(p5);
}

/*********************************************************************
 * This function copies the argument passed into the parameter and 
 * sets player to a position point guard.
 * *******************************************************************/

void Team::setPointGuard(Player pointGuar)
{
	pointGuard = pointGuar;
}

/********************************************************************
 * This function copies the argument passed into the parameter and
 * sets player to a position shooting guard.
 * ******************************************************************/

void Team::setShootingGuard(Player shootGuar)
{
	shootingGuard = shootGuar;
}

/*******************************************************************
 * This function copies the argument passed into the parameter and 
 * sets player to a position small forward.
 * *****************************************************************/

void Team::setSmallForward(Player smallFor)
{
	smallForward = smallFor;
}

/*******************************************************************
 * This function copies the argument passed into the parameter and
 * sets player to a position power forward.
 * *****************************************************************/

void Team::setPowerForward(Player powerFor)
{
	powerForward = powerFor;
}

/*******************************************************************
 * This function copies the argument passed into the parameter and
 * sets player to a position center.
 * *****************************************************************/

void Team::setCenter(Player cen)
{
	center = cen;
}

/*******************************************************************
 * This function retrieves player for point guard.
 * *****************************************************************/

Player Team::getPointGuard()
{
	return pointGuard;
}

/*******************************************************************
 * Tis function retrieves player for shooting guard.
 * *****************************************************************/

Player Team::getShootingGuard()
{
	return shootingGuard;
}

/*******************************************************************
 * This function retrieves player for small forward.
 * *****************************************************************/

Player Team::getSmallForward()
{
	return smallForward;
}

/*******************************************************************
 * This function retrieves player for power forward.
 * *****************************************************************/

Player Team::getPowerForward()
{
	return powerForward;
}

/*******************************************************************
 * This function retrieves player for center.
 * *****************************************************************/

Player Team::getCenter()
{
	return center;
}

/******************************************************************
 * This function retrieves and returns the total points.
 * ****************************************************************/

int Team::totalPoints()
{
	return pointGuard.getPoints() + shootingGuard.getPoints() +
		smallForward.getPoints() + powerForward.getPoints() +
		center.getPoints();
}

