/**
 * @file gameroom.h
 * @author yangyf83(yangyf83@aliyun.com)
 * @brief the class of gameroom
 * @version 0.1
 * @date 2022-08-31
 * 
 * @copyright Copyright (c) 2022 with MIT License.
 * 
 */

#pragma once

#include <QObject>
#include <QTime>

enum class GameRoomStatus {
    Fresh,      // fresh game room
    Waiting,    // waiting for players to join
    Playing,    // game is in progress
    Finished    // game is finished
};

enum GameResult {
    None,               // no result
    Draw,               // draw
    creater_won,        // the creater won
    participant_won     // the participant won
};

class GameRoom
{
private:
    QString creater_id;         // the id of the creater of the room
    QString participator_id;    // the id of the participator of the room
    QString room_id;            // the id of the room


    GameRoomStatus status;      // the state of the room
    GameResult result;          // the result of the game

    QTime created_time;         // the time when the room was created
public:
    GameRoom(QString creater_id);
    ~GameRoom();

    QString getCreaterId();
    QString getParticipatorId();
    QString getRoomId();
    GameRoomStatus getStatus();
    GameResult getResult();
    QTime getCreatedTime();

    void setCreaterId(QString creater_id);
    void setParticipatorId(QString participator_id);
    void setStatus(GameRoomStatus status);
    void setResult(GameResult result);
};

