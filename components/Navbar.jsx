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
                <h1 className="text-xl lg:text-3xl px-2"> <Link href={"/"}>KTU Labwork</Link> </h1>
                <div>
                    <ul className="hidden sm:flex gap-4">
                        <li></li>
                        <li> <Link href={"/S2"}>Semester 2</Link> </li>
                        <li> <Link href={"/S3"}>Semester 3</Link> </li>
                        <li> <Link href={"/S4"}>Semester 4</Link> </li>
                        <li> <Link href={"/S5"}>Semester 5</Link> </li>
                        <li> <Link href={"/S6"}>Semester 6</Link> </li>
                        <li> <Link href={"/S7"}>Semester 7</Link> </li>
                        <li> <Link href={"/S8"}>Semester 8</Link> </li>
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
                        ? "sm:hidden absolute top-0 left-0 right-0 bottom-0 flex justify-center items-center w-full p-5 bg-white h-screen text-center ease-in duration-300"
                        : "sm:hidden absolute top-0 left-[-100%] right-0 bottom-0 flex justify-center items-center w-full h-screen text-center ease-in duration-300"
                }>
                    <ul className="sm:flex text-black text-4xl">
                        <li onClick={handleNav}> <Link href={"/S2"}>Semester 2</Link> </li>
                        <li onClick={handleNav}> <Link href={"/S3"}>Semester 3</Link> </li>
                        <li onClick={handleNav}> <Link href={"/S4"}>Semester 4</Link> </li>
                        <li onClick={handleNav}> <Link href={"/S5"}>Semester 5</Link> </li>
                        <li onClick={handleNav}> <Link href={"/S6"}>Semester 6</Link> </li>
                        <li onClick={handleNav}> <Link href={"/S7"}>Semester 7</Link> </li>
                        <li onClick={handleNav}> <Link href={"/S8"}>Semester 8</Link> </li>
                    </ul>
                </div>
            </div>
        </nav>
    )
}

export default Navbar;
