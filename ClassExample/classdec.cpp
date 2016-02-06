#include <iostream> // io stuff
#include <string>
using namespace std; //so I don't have to keep typing crap

class Person {
    public: 
        string getName();
        bool getMale();
        bool getFemale();
        Person(string myname, bool male); //Constructor
    private:
        string name;
        string id;
        string address;
        bool male; //flase is female
}; //need this at the end of all classes

Person::Person(string myname, bool male) { // always void?
    //cout << "man object is being created with name " << myname << endl;
    cout << male << endl;
    this->male = male;
    name = myname;
}
string Person::getName() {
    return name;
}
bool Person::getMale() {
    return male;
}
bool Person::getFemale() {
    return !male;
}
int main() { 
    Person myman("brad", true); //create man
    cout << myman.getName() << endl;
    cout << myman.getMale() << endl;
    cout << myman.getFemale() << endl;
}
