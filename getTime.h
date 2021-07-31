void tim(vector<struct node> *alpha)
{
    std::fstream p("D:\\DS project\\time.txt", std::ios_base::in);
    vector<node>::iterator i;
    for(i =alpha->begin(); i!=alpha->end(); i++)
    {
        int var_ = 0;
        for(int h = 1; h < (*i).len; h++)
        {
            var_+=vemp[(*i).beta[h-1].st_code][(*i).beta[h].st_code];
        }
        _ARR->push_back(var_);
    }
}
