
// Thread 1
void js_DestroyContext(...) {
    /* last one entering this function */
    ...
    js_UnpinPinnedAtom(&atoms);
    ...
}

// Thread 2
void js_DestroyContext(...) {
    /* non-last one entering this function */
    ...
    js_MarkAtom(&atoms, ...);
    ...
}

