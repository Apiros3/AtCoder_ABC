#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    string S;
    cin >> S;

    bool temp=1;
    for (int i=0; i<S.length(); i++) {
        if (S[0]=='d') {
            if (S[1]=='r' && S[2]=='e' && S[3]=='a' && S[4]=='m') {
                if (S[5]=='d') {
                    i+=5;
                }
                else if (S[5]=='e' && S[6]=='r') {
                    if (S[7]=='a') i+=5;
                    else if (S[7]=='d' || S[7]=='e') i+=7;
                    else {
                        temp=0;
                        break;
                    }
                }
                else {
                    temp=0;
                    break;
                }
            }
            else {
                temp=0;
                break;
            }
        }
        else if (S[0]=='e') {
            if (S[1]=='r' && S[2]=='a' && S[3]=='s' && S[4]=='e') {
                if (S[5]=='e' || S[5]=='d') i+=5;
                else if (S[5]=='r') i+=6;
                else {
                    temp=0;
                    break;
                }
            }
            else {
                temp=0;
                break;
            }
        }
        else {
            temp=0;
            break;
        }
        if (!temp) break;
    }

    if ()


    return 0;
}     