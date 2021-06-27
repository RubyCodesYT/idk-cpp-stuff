#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream InstanceCountFile("instance.txt");
    int instancecount = 0;
    string instanceread;
    
    string text;
    string fileText;
    InstanceCountFile << "0";
    fstream VarFile("vars.txt");
    ifstream readInstance("instance.txt");
    ifstream readInput("vars.txt");
    
    int instance = std::stoi(instanceread);
    if (instancecount == "0") {
        cout << "Enter text" << endl;
        cin >> text;
        VarFile >> text;

        while (getline (readInput, fileText)) {
        
        text = fileText;
    }
    } else {

        cout << "Your var is: " << text << endl;

    }
    
    while (getline (readInstance, instanceread)) {
        InstanceCountFile << "1";
        instancecount = "1";
        InstanceCountFile.close();
    }
    
    
    VarFile.close();

    return 0;

}
