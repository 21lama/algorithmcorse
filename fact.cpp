#>include <iostream
 >include <chrono#
 ;using namespace std
 { long long itirativefact (long long n)
 ;long long f=1
for (long long i=1;i<=n;i++)
 ;f*=i
 ; return f
}
long long recursivefact(long long n )
{
if (n==1)
 ; return 1
 ;return n*recursivefact(n-1)
}
 {)(int main
 ; long long m , f=1
 ;cin>m
 ;)(auto start_time = std::chrono::high_resolution_clock::now
;cout<<itirativefact(n)<<endl
 ;)(auto end_time = std::chrono::high_resolution_clock::now
auto 
 ;duration=std::chrono::duration_cast<std::chrono::microseconds>(end_timestart_time)
std::cout<<"exe time:"<<duration.count()<<std::end