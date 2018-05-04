#include <fstream>

using namespace std;
bool v[2005][2005];
int main()
{

    ifstream cin("bile.in");
    ofstream cout("bile.out");
    int m,n,p;
    cin>>m>>n>>p;
    int line[n];

    for(int i=1;i<=p;i++)
    {
        int a,b;
        cin>>a>>b;
        v[m-1][n-1]=1;
    }
    for(int i=0;i<n;i++)    cin>>line[i];
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i+1][j]==1)
            {
                if(line[j]%2==0)
                {
                    line[j-1]+=line[j]/2;
                    line[j+1]+=line[j]/2;
                    line[j]=0;
                }
                if(line[j]%2==1)
                {
                    line[j-1]+=line[j]/2+1;
                    line[j+1]+=line[j]/2;
                    line[j]=0;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<line[i]<<endl;
    return 0;
}
