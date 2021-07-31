void code_dir(){
    std::fstream f("D:\\DS project\\station.txt", std::ios_base::in);
    char temp[50];
    int var;
    cout << "\t\t\t\t\t      -------------------------------      "<<'\n';
    cout << "\t\t\t\t\t      Station                    Code      "<<'\n';
    cout << "\t\t\t\t\t      -------------------------------      "<<'\n';
    for(int i =0; i < V; i++)
    {
        f >> temp;
        cout <<"\t\t\t\t\t      ";
        cout << temp;
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
    cout<<"\t\t\t\t\t      -------------------------------\n";
}
