#include <iostream>
using namespace std;
  
template <class T>
T somme(T v1, T v2)
{
   return v1+v2;
}
template <class T>
void tritab(T a[], int n) {
    for (int i = 0; i < n-1; i++)
    for (int j = n-1; i < j; j--)
            if (a[j] < a[j - 1]){
            T k=a[j]; 
            a[j]=a[j - 1];
            a[j - 1]=k;
            
            }
}
  
template <class T>
void swap(T &s, T &s2)
{
   T temp=s;
   s=s2;
   s2=temp;
}


template <class T, int max>
int minT(T t[], int n)
{
   int  k= max;
   for (int i = 0; i < n; i++)
      if (t[i] < k)
         k = t[i];
   
   return k;
}


int main()
{
    string cc="C",k="++";
    cout<< somme(cc,k)<<endl;
   
     string a[3] = {"b","a","c"};
   
  
    tritab<string>(a, 3);
    cout << "Resultat trie : ";
    for (int i = 0; i < 3; i++)
        cout << a[i] <<" ";
    cout << endl;
    
int tb[]= {8, 7, 78, 158};
   
 cout << "minimum du tableau: ";
   cout << minT<int, 1000>(tb, 4) << endl;
   
    string aa="aa",bb="bb";
     swap(aa, bb);
         cout <<"SWAP"<<endl ;
        cout <<"aa=>"<<aa ;
        cout <<"    bb=>" <<bb;
 
 
    return 0;
}
