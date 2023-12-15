#include <string>
#include <iostream>
using namespace std;

int main(){
    FILE *FP;
	FP = fopen("inputs.txt", "r");
    string input;
    int first, second, first_index, second_index;
	if (FP){
		while (fscanf(FP,"%s",input) != EOF){
            int length=input.length();
            for(int i=0;i<length;i++){
                if (input[i]>='0' && input[i]<='9'){
                    first = atoi(&input[i]);
                    first_index = i;
                    break;
                }
            }
            for(int j=length;j>first_index;j--){
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