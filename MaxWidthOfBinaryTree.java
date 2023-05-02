// import java.util.LinkedList;
// import java.util.Queue;
// import javax.swing.tree.TreeNode;

// class Solution {
//     public int widthOfBinaryTree(TreeNode root) {
//         if (root == null) {
//             return 0;
//         }
        
//         Queue<Pair<TreeNode, Integer>> queue = new LinkedList<>();
//         queue.add(new Pair<>(root, 0));
//         int maxWidth = 0;
        
//         while (!queue.isEmpty()) {
//             int levelLength = queue.size();
//             int levelStart = queue.peek().getValue();
//             int index = 0;
            
//             for (int i = 0; i < levelLength; i++) {
//                 Pair<TreeNode, Integer> pair = queue.poll();
//                 TreeNode node = pair.getKey();
//                 index = pair.getValue();
                
//                 if (node.left != null) {
//                     queue.add(new Pair<>(node.left, 2*index));
//                 }
                
//                 if (node.right != null) {
//                     queue.add(new Pair<>(node.right, 2*index+1));
//                 }
//             }
            
//             maxWidth = Math.max(maxWidth, index - levelStart + 1);
//         }
        
//         return maxWidth;
//     }
// }



// public class MaxWidthOfBinaryTree{

//     public static void main(String[] args){

//         Solution s= new Solution();

//         int result=s.widthOfBinaryTree(TreeNode root);

//         Assert.Equal(result, actualResult);


//     }

    
// }