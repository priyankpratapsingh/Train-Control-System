void flow(vector<struct node> *alpha, int sink)
{
    vector<struct node>::iterator i;
    for(i = alpha->begin(); i!= alpha->end(); ++i)
    {
        int x=1;
        int _var = INT_MAX;
        while(1)
        {
            _var = min(((*i).beta[x]).weight, _var);
            if((*i).beta[x].st_code==sink)
                break;
            x++;
        }
        ARR_->push_back(_var);
    }
}
