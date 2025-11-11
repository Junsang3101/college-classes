class Tnode:
    def __init__(self, data, left, right):
        self.data = data
        self.left = left
        self.right = right

    def preorder(node):
        if node is not None:
            print(node.data, end=' ')
            Tnode.preorder(node.left)
            Tnode.preorder(node.right)
    
    def inorder(node):
        if node is not None:
            Tnode.inorder(node.left)
            print(node.data, end=' ')
            Tnode.inorder(node.right)
    
    def postorder(node):
        if node is not None:
            Tnode.postorder(node.left)
            Tnode.postorder(node.right)
            print(node.data, end=' ')