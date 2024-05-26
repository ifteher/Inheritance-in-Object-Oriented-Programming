#include<iostream>
using namespace std;
class father

{
    char name[10];
    int age;
public:
    void get();
    void show();
};
///for father
void father :: get ( )
{
    cout << "your father name please:";
    cin >> name;
    cout << "Enter the age:";
    cin >> age;
}
void father :: show ()
{
    cout<< "\nIn my father's name is: " <<name<< "  In my father's age is:"<<age<<endl;
}
///mother er jonno.
class mother
{
    char name[10];
    int age;
public:
    void get();
    void show();
};
void mother ::get ( )
{
    cout << "your mother name please:";
    cin >> name;
    cout << "Enter mother the age:";
    cin >> age;
}
void mother :: show ( )
{
    cout<< "\nIn my mother's name is: " <<name<< "  In my mother's age is:"<<age<<endl;
}

///daughter er jonno.
class daughter: public father,public mother ///derived cls inheriting.
{
    char name[10];
    int age;
public:
    void get();
    void show();
};
void daughter :: get ( )
{
    father::get();
    mother::get();
    cout << "your daughter's name please:";
    cin >> name;
    cout << "Enter the daughter's age:";
    cin >> age;
}
void daughter :: show ( )
{
    father::show();
    mother::show();
    cout<< "\nIn my daughter's name is: " <<name<< "  In my daughter's age is: "<<age<<endl;
}
int main()
{
    daughter d1;
    d1.get();
    d1.show();
}
