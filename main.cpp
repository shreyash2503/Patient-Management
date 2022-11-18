#include <bits/stdc++.h>
using namespace std;

// ! Implementing a Priority queue for hospital Patient Management 
// ! Patient will register and will get a number assigned according to his emergency 
// ! The priority queue in this implementation uses Heap 
// ! We will make use of Min Priority Queue and Min Heap for the implementation 
// ! The patient with lower priority needs immediate medical assitance 
// ! In the input patient data will be entered and the output will be a queue of patients in decreasing severity



class Patient
{
public:
	string name;
	int priority;
	string disease;
	int numberAssigned;
	Patient(string name,string disease)
	{
		this->name = name;
		this->disease = disease;
		if(disease.find("heart") != string::npos)
		{
			this->priority = 1;
		}
		else if(disease.find("bleeding") != string::npos)
		{
			this->priority = 2;
		}
		else if(disease.find("breath") != string::npos)
		{
			this->priority = 3;
		}
		else
		{
			this->priority = 5;
		}

	}
	Patient(int priority, int numberAssigned)
	{
		this->priority = priority;
		this->numberAssigned = numberAssigned;
	}

};

class PriorityQueue
{
public:
	vector<Patient> pq;
	int getSize()
	{
		return pq.size();
	}
	bool isEmpty()
	{
		return pq.size() == 0 ? true : false;
	}
	Patient getMin()
	{
		return pq[0];
	}
	// void insert(Patient p)
	// {

	// }
};

int main()
{
	Patient p("Shreyash Tekade", "heart attack");
	cout<<p.priority<<endl;
	cout<<p.name<<endl;

}