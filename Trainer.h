//Nicholas Lumiere
//CS1300 UCB 
//Final Project - Move Class

#ifndef TRAINER_H
#define TRAINER_H
using namespace std;
#include <vector>
#include <string>
#include "Pokemon.h"
#include "Move.h"
#include "Item.h"

class Trainer{
    private:
        //Name of trainer
        string playerName;
        //Vector of pokemon belonging to trainer
        vector<Pokemon> pokemon;
        //Vector of items belonging to trainer
        vector<Item> items;
        //Vector of strings (badges) belonging to trainer
        vector<string> badges;
        //Number of steps trainer has taken
        int steps;
        //Power rating of trainer
        double power;
        //trainer's x Position
        int xPos;
        //trainer's y position
        int yPos;
        //If the trainer is at a pokemon center
        bool atCenter;
    public:
        //Default constructor for Trainer
        Trainer();
        //Parameterized constructor for trainer
        Trainer(string, int, int);

        //Returns the name of trainer
        string getName();
        //Returns the vector of pokemon belonging to the trainer
        vector<Pokemon> getPokemon();
        //Returns the pokemon at a given index
        Pokemon getPokemonAt(int i);
        //Returns the items of the trainer
        vector<Item> getItems();
        //Returns the item at a certain index
        Item getItemAt(int i);
        //Returns the badges belonging to the trainer
        vector<string> getBadges();
        //Returns the number of badges
        int getNumBadges();
        //Returns the number of steps
        int getSteps();
        //Returns the power of the trainer
        double getPower();
        //Returns the x position
        int getXPos();
        //Returns y position
        int getYPos();

        //Changes name
        void setName(string);
        //Adds a pokemon to the back of the trainer's roster
        int addPokemon(Pokemon);
        //Adds an item to the trainer's inventory
        void addItem(Item);
        //Adds a badge
        void addBadge(string);
        //Moves the trainer up
        void moveUp();
        //Moves the trainer down
        void moveDown();
        //Moves the trainer left
        void moveLeft();
        //Moves the trianer right
        void moveRight();

        //Swaps two pokemon
        void swapPokemon(int, int);
};
#endif