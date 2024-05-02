#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {

//My Code Is From Here
if(dynamic_cast<Fireball*>(spell)){
    dynamic_cast<Fireball* >(spell)->revealFirepower();
}

else if(dynamic_cast<Frostbite*>(spell)){
    dynamic_cast<Frostbite* >(spell)->revealFrostpower();
}

else if(dynamic_cast<Thunderstorm*>(spell)){
    dynamic_cast<Thunderstorm* >(spell)->revealThunderpower();
}

else if(dynamic_cast<Waterbolt*>(spell)){
    dynamic_cast<Waterbolt* >(spell)->revealWaterpower();
}
else{
    string inpstr = spell->revealScrollName();
    string jrnlstr = SpellJournal::read();
    int inplen = inpstr.length();
    int jrnlen = jrnlstr.length();
    vector<vector<int>>Lcs(inplen+1 , vector<int>(jrnlen+1 ,0));
    for (int i=1 ; i<=inplen ; i++){
        for(int j=1 ; j<=jrnlen ; j++){
        if(inpstr[i-1]==jrnlstr[j-1]){
         Lcs[i][j]= Lcs[i-1][j-1] + 1; 
        }
        else { // Characters differ
                Lcs[i][j] = max(Lcs[i - 1][j], Lcs[i][j - 1]);
            }
        }
        }
    cout<<Lcs[inplen][jrnlen]<<endl;
}
}

//till here

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}