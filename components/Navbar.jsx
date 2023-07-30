"use client";

import Link from "next/link";
import { useState } from "react";
import { AiOutlineMenu,AiOutlineClose } from "react-icons/ai";

const Navbar = () => {
    const [navbar,setNavbar] = useState(false);
    const handleNav = () => {
        setNavbar(!navbar);
    }
    
    return (
        <nav style={{ zIndex: "12 !important"}}>
            <div className="p-5 mb-6 flex justify-between">
                <h1 className="text-xl lg:text-3xl px-2"> KTU Labwork </h1>
                <div>
                    <ul className="hidden sm:flex gap-4">
                        <li>Semester 3</li>
                        <li>Semester 2</li>
                        <li>Semester 4</li>
                        <li>Semester 5</li>
                        <li>Semester 6</li>
                        <li>Semester 7</li>
                        <li>Semester 8</li>
                    </ul>
                </div>
                {/* Mobile View */}
                <div onClick={handleNav} className="block sm:hidden z-10 hover:text-black">
                    { navbar
                        ? <AiOutlineClose className="text-black" size="20" />
                        : <AiOutlineMenu sixe="20" />
                    }
                </div>
                <div className={
                    navbar 
                        ? "sm:hidden absolute top-0 left-0 right-0 bottom-0 flex justify-center items-center w-full p-5 h-screen bg-white text-center ease-in duration-300"
                        : "sm:hidden absolute top-0 left-[-100%] right-0 bottom-0 flex justify-center items-center w-full h-screen bg-white text-center ease-in duration-300"
                }>
                    <ul className="sm:flex text-black text-4xl">
                        <li onClick={handleNav} >Semester 2</li>
                        <li onClick={handleNav} >Semester 3</li>
                        <li onClick={handleNav} >Semester 4</li>
                        <li onClick={handleNav} >Semester 5</li>
                        <li onClick={handleNav} >Semester 6</li>
                        <li onClick={handleNav} >Semester 7</li>
                        <li onClick={handleNav} >Semester 8</li>
                    </ul>
                </div>
            </div>
        </nav>
    )
}

export default Navbar;
