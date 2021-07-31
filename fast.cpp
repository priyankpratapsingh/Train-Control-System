#include<iostream>
#include<vector>
#include<fstream>
#include<string.h>
#include<stack>
#include<list>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int V;
int **vemp;
struct _node
{
    char Name[20];
    int st_code;
};
struct _node P[8];
struct Node
{
    int st_code;
    int weight;
};
struct node
{
    int len;
    struct Node *beta;
};
vector<int> *ARR_;
vector<int> *_ARR;
vector<struct node> *alpha;
#include "path.h"
#include "map.h"
#include "multigraph.h"
#include "getFlow.h"
#include "getTime.h"
#include "timer.h"
#include "diag.h"
#include"edit.h"
int main()
{
    std::fstream J("D:\\DS project\\station.txt", std::ios_base::in);
    for(int l = 0; l < 8; l++)
    {
        J >> P[l].Name;
        J >> P[l].st_code;
    }
    amt:diag();
    _ARR = new vector<int>();
    ARR_ = new vector<int>();
    alpha = new vector<struct node>();
    std::fstream f("D:\\DS project\\size.txt", std::ios_base::in);
    int fs;
    f >> fs;
    V = fs;
    int **temp = graph();
    vector<struct Node> adj[V];
    cout << '\n';
    char G;
    while(1){
        while(1)
        {
            cout << "\t\t\t\t\tPress F to enter the system" << '\n' << "\t\t\t\t\tPress G to enter map editing" << '\n';
            cin >> G;
            if(G == 'F'||G == 'f')
                break;
            if(G == 'G'||G == 'g'){
                edit(fs);
                goto amt;}
        }
        system("cls");
        for(int i = 0; i < V; i++)
        {
            for(int j = 0; j < V; j++)
            {
                if(temp[i][j] != 0)
                {
                    struct Node X;
                    X.st_code = j;
                    X.weight = temp[i][j];
                    adj[i].push_back(X);
                }
            }
        }
        system("cls");
        vemp = timer_();
        cout << "\n\n";
        cout << "\n\t\t\t****** *** ** *HERE ARE THE STATION NAME AND STATION CODES* ** *** ******" << '\n';
        cout << "\n\n";
        code_dir();
        int source, sink;
        cout << "Enter the initial and final destination" << '\n';
        cin >> source >> sink;
        int *a;
        int arr_[V];
        a = &arr_[0];
        gapf(adj, source-1, sink-1);
        flow(alpha, sink-1);
        vector<int>::iterator i;
        tim(alpha);
        vector<int>::iterator j;
        int least_time = INT_MAX;
        vector<struct node>::iterator op;
        op = alpha->begin();
        struct node definite_path;
        for(j = _ARR->begin(); j!=_ARR->end(); j++)
        {
            if(*j < least_time)
            {
                least_time = (*j);
                definite_path = *op;
            }
            op++;
        }
        cout<<"Route:";
        for(int u = 0; u < definite_path.len; u++)
        {
            cout << P[definite_path.beta[u].st_code].Name;
            if(u != definite_path.len-1)
                cout<<"->";
        }
        cout << "       Time taken:";
        cout << least_time << '\n';
        char H;
        while(1)
        {
            cout << "Want to give input again"<<'\n';
            cout << "press Y to continue and N to exit" << '\n';
            cin >> H;
            if(H == 'Y'|| H == 'y')
                break;
            else
                return 0;
        }
        system("cls");
        goto amt;
    }
    return 0;
}
