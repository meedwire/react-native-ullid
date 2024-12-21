import Ulid from './NativeUlid';

export function ulid(): string {
  return Ulid.ULID();
}
