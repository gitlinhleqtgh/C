using System;
using System.ComponentModel.DataAnnotations;

namespace MvcMovie.Models
{
    public class Movie
    {
        public int Id{set;get;}
        public string Title{set;get;}
        public DateTime ReleaseDate{get;set;}
        public string Genre{get;set;}
        public decimal Price{get;set;}
    }
}