#include <vector>
#include <queue>
#include <iostream>
using namespace std;

#define inf 1000000000
#define maxN 1000

typedef pair<int, int> pii;

vector <pii> graph[maxN];
int numberOfNodes, numberOfEdges;
int d[maxN];

void dijkstra(int start, int finish) {
	priority_queue<pii, vector<pii>, greater<pii> > minHeap;
	
	for (int i = 1; i <= numberOfNodes; i++)
		d[i] = inf;
	
	d[start] = 0;
	minHeap.push(make_pair(0, start));

	while (minHeap.size()) {
		int u = minHeap.top().second;
		int weightU = minHeap.top().first;
		minHeap.pop();
		
		if (weightU != d[u]) continue;

		for (int i = 0; int v = graph[u][i].second; i++) {
			int weight = graph[u][i].first;

			if (d[v] > weightU + weight) {
				d[v] = weightU + weight;
				minHeap.push(make_pair(d[v], v));
			}
		}
	}
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

	dijkstra(1, 3);
	
	cout << d[3] << endl;

	return 0;
}

