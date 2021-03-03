int main(int argc, char *argv[]) {
	
		int n,gecici,i,j,gecici2,sayac=0,a,b=1,sayac2=1;
		float t,k,m,sayac3=0;
		double s;
		
		printf("Dizinin boyutunu giriniz: ");
		scanf("%d",&n);
		
		int dizi[n],dizi2[n];
			
		for(i=0;i<n;i++){
		printf("%d.degeri giriniz: ",(i+1));
		scanf("%d",&gecici);
		dizi[i]=gecici;
		sayac+=gecici;
		sayac2*=gecici;
		sayac3+=1/(double)gecici;
	}
	
		printf("\n\n");
	for(i=0;i<n;i++)
	printf("%d  ",dizi[i]);
	
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(dizi[i]<dizi[j])
			{
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
			}
		}
		
	}
	

	printf("\n");
	for(i=0;i<n;i++)
	printf("%d  ",dizi[i]);

	
	
	printf("\n\n");

	if((n%2)==0)
					{
					t=(float)(dizi[n/2]+dizi[(n/2)-1])/2;
					printf("dizinin medyani: %.3f",t);
					}
	
					else
						printf("dizinin medyani: %d",dizi[n/2]);
						
						
		return 0;
	}
