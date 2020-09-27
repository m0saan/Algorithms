
#include <vector>
#include <list>


void createBuckets(const std::vector<int> &vector, size_t nOfBuckets, std::vector<std::list<int>> &buckets) {
    for (auto& item : vector) {
        auto bucketIndex = item / nOfBuckets;
        if (bucketIndex > nOfBuckets) {
            buckets.push_back(std::list<int>{item});
            continue;
        }
        buckets[bucketIndex].push_back(item);
    }
}

void bucketSort(std::vector<int>& vector, size_t nOfBuckets){
    std::vector<std::list<int>> buckets(nOfBuckets, std::list<int>{});

    createBuckets(vector, nOfBuckets, buckets);

    size_t iVector = 0;
    for (auto& bucket : buckets) {
        bucket.sort();
        for (auto& elem : bucket) vector[iVector++] = elem;
    }
}
