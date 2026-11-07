#include <iostream>
using namespace std;

const int MAX_VERTICES = 100;

struct Node {
    int vertex;
    Node* next;
};

int V = 0;
Node* adjacencyList[MAX_VERTICES];
int inDegree[MAX_VERTICES];
int outDegree[MAX_VERTICES];
bool graphExists = false;

void createGraph(int numVertices) {
    for (int i = 0; i < V; i++) {
        Node* current = adjacencyList[i];
        while (current != NULL) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        adjacencyList[i] = NULL;
    }

    V = numVertices;
    for (int i = 0; i < V; i++) {
        adjacencyList[i] = NULL;
        inDegree[i] = 0;
        outDegree[i] = 0;
    }
    graphExists = true;
}

void addEdge(int u, int v) {
    if (u < 0 || u >= V || v < 0 || v >= V) {
        cout << "Invalid edge: (" << u << ", " << v << ")" << endl;
        return;
    }

    Node* current = adjacencyList[u];
    while (current != NULL) {
        if (current->vertex == v) {
            cout << "Edge already exists: " << u << " -> " << v << endl;
            return;
        }
        current = current->next;
    }

    Node* newNode = new Node;
    newNode->vertex = v;
    newNode->next = NULL;

    if (adjacencyList[u] == NULL) {
        adjacencyList[u] = newNode;
    } else {
        Node* last = adjacencyList[u];
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = newNode;
    }

    outDegree[u]++;
    inDegree[v]++;
    cout << "Edge added: " << u << " -> " << v << endl;
}

void removeEdge(int u, int v) {
    if (u < 0 || u >= V || v < 0 || v >= V) {
        cout << "Invalid edge: (" << u << ", " << v << ")" << endl;
        return;
    }

    Node* current = adjacencyList[u];
    Node* previous = NULL;

    while (current != NULL && current->vertex != v) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        cout << "Edge does not exist: " << u << " -> " << v << endl;
        return;
    }

    if (previous == NULL) {
        adjacencyList[u] = current->next;
    } else {
        previous->next = current->next;
    }
    delete current;

    outDegree[u]--;
    inDegree[v]--;
    cout << "Edge removed: " << u << " -> " << v << endl;
}

void printAdjacencyList() {
    cout << "\nAdjacency List Representation:" << endl;
    cout << "----------------------------------------" << endl;
    for (int vertex = 0; vertex < V; vertex++) {
        cout << "Vertex " << vertex << ": ";
        Node* current = adjacencyList[vertex];
        if (current == NULL) {
            cout << "[]";
        }
        while (current != NULL) {
            cout << current->vertex << " ";
            current = current->next;
        }
        cout << endl;
    }
    cout << "----------------------------------------" << endl;
}

void bfs(int startVertex) {
    if (startVertex < 0 || startVertex >= V) {
        cout << "Invalid start vertex: " << startVertex << endl;
        return;
    }

    bool visited[MAX_VERTICES];
    for (int i = 0; i < V; i++) visited[i] = false;

    int result[MAX_VERTICES];
    int resultCount = 0;

    int queueArr[MAX_VERTICES];
    int front = 0, rear = 0;

    cout << "\nBFS starting from vertex " << startVertex << ":" << endl;
    cout << "----------------------------------------" << endl;

    queueArr[rear++] = startVertex;
    visited[startVertex] = true;

    while (front < rear) {
        int vertex = queueArr[front++];
        result[resultCount++] = vertex;
        cout << "Visiting: " << vertex << endl;

        Node* current = adjacencyList[vertex];
        while (current != NULL) {
            int neighbor = current->vertex;
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                queueArr[rear++] = neighbor;
            }
            current = current->next;
        }
    }

    cout << "BFS traversal order: ";
    for (int i = 0; i < resultCount; i++) {
        cout << result[i];
        if (i < resultCount - 1) cout << " ";
    }
    cout << endl;
    cout << "----------------------------------------" << endl;
}

