#pragma once

namespace app::dv{
    class DvElementAtmosphereHeightFogParam : public AppDvElementBase{
    public:
        struct Data {
        public:
          int int0;
          int int4;
          float float8;
          float floatC;
          float float10;
          float float14;
          float float18;
          float float1C;
          float float20;
          float float24;
          float float28;
          float float2C;
          float float30;
          float float34;
          float float38;
          float float3C;
          float float40;
          float float44;
          float float48;
          float float4C;
          float float50;
          float float54;
          int gap58;
          float float5C;
          float float60;
          float float64;
          float float68;
          float float6C;
          float float70;
          float float74;
          float float78;
          float float7C;
          float float80;
          float float84;
          float float88;
          float float8C;
          float float90;
          float float94;
          float float98;
          float float9C;
          float floatA0;
          float floatA4;
          float floatA8;
        };

        virtual void Setup(void* unk) override;
        virtual bool UnkFunc1() override;
        virtual void* UnkFunc2() override;
        virtual void* AppUnkFunc3(void* unk0, unsigned int unk1) override;

        APP_DV_ELEMENT_DECLARATION_BASE(DvElementAtmosphereHeightFogParam)
    };
}