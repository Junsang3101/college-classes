def topological_sortAM(vertex, edge):
    n = len(vertex)
    inDeg = [0] * n
    for i in range(n):
        for j in range(n):
            if edge[i][j] > 0:
                inDeg[j] += 1
    
    vlist = []
    for i in range(n):
        if inDeg[i] == 0:
            vlist.append(i)

    while len(vlist) > 0:
        v = vlist.pop()
        print(vertex[v], end='')

        for u in range(n):
            if v != u and edge[v][u] > 0:
                inDeg[u] -= 1
                if inDeg[u] == 0:
                    vlist.append(u)
