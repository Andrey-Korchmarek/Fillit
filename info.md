How we store tetrimines.

int storage[26]; is an array of ints, each element of which  has a digit 0-18 that
corresponds to the row([19]) of int g_tetramines[19][10]; which has 3 pair coordinates 
of a tetrimine relative to "0"  and 2 pair of relative boundaries of a field to insert in
for examplehorizontal line:
####    
....
....
....

 will be represented like int g_tetramines[5][10] = {0, 1, 1, 0, 1, 1, 0, 0, 1, 1};

 Algorithm
 We use backtracking:
 
 procedure bt(c)
  if reject(P,c) then return
  if accept(P,c) then output(P,c)
  s ← first(P,c)
  while s ≠ NULL do
    bt(s)
    s ← next(P,s)