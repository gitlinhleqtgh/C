using System;
namespace BT_QLSV {
    public class QLSV {
        public SV[] arrSV { get; set; }
        public int n { get; set; }
        public QLSV () {
            SV sv1 = new SV {
                MSSV = 1,
                NameSV = "le linh",
                DTB = 8
            };
            SV sv2 = new SV { MSSV = 2, NameSV = "le van", DTB = 10 };
            SV sv3 = new SV { MSSV = 3, NameSV = "le le", DTB = 9 };

            Add (sv1);
            Add (sv2);
            Add (sv3);
        }
        public void Show () {
            foreach (SV i in arrSV) {
                Console.WriteLine (i.ToString ());
            }
        }
        public void Add (SV s) {
            if (n == 0) {
                // ban đầu mảng có độ dài = 0 =>mảng chưa có vị trí nào cả.
                arrSV = new SV[n + 1];
                arrSV[n] = s;
            } else {
                SV[] temp = arrSV;
                arrSV = new SV[n + 1];
                for (int i = 0; i < n; ++i) {
                    arrSV[i] = temp[i];
                }
                arrSV[n] = s;
            }
            n++;
        }
        //tim kiem trong mang arrSV có phần tử nào trùng đối tượng SV s ko
        //nếu có thì trả về vị trí phần tử trùng trong mảng , ko trả về -1
        public int IndexOf (SV sv) {
            int index = -1;
            for (int i = 0; i < n; ++i) {
                if (arrSV[i].Equals (sv)) {
                    index = i;
                    break;
                }
            }
            return index;
        }
        //xóa phần tử tại vị trí index trong mảng arrSV
        public void RemoveAt (int index) {
            //xóa -> phải thay đổi kích thước mảng -> mảng trung gian lưu trữ dữ liệu
            if (n != 0) {
                if (index >= 0 && index < n) {
                    SV[] temp = arrSV;
                    arrSV = new SV[n - 1];
                    for (int i = 0; i < n - 1; ++i) {
                        if (i < index) {
                            arrSV[i] = temp[i];
                        }
                        if (i >= index) {
                            arrSV[i] = temp[i + 1];
                        }
                    }
                    n--;
                }
            }
        }
        public void Remove (SV s) {
            int index = IndexOf (s);
            if (index >= 0) {
                RemoveAt (index);
            }
        }
        //tra ve vi tri doi tuong SV can edit theo MSSV
        public int GetSVByMSSV (int MSSV) {
            int index = -1;
            for (int i = 0; i < n; ++i) {
                if (arrSV[i].MSSV == MSSV) {
                    index = i;
                    break;
                }
            }
            return index;
        }
        public void Sort () {
            for (int i = 0; i < n - 1; ++i) {
                for (int j = i + 1; j < n; ++j) {
                    if (arrSV[i].DTB >= arrSV[j].DTB) {
                        SV temp = arrSV[i];
                        arrSV[i] = arrSV[j];
                        arrSV[j] = temp;
                    }

                }
            }
        }

    }
}