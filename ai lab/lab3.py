class StateSpace:
    def __init__(self):
        # Adjacency list to represent State Space
        self.adj = {}          # dict[char, list[char]]
        self.visited = {}      # dict[char, bool]

    # Add transitions between states (Edges)
    def add_edge(self, u, v):
        if u not in self.adj:
            self.adj[u] = []
        self.adj[u].append(v)

    # DFS Search Function
    def dfs_search(self, start, goal):
        # Clear visited map for a fresh search
        self.visited.clear()

        stack = []
        stack.append(start)

        print("Search Path: ", end="")

        while stack:
            # 1. Pop the top state from the stack
            current = stack.pop()

            # 2. Check if this state has been visited
            if not self.visited.get(current, False):
                print(current, end=" ")
                self.visited[current] = True

                # 3. GOAL TEST: Check if this is the goal state
                if current == goal:
                    print(f"\n[SUCCESS] Goal state '{goal}' found!")
                    return True

                # 4. Expand neighbours (Push to stack)
                # Reverse neighbours to mimic C++ reverse() + push order
                for neighbor in reversed(self.adj.get(current, [])):
                    if not self.visited.get(neighbor, False):
                        stack.append(neighbor)

        print("\n[FAILURE] Goal state not reachable.")
        return False


if __name__ == "__main__":
    problem = StateSpace()

    # Constructing the State Space Graph
    # A -> B, C
    # B -> D, E
    # C -> F
    # E -> G (Goal)
    problem.add_edge('A', 'B')
    problem.add_edge('A', 'C')
    problem.add_edge('B', 'D')
    problem.add_edge('B', 'E')
    problem.add_edge('C', 'F')
    problem.add_edge('E', 'G')

    print("Starting DFS Search from Root 'A' to find Goal 'G':")
    problem.dfs_search('A', 'G')
