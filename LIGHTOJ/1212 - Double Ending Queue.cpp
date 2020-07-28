    #include<bits/stdc++.h>
    #include <deque>
    #define ll long long int
    using namespace std;
    int main()
    {
        ll l,k,x,t;
        string s;
        cin>>t;
        for(int i=1;i<=t;i++)
        {

           deque <ll> q;
            cin>>l>>k;cout<<"Case "<<i<<":"<<endl;
            while(k--)
            {

                cin>>s;
                if(s=="pushLeft")
                {
                    cin>>x;
                    if(q.size()==l)
                        cout<<"The queue is full"<<endl;
                    else {
                           q.push_front(x);
                         cout<<"Pushed in left: "<<x<<endl;}
                }
               else if(s=="pushRight")
                {
                    cin>>x;
                    if(q.size()==l)
                        cout<<"The queue is full"<<endl;
                    else {q.push_back(x);cout<<"Pushed in right: "<<x<<endl;}
                }
               else if(s=="popLeft")
                {
                    if(q.empty())
                        cout<<"The queue is empty"<<endl;
                    else {cout<<"Popped from left: "<<q.front()<<endl;
                    q.pop_front();}
                }
                else if(s=="popRight")
                {
                    if(q.empty())
                        cout<<"The queue is empty"<<endl;
                    else {cout<<"Popped from right: "<<q.back()<<endl;
                   q.pop_back();}
                }
            }
        }


        return 0;
    }

