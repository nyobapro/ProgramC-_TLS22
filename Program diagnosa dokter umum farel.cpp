#include <iostream>

using namespace std;

int main ()
{
    char pus, pil, ba;
    float fev;

  cout << "Selamat datang di Program Diagnosa Penyakit Harian \n";
  cout << "--------------------------- \n\n";
  cout << "Jawab pertanyaan suhu dengan angka dan pertanyaan lain dengan y jika merasa atau n jika tidak merasa \n\n ";
  cout << "Berapa temperatur tubuh anda ? \n";
  cin >> fev;

  cout << "apakah kamu pilek ? \n";
  cin >> pil;

  cout << "apa kamu merasa sakit kepala ? \n";
  cin >> pus;

  cout << "apakah kamu batuk ? \n";
  cin >> ba;

  if        (fev >=37 && pil == 'y' && pus == 'y'&& ba == 'y'){
        cout << "Keempat gejala tersebut mengindikasikan penyakit lain yang kompleks, salah satunya COVID-19. \n Jika demam sudah lebih dari 3 hari, penyakit mungkin lebih serius. \n Untuk sekarang, perbanyak istirahat dan minumlah air hangat untuk meringankan batuk dan pilek \n obat sementara yang dapat dikonsumsi adalah paracetamol dan obat batuk";
  } else if (fev <37 && pil == 'n' && pus == 'n'&& ba == 'n'){
        cout << "kamu sepertinya tidak menujukkan gejala penyakit umum, terus jaga kesehatanmu ";
  } else if (fev >=37&& ba == 'y'&& pus == 'y'){
  cout << "Pusing ditambah batuk dan demam dapat mengindikasikan radang tenggorokan atau batuk yang berat \n Radang tenggorokan dapat disembuhkan dengan istirahat dan obat tipe kortikosteroid misal dexamethasone \n Radang tenggorokan dapat dicegah dengan menjaga makanan sehat dan asupan vitamin C serta konsumsi air yang cukup";
  } else if (fev >=37&& ba == 'y'&& pil == 'y'){
  cout << "Demam batuk pilek adalah penyakit yang sangat umum ketika sedang pergantian musim \n Penyakit ini biasa disebut demam bapil, seperti meriang, namun ditambah batuk \n Pengobatan yang cukup efektif adalah dengan paracetamol atau ibuprofen dan obat batuk guafenesin-antitusif, atau ekspektoran jika batuk yang dialami berdahak";
  } else if (fev >=37&& pus == 'y'&& pil == 'y'){
  cout << "Kedua gejala demam dan pusing dapat menghambat aktivitas dan membuat badan lemas \n Penyakit ini mengindikasikan flu sedang, yang dapat disembuhkan dengan paracetamol dan obat pilek analgesik-dekongestan jika hidung benar-benar tersumbat \n Namun untuk penyembuhan flu, istirahat yang cukup merupakan proses yang terpenting";
  } else if (ba == 'y'&& pus == 'y'&& pil == 'y'){
  cout << "Pusing disertai batuk dan pilek adalah gejala dari meriang dan flu, dan jika tidak segera ditangani dapat berujung pada naiknya suhu tubuh \n Untuk menyembuhkan pusing, dapat menggunakan ibuprofen, sedangkan batuk dapat diringankan dengan guafenesin-antitusif \n atau ekspektoran jika berdahak. Pilek dapat diringankan oleh dekongestan dan analgesik ";
  } else if (fev >=37&& pus == 'y'){
  cout << "Demam dan sakit kepala adalah gejala pembuka pada penyakit lain, sebab kebanyakan penyakit dimulai dari demam dan sakit kepala \n Gunakan paracetamol untuk meredakan sakit kepala dan demam, serta perbanyak istirahat dan minum air";
  } else if (fev >=37&& pil == 'y'){
  cout << "Demam dan hidung tersumbat mengindikasikan flu ringan, yang dapat disembuhkan dalam kurun waktu yang relatif cepat dengan bantuan obat paracetamol dan istirahat yang cukup. \n Pilek dapat diringankan dengan minum air hangat";
  } else if (fev >=37&& ba == 'y'){
  cout << "Maaf, tidak terdapat diagnosa sederhana demam disertai batuk, jika sudah terjadi dalam waktu lama, segera periksakan ke dokter ";
  } else if (pus == 'y'&& ba == 'y'){
  cout << "Kedua gejala ini dapat mengindikasikan radang tenggorokan, terutama jika tenggorokan sakit ketika menelan \n Radang tenggorokan dapat disembuhkan dengan istirahat dan obat tipe kortikosteroid misal dexamethasone \n Radang tenggorokan dapat dicegah dengan menjaga makanan sehat dan asupan vitamin C serta konsumsi air yang cukup";
  } else if (ba == 'y'&& pil == 'y'){
  cout << "Kamu mengalami batuk pilek biasa, dimana batuk berdahak dapat ditangani dengan ekspektoran-guafenesin sedangkan batuk tidak berdahak oleh antitusif \n Pilek dapat diringankan oleh analgesik-antipretik maupun dekongestan";
  } else if (pus == 'y'&& pil == 'y'){
  cout << "Pusing disertai hidung tersumbat kerap kali mengganggu, paracetamol dapat meredakan sakit kepala \n sedangkan pilek dapat diringankan dengan bantuan dekongestan dan analgesik-antipretik \n Perbanyak minum air dan istirahat ";
  } else if (pil == 'y'){
  cout << "Jika kamu hanya mengalami gejala pilek atau hidung tersumbat, cukup perbanyak istirahat dan jika ingin minum obat, minumlah obat tipe analgesik-antipretik atau dekongestan";
  } else if (ba == 'y'){
  cout << "Kamu mengalami batuk, jika berdahak minumlah obat batuk ekspektoran-guafenesin, dan jika tidak berdahak minumlah obat batuk antitusif. \n Batuk juga dapat dilegakan dengan air hangat, jeruk nipis, dan madu";
  } else if (pus == 'y'){
  cout << "Kamu mengalami sakit kepala, aspirin atau paracetamol dapat meredakan rasa sakitnya, namun jika terjadi lagi, \n maka sakit kepala tersebut dapat mengindikasikan penyakit yang belum sembuh atau ada yang tidak beres dengan tubuh kita";
  } else if (fev >= 40){
  cout << "panas bett";
  }else if (fev >=37){
  cout << "Kamu mengalami demam, dengan tolak ukur umum suhu diatas 37 derajat. Obat seperti paracetamol dapat membantu menurunkan panas, \n remedi alami dapat berupa kompres air panas. Demam yang melebihi tiga hari dapat mengindikasikan penyakit yang lebih serius, segera periksakan ke dokter jika demikian  ";
  }



    return 0;
}
