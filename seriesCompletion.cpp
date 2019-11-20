//1, 1, 2, 10, 65, 442...  find the nth term of the sequence
// 1          *          1  =           1
// 1          *          2  =           2
// 2          *          5  =           10
// 5          *         13  =           65
// 13         *         34  =          442
// 34         *         89  =          3026
// 89         *        233  =         20737
// 233        *        610  =         142130
// 610        *       1597  =         974170
// 1,2,5,13,34,89... can be represented as f(n)=3*f(n-1) -f(n-2); where f(0)=1 and f(1)=1;
//here is the code for getting nth term of the sequence 1,1,2,10,65,442,...
#include <iostream>
#include<vector>
using namespace std;
vector<int> v(25,-1);
int seq(int n){
    if(n<2) return 1;
    if(v[n]==-1){
        v[n]=3*seq(n-1)-seq(n-2);
    }else return v[n];
    
}
int main()
{
   int n=8;
   cout<<seq(n)<<endl;
   int tn=seq(n)*seq(n-1);//nth term
   cout<<tn;
   return 0;
}
