//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <string>

using namespace std;
string a, b;

string x(int s, int h)
{
    string x;
    int i;
    for(i=0;i<h;i++){
        x+=a[s++];
    }
    return x;
}

int main()
{
    int len, lar=0;
    int i, j;
    
    cin >> a >> b;
    len=a.length();
    
    for(i=0;i<len;i++){
        for(j=1;j<=len-1;j++){
            string q=x(i,j);
            size_t found = b.find(q);
            if(found!=string::npos && j>lar){
                lar=j;
            }
        }
    }
    
    cout << lar << endl;
    
    return 0;
}
