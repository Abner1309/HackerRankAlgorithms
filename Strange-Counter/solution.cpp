long strangeCounter(long t) {
	long initial_value = 1;
	long final_value = 3;
	long counter = final_value;
	
	while (final_value < t) {
		initial_value = final_value + 1;
		counter = 2 * counter;
		final_value = counter + final_value;
	}
	
	long diff = t - initial_value;
	long answer = counter - diff;
	
	return answer;
}
