for(int i = 0; i < 12; i++) {
    if (*(p + i) % 2 == 0) {
        *(p + i) = 0;
    }
}
