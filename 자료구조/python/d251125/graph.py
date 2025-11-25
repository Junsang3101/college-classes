def DFS(vtx, edge, v, visited):
    print(vtx[v], end=' ')
    visited[v] = True
    for i in range(len(vtx)):
        if edge[v][i] == 1 and not visited[i]:
            DFS(vtx, edge, i, visited)

vtx1 = [ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H']
edge1 = [ [ 0, 1, 1, 0, 0, 0, 0, 0 ],
         [ 1, 0, 0, 1, 0, 0, 0, 0 ],
         [ 1, 0, 0, 1, 1, 0, 0, 0 ],
         [ 0, 1, 1, 0, 0, 1, 0, 0 ],
         [ 0, 0, 1, 0, 0, 0, 1, 1 ],
         [ 0, 0, 0, 1, 0, 0, 0, 0 ],
         [ 0, 0, 0, 0, 1, 0, 0, 1 ],
         [ 0, 0, 0, 0, 1, 0, 1, 0 ], ]

vtx2 = [ 'A', 'B', 'C', 'D', 'E']
edge2 = [ [ 0, 1, 0, 1, 1 ],
          [ 1, 0, 1, 0, 0 ],
          [ 0, 1, 0, 0, 1 ],
          [ 1, 0, 0, 0, 0 ],
          [ 0, 0, 1, 0, 0 ], ]

DFS(vtx1, edge1, 0, [False]*len(vtx1))
print()
DFS(vtx2, edge2, 0, [False]*len(vtx2))