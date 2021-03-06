#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
/*----------------------------------------------------------------------------*/
/*class created in order to store objects and their locations (real world)*/
class Item_tag {
	public:
		string get_name() 													{ return name; 		 }
		string get_location() 											{ return location; }
		void set_name(string& s)										{ name = s;        }
		void set_location(string& l)				  			{ location = l;		 }
	private:
		string name;
		string location;
};
/*----------------------------------------------------------------------------*/

//various declarations
extern string username;
extern string prompt;
extern vector<Item_tag> items;
extern string item_name;
extern string delimiters;
extern Item_tag new_item;
extern ofstream save;
extern ifstream load;

// program function
bool ItemTracker(vector<Item_tag>&);

/*----------------------------------------------------------------------------*/
/* adds Item_tag to vector, provided that it is empty, and there are no other
elements with the same name */

void add(vector<Item_tag>&, Item_tag&);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*deletes Item_tag from vector if the item exists, and error message is
printed in itemtracker function if vector is empty.*/

void del(vector<Item_tag>& , string&);
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
//prints out location of object, if object exists, and if vector is not empty

void location(vector<Item_tag>&, string&);
/*----------------------------------------------------------------------------*/
//prints out all object names

void view(vector<Item_tag>& );
/*----------------------------------------------------------------------------*/

void change(vector<Item_tag>&, string&);

/*----------------------------------------------------------------------------*/

void menu_options();

//self explanatory

bool is_valid(string&); //valid string?
