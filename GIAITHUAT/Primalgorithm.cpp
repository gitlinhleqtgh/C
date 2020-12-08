#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define maxN 10
#define inf 1000000000

typedef pair<int, int> pii;

int numberOfNodes, numberOfEdges;
int d[maxN];
vector<pii> graph[maxN];

int prim(int start, int numberOfNodes, int d[], vector<pii> graph[]) {
	int MSTWeight = 0;
	priority_queue<pii> minHeap;

	for (int i = 1; i <= numberOfNodes; i++)
		d[i] = inf;

	minHeap.push(make_pair(0, start));
	d[start] = 0;

	while (minHeap.size()) {
		int u = minHeap.top().second;
		int du = -minHeap.top().first;
		minHeap.pop();

		if (du != d[u]) continue;
		MSTWeight += d[u];
		d[u] = 0;

		for (int i = 0; int v = graph[u][i].second; i++) {
			int weight = graph[u][i].first;
			if (d[v] > weight) {
				d[v] = weight;
				minHeap.push(make_pair(-d[v], v));
			}
		}
	}

	return MSTWeight;
}

int main() {
	cin >> numberOfNodes >> numberOfEdges;

	for (int i = 0; i < numberOfEdges; i++) {
		int source, dest, weight;
		cin >> source >> dest >> weight;
		graph[source].push_back(make_pair(weight, dest));
		graph[dest].push_back(make_pair(weight, source));
	}

	for (int i = 1; i <= numberOfNodes; i++)
		graph[i].push_back(make_pair(0, 0));

	cout << prim(1, numberOfNodes, d, graph) << endl;

	return 0;
}
