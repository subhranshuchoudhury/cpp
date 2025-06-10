#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player {
private:
    string name;
    string role;  // Batsman, Bowler, All-Rounder, Wicket-Keeper
    int jerseyNumber;
public:
    void getData() {
        cout << "Enter player name: ";
        getline(cin, name);
        cout << "Enter role: ";
        getline(cin, role);
        cout << "Enter jersey number: ";
        cin >> jerseyNumber;
        cin.ignore();
    }

    void display() const {
        cout << "Name: " << name << ", Role: " << role << ", Jersey No: " << jerseyNumber << endl;
    }
};

class Team {
private:
    string teamName;
    vector<Player> players;
public:
    void createTeam() {
        cout << "Enter team name: ";
        getline(cin, teamName);
        int n;
        cout << "Enter number of players: ";
        cin >> n;
        cin.ignore();

        for (int i = 0; i < n; ++i) {
            cout << "\nEnter details for player " << i+1 << ":\n";
            Player p;
            p.getData();
            players.push_back(p);
        }
    }

    void showTeam() const {
        cout << "\nTeam: " << teamName << "\nPlayers:\n";
        for (const auto& p : players) {
            p.display();
        }
    }
};

int main() {
    Team t;
    t.createTeam();
    t.showTeam();
    return 0;
}
