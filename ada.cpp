1.	/*Program List Dengan Array*/
2.	#include <iostream>
3.	#define max 12
4.	#define true 1
5.	#define false 0
6.	using std::cout;
7.	using std::endl;
8.	typedef struct
9.	{
10.	    int info;
11.	    int next;
12.	} typenode;
13.	typenode elemen[max];
14.	int list, akhirlist, kosong, akhirkosong;
15.	int listkosong();
16.	void buatlist();
17.	void sisipnode(int IB);
18.	void hapusnode(int IH);
19.	void cetaklist();
20.	int main()
21.	{
22.	    buatlist();
23.	    cetaklist();
24.	    sisipnode(7);
25.	    cout << "\n\n Sisip 7 \n\n";
26.	    cetaklist();
27.	    sisipnode(30);
28.	    cout << "\n\n sisip 30 \n\n";
29.	    cetaklist();
30.	    hapusnode(7);
31.	    cout << "\n\n hapus 7 \n\n";
32.	    cetaklist();
33.	}
34.	void buatlist()
35.	{
36.	    list = 5;
37.	    kosong = 3;
38.	    akhirlist = 10;
39.	    akhirkosong = 4;
40.	    elemen[1].info = 25;
41.	    elemen[1].next = 8;
42.	    elemen[2].info = 0;
43.	    elemen[2].next = 9;
44.	    elemen[3].info = 0;
45.	    elemen[3].next = 6;
46.	    elemen[4].info = 0;
47.	    elemen[4].next = 0;
48.	    elemen[5].info = 10;
49.	    elemen[5].next = 7;
50.	    elemen[6].info = 0;
51.	    elemen[6].next = 2;
52.	    elemen[7].info = 15;
53.	    elemen[7].next = 1;
54.	    elemen[8].info = 40;
55.	    elemen[8].next = 10;
56.	    elemen[9].info = 0;
57.	    elemen[9].next = 4;
58.	    elemen[10].info = 60;
59.	    elemen[10].next = 0;
60.	}
61.	int listkosong()
62.	{
63.	    if (list == 0)
64.	        return (true);
65.	    else
66.	        return (false);
67.	}
68.	void sisipnode(int IB)
69.	{
70.	    int listbaru, k, m, n, x;
71.	    //-------------------------- sisip di awal
72.	    if (IB < elemen[list].info)
73.	    {
74.	        listbaru = kosong;
75.	        kosong = elemen[kosong].next;
76.	        elemen[listbaru].info = IB;
77.	        elemen[listbaru].next = list;
78.	        list = listbaru;
79.	    }
80.	    else
81.	        //-------------------------sisip di akhir
82.	        if (IB > elemen[akhirlist].info)
83.	    {
84.	        listbaru = kosong;
85.	        kosong = elemen[kosong].next;
86.	        elemen[listbaru].info = IB;
87.	        elemen[listbaru].next = 0;
88.	        elemen[akhirlist].next = listbaru;
89.	        akhirlist = listbaru;
90.	    }
91.	    else
92.	    //--------------------------sisip di tengah
93.	    {
94.	        n = list;
95.	        x = elemen[n].info;
96.	        while (IB > x)
97.	        {
98.	            m = n;
99.	            n = elemen[n].next;
100.	            x = elemen[n].info;
101.	        }
102.	        k = elemen[kosong].next;
103.	        elemen[m].next = kosong;
104.	        elemen[kosong].info = IB;
105.	        elemen[kosong].next = n;
106.	        kosong = k;
107.	    }
108.	}
109.	void cetaklist()
110.	{
111.	    int n, m;
112.	    n = list;
113.	    m = kosong;
114.	    cout << "isi list : \n";
115.	    do
116.	    {
117.	        cout << elemen[n].info << " ";
118.	        n = elemen[n].next;
119.	    } while (elemen[n].next != 0);
120.	    cout << " " << elemen[akhirlist].info << endl;
121.	    cout << "\nIndex tempat-tempat kosong: \n";
122.	    do
123.	    {
124.	        cout << m << " ";
125.	        m = elemen[m].next;
126.	    } while (elemen[m].next != 0);
127.	    cout << " " << akhirkosong;
128.	}
129.	void hapusnode(int IH)
130.	{
131.	    int listbaru, k;
132.	    //------------------------ hapus di awal
133.	    if (IH == elemen[list].info)
134.	    {
135.	        listbaru = elemen[list].next;
136.	        k = kosong;
137.	        kosong = list;
138.	        list = listbaru;
139.	        elemen[kosong].next = k;
140.	    }
141.	    //------------------hapus di akhir
142.	    // buat sendiri!! untuk TUGAS
143.	    //------------------hapus di tengah
144.	    // buat sendiri!! untuk TUGAS
145.	}
