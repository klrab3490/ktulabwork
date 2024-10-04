"use client";

import Link from "next/link";
import { useState } from "react";
import { Menu, X, ChevronDown } from "lucide-react";
import { DropdownMenu, DropdownMenuContent, DropdownMenuItem, DropdownMenuTrigger } from "@/components/ui/dropdown-menu";
import { ModeToggle } from "./mode-toggle";

export default function Navbar() {
    const [navbar, setNavbar] = useState(false);

    const handleNav = () => {
        setNavbar(!navbar);
    };

    return (
        <nav style={{ zIndex: "12 !important" }} className="text-xl lg:text-3xl">
            <div className="p-3 flex justify-between">
                <h1 className="font-bold px-2">
                    <Link href={"/"}>KTU Lab Work</Link>
                </h1>
                <div className="flex items-center justify-center gap-6">
                    <div className="hidden sm:flex">
                        <DropdownMenu>
                            <DropdownMenuTrigger className="flex items-center cursor-pointer">
                                Semesters <ChevronDown size="16" className="ml-1" />
                            </DropdownMenuTrigger>
                            <DropdownMenuContent className="bg-white dark:bg-black shadow-lg rounded-md p-2">
                                <DropdownMenuItem asChild>
                                    <Link href="/S3" className="hover:bg-slate-200 rounded-md px-2 py-1 block">Semester 3</Link>
                                </DropdownMenuItem>
                                <DropdownMenuItem asChild>
                                    <Link href="/S4" className="hover:bg-slate-200 rounded-md px-2 py-1 block">Semester 4</Link>
                                </DropdownMenuItem>
                                <DropdownMenuItem asChild>
                                    <Link href="/S5" className="hover:bg-slate-200 rounded-md px-2 py-1 block">Semester 5</Link>
                                </DropdownMenuItem>
                                <DropdownMenuItem asChild>
                                    <Link href="/S6" className="hover:bg-slate-200 rounded-md px-2 py-1 block">Semester 6</Link>
                                </DropdownMenuItem>
                                <DropdownMenuItem asChild>
                                    <Link href="/S7" className="hover:bg-slate-200 rounded-md px-2 py-1 block">Semester 7</Link>
                                </DropdownMenuItem>
                                <DropdownMenuItem asChild>
                                    <Link href="/S8" className="hover:bg-slate-200 rounded-md px-2 py-1 block">Semester 8</Link>
                                </DropdownMenuItem>
                            </DropdownMenuContent>
                        </DropdownMenu>
                    </div>
                    <ModeToggle />
                </div>
                {/* Mobile View */}
                <div onClick={handleNav} className="block sm:hidden z-10 hover:text-black">
                    {navbar ? <X size="30" /> : <Menu size="25" />}
                </div>
                <div className={ navbar ? "sm:hidden absolute top-0 left-0 right-0 bottom-0 flex justify-center items-center w-full p-5 bg-gradient-to-b from-slate-300 dark:from-slate-600 to-white dark:to-black h-screen text-center ease-in duration-300" : "sm:hidden absolute top-0 left-[-100%] right-0 bottom-0 flex justify-center items-center w-full h-screen text-center ease-in duration-300"} >
                    <ul className="text-black text-4xl space-y-4 dark:text-white">
                        <li onClick={handleNav}>
                            <Link href={"/S2"}>Semester 2</Link>
                        </li>
                        <li onClick={handleNav}>
                            <Link href={"/S3"}>Semester 3</Link>
                        </li>
                        <li onClick={handleNav}>
                            <Link href={"/S4"}>Semester 4</Link>
                        </li>
                        <li onClick={handleNav}>
                            <Link href={"/S5"}>Semester 5</Link>
                        </li>
                        <li onClick={handleNav}>
                            <Link href={"/S6"}>Semester 6</Link>
                        </li>
                        <li onClick={handleNav}>
                            <Link href={"/S7"}>Semester 7</Link>
                        </li>
                        <li onClick={handleNav}>
                            <Link href={"/S8"}>Semester 8</Link>
                        </li>
                    </ul>
                </div>
            </div>
        </nav>
    );
}
