
// Thread 1
void NodeState::setDynamicId(int id) {
    dynamicId = id;
}

// Thread 2
MgmtSrvr::status(..., int *dynamic, ...) {
    ...
    *dynamic = node.m_state.dynamicId;
    ....
}

