// from MLB.com:
// RK  Player  Team    W   L   ERA▲    G   GS  SV  SVO IP  H   R   ER  HR  BB  SO  AVG WHIP
// 1    Ryu, H LAD 6   1   1.52    9   9   0   0   59.1    40  10  10  6   4   59  .190    0.74

// Tm = Team, W = Wins, L = Loses, ERA = Earned Runs Average
// G = Games, GS = Games Started, SV = Saves, SVO = Save Opportunity
// IP = Innings Pitched, H = Hits, R = Runs, ER = Earned Runs
// HR = Homeruns, BB = Base on balls (walk), SO = Strikeouts
// AVG = Hit Average, WHIP = (Walks+Hits)/IP

typedef struct pitcher {
    char lastName[20], firstName[4];
    char team[8];
    int win, lose;
    float era;
    int games, gamesStarted, saves, saveOppertunities;
    float inningsPitched;
    int hits, runs, earnedRuns, homeRuns, basesOnBalls, strikeOuts;
    float battingAverage, whip;
} Pitcher;

extern Pitcher pitchers[];
extern const int pitcher_count;

void Pitcher_print(const Pitcher* p);
void Pitcher_printAll(int count); // count=0: all

