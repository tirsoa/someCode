#include <iostream>
#include <cstdlib> 
#include <time.h>

using namespace std;

class Excusator{
    private:
        string q[8] = {"I swear ","Well, ","Urgh ","Uhmm ","Ehh ","Hmmm ","Yeah ","Hey "};

        string excuses[47]={"it's not a bug it's a feature","it worked on my machine","i tested it and it worked","its production ready","your browser must be caching the old content","that error means it was successful","the client fucked it up","the systems crashed and the code got lost" ,"this code wont go into the final version","it's a compiler issue","it's only a  minor issue","this will take two weeks max","my code is flawless must be someone else's mistake","it worked a minute ago","that was not in the original specification","I was told to stop working on that when something important came up","You must have the wrong version","thats way beyond my paygrade","that's just an unlucky coincidence","i saw the new guy screw around with the systems","our servers must've been hacked","i wasnt given enough time","its the designers fault","it probably wont happen again","your expectations were unrealistic","everythings great on my end","thats not my code","its a hardware problem","its a firewall issue","its a character encoding issue","a third party api isnt responding","that was only supposed to be a placeholder","The third party documentation is wrong","that was just a temporary fix.","We outsourced that months ago."," that value is only wrong half of the time.","the person responsible for that does not work here anymore","That was literally a one in a million error","our servers couldn't handle the traffic the app was recieving","your machines processors must be too slow","your pc is too outdated","I haven't pushed the latest changes yet", "that is a known issue with the programming language","it would take too much time and resources to rebuild from scratch","this is historically grown","users will hardly notice that","I will fix it"};   
    public:
        void generate();
        Excusator();
};

Excusator::Excusator(){
    cout << "Maybe we have a problem here..." << endl;
}
void Excusator::generate(){
    cout << q[rand()%8)];
    cout << excuses[rand()%47]<<".";
}


int main() {
    Excusator excuse;
    srand(time(0));
    excuse.generate();  

    return 0;    
}
