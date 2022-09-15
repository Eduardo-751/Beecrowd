/*
A musical loop is a small section of music composed to be played continuously (that is, the section is played again when it reaches the end), 
in a seamless way. Loops are used in many styles of popular music (hip hop, techno, etc), as well in computer games, especially casual games on the Internet.

Loops may be digitalized for example using PCM (Pulse Code Modulation), a technique for representing analog signals used extensively in digital audio. 
In PCM, the magnitude of the signal is sampled at regular intervals, and the values sampled are stored in sequence. To produce the sound for the sampled data, 
the procedure is applied in reverse (demodulation).

Fernanda works for a game software house, and composed a beautiful musical loop, coded in PCM. Analyzing the waveform of her loop in audio editing software, 
Fernanda became curious when she noticed the number of "peaks". A peak in a waveform is the value of a sample that represents a local maximum or minimum. 

Fernandinha is a dear friend of yours. She has asked your help to determine how many peaks exist in her musical loop.

Input
The input contains several test cases. The first line of a test case contains one integer N, 
representing the number of samples in the musical loop composed by Fernanda (2 ≤ N ≤ 104). The second line contains N integers Hi, separated by spaces, 
representing the sequence of magnitudes sampled (-104 ≤ Hi ≤ 104 for 1 ≤ i ≤ N, H1 ≠ HN and Hi ≠ Hi+1 for 1 ≤ i < N). Notice that H1 follows HN when the loop is played.

The end of the input is indicated by a line that contains only one zero.

Output
For each test case in the input your program must print a single line, containing one integer, the number of peaks that exist in the musical loop.

Input Sample	        Output Sample
2       
1 -3                    2
6
40 0 -41 0 41 42        2
4
300 450 449 450         4
0
*/
#include <stdio.h>

int main() {
    int T=1, i, t1, t2, ondas=0, V[10000];
    while(T!=0) {
            scanf("%i", &T);
            if(T!=0) {
                for(i=0; i<T; i++)
                    scanf("%i", &V[i]);
                V[T]=V[0];
                V[T+1]=V[1];
                for(i=1; i<T+1; i++) {
                    t1=i+1;
                    t2=i-1;
                    if(V[i]>V[t1] && V[i]>V[t2])
                        ondas++;
                    if(V[i]<V[t1] && V[i]<V[t2])
                        ondas++;
                }
                printf("%i\n", ondas);
                ondas=0;
            }
    }
    return 0;
}
