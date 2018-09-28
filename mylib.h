#include<stdio.h>
#include<string.h>

int myStrStr(char *haystack, char *needle, char *buffer){
	

	int j = 0, k , flag = 0, x = 0, start, end;
	for(int i = 0; haystack[i] != '\0'; i++){
		if(haystack[i] == needle[0]){
			k = i;
			j = 0;
			while(needle[j] != '\0' && needle[j] == haystack[k]){
				buffer[j] = haystack[k];
				k++;
				j++;
			
			}
		
		        buffer[j] = '\0';
			if(needle[j] == '\0')
                            flag = 1;
	
		
		
	}
	if(flag == 1)
		return 1;
	}
	return 0;
}


unsigned int countOnes(int num){
	
//	printf("\nThe number is %d",num); 
	int d , r , count = 0;
	d = num;
	if(d >= 0){
		while(d != 0){
			r = d%2;
			if(r == 1)
				count++;
			d = d/2;
		}
	}
	else{
		while(num != 0){
		num = num & (num-1);
		count++;
		}
	}

	return count;
}



void binaryArray(int n, int array[], int size){

	int i;
	for(i=0;i<size;i++){
	array[i]= ( (n>>i)&1 ) ;
}
}





void binaryPrinter(int array[], int size){
       int i,j ;
	for(i = 0,j=size-1; i <j; i++,j--){
			array[i] = array[i] ^ array[j];
			array[j] = array[j] ^ array[i];
			array[i] = array[i] ^ array[j];
		}
   	for( i = 0; i < size; i++)
		printf("%d",array[i]);
	printf("\n");
}

