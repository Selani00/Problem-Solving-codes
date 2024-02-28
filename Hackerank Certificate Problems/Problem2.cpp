#include<iostream>

using namespace std;

int main(){

}

long getMinCost(vector<int> crew_id, vector<int> job_id) {
    // Sort the vectors in ascending order
    sort(crew_id.begin(), crew_id.end());
    sort(job_id.begin(), job_id.end());

    // Calculate the minimum cost
    long minCost = 0;
    for (size_t i = 0; i < crew_id.size(); ++i) {
        minCost += abs(crew_id[i] - job_id[i]);
    }

    return minCost;
}