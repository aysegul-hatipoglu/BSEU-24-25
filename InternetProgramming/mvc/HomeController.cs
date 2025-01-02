using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace WebApplicationMVC1.Controllers
{
    public class HomeController : Controller
    {
        public ActionResult Index()
        {
            return View();
        }

   

        public ActionResult Contact()
        {
            ViewBag.Message = "Your contact page.";

            return View();
        }

        [HttpGet]
        public ActionResult About()
        {
            ViewBag.Message = "";

            return View();
        }

        // POST: Login
        [HttpPost]
        public ActionResult Login(string username, string password)
        {
            // Örnek kullanıcı adı ve şifre kontrolü
            if (username == "admin" && password == "12345")
            {
                // Giriş başarılıysa
                TempData["Message"] = "Login successful!";
                return RedirectToAction("Index", "Home"); // Anasayfaya yönlendirme
            }
            else
            {
                return RedirectToAction("About", "Home", new { errorMessage = "Yanlış giriş tekrar deneyin" });
            }
        }
    }
}