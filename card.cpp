#include "card.h"

// TODO: Implement here the methods of Card, PointCard, and MoveCard
Card::Card(int id, string text)
{
    this->id = id;
    this->text = text;
}

int Card::getId()
{
    return id;
}

string Card::getText()
{
    return text;
}

PointCard::PointCard(int id, string text, int points) : Card(id,text)
{
    this->points = points;
}

void PointCard::cardAction(Player* player, Player* opponent)
{
    player->addPoints(points);       //adds the card's points from the player
    opponent->removePoints(points);        //removes the exact same amount to the opponent's points
}

MoveCard::MoveCard(int id, string text, MoveType type) : Card(id,text)
{
    this->type = type;
}

void MoveCard::cardAction(Player* player, Player* opponent)
{
    switch(type)                //Depending on the MoveType, do one of the following:
    {
    case 0:                     //If MoveType = DoNothing then do nothing!
        break;
    case 1:                     //If MoveType = PlayTwice
        opponent->missNextTurn();   //Call the opponent's missNextTurn() function!
        break;
    case 2:
        player->missNextTurn(); //If MoveType = MissTurn
        break;                      //Call the player's missNextTurn() fucntion!
    }
}
