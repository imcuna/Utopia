// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UECS::CmptPtr>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::UECS::CmptPtr>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{Name::constructor, WrapConstructor<Ubpa::UECS::CmptPtr(Ubpa::UECS::CmptType, void *)>()},
        Field{"Type", &Ubpa::UECS::CmptPtr::Type},
		Field{"Ptr", &Ubpa::UECS::CmptPtr::Ptr},
		Field{"Valid", &Ubpa::UECS::CmptPtr::Valid},
    };
};
