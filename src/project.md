We use stack vs heap as much as we can
to make our program work as fast as possible with backtrack algorithm.
We use int d[26][2] as our main place to store identified tetriminos d[0][i] and d[1][i] to
keep relevant ordinal letter A-B-C.. .

board starting size =
  sqrt(# of tetrominoes * 4 characters per tetromino)
  
  i = 2 will be , minimal square 2*2 