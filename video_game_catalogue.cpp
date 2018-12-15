/* -------------------------------------------
            ECS793P-Coursework
        Title- Video game catalogue
          Author- Pranav Thombare
--------------------------------------------*/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

#define FILE_NAME = "video_game_catalog.txt";

using namespace std;

class games{
  int rel_year;
  string manufacturer;
  char genre;
  char rating;            //Used for ESRB Ratings
public:

  //Getter Methods
  void getReleaseYear();
  void getManufacturer();
  void getGenre();
  void getRating();

  //Setter Methods
  void setReleaseYear();
  void setManufacturer();
  void setGenre();
  void setRating();

};

class console:public games{
  int size;
  char version;
  char console_name;
public:

};

class pc:public games
{
  int size;
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

int main()
{

  int choice;
  string game_title;
  string production_house;


  system("clear");
  cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWelcome to Video game inventory\n\n\n\n\n\n\n";
  cout<<"What would you like to do?\n";
  comeback:
  cout<<"1. Search \n2. Edit \n3. Delete \n4. Insert \n5. Quit";
  cin>>choice;

  switch(choice)
  {
    case 1: system("clear");            //Used to clear the terminal window
            int search_choice;
            cout<<"Search by : \n1. Game Title \n2. Production house(EA, Ubisoft, Activision etc) \n3. All \n4. Go to previous menu";
            cin>>search_choice;
            switch(search_choice)
            {
              case 1: system("clear");
                      cout<<"\n Enter the game title you want to search: ";
                      cin>>game_title;
              break;

              case 2: system("clear");
                      cout<<"\n Enter the game title you want to search: ";
                      cin>>production_house;
              break;

              case 3: system("clear");
              break;

              case 4: system("clear");
                      goto comeback;
              break;
            }
    break;

    case 2: system("clear");
    break;

    case 4: system("clear");
    break;

    case 5: system("clear");
            cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tThank you\n\n\n\n\n\n\n\n";
    break;

  }

}
