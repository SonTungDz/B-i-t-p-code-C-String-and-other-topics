#include <stdio.h>

int main() {
	int a[1000];
	int n;
	scanf("%d", &n);
	while (n <= 0 || n >= 40) {
		printf("sai dieu kien, nhap lai n\n");
        scanf("%d", &n);
    }
    for(int i = 0; i<n;i++){
    	scanf("%d", &a[i]);
	}
	for(int i = 0;i<n;i++){
		if(a[i]>20 && a[i]<30){
			for(int i = 0; i<n; i++){
		int min_index = i;
		for(int j = i+1; j <n;++j){
			if(a[j]<a[min_index]){
			min_index = j;
		}
		}
		if(min_index != i){
			double temp = a[i];
			a[i]= a[min_index];
			a[min_index] = temp;
		}
		
	}

		}
		
	}
	for(int i = 0;i<n;i++){
		if(a[i]>20 && a[i]<30){
		printf("%d", a[i]);
	}
}
    return 0; 
}


