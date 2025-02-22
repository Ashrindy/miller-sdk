#pragma once

namespace hh::dv{
    class DvElementCameraNearFar : public DvElementBase {
    public:
        struct Data {
        public:
            enum class Flags : unsigned int {
                NEAR_CLIP,
                FAR_CLIP
            };
            
            csl::ut::Bitset<Flags> flags;
            float nearClip;
            float farClip;
            int unk1[5];
        };

        Data binaryData;

        virtual void Setup(void* unk) override;
        virtual void SetData(void* data) override;

        DV_ELEMENT_DECLARATION_BASE(DvElementCameraNearFar)
    };
}