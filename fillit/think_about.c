// from insert
while (i < 6)
        {
            if (map[y + coord[i]][x + coord[i + 1]] != '.')
                return (-1);
            i = i + 2;
        }