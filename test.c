// #include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>

int cont = 1;
void vocab(char A[100], char B[100], char C[100], int D) {
    int a;
    printf("Choose the synonym for %s. 1.%s, 2.%s\n",A,B,C);
    printf("Your answer is:");
    scanf("%d",&a);
    if (a == D) {
        printf("You are correct\n");
    }
    else {
        printf("You are wrong\n");
        cont = 0;
    }
}

int main(void)
{
    int size = 2;
    char word[][100] = {
        "assiduous",
        "didactic"
    };
    char opt1[][100] = {
        "dilligent",
        "unpleasant"
    };
    char opt2[][100] = {
        "arbitrary",
        "instructive"
    };
    int right[] = {1,2};

    for (int i = 0; i < size; i++) {
        vocab(word[i],opt1[i],opt2[i],right[i]);
        if (cont == 0) break;
    }

    return 0;
}     
