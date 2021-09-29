#include<iostream>
#include<string>
#include <iomanip>
#include <fstream>
using namespace std;
class user;
class post//base class
{
protected://protected member of class or member var
	static int post_likes[10];
	static int post_comment[10];
	string comment[10];
public:
	//make class an abstract class nad made all function virtual 
	//passing user pointer or size of array
	virtual void likes(user* arr, int, int) = 0;

	virtual void do_comment(user* arr, int, int) = 0;

	virtual void show_comment(user* arr, int, int) = 0;
	virtual void show_like(user* arr, int, int) = 0;

	virtual void share_post(user* arr, int, int) = 0;
	virtual void make_post(user* arr, int, int) = 0;

};
class user :private post //class derived 
{
public://public function or member variable 
	string name, id, email, post_id[10], userpost[10];
	string phone_no;
	string last_name;
	string password;
	string confirm_password;
	string gender;
	int age_in_years;
	static int no_post;
	string pageid;
	int seconds = 1;
	int start;

	/*LOADING SCREEN*/

	
	//constructor default
	user();


	//filing to read and write data from file as a friend function

	friend void inputfile(user* obj, int size);

	//input function to input data
	void input(user* arr, int n);
	//function for likes 
	void likes(user* arr, int size, int current);
	//function for comments
	void do_comment(user* arr, int size, int current);

	//functions for show comments
	void show_comment(user* arr, int size, int current);
	//function to show likes
	void show_like(user* arr, int size, int current);
	//function to show post
	void share_post(user* arr, int size, int current);
	//function to makr post
	void make_post(user* arr, int size, int current);
	//function for login
	int login(user* ptr, int size);
	//home page function
	void home_page(user* arr, int size, int current);
	//user's Timeline function
	void timeline(user* arr, int size, int current);
	//fuction to display all friends
	void show_friend(user* arr, int size, int current);
};
