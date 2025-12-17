import java.util.*;

public class ArraySwapOperations {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            long k = sc.nextLong();
            
            int[] a = new int[n];
            int[] b = new int[m];
            
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            
            for (int i = 0; i < m; i++) {
                b[i] = sc.nextInt();
            }
            
            // Simulate operations until stable or k operations done
            long operations = 0;
            boolean changed = true;
            
            // We need at most n*m operations to reach a stable state
            // because each position pair (i%n, i%m) repeats every lcm(n,m) operations
            long maxOps = Math.min(k, 2L * (n + m));
            
            while (operations < maxOps && changed) {
                changed = false;
                long remaining = k - operations;
                long opsInThisCycle = Math.min(remaining, n * m);
                
                for (long i = 0; i < opsInThisCycle && operations < k; i++) {
                    int idxA = (int)(operations % n);
                    int idxB = (int)(operations % m);
                    
                    if (a[idxA] > b[idxB]) {
                        // Swap
                        int temp = a[idxA];
                        a[idxA] = b[idxB];
                        b[idxB] = temp;
                        changed = true;
                    }
                    
                    operations++;
                }
                
                // If no changes in a full cycle, we're stable
                if (!changed) {
                    break;
                }
            }
            
            // Print results
            for (int i = 0; i < n; i++) {
                System.out.print(a[i]);
                if (i < n - 1) System.out.print(" ");
            }
            System.out.println();
            
            for (int i = 0; i < m; i++) {
                System.out.print(b[i]);
                if (i < m - 1) System.out.print(" ");
            }
            System.out.println();
        }
        
        sc.close();
    }
}
