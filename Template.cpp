#include <iostream>
using namespace std;
  
template <class T>
T somme(T v1, T v2)
{
   return v1+v2;
}
template <class T>
void tritab(T a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1]){
            T k=a[j]; 
            a[j]=a[j - 1];
            a[j - 1]=k;
            
            }
}
  
template <class T>
void swapp(T &a, T &b)
{
   T temp=a;
   a=b;
   b=temp;
}


template <class T, int max>
int minT(T tab[], int n)
{
   int m = max;
   for (int i = 0; i < n; i++)
      if (tab[i] < m)
         m = tab[i];
   
   return m;
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
    
int t1[]  = {8, 7, 78, 158};
   
 cout << " minTmum du tableau: ";
   cout << minT<int, 1000>(t1, 4) << endl;
   
    string aa="aa",bb="bb";
     swapp(aa, bb);
        cout <<"\n" <<aa ;
        cout <<"  " <<bb;
 
 
    return 0;
}
