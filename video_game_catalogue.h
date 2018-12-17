#define _video_game_catalogue_
#include<string>

class games{
  int rel_year;
  std::string manufacturer;
  char* genre;
  char rating;            //Used for ESRB Ratings
public:

  //Getter Methods
  void getReleaseYear()
  {
    cout<<"The game was released in the year: "<<rel_year<<endl;
  }
  void getManufacturer()
  {
    cout<<"The game was was produced by:  "<<manufacturer<<endl;
  }
  void getGenre()
  {
    cout<<"The game belongs to genre: "<<genre<<endl;
  }

  //Setter Methods
  virtual void setReleaseYear(int)=0;
  virtual void setManufacturer(string)=0;
  virtual void setGenre(char*)=0;

};

class console:public games{
  char version;
  char console_name;
public:
  void getConsole()
  {
    cout<<console_name;
  }
  void version()
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
