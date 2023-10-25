#include <bits/stdc++.h>
using namespace std;
void WavePrint(int n,int m,int arr[][3])
{
	for (int i = 0; i < m; i++) {

		if (i&1) {
			for (int j = n-1; j >=0; j--) {
				cout << arr[j][i] << " ";
			}
		}
		else {
			for (int j = 0; j <n; j++) {
				cout << arr[j][i] << " ";
			}
		}
	}
}

int main()
{
	int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
	WavePrint(3,3,arr);

	return 0;
}
