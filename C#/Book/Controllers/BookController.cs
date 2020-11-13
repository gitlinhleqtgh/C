namespace Book.Controllers {
    using Models;
    using Views;
    public class BookController {
        public void Single (int id) {
            Book model = new Book {
                Id = 1,
                Authors = "Adam Freeman",
                Title = "Expert ASP.NET Web API 2 for MVC Developers (The Expert's Voice in .NET)",
                Publisher = "Apress",
                Year = 2014,
                Tags = "c#, asp.net, mvc",
                Description = "Expert insight and understanding of how to create, customize, and deploy complex, flexible, and robust HTTP web services",
                Rating = 5,
                Reading = true
            };
            BookSigleView view = new BookSigleView (model);
            view.Render ();
        }
    }
}