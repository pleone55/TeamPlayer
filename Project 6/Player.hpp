/**************************************************************************
 * *Author: Paul Leone
 * *Date: 2/13/2019
 * *Description: This is the class specification for Player that records
 * *		 name, points, rebounds and assists.
 * ***********************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player
{
private:		//Private data members
	std::string name;
	int points;
	int rebounds;
	int assists;

public:			//Public data members
	Player();
	Player(std::string playerName, int playerPoints, int playerRebounds, int playerAssists);
	std::string getName();
	void setPoints(int playerPoints);
	int getPoints();
	void setRebounds(int playerRebounds);
	int getRebounds();
	void setAssists(int playerAssists);
	int getAssists();
	bool hasMorePointsThan(Player player);
};
#endif
