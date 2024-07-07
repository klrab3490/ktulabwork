import Link from 'next/link';
import React from 'react';
import {
    AiFillGithub, AiOutlineWhatsApp, AiFillTwitterCircle,
    AiFillLinkedin, AiFillFacebook, AiFillInstagram, AiOutlineLink
} from "react-icons/ai";
import { FaTelegramPlane, FaDiscord } from "react-icons/fa";

export default function Footer() {
    return (
        <footer className="text-gray-600 body-font">
            <hr className="mt-5" />
            <div className="container mx-auto">
                <div className="flex flex-wrap md:text-left text-center order-first">
                    <div className="w-full p-4">
                        <div className="flex flex-col md:flex-row justify-between items-center">
                            <h2 className="title-font font-medium text-gray-900 tracking-widest mb-3 md:mb-0">
                                Made By Rahul A B
                            </h2>
                            <nav className="list-none flex flex-col sm:flex-row items-center justify-center gap-5">
                                <h2 className="title-font font-medium text-gray-900 tracking-widest">
                                    Connect With Me:
                                </h2>
                                <div className="flex flex-wrap justify-center items-center">
                                    {[
                                        { href: 'https://www.facebook.com/rahul.bushi/', icon: <AiFillFacebook size={30} /> },
                                        { href: 'https://www.instagram.com/kl.rab_3490/', icon: <AiFillInstagram size={30} /> },
                                        { href: 'https://twitter.com/klrab_3490_', icon: <AiFillTwitterCircle size={30} /> },
                                        { href: 'https://github.com/klrab3490', icon: <AiFillGithub size={30} /> },
                                        { href: 'https://t.me/klrab_3490', icon: <FaTelegramPlane size={30} /> },
                                        { href: 'https://wa.me/7994542331?text=Hi', icon: <AiOutlineWhatsApp size={30} /> },
                                        { href: 'https://www.linkedin.com/in/rahul-a-b-0044b1232/', icon: <AiFillLinkedin size={30} /> },
                                        { href: 'https://discordapp.com/users/kl.rab_3490#8475', icon: <FaDiscord size={30} /> },
                                        { href: 'https://rahulab.vercel.app', icon: <AiOutlineLink size={30} /> },
                                    ].map((link, index) => (
                                        <li key={index} className="px-2">
                                            <Link href={link.href}>{link.icon}</Link>
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
