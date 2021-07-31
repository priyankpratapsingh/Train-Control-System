void code_dir(){
    std::fstream f("D:\\DS project\\station.txt", std::ios_base::in);
    char temp[50];
    int var;
    cout << "           -------------------------------      "<<'\n';
    cout << "           Station                    Code      "<<'\n';
    cout << "           -------------------------------      "<<'\n';
    for(int i =0; i < V; i++)
    {
        f >> temp;
        cout << "           " << temp;
        int cap;
        cap = strlen(temp);
        for(int j = 0; j < 27-cap; j++)
        {
            cout << " ";
        }
        f >> var;
        cout << var;
        cout << "\n";
    }
}
