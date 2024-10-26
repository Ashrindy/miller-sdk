#pragma once

namespace hh::fnd {
    class ResourceContainer : public ReferencedObject {
    public:
        virtual void* GetRuntimeTypeInfo() const = 0;
        virtual ManagedResource* GetResourceByName(const char* name) const = 0;
        virtual int GetNumResources() const = 0;
        virtual ManagedResource* GetResourceByIndex(int index) const = 0;
        virtual uint64_t UnkFunc5() = 0;
    };
}
