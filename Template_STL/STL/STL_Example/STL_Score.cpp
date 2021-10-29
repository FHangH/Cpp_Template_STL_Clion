//
// Created by FHang on 2021/10/20 14:26
//
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

using namespace std;

class Player
{
public:
    string playerName;
    int playerScore;

    Player(string name, int score)
    {
        this->playerName = name;
        this->playerScore = score;
    }
};

/*Test Code*/
/*void printVector(vector<Player> &v_Player)
{
    for (vector<Player>::iterator it = v_Player.begin(); it != v_Player.end(); ++it)
    {
        cout << "Name: " << (*it).playerName << " Score: " << (*it).playerScore << endl;
    }
    cout << endl;
}

void printPlayerScores(vector<Player> &v_Player, deque<int> &d_Scores)
{
    for (vector<Player>::iterator v_it = v_Player.begin(); v_it != v_Player.end(); ++v_it)
    {
        cout << v_it->playerName << endl;
        for (deque<int>::iterator d_it = d_Scores.begin(); d_it != d_Scores.end(); ++d_it)
        {
            cout << *d_it << " ";
        }
        cout << endl;
    }
}*/

/*Program Code*/
vector<Player> createPlayers()
{
    int score = 0;
    string nameSeed = "ABCDE";
    vector<Player> v_Player;

    for (int i = 0; i < 5; ++i)
    {
        string name = "player";
        name += nameSeed[i];
        Player player(name, score);
        v_Player.push_back(player);
    }

    // printVector(v_Player);

    return v_Player;
}

int playerScoreSortAndDeal(deque<int> &d_Scores)
{
    float averageScore;
    int allScore = 0;

    std::sort(d_Scores.begin(), d_Scores.end());
    d_Scores.pop_front();
    d_Scores.pop_back();

    for (deque<int>::iterator it = d_Scores.begin(); it != d_Scores.end(); ++it)
    {
        allScore += (*it);
    }
    averageScore = allScore / d_Scores.size();
    return averageScore;
}

void setPlayerScore(vector<Player> &v_Player)
{
    for (vector<Player>::iterator it = v_Player.begin(); it != v_Player.end(); ++it)
    {
        deque<int> d_Scores;

        for (int i = 0; i < 10; ++i)
        {
            int score = (rand() % 71) + 30;
            d_Scores.push_back(score);
        }

        it->playerScore = playerScoreSortAndDeal(d_Scores);

        // printPlayerScores(v_Player, d_Scores);
    }
}

void showPlayerAverageScore(vector<Player> &v_Player)
{
    for (vector<Player>::iterator it = v_Player.begin(); it != v_Player.end(); ++it)
    {
        cout << "Name: " + it->playerName << " AverageScore: " << it->playerScore << endl;
    }
}

int main()
{
    srand((unsigned int) time(NULL));

    vector<Player> v_Player = createPlayers();
    setPlayerScore(v_Player);
    showPlayerAverageScore(v_Player);

    return 0;
}