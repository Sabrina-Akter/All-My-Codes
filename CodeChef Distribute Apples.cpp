 #include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t-->0){
		long n, k;
		cin >> n >> k;
		if((n/k)%k == 0)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;
}
