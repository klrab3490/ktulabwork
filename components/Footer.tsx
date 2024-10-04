import React from 'react';
import Link from 'next/link';
import { AiOutlineWhatsApp } from "react-icons/ai";
import { FaTelegramPlane, FaDiscord } from "react-icons/fa";
import { Github, Twitter, Linkedin, Facebook, Instagram, Link2 } from 'lucide-react';

export default function Footer() {
    return (
        <footer className="text-gray-600 dark:text-gray-300 body-font">
            <hr className="mt-5 border-gray-400 dark:border-gray-700" />
            <div className="container mx-auto">
                <div className="flex flex-wrap md:text-left text-center order-first">
                    <div className="w-full p-4">
                        <div className="flex flex-col justify-between items-center space-y-4 md:space-y-0 gap-4">
                            <h2 className="title-font font-medium text-gray-900 dark:text-gray-400 tracking-widest mb-3 md:mb-0">
                                Made By Rahul A B
                            </h2>
                            <nav className="list-none flex flex-col sm:flex-row items-center justify-center gap-5">
                                <h2 className="title-font font-medium text-gray-900 dark:text-gray-400 tracking-widest">
                                    Connect With Me:
                                </h2>
                                <div className="flex flex-wrap justify-center items-center">
                                    {[
                                        { href: 'https://www.facebook.com/rahul.bushi/', icon: <Facebook size={30} /> },
                                        { href: 'https://www.instagram.com/kl.rab_3490/', icon: <Instagram size={30} /> },
                                        { href: 'https://twitter.com/klrab_3490_', icon: <Twitter size={30} /> },
                                        { href: 'https://github.com/klrab3490', icon: <Github size={30} /> },
                                        { href: 'https://t.me/klrab_3490', icon: <FaTelegramPlane size={30} /> },
                                        { href: 'https://wa.me/7994542331?text=Hi', icon: <AiOutlineWhatsApp size={30} /> },
                                        { href: 'https://www.linkedin.com/in/rahul-a-b-0044b1232/', icon: <Linkedin size={30} /> },
                                        { href: 'https://discordapp.com/users/kl.rab_3490#8475', icon: <FaDiscord size={30} /> },
                                        { href: 'https://rahulab.vercel.app', icon: <Link2 size={30} /> },
                                    ].map((link, index) => (
                                        <li key={index} className="p-2 transition duration-300 ease-in-out transform hover:-translate-y-1">
                                            <Link href={link.href} passHref>
                                                <p className="text-gray-500 dark:text-gray-400 hover:text-blue-500 dark:hover:text-blue-400">
                                                    {link.icon}
                                                </p>
                                            </Link>
                                        </li>
                                    ))}
                                </div>
                            </nav>
                        </div>
                    </div>
                </div>
            </div>
        </footer>
    );
}
