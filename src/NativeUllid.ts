import type { TurboModule } from 'react-native';
import { TurboModuleRegistry } from 'react-native';

export interface Spec extends TurboModule {
  ULLID(): string;
}

export default TurboModuleRegistry.getEnforcing<Spec>('Ullid');
