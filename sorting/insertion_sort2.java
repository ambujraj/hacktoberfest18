class InsertionSort{
  //Insertion Sort
	public static int[] insertionSort(int A[]) {
		int chosen;
		int i;
		int j;
		long exchanges = 0;
		long comparisons = 0;
		
		for(i = 1;i<A.length;i++) {
			comparisons++;
			chosen = A[i];
			j = i-1;
			exchanges += 2;
			while((j>=0) && (A[j]>chosen)) {
				comparisons += 2;
				A[j+1] = A[j];
				exchanges++;
				j--;
			}
			A[j+1] = chosen;
			exchanges++;
			
				
			}
		System.out.println("Exchanges: "+exchanges+" Comparisons "+comparisons);
		return A;
		}
}
