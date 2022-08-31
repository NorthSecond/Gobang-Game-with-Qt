/**
 * @file gameroom.cpp
 * @author yangyf83(yangyf83@aliyun.com)
 * @brief the class of gameroom
 * @version 0.1
 * @date 2022-08-31
 * 
 * @copyright Copyright (c) 2022 with MIT License.
 * 
 */

#include "gameroom.h"

GameRoom::GameRoom(QString creater_id)
{
    this->creater_id = creater_id;
    this->created_time = QTime::currentTime();
    this->participator_id = "";
    // generate a unique id for the game
    this->room_id = QString::number(created_time.hour()) + QString::number(created_time.minute()) + QString::number(created_time.second()) + QString::number(created_time.msec() + qHash(creater_id));
    this->status = GameRoomStatus::Fresh;
    this->result = GameResult::None;
}

GameRoom::~GameRoom()
{

}

QString GameRoom::getCreaterId()
{
    return this->creater_id;
}

QString GameRoom::getParticipatorId()
{
    return this->participator_id;
}

QString GameRoom::getRoomId(){
    return this->room_id;
}

GameRoomStatus GameRoom::getStatus(){
    return this->status;
}

GameResult GameRoom::getResult(){
    return this->result;
}

void GameRoom::setCreaterId(QString creater_id){
    this->creater_id = creater_id;
}

void GameRoom::setParticipatorId(QString participator_id){
    this->participator_id = participator_id;
}

void GameRoom::setStatus(GameRoomStatus status){
    this->status = status;
}

void GameRoom::setResult(GameResult result){
    this->result = result;
}