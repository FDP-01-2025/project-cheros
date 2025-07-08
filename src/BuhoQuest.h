#ifndef BUHOQUEST_H
#define BUHOQUEST_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// Estructura de usuario
struct User {
    string name;
    string key;
};

// Declaraciones de funciones
User Register();
bool Login(User &user);
void Start();
char ChooseLevel(User user);
void SaveAttempts(const User& user, int level, int attempts);
void GuessPlace1(User user);
void GuessPlace2(User user);
void GuessPlace3(User user);
char BackMenu();
void Minigame1(User user);
void Minigame2(User user);
void Minigame3(User user);

#endif