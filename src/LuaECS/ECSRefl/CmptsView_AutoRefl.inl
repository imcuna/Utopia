// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UECS::CmptsView>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::UECS::CmptsView>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
		/*Field{Name::constructor, WrapConstructor<Ubpa::UECS::CmptsView(Ubpa::UECS::EntityLocator*, void**)>(),
			AttrList {
				Attr{UBPA_USREFL_NAME_ARG(0),
					AttrList{
						Attr{Name::name, "locator"},
					}
				},
				Attr{UBPA_USREFL_NAME_ARG(1),
					AttrList{
						Attr{Name::name, "cmpts"},
					}
				},
			}
		},*/
        Field{"GetCmpt", &Ubpa::UECS::CmptsView::GetCmpt,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0)},
            }
		},
		/*Field{"Components", &Ubpa::UECS::CmptsView::Components},*/
    };
};

