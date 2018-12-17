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
  string insert_data;
  unsigned int curLine = 0;

  console c1;
  pc p1;
  mobile m1;

  ifstream inFile;
  ofstream outFile;
  inFile.open("video_game_catalog.txt");   //used to read from files

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

            cout<<"Search by : \n1. Device played on (PC, Console, Mobile) \n2. Production house(EA, Ubisoft, Activision etc) \n3. All \n4. Go to previous menu";
            cin>>search_choice;
            switch(search_choice)
            {
              case 1: system("clear");
                      cout<<"\n Enter the game Device you want to search by: ";
                      cin>>device;
                      if(device=="PC" || device=="pc" || device=="Pc")
                      {
                        inFile.open("pc.txt");
                      }
                      else if(device=="console" || device=="Console")
                      {
                        inFile.open("console.txt");

                      }
                      else if(device=="mobile" || device=="Mobile")
                      {
                        inFile.open("mobile.txt");

                      }

              break;

              case 2: system("clear");
                      cout<<"\n Enter the production house you want to search: ";
                      cin>>production_house;

              break;

              case 3: system("clear");
                      cout<<"All the data is as follows: \n\n";

              break;

              case 4: system("clear");
                      goto comeback;
              break;
            }
    break;

    case 2: system("clear");

    break;

    case 4: system("clear");
            outFile.open("video_game_catalogue.dat",ios::app);
            writeAgain:
            insert_data = new char[LINE_LENGTH];
            cout << "Enter the data of the format ''game title - Publishing house - year released - price(GBP)'' : \n" ;
            cout<<"Game Title: ";
            char gttle[20];
            getline(cin,gttle);
            c1.setTitle(gttle);
            // write inputted data into the file.
            outFile << c1.getTitle() <<endl;
            char write_again;
            cout<<"\n Do you want to enter new data(Y/n)?";
            cin>>write_again;
            if(write_again == 'Y' || write_again == 'y')
            goto writeAgain;
            else
            inFile.close();
            goto comeback;
    break;

    case 5: system("clear");
            cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tThank you\n\n\n\n\n\n\n\n";
            inFile.close();
    break;

  }

}
