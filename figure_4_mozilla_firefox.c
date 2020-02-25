
// Thread 1
int ReadWriteProc(...) {
    ...
    PBReadAsync(&p);
    io_pending = TRUE;
    ...
    while(io_pending) {...};
    ...
}

// Thread 2
void DoneWaiting(...) {
/* callback function of PBReadAsync */
    ...
    io_pending = FALSE;
    ...
}


