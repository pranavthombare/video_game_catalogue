#define _video_game_catalogue_
#include<string>
#include<iostream>
#include<fstream>
using namespace std;

class games
{
  char* title;
  int rel_year;
  std::string manufacturer;
  char rating;            //Used for ESRB Ratings
public:

  //Getter Methods
  char getTitle()
  {
    return *title;
  }
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

  //Operation methods
  void create(char filename[30])
  {
    string gTitle,gManufacturer,gRating;
    int gReleased;
		cout<<"Enter the data of the format ''game title - Publishing house - year released - price(GBP)''"<<endl;
		cout<<endl;
		cout<<"Enter the game Title \t:";
		cin>>gTitle;
		cout<<endl;
		cout<<"Enter the game manufacturer\t:";
  	cin>>gManufacturer;
  	cout<<endl;
  	cout<<"Enter the release year \t:";
  	cin>>gReleased;
  	cout<<endl;
  	cout<<"Enter the game rating!\t:";
  	cin>>gRating;
  	cout<<endl;

  	ofstream output;
  	output.open(filename,ios::app);
  	if(!output)
  	{
  		cout<<"File cannot be opened!!!"<<endl;
  	}
  	else
  	{
  		output<<"\n"<<gTitle<<"\t\t"<<gManufacturer<<"\t\t "<<gReleased<<"\t\t"<<gRating<<"\t\n";
  		cout<<endl;
  		output.close();
  		cout<<"\nSuccessfully added!!"<<endl;
		}
  }

  void modify(char filename[30])
  {
                string gTitle;
                string grTitle,grManufacturer,grRating;
                int gReleased;
               	int n1=0,n2=0;
                ifstream infile(filename);
                ofstream outfile("temp.txt");
                cout<<"Enter Game title you want to modify\t:";
                cin>>gTitle;
                cout<<endl;
      	        if(!infile)
                 {
                  cout << "Input file failed to open(not exist)\n";
                 }
                else
                {
                  while(infile>>grTitle>>grManufacturer>>gReleased>>grRating)
      	         {
      	        	n1++;
          		    if(grTitle==gTitle)
      		        {
      			           create(filename);
      		        }
                  else
                  {
                    n2++;
                    outfile<<"\n"<<grTitle<<"\t\t"<<grManufacturer<<"\t\t "<<gReleased<<"\t\t"<<grRating<<'\n';
                  }
                }
      	        if(n1==n2)
      	        {
      	        	cout<<"\nThe entered game not exist"<<endl;
      	        	cout<<endl;
      	        }
                   infile.close();
                   outfile.close();
                   remove(filename);
                   rename("temp.txt",filename);
                }
      }

  void search(char filename[30])
  {
    string gTitle,gManufacturer,gRating;
    int gReleased;
    int n1=0,n2=0;
    string c;
    ifstream input;
    cout<<"Enter the Game title you want to search:"<<endl;
    cin>>c;
    cout<<endl;
    input.open(filename,ios::in);
    if(!input)
    {
      cout<<"File does not exist"<<endl;
    }
    else
    {
      while(input>>gTitle>>gManufacturer>>gReleased>>gRating)
      {
				n1++;
				if(gTitle==c)
				{
          cout<<"\n"<<gTitle<<"\t"<<gManufacturer<<"\t"<<gReleased<<"\t"<<gRating<<'\n';
				}
				else{
						n2++;
						}
		}
		if(n1==n2)
		{
			cout<<"\nThe entered Game does not exist"<<endl;
		  cout<<endl;
    }
  	cout<<endl;
    }
  }

  void remove(char filename[30])
  {
    int i=0,n1=0,n2=0;
    string gTitle,gManufacturer,gRating;
    int gReleased;
    string gName;
    cout<<"Enter game to be deleted\t :";
    cin>>gName;
    cout<<endl;
    for(i=0;gTitle[i]!='\0';i++);
    ifstream input;
  	ofstream output;
    input.open(filename);
    if(!input)
    {
      cout << "Input file not exist ";
    }
    else
  	{
      output.open("temp.txt");
      while(input>>gTitle>>gManufacturer>>gReleased>>gRating)
  	  {
  	 	n1++;
    	if(gTitle==gName)
  		{
     	  cout<<"\nThe entry has been deleted"<<endl;
  		}
      else
      {
        n2++;
        output <<"\n"<<gTitle<<"\t\t"<<gManufacturer<<"\t\t" <<gReleased<<"\t\t"<<gRating<<"\t\t"<<endl;
      }
  	 }
  	 if(n1==n2)
  	 {
  	 	cout<<"Cannot delete this entry"<<endl;
  	 }
    input.close();
    output.close();
    remove(filename);
    rename("temp.txt",filename);
    }
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
