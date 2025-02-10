public class Main {

   static int countSubarrays(int[] array, int min, int max) {
       int count = 0;
       for (int i = 0; i < array.length; i++) {
           for (int j = i; j < array.length; j++) {
               boolean holds = true;
               for (int k = i; holds && k <= j; k++) {
                   if (array[k] < min || array[k] > max) {
                       holds = false;
                   }
               }
               if (holds) {
                   count++;
               }
           }
       }
       return count;
   }

   static int[] createArray(int N, int min, int max) {
       int[] array = new int[N];
       for (int i = 0; i < N; i++) {
           array[i] = min + (int) ((max - min) * Math.random());
       }
       return array;
   }

   public static void main(String[] args) {
       System.out.println("N\tTiempo (ns)"); // Encabezado de la tabla
       for (int N = 1000; N <= 20_000; N += 1000) {
           int[] array = createArray(N, 1, 1000);

           // Medición del tiempo
           long startTime = System.nanoTime();
           countSubarrays(array, 250, 750);
           long endTime = System.nanoTime();

           // Salida en consola
           System.out.println(N + "\t" + (endTime - startTime));
       }
   }
}