#pragma checksum "D:\C#\StudentMVC\Views\Student\index.cshtml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "a0d5b4089d0ebeeb74e28f4dd5844504739b8b57"
// <auto-generated/>
#pragma warning disable 1591
[assembly: global::Microsoft.AspNetCore.Razor.Hosting.RazorCompiledItemAttribute(typeof(AspNetCore.Views_Student_index), @"mvc.1.0.view", @"/Views/Student/index.cshtml")]
namespace AspNetCore
{
    #line hidden
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Threading.Tasks;
    using Microsoft.AspNetCore.Mvc;
    using Microsoft.AspNetCore.Mvc.Rendering;
    using Microsoft.AspNetCore.Mvc.ViewFeatures;
#nullable restore
#line 1 "D:\C#\StudentMVC\Views\_ViewImports.cshtml"
using StudentMVC;

#line default
#line hidden
#nullable disable
#nullable restore
#line 2 "D:\C#\StudentMVC\Views\_ViewImports.cshtml"
using StudentMVC.Models;

#line default
#line hidden
#nullable disable
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"a0d5b4089d0ebeeb74e28f4dd5844504739b8b57", @"/Views/Student/index.cshtml")]
    [global::Microsoft.AspNetCore.Razor.Hosting.RazorSourceChecksumAttribute(@"SHA1", @"6ee4b6c45fe245709a8adfb85aeeb8e8e6669789", @"/Views/_ViewImports.cshtml")]
    public class Views_Student_index : global::Microsoft.AspNetCore.Mvc.Razor.RazorPage<List<Student>>
    {
        #pragma warning disable 1998
        public async override global::System.Threading.Tasks.Task ExecuteAsync()
        {
#nullable restore
#line 2 "D:\C#\StudentMVC\Views\Student\index.cshtml"
  
    ViewData["Title"] = "Student Page";
  // List<Student> students = (List<Student>) ViewBag.studentList;
      List<Student> students = Model;



#line default
#line hidden
#nullable disable
            WriteLiteral(@"
<div class=""text-center"">
    <h1 class=""display-4"">Welcome Student Page</h1>
    <table class=""table table-hover"">
        <thread>
            <th>ID</th>
            <th>NAME</th>
            <th>Gender</th>
            <th>Birth</th>
            <th>ID_Lop</th>
        </thread>
        <tbody>
");
#nullable restore
#line 21 "D:\C#\StudentMVC\Views\Student\index.cshtml"
             foreach (var student in students)
            {

#line default
#line hidden
#nullable disable
            WriteLiteral("            <tr>\r\n                <td>");
#nullable restore
#line 24 "D:\C#\StudentMVC\Views\Student\index.cshtml"
               Write(student.StudentId);

#line default
#line hidden
#nullable disable
            WriteLiteral("</td>\r\n                <td>");
#nullable restore
#line 25 "D:\C#\StudentMVC\Views\Student\index.cshtml"
               Write(student.Name);

#line default
#line hidden
#nullable disable
            WriteLiteral("</td>\r\n                <td>");
#nullable restore
#line 26 "D:\C#\StudentMVC\Views\Student\index.cshtml"
               Write(student.Gender);

#line default
#line hidden
#nullable disable
            WriteLiteral("</td>\r\n                <td>");
#nullable restore
#line 27 "D:\C#\StudentMVC\Views\Student\index.cshtml"
               Write(student.Birth);

#line default
#line hidden
#nullable disable
            WriteLiteral("</td>\r\n                <td>");
#nullable restore
#line 28 "D:\C#\StudentMVC\Views\Student\index.cshtml"
               Write(student.Id_Lop);

#line default
#line hidden
#nullable disable
            WriteLiteral("</td>\r\n            </tr>\r\n");
#nullable restore
#line 30 "D:\C#\StudentMVC\Views\Student\index.cshtml"
            }

#line default
#line hidden
#nullable disable
            WriteLiteral("        </tbody>\r\n    </table>\r\n</div>\r\n");
        }
        #pragma warning restore 1998
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.ViewFeatures.IModelExpressionProvider ModelExpressionProvider { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IUrlHelper Url { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.IViewComponentHelper Component { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IJsonHelper Json { get; private set; }
        [global::Microsoft.AspNetCore.Mvc.Razor.Internal.RazorInjectAttribute]
        public global::Microsoft.AspNetCore.Mvc.Rendering.IHtmlHelper<List<Student>> Html { get; private set; }
    }
}
#pragma warning restore 1591
