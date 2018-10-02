class BubbleSort{
//Bubble Sort 
	public static int[] bubbleSort(int A[]) {
		int aux;
		long exchanges = 0;
		long comparisons = 0;
		
		for(int i = 1;i<=A.length;i++) {
			comparisons++;
			for(int k = 0;k<A.length-1;k++) {
				comparisons++;
				if(A[k]>A[k+1]) {
					comparisons++;
					aux = A[k];
					A[k] = A[k+1];
					A[k+1] = aux;
					exchanges =+ 3;
				}
			}
		}
		System.out.println("Exchanges: "+exchanges+" Comparisons: "+comparisons);
		return A;
		}
}
