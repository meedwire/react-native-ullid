import type { TurboModule } from 'react-native';
import { TurboModuleRegistry } from 'react-native';

export interface Spec extends TurboModule {
  ULID(): string;
}

export default TurboModuleRegistry.getEnforcing<Spec>('Ulid');
