#include<iostream>
#include<string>
using namespace std;
class People
{
public:
People(){}
People(int age,string name):age(age),name(name){}
void print()
{
   cout<<age<<"\t"<<name<<endl;
}
protectd:
int age;
string name;

int main()
{
   People p1(18,"allen");
   p1.print();
   cout<<"this is a cpp demo"<<endl;
   return 0;
	
}
