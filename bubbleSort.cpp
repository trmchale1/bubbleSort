void sort(int userVals[], int n){
	int tempVal;
	for(int i = 0; i < (n-1); i++)
	{
		for(int j = i + 1; j<n; j++){
			if(userVals[i] > userVals[j])
			{
				tempVal = userVals[i];
				userVals[i] = userVals[j];
				userVals[j] = tempVal;
			}
		}

}
