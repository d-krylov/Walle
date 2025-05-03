#ifndef WALLE_STRUCTURE_CHAIN_IPP
#define WALLE_STRUCTURE_CHAIN_IPP

namespace Walle {

template <typename... CHAIN_ELEMENTS> StructureChain<CHAIN_ELEMENTS...>::StructureChain(const StructureChain &other) : chain_type(other) {
  Link(&std::get<0>(*this), &std::get<0>(other));
}

template <typename... CHAIN_ELEMENTS> StructureChain<CHAIN_ELEMENTS...>::StructureChain() { Link<sizeof...(CHAIN_ELEMENTS) - 1>(); }

template <typename... CHAIN_ELEMENTS> template <std::size_t Index> void StructureChain<CHAIN_ELEMENTS...>::Link() {
  auto &x = std::get<Index - 1>(static_cast<chain_type &>(*this));
  x.next_ = &std::get<Index>(static_cast<chain_type &>(*this));
  if constexpr (Index > 1) {
    Link<Index - 1>();
  }
}

template <typename... CHAIN_ELEMENTS>
StructureChain<CHAIN_ELEMENTS...>::StructureChain(const CHAIN_ELEMENTS &...elements) : chain_type(elements...) {
  Link<sizeof...(CHAIN_ELEMENTS) - 1>();
}

template <typename... CHAIN_ELEMENTS>
StructureChain<CHAIN_ELEMENTS...> &StructureChain<CHAIN_ELEMENTS...>::operator=(const StructureChain &other) {
  chain_type::operator=(other);
  Link(&std::get<0>(*this), &std::get<0>(other));
}

template <typename... CHAIN_ELEMENTS> void StructureChain<CHAIN_ELEMENTS...>::Link(head_type *destination, const head_type *source) {
  auto destination_out = reinterpret_cast<BaseOutStructure *>(destination);
  auto source_in = reinterpret_cast<const BaseInStructure *>(source);

  for (; source_in->next_ != nullptr; source_in = source_in->next_, destination_out = destination_out->next_) {
    std::ptrdiff_t offset = reinterpret_cast<const char *>(source_in->next_) - reinterpret_cast<const char *>(source);
    destination_out->next_ = reinterpret_cast<BaseOutStructure *>(reinterpret_cast<char *>(destination) + offset);
  }

  destination_out->next_ = nullptr;
}

template <typename... CHAIN_ELEMENTS> bool StructureChain<CHAIN_ELEMENTS...>::IsLinked(const BaseInStructure *next) const {
  auto element_pointer = reinterpret_cast<const BaseInStructure *>(&std::get<0>(*this));
  while (element_pointer) {
    if (element_pointer->next_ == next) return true;
    element_pointer = element_pointer->next_;
  }
  return false;
}

template <typename... CHAIN_ELEMENTS> template <typename T, std::size_t WHICH> T &StructureChain<CHAIN_ELEMENTS...>::Get() {
  return std::get<ChainElementIndex<T, WHICH, CHAIN_ELEMENTS...>()>(static_cast<chain_type &>(*this));
}

template <typename... CHAIN_ELEMENTS> template <typename T, std::size_t WHICH> const T &StructureChain<CHAIN_ELEMENTS...>::Get() const {
  return std::get<ChainElementIndex<T, WHICH, CHAIN_ELEMENTS...>()>(static_cast<const chain_type &>(*this));
}

template <typename... CHAIN_ELEMENTS> template <typename T, std::size_t WHICH> bool StructureChain<CHAIN_ELEMENTS...>::IsLinked() const {
  if constexpr (WHICH == 0 && std::same_as<T, head_type>) {
    return true;
  } else {
    return IsLinked(reinterpret_cast<const BaseInStructure *>(&Get<T, WHICH>()));
  }
}

} // namespace Walle

#endif // WALLE_STRUCTURE_CHAIN_IPP