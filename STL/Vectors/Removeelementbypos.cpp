// C++ Logic to remove the Element in a vector By using index/pos
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v={1, 2, 3, 4, 5};
    int index=-1, len=v.size();
    cout<<"Number of elements: "<<len<<endl;
    cout<<"Enter the pos:";
    cin>>index;
    if(index>=len)
    {
        cout<<"Invalid position"<<endl;
        exit(0);
    }
    for(int i=0;i<len;i++)
    {
        if(i==(index))
        {
            for(int j=i;j<len;j++)
            {
                v[j]=v[j+1];
            }
            len--;
        }
    }
    
    for(int i=0;i<len;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
