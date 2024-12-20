import { Text, View, StyleSheet } from 'react-native';
import { ullid } from 'react-native-ullid';

const result = ullid();

export default function App() {
  return (
    <View style={styles.container}>
      <Text>Result: {result}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
});