void getLeafVertices() {
    int leaf[MAX_VERTICES];
    int leafCount = 0;

    cout << "\nLeaf Vertices (no outgoing edges):" << endl;
    cout << "----------------------------------------" << endl;

    for (int vertex = 0; vertex < V; vertex++) {
        if (adjacencyList[vertex] == NULL) {
            leaf[leafCount++] = vertex;
        }
    }

    if (leafCount > 0) {
        cout << "Leaf vertices: ";
        for (int i = 0; i < leafCount; i++) {
            cout << leaf[i];
            if (i < leafCount - 1) cout << " ";
        }
        cout << endl;
    } else {
        cout << "No leaf vertices found." << endl;
    }
    cout << "----------------------------------------" << endl;
}

bool isConnected() {
    cout << "\nConnectivity Check:" << endl;
    cout << "----------------------------------------" << endl;

    if (V == 0) {
        cout << "The graph is CONNECTED" << endl;
        cout << "----------------------------------------" << endl;
        return true;
    }

    bool visited[MAX_VERTICES];
    for (int i = 0; i < V; i++) visited[i] = false;

    int queueArr[MAX_VERTICES];
    int front = 0, rear = 0;

    queueArr[rear++] = 0;
    visited[0] = true;
    int count = 1;

    while (front < rear) {
        int vertex = queueArr[front++];
        Node* current = adjacencyList[vertex];
        while (current != NULL) {
            int neighbor = current->vertex;
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                queueArr[rear++] = neighbor;
                count++;
            }
            current = current->next;
        }
    }

    bool connected = (count == V);
    if (connected) {
        cout << "The graph is CONNECTED" << endl;
    } else {
        cout << "The graph is NOT CONNECTED" << endl;
    }
    cout << "----------------------------------------" << endl;

    return connected;
}

void getTotalDegree() {
    cout << "\nTotal Degree of All Vertices:" << endl;
    cout << "----------------------------------------" << endl;

    int totalSum = 0;
    for (int vertex = 0; vertex < V; vertex++) {
        int totalDegree = inDegree[vertex] + outDegree[vertex];
        cout << "Vertex " << vertex << ": in_degree=" << inDegree[vertex]
             << ", out_degree=" << outDegree[vertex]
             << ", total_degree=" << totalDegree << endl;
        totalSum += totalDegree;
    }

    cout << "Sum of all degrees: " << totalSum << endl;
    cout << "----------------------------------------" << endl;
}

void getNoOutgoingEdge() {
    int noOut[MAX_VERTICES];
    int noOutCount = 0;

    cout << "\nVertices with No Outgoing Edge:" << endl;
    cout << "----------------------------------------" << endl;

    for (int vertex = 0; vertex < V; vertex++) {
        if (adjacencyList[vertex] == NULL) {
            noOut[noOutCount++] = vertex;
        }
    }

    if (noOutCount > 0) {
        cout << "Vertices with no outgoing edges: ";
        for (int i = 0; i < noOutCount; i++) {
            cout << noOut[i];
            if (i < noOutCount - 1) cout << " ";
        }
        cout << endl;
    } else {
        cout << "All vertices have at least one outgoing edge." << endl;
    }
    cout << "----------------------------------------" << endl;
}

int countConnectedComponents() {
    bool visited[MAX_VERTICES];
    for (int i = 0; i < V; i++) visited[i] = false;

    int componentCount = 0;

    cout << "\nConnected Components:" << endl;
    cout << "----------------------------------------" << endl;

    for (int startVertex = 0; startVertex < V; startVertex++) {
        if (visited[startVertex]) continue;

        int component[MAX_VERTICES];
        int compCount = 0;

        int queueArr[MAX_VERTICES];
        int front = 0, rear = 0;

        queueArr[rear++] = startVertex;
        visited[startVertex] = true;

        while (front < rear) {
            int curr = queueArr[front++];
            component[compCount++] = curr;

            Node* current = adjacencyList[curr];
            while (current != NULL) {
                int neighbor = current->vertex;
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    queueArr[rear++] = neighbor;
                }
                current = current->next;
            }
        }

        for (int i = 0; i < compCount - 1; i++) {
            for (int j = 0; j < compCount - i - 1; j++) {
                if (component[j] > component[j + 1]) {
                    int temp = component[j];
                    component[j] = component[j + 1];
                    component[j + 1] = temp;
                }
            }
        }

        componentCount++;
        cout << "Component " << componentCount << ": ";
        for (int i = 0; i < compCount; i++) {
            cout << component[i];
            if (i < compCount - 1) cout << " ";
        }
        cout << endl;
    }

    cout << "Number of connected components: " << componentCount << endl;
    cout << "----------------------------------------" << endl;

    return componentCount;
}

