from .binary_tree import Tnode

d = Tnode('D', None, None)
e = Tnode('E', None, None)
b = Tnode('B', d, e)
f = Tnode('F', None, None)
c = Tnode('C', f, None)
root = Tnode('A', b, c)

print('\n   In-Order : ', end='')
Tnode.inorder(root)
print('\n   Pre-Order : ', end='')
Tnode.preorder(root)
print('\n   Post-Order : ', end='')
Tnode.postorder(root)
print('\n')