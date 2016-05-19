1) Day 1: Game of Stones

Two players (numbered 1 and 2) are playing a game with stones. Player 1 always plays first, and the two players move in alternating turns. The game's rules are as follows:

    In a single move, a player can remove either 2, 3, or 5 stones from the game board.
    If a player is unable to make a move, that player loses the game.

Given the number of stones, find and print the name of the winner (i.e. First, or Second) on a new line. Each player plays optimally, meaning they will not make a move that causes them to lose the game if some better, winning move exists.

Input Format

The first line contains an integer, T , denoting the number of test cases.
Each of the T subsequent lines contains a single integer, n, denoting the number of stones in a test case.

Constraints
1<= T <= 100

1<= n <= 100

Output Format

On a new line for each test case, print First if the first player is the winner; otherwise, print Second.

Sample Input

8
1
2
3
4
5
6
7
10

Sample Output

Second
First
First
First
First
First
Second
First

Explanation

In the sample, we have T=8 testcases.

We'll refer to our two players as P1 and P2.

If n=1, P1 can't make any moves and loses the game (i.e., the P2 wins and we print on Second a new line).

If n=2, P1 removes 2 stones in their first move and wins the game, so we print First on a new line.

If n=3, P1 removes 2 stones in their first move, leaving 1 stone on the board. Because P2 is left with no available moves, P1 wins and we print First on a new line.

If n=4, P1 removes 3 stones in their first move, leaving 1 stone on the board. Because P2 has no available moves, P1 wins and we print First on a new line.

If n=5, P1 removes all 5 stones from the game board. Because P2 is left with no available moves, P1 wins and we print First on a new line.

If n=6, P1 removes 5 stones in their first move, leaving 1 stone on the board. Because P2 has no available moves, P1 wins and we print First on a new line.

If n=7, P1 can make any of the following three moves:

    1.Remove 2 stones, leaving 5 stones on the board. P2 then removes 5 stones. Because P1 has no available moves, P2 wins.
    2.Remove 3 stones, leaving 4 stones on the board. P2 then removes 3 stones, leaving 1 stone left on the board. Because P1 has no available moves, P2 wins.
    3.Remove 5 stones, leaving 2 stones on the board. then P2 removes the remaining stones. Because P1 has no available moves, P2 wins.

Because all possible moves result in winning, we print Second on a new line.

If n=10, P1 can remove either 2 or 3 stones to win the game, so we print First on a new line. Recall that each player moves optimally, so P1 will not remove 5 stones because doing so would cause to lose the game.

2) Day 1: Tower Breakers

Two players (numbered 1 and 2) are playing a game of Tower Breakers! The rules of the game are as follows:

   1. Player 1 always moves first, and both players always play optimally.
   2. Initially there are N towers, where each tower is of height M.
   3. The players move in alternating turns. In each turn, a player can choose a tower of height X and reduce its height to Y, where 1<=Y < X and Y evenly divides X.
   4. If the current player is unable to make any move, they lose the game.

Given the values of N and M, can you determine who will win? If the first player wins, print 1; otherwise, print 2.

Input Format

The first line contains a single integer, T, denoting the number of test cases.
Each of the T subsequent lines describes a test case in the form of 2 space-separated integers denoting the respective values for N and M.

Constraints
1<= T <= 100

1<= N,M <= 10^6

Output Format

For each test case, print a single integer (i.e., either 1 or 2) denoting the winner on a new line.

Sample Input

2
2 2
1 4

Sample Output

2
1

Explanation

We'll refer to player 1 as P1 and player 2 as P2.

In the first test case, P1 chooses one of the two towers and reduces it to 1. Then P2 reduces the remaining tower to a height of 1. As both towers now have height 1, P1 cannot make a move so P2 is the winner and we print 2 on a new line.

In the second test case, there is only one tower of height 4. P1 can reduce it to a height of either 1 or 2, but P1 chooses 1 as both players always choose optimally. Because P2 has no possible move, P1 wins and we print 1 on a new line.

3) Day 1: A Chessboard Game

Two players are playing a game on a 15 x 15 chessboard. The rules of the game are as follows:

    The game starts with a single coin located at some x,y coordinate. The coordinate of the upper left cell is (1,1), and the coordinate of the lower right cell is (15,15).

    In each move, a player must move the coin from cell (x,y) to one of the following locations:
    1.(x-2, y+1)
    2.(x-2, y-1)
    3.(x+1, y-2)
    4.(x-1, y-2)

    Note: The coin must remain inside the confines of the board.

    The players move in alternating turns. The first player who is unable to make a move loses the game.

Given the initial coordinate of the coin, determine which player will win the game. Assume both players always move optimally.

Input Format

The first line contains an integer, T, denoting the number of test cases.
Each of the T subsequent lines contains 2 space-separated integers describing the respective x and y values of the coin's coordinate.

Constraints
1<= T <= 15x15
1<= xi,yi <= 15

Output Format

On a new line for each test case, print First if the first player is the winner; otherwise, print Second.

Sample Input

3
5 2
5 3
8 8

Sample Output

Second
First
First

4) Day 2: Nim Game

Nim is the most famous two-player algorithm game! The basic rules for this game are as follows:

