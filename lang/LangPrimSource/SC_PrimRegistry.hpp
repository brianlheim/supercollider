/**
 * \file SC_PrimRegistry.hpp
 *
 * TODO description
 */
#ifndef SC_PRIMREGISTRY_HPP_INCLUDED
#define SC_PRIMREGISTRY_HPP_INCLUDED

#include <vector>

#include "PyrPrimitive.h"

class SC_PrimRegistry {
public:
    struct Entry {
        PrimitiveHandler const primitive;
        const char * symbol;
        int numArgs;
        int varArgs;

        Entry(PrimitiveHandler const primitive, const char * symbol, int numArgs, int varArgs) :
            primitive{primitive},
            symbol{symbol},
            numArgs{numArgs},
            varArgs{varArgs}
        {}
    };

    void run_all() const
    {
        for (auto const& entry : m_entries) {
            definePrimitive(
                    nextPrimitiveIndex(),
                    0,
                    entry.symbol,
                    entry.primitive,
                    entry.numArgs,
                    entry.varArgs
                    );
        }
    }

    void add_entry(Entry&& entry)
    {
        m_entries.push_back(entry);
    }

    // singleton
    static SC_PrimRegistry& instance()
    {
        static SC_PrimRegistry reg{};
        return reg;
    }

    SC_PrimRegistry() = default;
    SC_PrimRegistry(SC_PrimRegistry const&) = delete;
    SC_PrimRegistry(SC_PrimRegistry&&) = delete;

private:
    std::vector<Entry> m_entries;
};

struct SC_PrimRegistryHelper {
    SC_PrimRegistryHelper(
            PrimitiveHandler const primitive,
            const char * const symbol,
            int numArgs,
            int varArgs,
            SC_PrimRegistry& reg)
    {
        reg.add_entry( {primitive, symbol, numArgs, varArgs} );
    }
};

/// Builds the C++ primitive function name
#define SCLANG_PRIMITIVE_NAME( name ) \
    pr ## name

/// Function signature for the C++ primitive
#define SCLANG_PRIMITIVE_SIGNATURE( name ) \
    int SCLANG_PRIMITIVE_NAME( name ) ( struct VMGlobals *g, int numArgsPushed )

// utilities
#define SCLANG_STRINGIFY( s ) #s
#define SCLANG_NUMARGS_MSG "sclang primitive must have at least 1 argument"
#define SCLANG_VARARGS_MSG "sclang primitive's varargs quality must be either 0 or 1"

/// SuperCollider primitive symbol
#define SCLANG_PRIMITIVE_SYMBOL( name ) \
    SCLANG_STRINGIFY( _ ## name )

#define SCLANG_REGISTRY_HELPER_DECL( name ) \
    static SC_PrimRegistryHelper name ## _RegistryHelper

/// Generates C++ function signature and registers with SC_PrimRegistry; private, do not use directly
#define SCLANG_DEFINE_PRIMITIVE_HELPER( name, numArgs, varArgs )       \
    SCLANG_PRIMITIVE_SIGNATURE( name );                                \
    static_assert( numArgs > 0, SCLANG_NUMARGS_MSG );                  \
    static_assert( varArgs == 0 || varArgs == 1, SCLANG_VARARGS_MSG ); \
    SCLANG_REGISTRY_HELPER_DECL( name ) {                              \
        & SCLANG_PRIMITIVE_NAME( name ),                               \
        SCLANG_PRIMITIVE_SYMBOL( name ),                               \
        numArgs,                                                       \
        varArgs,                                                       \
        SC_PrimRegistry::instance()                                    \
    };                                                                 \
    SCLANG_PRIMITIVE_SIGNATURE( name )

/// Use to define an ordinary (non-varArgs) primitive.
#define SCLANG_DEFINE_PRIMITIVE( name, numArgs ) \
    SCLANG_DEFINE_PRIMITIVE_HELPER( name, numArgs, 0 )

/// Use to define a varArgs primitive.
#define SCLANG_DEFINE_VARARGS_PRIMITIVE( name, numArgs ) \
    SCLANG_DEFINE_PRIMITIVE_HELPER( name, numArgs, 1 )

#endif // SC_PRIMREGISTRY_HPP_INCLUDED
