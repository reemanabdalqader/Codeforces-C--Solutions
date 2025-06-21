//https://codeforces.com/problemset/problem/1999/B
/* Description:
    Two players, Suneet and Slavic, each have 2 cards with values between 1 and 10.
    The game consists of 2 rounds, and in each round both players reveal one of their unplayed cards.
    A round is won by the player who reveals the higher card. If equal, no one wins.
    The goal is to count the number of permutations (total 4) in which Suneet wins the game (i.e., wins more rounds).

   Approach:
    - Try all 2 possible orderings of Suneet's cards.
    - Try all 2 possible orderings of Slavic's cards.
    - For each of the 4 matchups, simulate the game round by round.
    - Count how many of those Suneet wins.*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<set>
#define ll long long 
using namespace std;
int main  (){
int t ;
cin >> t;
while (t--){
    int a1,a2,b1,b2;
cin >> a1>>a2>>b1>>b2 ;
vector<int > sa={a1,a2};
vector <int > sb ={b1,b2};
int wins=0; 
for (int a :sa){
    int seca =(a==a1)?a2:a1;
    for (int b :sb){
        int secb=(b==b1)?b2:b1;
        int awin=0;
        int bwin =0;
        if (a>b)
        awin++;
        else if (a<b) bwin++;
        if(seca>secb) awin++;
        else if(seca<secb) bwin++;
        if (awin>bwin)wins++;
    }
}
cout <<wins <<endl ;
}
 return 0; 
} 