void displayMenu() {
    cout << "\n==================================================" << endl;
    cout << "GRAPH OPERATIONS MENU" << endl;
    cout << "==================================================" << endl;
    cout << "1. Create a graph with given number of vertices" << endl;
    cout << "2. Add edges to the graph" << endl;
    cout << "3. Remove edges from the graph" << endl;
    cout << "4. Print the adjacency list representation" << endl;
    cout << "5. Perform BFS starting from a given vertex" << endl;
    cout << "6. Display all leaf vertices / end vertices" << endl;
    cout << "7. Check whether the graph is connected or not" << endl;
    cout << "8. Find the total degree of all vertices" << endl;
    cout << "9. Display all vertices with no outgoing edge" << endl;
    cout << "10. Count the number of connected components" << endl;
    cout << "0. Exit" << endl;
    cout << "==================================================" << endl;
}

int main() {
    while (true) {
        displayMenu();
        cout << "Enter your choice (0-10): ";
        int choice;

        if (!(cin >> choice)) {
            cout << "Invalid choice. Please enter a number between 0 and 10." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (choice == 0) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }
        else if (choice == 1) {
            cout << "Enter number of vertices: ";
            int numVertices;
            if (cin >> numVertices) {
                if (numVertices <= 0) {
                    cout << "Number of vertices must be greater than 0" << endl;
                } else if (numVertices > MAX_VERTICES) {
                    cout << "Number of vertices cannot be more than " << MAX_VERTICES << endl;
                } else {
                    createGraph(numVertices);
                    cout << "Graph created with " << numVertices << " vertices" << endl;
                }
            } else {
                cout << "Invalid input. Please enter an integer." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
        }
        else if (choice == 2) {
            if (!graphExists) {
                cout << "Please create a graph first (Option 1)" << endl;
                continue;
            }
            int u, v;
            cout << "Enter source vertex: ";
            cin >> u;
            cout << "Enter destination vertex: ";
            cin >> v;
            if (!cin) {
                cout << "Invalid input. Please enter integers." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }
            addEdge(u, v);
        }
        else if (choice == 3) {
            if (!graphExists) {
                cout << "Please create a graph first (Option 1)" << endl;
                continue;
            }
            int u, v;
            cout << "Enter source vertex: ";
            cin >> u;
            cout << "Enter destination vertex: ";
            cin >> v;
            if (!cin) {
                cout << "Invalid input. Please enter integers." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }
            removeEdge(u, v);
        }
        else if (choice == 4) {
            if (!graphExists) {
                cout << "Please create a graph first (Option 1)" << endl;
                continue;
            }
            printAdjacencyList();
        }
        else if (choice == 5) {
            if (!graphExists) {
                cout << "Please create a graph first (Option 1)" << endl;
                continue;
            }
            cout << "Enter starting vertex for BFS: ";
            int start;
            if (cin >> start) {
                bfs(start);
            } else {
                cout << "Invalid input. Please enter an integer." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
        }
        else if (choice == 6) {
            if (!graphExists) {
                cout << "Please create a graph first (Option 1)" << endl;
                continue;
            }
            getLeafVertices();
        }
        else if (choice == 7) {
            if (!graphExists) {
                cout << "Please create a graph first (Option 1)" << endl;
                continue;
            }
            isConnected();
        }
        else if (choice == 8) {
            if (!graphExists) {
                cout << "Please create a graph first (Option 1)" << endl;
                continue;
            }
            getTotalDegree();
        }
        else if (choice == 9) {
            if (!graphExists) {
                cout << "Please create a graph first (Option 1)" << endl;
                continue;
            }
            getNoOutgoingEdge();
        }
        else if (choice == 10) {
            if (!graphExists) {
                cout << "Please create a graph first (Option 1)" << endl;
                continue;
            }
            countConnectedComponents();
        }
        else {
            cout << "Invalid choice. Please enter a number between 0 and 10." << endl;
        }
    }

    return 0;
}
