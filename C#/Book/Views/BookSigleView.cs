using System;

namespace Book.Views
{
    using Models;
    internal class BookSigleView
    {
        protected Book Model;
        public BookSigleView (Book model)
        {
            Model=model;
        }
        public void Render()
        {
            if(Model == null)
            {
                WriteLine("No Book Found !",ConsoleColor.Red);
                return;
            }
            WriteLine("Book Detail Infomation :",ConsoleColor.Green);
            Console.WriteLine($"Author         :{Model.Authors}");
            Console.WriteLine($"Title          :{Model.Title}");
            Console.WriteLine($"Publisher      :{Model.Publisher}");
            Console.WriteLine($"Year           :{Model.Year}");
            Console.WriteLine($"Edition        :{Model.Edition}");
            Console.WriteLine($"Isbn           :{Model.Isbn}");
            Console.WriteLine($"Tags           :{Model.Tags}");
            Console.WriteLine($"Description    :{Model.Description}");
            Console.WriteLine($"Rating         :{Model.Rating}");
            Console.WriteLine($"Reading        :{Model.Reading}");
            Console.WriteLine($"File           :{Model.File}");
            Console.WriteLine($"FileName       :{Model.FileName}");
        }
        protected void WriteLine(string message, ConsoleColor  color)
        {
            Console.ForegroundColor=color;
            Console.WriteLine(message);
            Console.ResetColor();
        }
    }
}