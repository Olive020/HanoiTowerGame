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
		int bot_l_w();//顯示剩餘容量 
		int bot_d_w();//顯示瓶子上層相同顏色水數量 
		void show_c_w();
		int show_size();	
		/*
		追加 
		*/
		void push_num(int);
		void allpop();
		void pop();
		void push(char);
		char top();
		char get_water(int);
		
};
