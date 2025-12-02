from .topol import topological_sortAM

vertex = [ 'A', 'B', 'C', 'D', 'E' ]
edge = [ [ 0, 0, 0, 0, 0 ],
        [ 0, 0, 0, 0, 0 ],
        [ 0, 0, 0, 0, 0 ],
        [ 0, 0, 0, 0, 0 ],
        [ 0, 0, 0, 0, 0 ] ]

print('topological_sort : ', end='')
topological_sortAM(vertex, edge)
print()