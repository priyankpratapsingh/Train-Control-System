void edit(int X)
{
    start:
    system("cls");
    int b;
    while(1)
    {
        cout << "Press D to delete station press A to append station"<<'\n';
        char c;
        cin>>c;
        if (c == 'D'||c == 'd')
        {
            b = 1;
            break;
        }
        if(c == 'A'||c == 'a')
        {
            b = 0;
            break;
        }
    }
    std::fstream C("D:\\DS project\\_map.txt", std::ios_base::in);
    cout << "Here is the respective station codes" << '\n';
    code_dir();
    cout << '\n';
    if(b == 1)
    {
        int zeta;
        int L[X][X];
        for(int i = 0; i<X; i++)
        {
            for(int j = 0; j < X; j++)
            {
                int gh;
                C >> gh;
                L[i][j] = gh;
                cout << L[i][j] << " ";
            }
            cout << '\n';
        }
        while(1)
        {
            cout << "Press 1 to remove path and 2 to remove respective station" << '\n';
            cin >> zeta;
            if(zeta == 1||zeta == 2)
                break;
        }
        if(zeta == 1)
        {
            cout << "Enter the path to be erased" << '\n';
            int a, b;
            cin >> a >> b;
            cout<<"Enter the required flow. Enter a flow less than existing one"<<'\n';
            int z = INT_MAX;
            while(z >= L[a][b])
                cin >> z;
            L[a][b] = z;
            L[b][a] = z;
            std::fstream A("D:\\DS project\\_map.txt", std::ios_base::out);
            for(int u = 0; u < X; u++)
            {
                for(int v = 0; v < X; v++)
                {
                    A << L[u][v] << " ";
                }
                A << '\n';
            }
            std::fstream B("D:\\DS project\\size.txt", std::ios_base::out);
            B << X;
        }
        if(zeta == 2)
        {
            cout << "Enter the station to remove" << '\n';
            int a;
            cin >> a;
            std::fstream A("D:\\DS project\\_map.txt", std::ios_base::out);
            for(int u = 0; u < X; u++)
            {
                for(int v = 0; v < X; v++)
                {
                    if (u != a&& v!= a)
                        A << L[u][v] << " ";
                    else
                        A << 0 << " ";
                }
                A << '\n';
            }
            std::fstream B("D:\\DS project\\size.txt", std::ios_base::out);
            B << X-1;
        }
    }
    else
    {
        int zeta;
        int L[X+1][X+1];
        for(int i = 0; i<X; i++)
        {
            for(int j = 0; j < X; j++)
            {
                C >> L[i][j];
            }
        }
        while(1)
        {
            cout << "Press 1 to add path and 2 to add station" << '\n';
            cin >> zeta;
            if(zeta == 1||zeta == 2)
                break;
        }
        if(zeta == 1)
        {
            cout << "Enter the path to be added" << '\n';
            int a, b;
            cin >> a >> b;
            L[a][b] = L[a][b] + 1;
            L[b][a] = L[b][a] + 1;
            std::fstream A("D:\\DS project\\_map.txt", std::ios_base::out);
            for(int u = 0; u < X; u++)
            {
                for(int v = 0; v < X; v++)
                {
                    A << L[u][v] << " ";
                }
                A << '\n';
            }
            std::fstream B("D:\\DS project\\size.txt", std::ios_base::out);
            B << X;
        }
        if(zeta == 2)
        {
            int tom = 0;
            cout << "Enter path of new station with other ones" << '\n';
            int K[X];
            for(int t = 0; t < X; t++)
            {
                cout << "Enter path to station " << t+1 << '\n';
                int ax;
                cin >> ax;
                L[t][X] = ax;
                L[X][t] = ax;
                tom = 1;
            }
            L[X][X] = 0;
            std::fstream A("D:\\DS project\\_map.txt", std::ios_base::out);
            for(int u = 0; u < X+1; u++)
            {
                for(int v = 0; v < X+1; v++)
                {
                    A << L[u][v] << " ";
                }
                A << '\n';
            }
            std::fstream B("D:\\DS project\\size.txt", std::ios_base::out);
            B << X+1;
        }
    }
    cout << "press 1 to edit more and 2 to go to main menu" << '\n';
    int z;
    cin >> z;
    if(z == 1)
        goto start;
    else{system("cls");
        return;}
}
