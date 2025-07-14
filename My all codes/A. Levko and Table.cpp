#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << k << " ";  // প্রধান диагনালে k রাখবো
            } else {
                cout << "0 ";  // বাকি জায়গাগুলোতে 0 রাখবো
            }
        }
        cout << endl;  // পরবর্তী রোতে গিয়ে নতুন লাইন শুরু হবে
    }
    return 0;
}
#include<stdio.h>

int main(){
  int n,k;
  scanf("%d %d", &n, &k);

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i==j)
        printf("%d ",k);
      else
        printf("0 ");
    }
    printf("\n");
  }

}
