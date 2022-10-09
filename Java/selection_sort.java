public class selection_sort {
    void sort(int arr[]) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            // get index of minimum element in unsorted array
            int min_idx = i;
            for (int j = i + 1; j < n; j++)
                if (arr[j] < arr[min_idx])
                    min_idx = j;

            // Swap the found minimum element with the first element
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
    
    public static void main(String args[]) {
        selection_sort obj = new selection_sort();
        int[] arr = { 9, 14, 3, 2, 43, 7, 11, 58, 22 };
        System.out.println("Before Selection Sort");
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();

        obj.sort(arr); // sorting array using selection sort

        System.out.println("After Selection Sort");
        for (int i : arr) {
            System.out.print(i + " ");
        }
    }
}
