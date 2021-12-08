//Insights about the method ...
//We can have multiple methods to find whether a number is prime or not...But the method i have used is the algorithm
// Sieve of Eratosthenes which produces output in O(nlog(n))...with some extra space of O(n)..

class Solution {
public:
    int countPrimes(int n) {
        if(n==0) return 0;
        bool isPrime[n];
        for(int i=2;i<n;i++) isPrime[i]=true;
        isPrime[0]=false;
        for(int i=2;i*i<n;i++){
            if(!isPrime[i]) continue;
            for(int j=i*i;j<n;j+=i){
                isPrime[j]=false;
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(isPrime[i])
                count++;
        }
        return count;
    }
};
