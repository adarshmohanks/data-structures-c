#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

int n; 
int adj[MAX_VERTICES][MAX_VERTICES]; 
void create_edge(int u, int v) {
  adj[u][v] = 1;
  adj[v][u] = 1;
}

void bfs(int v) {
  int queue[MAX_VERTICES]; 
  int front = 0; 
  int rear = 0; 
  int visited[MAX_VERTICES]; 
  int i;
  int u; 
  for (i = 0; i < n; i++) {
    visited[i] = 0;
  }

  printf("%d ", v);
  visited[v] = 1;
  queue[rear] = v;
  rear++;

  while (front != rear) {
    u = queue[front];
    front++;
    for (i = 0; i < n; i++) {
      if (adj[u][i] == 1 && !visited[i]) {
        printf("%d ", i);
        visited[i] = 1;
        queue[rear] = i;
        rear++;
      }
    }
  }
}

int main() {
  int i, u, v;
  int choice; 
  for (i = 0; i < MAX_VERTICES; i++) {
    for (int j = 0; j < MAX_VERTICES; j++) {
      adj[i][j] = 0;
    }
  }

  printf("Enter the number of vertices in the graph: ");
  scanf("%d", &n);

  do {
    printf("\nMenu:\n");
    printf("1. Create edge\n");
    printf("2. BFS\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
        printf("Enter the vertices of the edge (u v): ");
        scanf("%d %d", &u, &v);
        create_edge(u, v);
        break;
      case 2:
        printf("Enter the starting vertex for BFS: ");
        scanf("%d", &u);
        bfs(u);
        break;
      case 3:
        break;
      default:
        printf("Invalid choice\n");
        break;
    }
  } while (choice != 3);

  return 0;
}

