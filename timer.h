int ** timer_()
{
    std::fstream f("D:\\DS project\\size.txt", std::ios_base::in);
    std::fstream myfile("D:\\DS project\\time.txt", std::ios_base::in);
    int fs;
    f >> fs;
    int a, var1 = 0, var2 = 0;
    int **temp;
    temp = new int *[V];
    for(int i =0; i < V; i++)
    {
        temp[i] = new int[V];
    }
    while (myfile >> a)
    {
        temp[var1][var2] = a;
        var2++;
        if(var2 == fs)
        {
            var1++;
            var2 = 0;
        }
    }
    return temp;
}
