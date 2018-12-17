#define _video_game_catalogue_
#include<string>
#include<iostream>
using namespace std;

class games
{
  char* title;
  int rel_year;
  std::string manufacturer;
  char rating;            //Used for ESRB Ratings
public:

  char getTitle()
  {
    return *title;
  }
  //Getter Methods
  int getReleaseYear()
  {
    return rel_year;
  }
  string getManufacturer()
  {
    return manufacturer;
  }

  //Setter Methods
  void setTitle(char* title)
  {
    this->title= title;
  }
  void setReleaseYear(int year)
  {
    rel_year = year;
  }
  void setManufacturer(string manufc)
  {
    manufacturer = manufc;
  }

};

class console:public games
{
  char version;
  char console_name;
public:
  void getConsole()
  {
    cout<<console_name;
  }
  void getVersion()
  {
    cout<<version;
  }

  //setter methods

};

class pc:public games
{
  char version;
  char os;
public:

};

class mobile:public games
{
  int size;
  char version;
  char os;
public:

};
