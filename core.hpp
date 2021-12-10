#pragma once

#include "crc32.hpp"
#include "keccak.hpp"
#include "md5.hpp"
#include "sha1.hpp"
#include "sha256.hpp"
#include "sha3.hpp"
#include <string>

namespace hash {

inline std::string md5(std::string_view source)
{
  return hash_lib::MD5{}(std::data(source), std::size(source));
}

inline std::string sha1(std::string_view source)
{
  return hash_lib::SHA1{}(std::data(source), std::size(source));
}

inline std::string sha256(std::string_view source)
{
  return hash_lib::SHA256{}(std::data(source), std::size(source));
}

inline std::string sha3(std::string_view source)
{
  return hash_lib::SHA3{}(std::data(source), std::size(source));
}

inline std::string crc32(std::string_view source)
{
  return hash_lib::CRC32{}(std::data(source), std::size(source));
}

inline std::string keccak(std::string_view source)
{
  return hash_lib::Keccak{}(std::data(source), std::size(source));
}

} // namespace hash