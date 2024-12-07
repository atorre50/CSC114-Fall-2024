/*
=============================================================
Author : Alejandra Torres
Class : csc 114
Class Section : 401
Date : 11/28/2024
Assignment : Final Project

I wrote all the code submitted, and I have provided citations and references where appropriate.

==============================================================
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//HP or the player's health status
void changeHP (int currentHP, int maxHP, int amount) {
    currentHP = currentHP + amount;
    
        if (currentHP > maxHP) {
            currentHP = maxHP;  
        }
        else if (currentHP < 0){
            currentHP = 0; 
        }
        
    cout << "your current HP is:  " << currentHP << " / 100" << endl;    
}

//option to start or exit game before it begins
bool yesno(string options) {
    
    while (true) {
    cout << "Would you like to start the game? Yes or no?: ";
    cin >> options;
    
        if (options == "yes" || options == "Yes") {
            cout << "Starting game..." << endl;
                return true;
        }
    
        else if(options == "no" || options == "No") {
            cout << "Exiting game.." << endl;
                return false;
        }
    
        else {
            cout << "Invalid entry, try again." << endl;   
            }
    }
}

//Option to flee or engage in fight
bool FleeOrAttack (string input) {
    
    while (true){
        cout << "do you flee or proceed to attack?" << endl;
        cin >> input;
        if (input == "attack" || input == "Attack") {
            cout << "You are now engaging in a fight.." << endl;
                return true;
            }
        else if (input == "flee" || input == "Flee") {
            cout << "You have successfully fled away" << endl;
                return false;
            }
        else {
            cout << "Invalid entry try again" << endl;
            }
    }
}

//picking up items
bool GrabOrDrop (string options, vector<string>& inventory, string item) {  //
    while (true) {    
        cout << "will you take the " << item << ". Yes or no?" << endl;
        cin >> options;
        if (options == "yes" || options == "Yes") {
            if (inventory.size() < 5) { // limiting the inventory to 5 items
                inventory.push_back(item);
                cout << "You have picked up the " << item << endl;
                return true;
            }
             else {
                cout << "Your inventory is full. you cannot take the item" << endl;
                return false;
            }
        }    
        else if (options == "no" || options == "No") {
            cout << "You have left the " << item << endl;
                return false;   
        }    
        else {
            cout << "Invalid entry try again" << endl;
        }
    }    
}


int main () {
    
    //variables
    int HP = 100; //Starting off with full HP
    int maxHP = 100;
    string item;
    
    string fleeAttack;
    string YNitem; //yes or no to pick up an item
    
     vector<string> inventory = {"knife", "talisman", "baseball bat"}; //Inventory!!
    
    //GAME START!! Either begins the game or ends it
    string option;
        if (!yesno(option)) {
            return 0;
        }
    
      
    //storyline
    cout << "You're about to embark on a journey to a haunted house. " << endl << "before you enter, you look over your inventory." << endl;

    cout << "you have a.." << endl;
    
    //Researched on the use of size_t
    //https://stackoverflow.com/questions/502856/whats-the-difference-between-size-t-and-int-in-c
    //https://stackoverflow.com/questions/2550774/what-is-size-t-in-c
    for (size_t i = 0; i < inventory.size(); ++i) {
        cout << inventory[i];
        if (i < inventory.size() - 1) cout << ", "; 
    }
    
    cout << "\nYou enter the haunted house...it's cold, and you hear various wood creaking noises." << endl << "you proceed to walk further in and you see La Llorona, the mexican ghost lady that weeps for her dead children" << endl;
    cout << "She looks straight at you with intent to harm," << endl;
    
    
    //attack or flee
        if (FleeOrAttack(fleeAttack)) {
            cout << "You decide to courageously fight La Llorona!" << endl;
            cout << "she uses the move: Screech. " << endl;
            
            changeHP(HP, maxHP, -25);
            
            cout << "how will you counter attack? ";
            cout << "will you use... " << inventory[0] << ", " << inventory[1] << ", or " << inventory[2] << "? ";
            
            string choice;
            
            cin >> choice;
            
                if (choice == "knife" || choice == "Knife") {
                    cout << "You decide to use your knife ";
                    cout << "You attempt to slash but goes right through her body seemingly causing no damage. She's furious and will definitely not let you out alive.. " << endl;
                    cout << "GAME OVER" << endl;
                    return 0;
                }
                else if (choice == "talisman" || choice == "Talisman") {
                    cout << "You decide to use your talisman " << endl;
                    cout << "You hold it up in the air and hope for the best, La Llorona schreeches and weeps and eventually hurriedly drifts away from you" << endl;
                }
                else if (choice == "baseball bat" || choice == "Baseball Bat") {
                    cout << "You decide to use your baseball bat ";
                    cout << "You attempt to wack La Llorona in the head with but she catches the bat mid-air and breaks it in half. She's furious, and she won't let you out alive..." << endl;
                    cout << "GAME OVER" << endl;
                    return 0;
                }
         else {
            cout << "Invalid choice! You hesitated, and she attacked!" << endl;
            cout << "GAME OVER" << endl;
            return 0;
        }
            
        cout << "But be warned, she might appear again!!!!" << endl;
        }
    
    
    cout << "you continue walking further into the home" << endl;
            
    //attaining items
    item = "axe";
    cout << "you come across a rusty " << item << endl;
    
    GrabOrDrop(YNitem,inventory,item);
    
    cout << "Your current inventory: ";
    for (const string& i : inventory) { 
        cout << i << " ";
    }

    cout << "\nAfter facing the wrath of La Llorona, you stumble upon a hidden door at the end of a long corridor" << endl;
    cout << "You open the door and find yourself standing before what seemed like a portal" << endl;

    cout << "Do you choose to Enter or Stay?: ";
    string choice;
    cin >> choice;

        if (choice == "enter" || choice == "Enter") {
            cout << "Summoning all your courage, you step into the portal. A blinding light engulfs you, and you feel yourself being transported..." << endl;
            cout << "Suddenly, you wake up in your own room, safe and sound. Was it all just a dream? Or did you truly survive the haunted house?" << endl;
            cout << "Congratulations!!!! You've made it out alive. THE END." << endl;
        } 
        else if (choice == "stay" || choice == "Stay") {
            cout << "You decide to remain in the haunted house, determined to uncover all its secrets." << endl;
            cout << "But as the portal fades away, you realize you've trapped yourself with no escape." << endl;
            cout << "La Llorona's chilling laughter echoes through the house. Perhaps staying wasn't the best choice..." << endl;
            cout << "GAME OVER. THE END." << endl;
        } 
        else {
            cout << "Unable to decide, you hesitate. The portal vanishes, and the house consumes you in darkness." << endl;
            cout << "La Llorona's shadow looms over you... GAME OVER!! THE END." << endl;
}


    
}
