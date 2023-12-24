#include<iostream>
using namespace std;
class student
{
public:
	student(int Id,double Score )
	{
		id = Id;
		score = Score;
	}
	void max(student*students,int size)
	{
		student* maxstudent = &students[0];
		for (int i = 1; i < size;i++)
		{
			if(students[i].score>maxstudent->score)
			{
				maxstudent = &students[i];
			}
		}
		cout << "Ñ§ºÅÎª" << maxstudent->id << endl;
	}

	int id;
	double score;
};
int main()
{

	student* students = new student[5]
	{
		{1,39.4},
		{2, 89.0},
		{3, 95.5},
		{4, 88.0},
		{5, 92.5}
	};
	students->max(students, 5);
	
}