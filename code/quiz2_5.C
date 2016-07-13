{
    float R = 1.02;
    float u = 1.05;
    float d = 1. / u;
    float S0 = 100;
    float K = 102;
    cout << 1. / R * ((R - d) / (u - d) * (S0 * u - K) + (u - R) / (u - d) * 0) << endl;

    cout << S0 * (u - R) / (-R / (S0 * d) * u * S0 + R) << endl;
}
