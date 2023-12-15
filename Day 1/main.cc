#include <string>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    FILE *FP;
	FP = fopen("inputs.txt", "r");
    char input [50];  // Adjust the size based on your input length
    int first = 0, second = 0, first_index, second_index;
    int tens, ones;
    int sum=0;

    if (FP) {
        while (fscanf(FP, "%s", input) != EOF) {
            int length = strlen(input);
            for(int i=0;i<length;i++){
                if (input[i]>='0' && input[i]<='9'){
                    first = input[i] - 48;
                    first_index = i;
                    break;
                }
            }
            for(int j=length-1;j>first_index;j--){
                if (input[j]>='0' && input[j]<='9'){
                    second = input[j] - 48;
                    second_index = j;
                    break;
                }
            }
            if(!second){
                second=first;
            }
            cout<<first<<second<<endl;
            tens=10*first;
            ones=second;
            sum += tens + ones;
            first=0;
            second=0;
            }
            cout<<"Sum equals: "<<sum<< endl;
            fclose(FP);
        }
        
        return 0;	
}