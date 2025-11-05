1)
  array data structure is a data structure used for simple and fast way of storage of multiple values in a single name.

    
2)
int scores[2][2] = {
    {65, 92},
    {84, 72}
};



3)
  #include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    for(int i = 0; i < 2; i++) {        
        for(int j = 0; j < 2; j++) {   
            printf("%d ", scores[i][j]);
        }
        printf("\n");   
    }

    return 0;
}
