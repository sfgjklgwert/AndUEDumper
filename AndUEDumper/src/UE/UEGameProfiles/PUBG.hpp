uintptr_t GetGUObjectArrayPtr() const override
    {
        return UEMemory::get_base() + 0xe74e0f0; 
    }
    uintptr_t GetNamesPtr() const override
    {
        uintptr_t lib_base = UEMemory::get_base();
        uintptr_t gname_ptr = vm_rpm_ptr<uintptr_t>((void*)(lib_base + 0xe498300));
        if (gname_ptr == 0) return 0;
        return gname_ptr + 0x110;
    }
