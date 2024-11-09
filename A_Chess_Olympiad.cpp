#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    // Calculate the points for the team and the opponent
    double team_points = X + 0.5 * Y;
    double opponent_points = Z + 0.5 * Y;

    // Calculate the remaining games
    int remaining_games = 4 - (X + Y + Z);

    // Check if the team can surpass the opponent's score by winning all remaining games
    if (team_points + remaining_games > opponent_points) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
