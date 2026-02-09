from collections import deque

class Graph:
    def __init__(self):
        # Dictionary to store graph as an Adjacency List
        self.graph = {}

    def add_edge(self, u, v):
        # Add edge u -> v
        if u not in self.graph:
            self.graph[u] = []
        self.graph[u].append(v)
        
        # Ensure v is in the graph even if it has no outgoing edges
        if v not in self.graph:
            self.graph[v] = []

    def bfs(self, start_node):
        # Set to keep track of visited nodes to prevent loops
        visited = set()
        
        # Initialize queue with the start node
        queue = deque([start_node])
        visited.add(start_node)

        print(f"Breadth First Search starting from vertex {start_node}:")

        while queue:
            # Dequeue a vertex from the front
            current_node = queue.popleft()
            print(current_node, end=" ")

            # Get all adjacent vertices of the dequeued node
            for neighbor in self.graph[current_node]:
                if neighbor not in visited:
                    visited.add(neighbor)
                    queue.append(neighbor)
        print() # Newline for clean output

# Driver Code
if __name__ == "__main__":
    g = Graph()
    
    # Building the graph
    # 0 -> 1, 2
    # 1 -> 2
    # 2 -> 0, 3
    # 3 -> 3
    g.add_edge(0, 1)
    g.add_edge(0, 2)
    g.add_edge(1, 2)
    g.add_edge(2, 0)
    g.add_edge(2, 3)
    g.add_edge(3, 3)

    g.bfs(2)