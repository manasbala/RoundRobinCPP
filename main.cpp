/* 
 * File:   main.cpp
 * Author: manasbala
 *
 * Created on August 9, 2015, 10:10 AM
 */

#include <cstdlib>
#include <iostream>

#include "Process.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int n; //number of process
    int temp;
    int quantums; //time quantums of process
    int totalBurstTime = 0; //sum of total burst time
    int totalAverageTime = 0;
    int totalWaitingTime = 0; // sum of total waiting time
    int quantumsUsed = 0; // number of quantums used
    Process process[50];

    cout << "\nNumber of process (>50): ";
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cout << "\nBurst time of process (P" << (i + 1) << "): ";
        cin >> temp;
        process[i] = Process((i + 1), temp, temp);
    }
    
    return 0;
}

