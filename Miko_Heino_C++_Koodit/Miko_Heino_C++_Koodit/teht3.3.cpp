void kanna(int* t, int n) {
	for (int i = 0; i < n / 2; i++) {
		int temp = t[i];
		t[i] = t[n - i - 1];
		t[n - i - 1] = temp;
	}
}