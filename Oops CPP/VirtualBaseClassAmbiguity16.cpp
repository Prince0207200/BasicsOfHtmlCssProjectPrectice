#include<iostream>
using namespace std;
class Student{
	protected:
		int roll_number;
	public:
		void setRoll(int r){
			roll_number=r;
		}
};

class Marks : virtual public Student{
	protected:
		int maths;
		int physics;
	public:
		void setMarks(int m,int n){
			maths=m;
			physics=n;
		}
};
class Score:virtual public Student{
	protected:
		int score;
	public:
		void setscore(int sc){
			score=sc;
		}
};
class Result:public Marks,public Score{
	public:
	void show(){
	int	result=maths+physics+score;
	cout<<"The student rollno "<<roll_number<<endl
		<<"got  Marks in maths is "<<maths<<endl
		<<" and physics is "<<physics<<endl
		<<" and he score  "<<score<<" point in games"<<endl<<" and total result is "<<result<<" out of 210"<<endl;
	}
};
int main(){
	Result re;
	re.setRoll(34);
	re.setMarks(90,99);
	re.setscore(9);
	re.show();
}
