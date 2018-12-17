/* -------------------------------------------
            ECS793P-Coursework
        Title- Video game catalogue
          Author- Pranav Thombare
--------------------------------------------*/

#include "video_game_catalogue.h"
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

#define LINE_LENGTH 100

using namespace std;

int main()
{

  int choice;
  string device;
  char* production_house;
  char* insert_data;
  unsigned int curLine = 0;
  int platform;
  games * g[] = {new console(), new pc(), new mobile()};
  games g1;
  ifstream inFile;
  ofstream outFile;
  inFile.open("video_game_catalog.txt");   //used to read from files

  system("clear");
  cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWelcome to Video game inventory\n\n\n\n\n\n\n";
  cout<<"Which platform would you want to look at? 1.PC, 2.Console or 3.Mobile";
  cin>>platform;
  switch(platform)
  {
    case 1:  system("clear");
                cout<<"What would you like to do?\n";
                comeback1:
                cout<<"1. Search \n2. Edit \n3. Delete \n4. Insert \n5. Quit";
                cin>>choice;

                switch(choice)
                {
                  case 1: system("clear");            //Used to clear the terminal window
                          int search_choice;
                          cout<<"1. Search by Game Name or 2.Go to previous menu \n";
                          cin>>search_choice;
                          switch(search_choice)
                          {
                            case 1: system("clear");
                                    g1.search("pc.dat");
                            break;

                            case 2: system("clear");
                                    goto comeback1;
                            break;

                            default: cout<<"Wrong choice";
                                     goto comeback1;
                            break;
                          }
                  case 2: system("clear");
                          g1.modify("pc.dat");
                          goto comeback1;

                  break;

                  case 3: system("clear");
                          g1.remove("pc.dat");
                          goto comeback1;
                  break;

                  case 4: system("clear");
                          g1.create("pc.dat");
                          goto comeback1;
                  break;

                  case 5: system("clear");
                          cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tThank you\n\n\n\n\n\n\n\n";
                          inFile.close();
                  break;
                }
    break;

    case 2:  system("clear");
                cout<<"What would you like to do?\n";
                comeback2:
                cout<<"1. Search \n2. Edit \n3. Delete \n4. Insert \n5. Quit";
                cin>>choice;

                switch(choice)
                {
                  case 1: system("clear");            //Used to clear the terminal window
                          int search_choice;
                          cout<<"1. Search by Game Name or 2.Go to previous menu \n";
                          cin>>search_choice;
                          switch(search_choice)
                          {
                            case 1: system("clear");
                                    g1.search("console.dat");
                            break;

                            case 2: system("clear");
                                    goto comeback2;
                            break;

                            default: cout<<"Wrong choice";
                                     goto comeback2;
                            break;
                          }
                  case 2: system("clear");
                          g1.modify("console.dat");
                          goto comeback2;

                  break;

                  case 3: system("clear");
                          g1.remove("console.dat");
                          goto comeback2;
                  break;

                  case 4: system("clear");
                          g1.create("console.dat");
                          goto comeback2;
                  break;

                  case 5: system("clear");
                          cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tThank you\n\n\n\n\n\n\n\n";
                          inFile.close();
                  break;
                }
    break;

    case 3:  system("clear");
                cout<<"What would you like to do?\n";
                comeback3:
                cout<<"1. Search \n2. Edit \n3. Delete \n4. Insert \n5. Quit";
                cin>>choice;

                switch(choice)
                {
                  case 1: system("clear");            //Used to clear the terminal window
                          int search_choice;
                          cout<<"1. Search by Game Name or 2.Go to previous menu \n";
                          cin>>search_choice;
                          switch(search_choice)
                          {
                            case 1: system("clear");
                                    g1.search("mobile.dat");
                            break;

                            case 2: system("clear");
                                    goto comeback3;
                            break;

                            default: cout<<"Wrong choice";
                                     goto comeback3;
                            break;
                          }
                  case 2: system("clear");
                          g1.modify("mobile.dat");
                          goto comeback3;

                  break;

                  case 3: system("clear");
                          g1.remove("mobile.dat");
                          goto comeback3;
                  break;

                  case 4: system("clear");
                          g1.create("mobile.dat");
                          goto comeback3;
                  break;

                  case 5: system("clear");
                          cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tThank you\n\n\n\n\n\n\n\n";
                          inFile.close();
                  break;
                }
    break;
  }
}
