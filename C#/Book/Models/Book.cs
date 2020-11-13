using System;

namespace Book.Models {
    public class Book {
        private int _id = 1;
        public int Id {
            get { return _id; }
            set { if (value >= 1) _id = value; }
        }
        private string _authors = "Unknown authors";
        public string Authors {
            get { return _authors; }
            set { if (!string.IsNullOrEmpty (value)) _authors = value; }
        }
        private string _title = "a new book";
        public string Title {
            get { return _title; }
            set { if (string.IsNullOrEmpty (value)) _title = value; }
        }
        private string _publisher = "Unknown publisher";
        public string Publisher {
            get { return _publisher; }
            set { if (string.IsNullOrEmpty (value)) _publisher = value; }
        }
        private int _year = 2020;
        public int Year {
            get { return _year; }
            set { if (value > 1950 && value <= 2020) _year = value; }
        }
        private int _edition = 1;
        public int Edition {
            get { return _edition; }
            set { if (value >= 1) _edition = value; }
        }
        private string _isbn = "";
        public string Isbn {
            get { return _isbn; }
            set { _isbn = value; }
        }
        private string _tags = "";
        public string Tags {
            get { return _tags; }
            set { _tags = value; }
        }
        private string _description;
        public string Description {
            get { return _description; }
            set { _description = value; }
        }
        private string _file;
        public string File {
            get { return _file; }
            set { if (System.IO.File.Exists (value)) _file = value; }
        }
        public bool Reading { get; set; }
        private int _rating = 1;
        public int Rating {
            get { return _rating; }
            set { if (value >= 1 && value <= 5) _rating = value; }
        }
        public string FileName {
            get { return System.IO.Path.GetFileName (_file); }
        }
    }
}