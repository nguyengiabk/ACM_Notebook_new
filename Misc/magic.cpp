void magic() {
    for(b=0; b<K; b++) {
        int f=0, t=(1<<b);
        for(g=0; g<(1<<(K-1-b)); f+=(1<<(b+1)), t+=(1<<(b+1)), g++)
            for(i=0; i<(1<<b); i++)
                D[t|i] += D[f|i];
    }
}
