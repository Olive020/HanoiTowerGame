using namespace std;
class bottle
{
	private:
		int x;
		vector<char> water;
	public: 
		bottle();
		bottle(int a);
		bottle(char d,int a);
		void show_w();
		void give_w(bottle &b,int a);
		int bot_l_w();//��ܳѾl�e�q 
		int bot_d_w();//��ܲ~�l�W�h�ۦP�C����ƶq 
		void show_c_w();
		int show_size();	
		/*
		�l�[ 
		*/
		void push_num(int);
		void allpop();
		void pop();
		void push(char);
		char top();
		char get_water(int);
		
};
