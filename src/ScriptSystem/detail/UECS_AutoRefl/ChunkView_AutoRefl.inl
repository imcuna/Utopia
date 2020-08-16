// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UECS::ChunkView>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::UECS::ChunkView>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{Name::constructor, WrapConstructor<Ubpa::UECS::ChunkView(Ubpa::UECS::Archetype*, size_t)>()},
        Field{"Contains", &Ubpa::UECS::ChunkView::Contains},
		Field{"GetCmptArray",
			static_cast<void* (Ubpa::UECS::ChunkView::*)(Ubpa::UECS::CmptType)const>(&Ubpa::UECS::ChunkView::GetCmptArray)
        },
		Field{"GetEntityArray", &Ubpa::UECS::ChunkView::GetEntityArray},
        Field{"EntityNum", &Ubpa::UECS::ChunkView::EntityNum},
    };
};

