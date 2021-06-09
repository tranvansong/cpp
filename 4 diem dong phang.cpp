#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a[10][10];
        for(int i = 0;i<4;i++){
            for(int j = 0;j<3;j++){
                scanf("%d",&a[i][j]);
            }
        }
        int b[10],c[10],d[10];
        for(int i = 0;i<3;i++){
            b[i] = a[1][i] - a[0][i];
            c[i] = a[2][i] - a[0][i];
            d[i] = a[3][i] - a[0][i];
        }
        int tch[10] = {0};
        tch[0] = b[1]*c[2]- c[1]*b[2];
		tch[1] = b[2]*c[0] - c[2]*b[0];
		tch[3] = b[0]*c[1] - c[0]*b[1];
		int kq = 0;
		for(int i = 0;i<3;i++){
			kq+= tch[i]*d[i];
		}
		if(kq == 0) printf("YES");
		else printf("NO");
        printf("\n");
    }
}
