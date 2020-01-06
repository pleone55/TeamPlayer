/*************************************************************************
 * *Author: Paul Leone
 * *Date: 2/13/2019
 * *Description: Class specification for Player that records the name,
 * *		 points, rebounds, and assists.
 * **********************************************************************/

#include <iostream>
#include <string>
#include "Player.hpp"

/************************************************************************
 * This is the constructor default that initializes the name to the empty
 * string and initializes each of the stats to -100.
 * **********************************************************************/

Player::Player()
{
	name = "";
	points = -100;
	rebounds = -100;
	assists = -100;
}

/************************************************************************
 * This is the constructor that takes four parameters and uses them to
 * initialize the data members.
 * *********************************************************************/

Player::Player(std::string playerName, int playerPoints, int playerRebounds, int playerAssists)
{
	name = playerName;
	points = playerPoints;
	rebounds = playerRebounds;
	assists = playerAssists;
}

/************************************************************************
 * This function returns the string name
 * **********************************************************************/

std::string Player::getName()
{
	return name;
}

/**********************************************************************
 * This function copies the argument passed into the parameter 
 * Player.hpp to the private member variable points
 * ********************************************************************/

void Player::setPoints(int playerPoints)
{
	points = playerPoints;
}

int Player::getPoints()
{
	return points;
}

/*********************************************************************
 * This function copies the argument passed into the parameter
 * Player.hpp to the private member variable rebounds and returns it
 * ******************************************************************/

void Player::setRebounds(int playerRebounds)
{
	rebounds = playerRebounds;
}

int Player::getRebounds()
{
	return rebounds;
}

/*********************************************************************
 * This function copies the argument passed into the parameter
 * Player.hpp to the private member variable assists and returns it
 * ******************************************************************/

void Player::setAssists(int playerAssists)
{
	assists = playerAssists;
}

int Player::getAssists()
{
	return assists;
}

/********************************************************************
 * This function takes the Player parameter and returns true if the
 * Player has more points than the Player that was passed as a 
 * parameter.
 * *****************************************************************/

bool Player::hasMorePointsThan(Player player)
{
	if (points > player.getPoints())
		return true;
	else
		return false;
}

