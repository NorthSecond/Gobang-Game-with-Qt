/*
* author: yangyf83
* create date: 2022/08/31
* version: 1.0
* description: The class of GameRoom.
* modify date:
* modify description:
*/

#pragma once

#include<qdatetime.h>
#include<qstring.h>

// enum the status of the game room
enum GameStatus {
	Fresh,	// newly created
	Waiting,// waiting for other players
	Playing,// playing
	Ended	// ended
};

class GameRoom {
private:
	QString creater_id;		// the id of the creater
	QString participant_id; // the id of the participant
	QString game_id;		// the id of the game
	QTime creat_time;		// the time when the room is created
	GameStatus status;		// the status of the room
	
	//The result of the game
	// 0 -> no result yet
	// 1 -> Creater win
	// 2 -> participant win
	// 3 -> Draw
	int game_result;
	
public:
	GameRoom(QString creater_id);
	// maybe no use
	GameRoom(QString creater_id, QString participant_id, QString game_id, QTime creat_time, GameStatus status, int game_result);
	~GameRoom();

	QString getCreaterId();
	QString getParticipantId();
	QString getGameId();
	QTime getCreatTime();
	GameStatus getStatus();
	int getGameResult();

	void setCreaterId(QString creater_id);
	void setParticipantId(QString participant_id);
	void setGameId(QString game_id);
	void setCreatTime(QTime creat_time);
	void setStatus(GameStatus status);
	void setGameResult(int game_result);
};