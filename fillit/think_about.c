// from insert
while (i < 6)
        {
            if (map[y + coord[i]][x + coord[i + 1]] != '.')
                return (-1);
            i = i + 2;
        }

// ############################################################################
int    insert(char abc, int *coord, char map[16][17], int y, int x, int a)
{   
    while (x <= a )
    {
	    while (y <= a)
        {
            while (x <= a && y <= a)
	        {
                if (y + coord[0] > a || x + coord[1] > a 
         	        || y + coord[2] > a || x + coord[3] > a 
         	        || y + coord[4] > a || x + coord[5] > a
                    || y + coord[0] < 0 || x + coord[1] < 0 
                    || y + coord[2] < 0 || x + coord[3] < 0 
                    || y + coord[4] < 0 || x + coord[5] < 0 )
                    break;
			        printf("{ insert  failed return-1 }\n");
		            if (map[y][x] != '.' || map[coord[0]][coord[1]] != '.' || 
		                map[coord[2]][coord[3]] != '.' || map[coord[4]][coord[5]] != '.' )
                        break;
			        printf("{ insert  failed return -2 }\n");
                    map[y][x] = abc;
    	            map[y + coord[0]][x + coord[1]] = abc;
    	            map[y + coord[2]][x + coord[3]] = abc;
    	            map[y + coord[4]][x + coord[5]] = abc; 
                    printf("{ insert() x: %d}", x);   
            }
        x++; 
    }
    return (0);
}