{
    float rate[6] = {.07, .073, .077, .081, .084, .088};
    float result = 0;
    float d_0_T = 1;
    float d_sum = 0;
    for(int i = 0; i < 6; i++){
	d_0_T *= 1 / (1 + rate[5]);
	cout << d_0_T << " " << pow(1./1.088, i + 1) << endl;
	d_sum = d_sum + pow(1. / (1 + rate[i]), i + 1);
    }

    cout << "d0T: " << d_0_T << endl;
    cout << "dsum: " << d_sum << endl;
    cout << (1 - d_0_T) / d_sum << endl; 
}
