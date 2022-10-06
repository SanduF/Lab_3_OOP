#include <iostream>
using std::string;
class App{
    
};

class Display:public App{
    
};

class Game:public App{

};

class Character : public Game{
public:
    string Name;
    string Class;
    int DPS;
    int HP;
    string Special;

    void Introduction (){
        std::cout <<" -- Name : " << Name << std::endl;
        std::cout <<" -- Class : " << Class << std::endl;
        std::cout <<" -- DPS : " << DPS << std::endl;
        std::cout <<" -- HP : " << HP << std::endl;
        std::cout <<" -- Special : " << Special << std::endl;
    }
    Character(string name , string classs , int dps, int hp ,string special){
        Name = name;
        Class = classs;
        DPS =dps;
        HP = hp;
        Special = special;
    }
};

class Weapon  : public Game{
public:
    string Type;
    int Cost;

    void introduction(){
        std::cout <<" -- Type : " << Type << std::endl;
        std::cout <<" -- Cost : " << Cost << std::endl;
    }
    Weapon(string type,int cost){
        Type = type;
        Cost = cost;
    }
};

class Map : public Game{
public:
    string Nm;

    void inro(){
    std::cout <<"\n -- Name of the map: " << Nm << std::endl;
    }
    Map(string mp){
        Nm = mp;
    }
};

class Teams:public Display{
public:
    int Team;

    void intro(){
    std::cout <<"\n -- Number of teams: " << Team << std::endl;
    }
    Teams(int tm){
        Team = tm;
    }
};

class Menu :public Display{
public:
    string Menui;
    string Pause;

    void intro(){
    std::cout <<"\n -- Continue: " << Menui << std::endl;
    std::cout <<"-- Settings: " << Pause << std::endl;
    }
    Menu(string menu,string pause){
        Menui = menu;
        Pause = pause;
    }
};

class Score :public Display{
public:
    int Scor;

    void intro(){
    std::cout <<"\n -- Score: " << Scor << std::endl;
    }
    Score(int scor){
        Scor = scor;
    }
};

class Skin : public Game{
public:
    string Skins;

    void intro(){
    std::cout <<"\n -- Skin type: " << Skins << std::endl;
    }
    Skin(string skin){
        Skins = skin;
    }
};

class ScoreboarD :public Display{
public:
    int Kills;
    int Assists;
    int Deaths;

    void intro(){
    std::cout <<"\n -- Kills: " << Kills << std::endl;
    std::cout <<" -- Assists: " << Assists << std::endl;
    std::cout <<" -- Deaths: " << Deaths << std::endl;
    }
    ScoreboarD(int kills,int assists,int deaths){
        Kills = kills;
        Assists = assists;
        Deaths = deaths;
    }
};

class Mic : public Game{
public:
    string mic;

    void intro(){
    std::cout <<"\n -- Microphone status: " << mic << std::endl;
    }
    Mic(string mice){
        mic = mice;
    }
};

class Ping :public Display{
public:
    int ping;

    void intro(){
    std::cout <<"\n -- ping : " << ping << std::endl;
    }
    Ping(int poing){
        ping = poing;
    }
};

int main(){
    Character p1 =Character("Jonny Siliverhand","Rocker",45,200,"Inspiration\n");
    p1.Introduction();

    Weapon w1 = Weapon("Rifle",300);
    w1.introduction();

    Map m1 = Map("Anubis");
    m1.inro();

    Teams t1 = Teams(2);
    t1.intro();

    Score s1 = Score(30);
    s1.intro();

    Menu me1 = Menu("Continue","Setttings");
    me1.intro();

    Skin sk1 = Skin("Legendary");
    sk1.intro();

    ScoreboarD sco1 = ScoreboarD(10,4,7);
    sco1.intro();

    Mic mi1 = Mic("Active");
    mi1.intro();

    Ping pin1 = Ping(34);
    pin1.intro();
}