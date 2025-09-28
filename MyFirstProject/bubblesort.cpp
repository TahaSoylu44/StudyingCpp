#include <iostream>

int main(){
    
    int numbers[] = {6,5,4,7,2,0,1};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int temp;
    int counter = 0;
    bool isSorted = false;
    int index = 0;

    while(!isSorted){
        temp = numbers[index];
        for (int j = 1; j < size; j++){
            if (numbers[j] > temp){
                temp = numbers[j];
            }  
        }
        
        for (int i = 1; i < size; i++){
            if (numbers[i] < temp){
                numbers[i - 1] = numbers[i];
                numbers[i] = temp;
                isSorted = true;
            }
            else{
                isSorted = false;
                index = 0;
                break;
            }
        }
        counter++;

        if (counter == 2){
            break;
        }
    }
    

    for (int i = 0; i < size; i++){
        std::cout << numbers[i] << " ";
    }
    
    return 0;
}