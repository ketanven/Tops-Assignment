import { NavLink } from "react-router-dom"

function Userheader() {
  return (
    <div>
       {/* ======= Header ======= */}
<header id="header" className="fixed-top header-transparent">
  <div className="container d-flex align-items-center justify-content-between position-relative">
    <div className="logo">
      <h1 className="text-light"><a href="index.html"><span>Squadfree</span></a></h1>
      {/* Uncomment below if you prefer to use an image logo */}
      {/* <a href="index.html"><img src="assets/img/logo.png" alt="" class="img-fluid"></a>*/}
    </div>
    <nav id="navbar" className="navbar">
      <ul>
        <li><NavLink to="/" className="nav-link scrollto active" href="#hero">Home</NavLink></li>
        <li><a className="nav-link scrollto" href="#about">About Us</a></li>
        <li><a className="nav-link scrollto" href="#services">Services</a></li>
        <li><a className="nav-link scrollto" href="#team">Team</a></li>
        
        
        <li><a className="nav-link scrollto" href="#contact">Contact</a></li>
        <li><NavLink to="/register" className="nav-link btn btn-primary scrollto">Register</NavLink></li>
        <li><NavLink to="/login" className="nav-link btn btn-primary scrollto">Login</NavLink></li>

      </ul>
      <i className="bi bi-list mobile-nav-toggle" />
    </nav>{/* .navbar */}
  </div>
</header>{/* End Header */}

 {/* ======= Hero Section ======= */}
 <section id="hero">
    <div className="hero-container" data-aos="fade-up">
      <h1>Welcome to Squad</h1>
      <h2>We are team of talented designers making websites with Bootstrap</h2>
      <a href="#about" className="btn-get-started scrollto"><i className="bx bx-chevrons-down" /></a>
    </div>
  </section>{/* End Hero */}

    </div>
  )
}

export default Userheader