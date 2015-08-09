/* 
 * File:   main.cpp
 * Author: manasbala
 * Email: manas.du@gmail.com
 * Github: https://github.com/manasbala
 *
 * Created on August 9, 2015, 10:10 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

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
    int gant[2][500];
    Process process[50];

    cout << "\nNumber of process (>50): ";
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cout << "\nBurst time of process (P" << (i + 1) << "): ";
        cin >> temp;
        process[i] = Process((i + 1), temp, temp);
    }
    
    cout << "\nEnter time quantums of the process: ";
    cin >> quantums;
    
    for(int i = 0; i < n; i++)
    {
        totalBurstTime += process[i].getBrustTime();
    }
    
    cout << "\nTotal burst time: " << totalBurstTime;
    
    int k = 0;
    do
    {
        for(int i = 0; i < n; i++)
        {
            if(process[i].getBrustTimeBalance() > 0 && process[i].getBrustTimeBalance() <= quantums)
            {
                quantumsUsed = process[i].getBrustTimeBalance() + quantumsUsed;
                process[i].setAverageTime(quantumsUsed);
                process[i].setWaitingTime(process[i].getAverageTime() - process[i].getBrustTime());
                process[i].setBrustTimeBalance(0);
                gant[0][k] = process[i].getProcessId();
                gant[1][k] = quantumsUsed;
                k++;
            }
            else if(process[i].getBrustTimeBalance() > 0)
            {
                quantumsUsed = quantums + quantumsUsed;
                process[i].setBrustTimeBalance((process[i].getBrustTimeBalance() - quantums));
                gant[0][k] = process[i].getProcessId();
                gant[1][k] = quantumsUsed;
                k++;
            }
            else if(process[i].getBrustTimeBalance() < 0)
            {
                cout << "\nError";
                exit(1);
            }
        }
    } while (quantumsUsed != totalBurstTime);
    
    
    cout << "\nRR gant chart: \n\n";
    
    for(int i = 0; i < k; i++)
        cout << setw(6) << gant[0][i];
    
    cout << "\n";
    
    for(int i = 0; i < k; i++)
        cout << setw(6) << gant[1][i];
    
    for(int i = 0; i < n; i++)
    {
        totalWaitingTime += process[i].getWaitingTime();
        totalAverageTime += process[i].getAverageTime();
    }
    
    cout << "\nTotal waiting time: " << totalWaitingTime;
    cout << "\nAverage waiting time: " << totalWaitingTime / n;
    cout << "\nTotal turnaround time: " << totalAverageTime;
    cout << "\nAverage turnaround time: " << totalAverageTime / n;
    
    return 0;
}

