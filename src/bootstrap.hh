<?hh //strict

/**
 * This file is part of hhpack\file package.
 *
 * (c) Noritaka Horio <holy.shared.design@gmail.com>
 *
 * This source file is subject to the MIT license that is bundled
 * with this source code in the file LICENSE.
 */

namespace hhpack\file {
  use Generator;

  type ByteStream  = Generator<int, Chunk, void>;
  type LineStream  = Generator<int, Chunk, void>;
}