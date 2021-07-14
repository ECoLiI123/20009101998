#homework

```bash
// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  int i=1;
  for(i=1,i<8;i++)
  {
    digitalWrite(i, HIGH);
    delay(1000); 
    digitalWrite(i, LOW);
    delay(1000); 
  }
}
```
