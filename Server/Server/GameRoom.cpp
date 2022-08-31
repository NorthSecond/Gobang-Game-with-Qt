/*
* author: yangyf83
* create date: 2022/08/31
* version: 1.0
* description: 
* modify date:
* modify description:
*/

#include "GameRoom.h"

GameRoom::GameRoom(QString creater_id)
{
	this->creater_id = creater_id;
	this->participant_id = "";
	this->creat_time = QTime::currentTime();
	this->status = GameStatus::Fresh;
	this->game_result = 0;
	// generate a unique id for the game
	this->game_id = QString::number(creat_time.hour()) + QString::number(creat_time.minute()) + QString::number(creat_time.second()) + QString::number(creat_time.msec() + qHash(creater_id));
}

GameRoom::GameRoom(QString creater_id, QString participant_id, QString game_id, QTime creat_time, GameStatus status, int game_result)
{
	this->creater_id = creater_id;
	this->participant_id = participant_id;
	this->game_id = game_id;
	this->creat_time = creat_time;
	this->status = status;
	this->game_result = game_result;
}	

GameRoom::~GameRoom()
{
}

QString GameRoom::getCreaterId()
{
	return creater_id;
}

QString GameRoom::getParticipantId()
{
	return participant_id;
}

QString GameRoom::getGameId()
{
	return game_id;
}

QTime GameRoom::getCreatTime()
{
	return creat_time;
}

GameStatus GameRoom::getStatus()
{
	return status;
}

int GameRoom::getGameResult()
{
	return game_result;
}

void GameRoom::setCreaterId(QString creater_id)
{
	this->creater_id = creater_id;
}

void GameRoom::setParticipantId(QString participant_id)
{
	this->participant_id = participant_id;
}

void GameRoom::setGameId(QString game_id)
{
	this->game_id = game_id;
}

void GameRoom::setCreatTime(QTime creat_time)
{
	this->creat_time = creat_time;
}

void GameRoom::setStatus(GameStatus status)
{
	this->status = status;
}