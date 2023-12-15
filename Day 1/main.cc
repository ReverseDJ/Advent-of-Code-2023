#include <string>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    FILE *FP;
	FP = fopen("inputs.txt", "r");
    char * input;  // Adjust the size based on your input length
    int first = 0, second = 0, first_index, second_index;

    if (FP) {
        while (fscanf(FP, "%s", input) != EOF) {
            int length = strlen(input);
            for(int i=0;i<length;i++){
                if (input[i]>='0' && input[i]<='9'){
                    first = atoi(&input[i]);
                    first_index = i;
                    break;
                }
            }
            for(int j=length-1;j>first_index;j--){
                if (input[j]>=48 && input[j]<=57){
                    input[j]=second;
                    second_index=j;
                    break;
                }
            }
            if(!second){
                second=first;
            }
            cout<<first<<second<<endl;
            
            }
            fclose(FP);
        }
        
        return 0;	
}