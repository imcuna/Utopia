// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::UGraphviz::Registry>
    : Ubpa::USRefl::TypeInfoBase<Ubpa::UGraphviz::Registry>
{
    static constexpr AttrList attrs = {};

    static constexpr FieldList fields = {
        Field{Name::constructor, WrapConstructor<Ubpa::UGraphviz::Registry()>()},
        Field{"GetNodes", &Ubpa::UGraphviz::Registry::GetNodes},
        Field{"GetEdges", &Ubpa::UGraphviz::Registry::GetEdges},
        Field{"GetNodeAttrs", &Ubpa::UGraphviz::Registry::GetNodeAttrs},
        Field{"GetEdgeAttrs", &Ubpa::UGraphviz::Registry::GetEdgeAttrs},
        Field{"IsRegisteredNode", &Ubpa::UGraphviz::Registry::IsRegisteredNode,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "ID"},
                    }
                },
            }
        },
        Field{"IsRegisteredEdge", static_cast<bool(Ubpa::UGraphviz::Registry::*)(size_t, size_t)const>(&Ubpa::UGraphviz::Registry::IsRegisteredEdge),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "lhs"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "rhs"},
                    }
                },
            }
        },
        Field{"IsRegisteredEdge", static_cast<bool(Ubpa::UGraphviz::Registry::*)(std::string_view, std::string_view)const>(&Ubpa::UGraphviz::Registry::IsRegisteredEdge),
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "lhsID"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "rhsID"},
                    }
                },
            }
        },
        Field{"GetNodeIndex", &Ubpa::UGraphviz::Registry::GetNodeIndex,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "ID"},
                    }
                },
            }
        },
        Field{"GetEdgeIndex", &Ubpa::UGraphviz::Registry::GetEdgeIndex,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "lhsID"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "rhsID"},
                    }
                },
            }
        },
        Field{"RegisterNode", &Ubpa::UGraphviz::Registry::RegisterNode,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "ID"},
                    }
                },
            }
        },
        Field{"RegisterEdge", &Ubpa::UGraphviz::Registry::RegisterEdge,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "lhs"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "rhs"},
                    }
                },
            }
        },
        Field{"RegisterNodeAttr", &Ubpa::UGraphviz::Registry::RegisterNodeAttr,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "nodeIndex"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "key"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(2),
                    AttrList{
                        Attr{Name::name, "value"},
                    }
                },
            }
        },
        Field{"RegisterEdgeAttr", &Ubpa::UGraphviz::Registry::RegisterEdgeAttr,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "edgeIndex"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "key"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(2),
                    AttrList{
                        Attr{Name::name, "value"},
                    }
                },
            }
        },
        Field{"DeregisterNodeAttr", &Ubpa::UGraphviz::Registry::DeregisterNodeAttr,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "nodeIndex"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "key"},
                    }
                },
            }
        },
        Field{"DeregisterEdgeAttr", &Ubpa::UGraphviz::Registry::DeregisterEdgeAttr,
            AttrList {
                Attr{UBPA_USREFL_NAME_ARG(0),
                    AttrList{
                        Attr{Name::name, "edgeIndex"},
                    }
                },
                Attr{UBPA_USREFL_NAME_ARG(1),
                    AttrList{
                        Attr{Name::name, "key"},
                    }
                },
            }
        },
    };
};
