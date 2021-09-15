# 39. Combination Sum

Observing:
1. Check greeky method->failed;
2. Cannot split to simple subproblem

Use backtracking method:
https://www.geeksforgeeks.org/backtracking-introduction/

lastindex is for updating the position to start searching, also prevent same combination like [2,2,3], [2,3,2], [3,2,2]
