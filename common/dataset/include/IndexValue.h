// IndexValue.h 

#pragma once

#include "types.h"
using linear::uint;

#include <iostream>
using std::ostream;

namespace dataset
{
    class IndexValue
    {

    public:
        /// Ctor
        ///
        IndexValue(uint index, double value);

        /// \returns The index
        ///
        uint GetIndex() const;

        /// \return The value
        ///
        double GetValue() const;

        /// Prints the index value pair to a stream
        ///
        void Print(ostream& os) const;

    private:
        uint _index;
        double _value;
    };

    ostream& operator<<(ostream& os, const IndexValue& indexValue);
}