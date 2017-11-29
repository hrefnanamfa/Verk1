#include <iostream>
#include <fstream>

using namespace std;


class SuperHero
{
    private:
        string name;
        int age;
        char super;

        bool verbose;

    public:
        SuperHero();
        SuperHero(string name, int age, char super);

        void setVerbose(bool flag);

        friend ostream& operator<<(ostream& out, const SuperHero& hero);
        friend istream& operator>>(istream& in, SuperHero& hero);
};

SuperHero::SuperHero() {
    name = "";
    age = 0;
    super = 'n';
}

SuperHero::SuperHero(string name, int age, char super) {
    this->name = name;
    this->age = age;
    this->super = super;
}

ostream& operator<<(ostream& out, const SuperHero& hero) {
    if(hero.verbose) {
        out << "Name: ";
    }
    out << hero.name << endl;

    if(hero.verbose) {
        out << "Age: ";
    }
    out << hero.age << endl;

    if(hero.verbose) {
        out << "Superpower: ";
        if (hero.super == 'f')
            out << "Flying";
        else if (hero.super == 'g')
            out << "Giant";
        else if (hero.super == 'h')
            out << "Hacker";
        else if (hero.super == 'n')
            out << "None";
        else
            out << "Weakling";
    } else { out << hero.super;}

    return out;
}

void SuperHero::setVerbose(bool flag) {
    verbose = flag;
}

istream& operator>>(istream& in, SuperHero& hero) {

    cout << "Enter name: ";
    in >> hero.name;

    cout << "Enter age: ";
    in >> hero.age;

    cout << "Enter superpower: ";
    in >> hero.super;

    return in;
}


int main()
{
    ofstream fout;
    ifstream fin;

    SuperHero hero;

    hero.setVerbose(false);
    fout.open("hetjur.txt", ios::app);

    cin >> hero;

    fout << hero << endl;

    fout.close();

    fin.open("hetjur.txt");

    string s;

    if(fin.is_open()) {
        fin >> hero;
    }
    hero.setVerbose(true);
    cout << hero;

    return 0;
}
