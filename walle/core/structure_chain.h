#ifndef WALLE_STRUCTURE_CHAIN_H
#define WALLE_STRUCTURE_CHAIN_H

#include <cstdint>
#include <tuple>

namespace Walle {

// In essence, this is an implementation of Vulkan-Hpp, but rewritten in modern C++

template <typename Type, typename... Chain>
concept PartOfStructureChain = (std::same_as<Type, Chain> || ...);

template <typename T, int WHICH, typename... Types> inline constexpr std::size_t ChainElementIndex() {
  auto index = 0, match_count = 0;
  auto matched = [&]() { return match_count == WHICH ? true : (++match_count, ++index, false); };
  auto skipped = [&]() { return (++index, false); };
  auto found = ((std::same_as<T, Types> ? matched() : skipped()) || ...);
  return index;
}

// clang-format on

template <typename... CHAIN_ELEMENTS> class StructureChain : public std::tuple<CHAIN_ELEMENTS...> {
public:
  using chain_type = std::tuple<CHAIN_ELEMENTS...>;

  static constexpr auto chain_size = std::tuple_size_v<chain_type>;

  using head_type = std::tuple_element_t<0, chain_type>;
  using tail_type = std::tuple_element_t<chain_size - 1, chain_type>;

  StructureChain();
  StructureChain(const StructureChain &other);
  StructureChain(const CHAIN_ELEMENTS &...elements);
  StructureChain &operator=(const StructureChain &other);

  template <typename T = head_type, std::size_t WHICH = 0> T &Get();
  template <typename T = head_type, std::size_t WHICH = 0> const T &Get() const;

  template <typename T, std::size_t WHICH> bool IsLinked() const;

private:
  template <std::size_t Index> void Link();

  void Link(head_type *destination_base, const head_type *source_base);

  bool IsLinked(const BaseInStructure *next) const;
};

} // namespace Walle

#include "structure_chain.ipp"

#endif // WALLE_STRUCTURE_CHAIN_H