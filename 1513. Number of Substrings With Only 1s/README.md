# 1513. Number of Substrings With Only 1s

Opinion:

Observe modulus pattern:
1 -> 1
11 -> 3
111 -> 6

Modulus would related to the repeated count of "1".
Solution flow:

1. Iterate the string array
2. Calculate count of repeated "1"
3. Added 2. to the resulte in every iterate
--

Time complexity: O(n)
