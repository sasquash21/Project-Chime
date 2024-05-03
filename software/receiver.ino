
#include "arduinoFFT.h"
#define SAMPLES 128             //128 is max sampling rate Arduino Uno.
#define SAMPLING_FREQUENCY 2048 //Nyquest frequency
 
arduinoFFT FFT = arduinoFFT();
 
unsigned int samplingPeriod;
unsigned long microSeconds;
 
double vReal[SAMPLES]; //real values
double vImag[SAMPLES]; //imaginary values
double avg_peak;
int k =0;
int number;
 
int output[100];
//double last5[5] = 0;


void setup() 
{
    Serial.begin(9600); //Baud rate
    samplingPeriod = round(1000000*(1.0/SAMPLING_FREQUENCY)); 
}
 
void loop() 
{
    double peak = 0;
    double avg_peak = 0;
    int count = 0;
    int freqs[10] = {550,600,650,700,750,800,850,900,950,1000};
    int nums[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int temp_num = 0;
    
    while (count < 20){
      peak = find_frequency();
      if((peak > 530) && (peak < 1040)){
        temp_num = find_number(peak);
        nums[temp_num] = nums[temp_num] + 1;
      }
      count++;
      
      for(int i = 0; i < 10; i++){
        if(nums[i] > 7){
          Serial.print(i);
          nums[i] = 0;
        }
      }
    }
    //avg_peak = peak/5;
    
    //peak = find_frequency();
    //number = find_number(peak);
    //Serial.println(number); 
}

double find_frequency(){
    for(int i=0; i<SAMPLES; i++)
    {
        microSeconds = micros();    //Returns the number of microseconds since the Arduino board began running the current script. 
        vReal[i] = analogRead(1);
        vImag[i] = 0;

        /*remaining wait time between samples if necessary*/
        while(micros() < (microSeconds + samplingPeriod))
        {}
    }

    /*Perform FFT on samples*/
    FFT.Windowing(vReal, SAMPLES, FFT_WIN_TYP_HAMMING, FFT_FORWARD);
    FFT.Compute(vReal, vImag, SAMPLES, FFT_FORWARD);
    FFT.ComplexToMagnitude(vReal, vImag, SAMPLES);

    /*Find peak frequency and print peak*/
    double freq = FFT.MajorPeak(vReal, SAMPLES, SAMPLING_FREQUENCY);
    return freq;
}

int find_number(double peak){
    int percerr = .1;
    int freqs[10] = {550,600,650,700,750,800,850,900,950,1000};
    int number = 0;
      
    if ((freqs[0]*.97 < peak) && (freqs[0]*1.03) > peak) {
      return 0;

    }
    else if ((freqs[1]*.97 < peak) && (freqs[1]*1.03) > peak) {
      return 1; 
    }
    else if ((freqs[2]*.97 < peak) && (freqs[2]*1.03) > peak) {
      return 2; 
      
    }
    else if ((freqs[3]*.97 < peak) && (freqs[3]*1.03) > peak) {
      return 3;
    }
    else if ((freqs[4]*.97 < peak) && (freqs[4]*1.03) > peak) {
      return 4; 
    }
    else if ((freqs[5]*.97 < peak) && (freqs[5]*1.03) > peak) {
      return 5;
    }
    else if ((freqs[6]*.97 < peak) && (freqs[6]*1.03) > peak) {
      return 6; 
    }
    else if ((freqs[7]*.97 < peak) && (freqs[7]*1.03) > peak) {
      return 7; 
    }
    else if ((freqs[8]*.97 < peak) && (freqs[8]*1.03) > peak) {
      return 8;
    }
    else if ((freqs[9]*.97 < peak) && (freqs[9]*1.03) > peak) {
      return 9; 
    }
}
