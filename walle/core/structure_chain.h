#ifndef WALLE_STRUCTURE_CHAIN_H
#define WALLE_STRUCTURE_CHAIN_H

#include <cstdint>
#include <tuple>

namespace Walle {

template <typename... CHAIN_ELEMENTS> class StructureChain {
public:
  using chain_type = std::tuple<CHAIN_ELEMENTS...>;

  StructureChain();

  ~StructureChain();

private:
};

} // namespace Walle

#include "structure_chain.ipp"

#endif // WALLE_STRUCTURE_CHAIN_H