1.The game starts with n piles of stones indexed from 0 to n-1. Each pile (where 0<=i<n ) has Si stones.
2.The players move in alternating turns. During each move, the current player must remove one or more stones from a single pile.
3.The first player who is unable to remove a stone (e.g., a stone can't be removed if all piles are already empty) loses the game.

Given the value of n and the number of stones in each pile, determine the game's winner if both players play optimally.

Input Format

The first line contains an integer, T, denoting the number of test cases.
Each of the 2T subsequent lines defines a test case. Each test case is described over the following two lines:

1.An integer, n, denoting the number of piles.
2.space-separated integers, S0, S1, ... Sn-1 , where each Si describes the number of stones at pile i.

Constraints
1<= T <= 100
1<= n <= 100
1<= Si <= 100

Output Format

For each test case, print the name of the winner on a new line (i.e.,either First or Second).

Sample Input

2
2
1 1
3
2 1 4

Sample Output

Second
First

5) Misere Nim

Two people are playing game of Misère Nim. The basic rules for this game are as follows:
1.The game starts with n piles of stones indexed from 0 to n-1. Each pile (where 0<=i<n ) has Si stones.
2.The players move in alternating turns. During each move, the current player must remove one or more stones from a single pile.
3.The player who removes the last stone loses the game.

Given the value of n and the number of stones in each pile, determine whether the person who wins the game is the first or second person to move. Assume both players play optimally.

Input Format

The first line contains an integer, T, denoting the number of test cases.
Each of the 2T subsequent lines defines a test case. Each test case is described over the following two lines:

1.An integer, n, denoting the number of piles.
2.space-separated integers, S0, S1, ... Sn-1 , where each Si describes the number of stones at pile i.

Constraints
1<= T <= 100
1<= n <= 100
1<= Si <= 10^9 

Output Format

For each test case, print the name of the winner on a new line (i.e., either First or Second).

Sample Input

2
2
1 1
3
2 1 3 

Sample Output

First
Second

6) Day 2: Nimble Game

Two people are playing Nimble! The rules of the game are:

1.The game is played on a line of n squares, indexed from 0 to n-1. Each square i (where 0<=i<n) contains ci coins. For example:
2.The players move in alternating turns. During each move, the current player must remove exactly 1 coin from square i and move it to square j if and only if j<i.
3.The game ends when all coins are in square 0 and nobody can make a move. The first player to have no available move loses the game.

Given the value of n and the number of coins in each square, determine whether the person who wins the game is the the first or second person to move. Assume both players move optimally.

Input Format

The first line contains an integer, T, denoting the number of test cases.
Each of the 2T subsequent lines defines a test case. Each test case is described over the following two lines:

1.An integer, n, denoting the number of squares.
2.n space-separated integers, c0, c1, ..., cn-1, where each ci describes the number of coins at square i.

Constraints
1<= T <= 10^4
1<= n <= 100
0<= ci <= 10^9

Output Format

For each test case, print the name of the winner on a new line (i.e., either First or Second).

Sample Input

2
5
0 2 3 0 6
4
0 0 0 0

Sample Output

First
Second

7) Day 2: Poker Nim

Poker Nim is another 2-player game that's a simple variation on a Nim game. The rules of the games are as follows:

1.The game starts with n piles of chips indexed from 0 to n-1. Each pile i(where 0<=i<n) has chips.

2.The players move in alternating turns. During each move, the current player must perform either of the following actions:
  Remove one or more chips from a single pile.
  Add one or more chips to a single pile. 

  At least 1 chip must be added or removed during each turn.
3.To ensure that the game ends in finite time, a player cannot add chips to any pile i more than k times.
4.The player who removes the last chip wins the game.

Given the values of n, k, and the numbers of chips in each of the n piles, determine whether the person who wins the game is the first or second person to move. Assume both players move optimally.

Input Format

The first line contains an integer, T, denoting the number of test cases.
Each of the 2T subsequent lines defines a test case. Each test case is described over the following two lines:

1.Two space-separated integers, n(the number of piles) and k(the maximum number of times an individual player can add chips to some pile ),  i respectively.
2.n space-separated integers,c0,c1,...,cn-1, where each ci describes the number of chips at pile i.

Constraints
1<= T <= 100
1<= n,k <= 100
1<= ci <= 10^9

Output Format

For each test case, print the name of the winner on a new line (i.e., either First or Second).

Sample Input

2
2 5
1 2
3 5
2 1 3

Sample Output

First
Second

8) Day 2: Tower Breakers, Revisited

Two players (numbered 1 and 2) are playing a game of Tower Breakers! The rules of the game are as follows:

   1. Player 1 always moves first, and both players always play optimally.
   2. Initially there are N towers of various heights.
   3. The players move in alternating turns. In each turn, a player can choose a tower of height X and reduce its height to Y, where 1<=Y < X and Y evenly divides X.
   4. If the current player is unable to make any move, they lose the game.

Given the values of N and the respective height values for all towers, can you determine who will win? If the first player wins, print 1; otherwise, print 2.

Input Format

The first line contains a single integer, T, denoting the number of test cases.
Each of the 2T subsequent lines describes a test case. Each test case is described over the following two lines:
1. An integer, N, denoting the number of towers. 
2. N space-separated integers h0, h1, ..., hN-1, where each hi describes the height of tower i.

Constraints
1<= T <= 100
1<= N <= 100
1<= hi <= 10^6

Output Format

For each test case, print a single integer (i.e., either 1 or 2) denoting the winner on a new line.

Sample Input
2
2 
1 2
3 
1 2 3

Sample Output

1
2

Explanation

Test Case 0:
Player 1 reduces the second tower to height 1 and subsequently wins.

Test Case 1:
There are two possible moves:

1.Reduce the second tower to 1
2.Reduce the third tower to 1.

Whichever move player 1 makes, player 2 will make the other move. Thus, player 2 wins. 
