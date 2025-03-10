#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Define the structs Workshops and Available_Workshops.
// Implement the functions initialize and CalculateMaxWorkshops

struct Workshop
{
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops
{
    int numberOfWorkshop;
    Workshop *Workshops;
};
bool compareByStartTime(const Workshop &a, const Workshop &b)
{
    return a.end_time < b.end_time;
}
Available_Workshops *initialize(int start_time[], int duration[], int n)
{
    Available_Workshops *Available = new Available_Workshops;
    Available->numberOfWorkshop = n;
    Available->Workshops = new Workshop[n];
    for (int i = 0; i < n; i++)
    {
        Available->Workshops[i].start_time = start_time[i];
        Available->Workshops[i].duration = duration[i];
        Available->Workshops[i].end_time = start_time[i] + duration[i];
    }
    std::sort(Available->Workshops, Available->Workshops + Available->numberOfWorkshop, compareByStartTime);
    return Available;
}
int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    int maxNumber{0};
    int last_end_time{0};
    for (int i = 0; i < ptr->numberOfWorkshop; i++)
    {
        if (ptr->Workshops[i].start_time >= last_end_time)
        {
            maxNumber++;
            last_end_time = ptr->Workshops[i].end_time;
        }
    }
    return maxNumber;
}
int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
