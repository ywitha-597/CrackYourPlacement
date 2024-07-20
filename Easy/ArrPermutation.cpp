// Array permutation //
bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), [](int x, int y));
        for(int i=0; i<n; i++){
            if(a[i]+b[i] < k)
                return false;
        }
        return true;
}
