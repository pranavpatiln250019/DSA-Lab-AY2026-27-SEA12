// Name: PRANAV PATIL
// Roll no: SEA-12
// Graph Traversal for Campus Navigation using BFS and DFS
#include <stdio.h>

void BFS(int vrtx, int arr[vrtx][vrtx], int start){
    int visited[vrtx];
    int queue[vrtx];
    int front = 0, rear = -1;

    for(int i = 0; i < vrtx; i++){
        visited[i] = 0;
    }
    
    visited[start] = 1;
    queue[++rear] = start;

    printf("BFS Traversal: ");

    while(front <= rear){
        int node = queue[front++];
        printf("%d ", node);

        for(int i = 0; i < vrtx; i++){
            if(arr[node][i] == 1 && !visited[i]){
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
    printf("\n");
}

void DFS(int vrtx, int arr[vrtx][vrtx], int visited[], int node){
    visited[node] = 1;
    printf("%d ", node);

    for(int i = 0; i < vrtx; i++){
        if(arr[node][i] == 1 && !visited[i]){
            DFS(vrtx, arr, visited, i);
        }
    }
}

int main(){ // Changed from void main to int main
    int vrtx, edg;

    printf("Enter Number of Buildings: ");
    if(scanf("%d", &vrtx) != 1) return 1;

    printf("Enter Number of Paths: ");
    if(scanf("%d", &edg) != 1) return 1;

    int arr[vrtx][vrtx];
    int x, y;

    for(int i = 0; i < vrtx; i++){
        for(int j = 0; j < vrtx; j++){
            arr[i][j] = 0;
        }
    }

    printf("\n--//PATHS//--\n");
    
    for(int i = 1; i <= edg; i++){
        printf("Enter Path %d (vertex numbers 0 to %d): ", i, vrtx - 1);
        if(scanf("%d %d", &x, &y) == 2) {
            arr[x][y] = arr[y][x] = 1;
        }
    }

    printf("\nAdjacency Matrix for given data:\n");

    for(int i = 0; i < vrtx; i++){
        for(int j = 0; j < vrtx; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int start;

    printf("\nEnter Starting Building (0 to %d): ", vrtx - 1);
    if(scanf("%d", &start) != 1) return 1;

    BFS(vrtx, arr, start);

    int visited[vrtx];

    for(int i = 0; i < vrtx; i++){
        visited[i] = 0;
    }

    printf("DFS Traversal: ");
    DFS(vrtx, arr, visited, start);
    printf("\n");

    return 0; // Added return statement
}
