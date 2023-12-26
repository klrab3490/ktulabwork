import Link from 'next/link';
import React from 'react';
import { AiFillGithub, AiOutlineWhatsApp, AiFillTwitterCircle, AiFillLinkedin, AiFillFacebook, AiFillInstagram, AiOutlineLink } from "react-icons/ai";
import { FaTelegramPlane, FaDiscord } from "react-icons/fa";

const Footer = () => {
    return (
        <div className="text-gray-600 body-font">
            <hr className='mt-5'/>
            <div className="mt-5 container px-2 py-15 mx-auto">
                <div className="flex flex-wrap md:text-left text-center order-first">
                    <div className="w-full px-4">
                        <h2 className="title-font font-medium text-gray-900 tracking-widest text-sm mb-3">Made By Rahul A B</h2>
                        <h2 className="title-font font-medium text-gray-900 tracking-widest text-sm mb-3">Connect With Me : </h2>
                        <div className=' justify-center'>
                            <nav className="list-none mb-10 flex justify-between">
                                <li> <Link href={'https://www.facebook.com/rahul.bushi/'}> <AiFillFacebook size={36} /> </Link> </li>
                                <li> <Link href={'https://www.instagram.com/kl.rab_3490/'}> <AiFillInstagram size={36} /> </Link> </li>
                                <li> <Link href={'https://twitter.com/klrab_3490_'}> <AiFillTwitterCircle size={36} /> </Link> </li>
                                <li> <Link href={'https://github.com/klrab3490'}> <AiFillGithub size={36} /> </Link></li>
                                <li> <Link href={'https://t.me/klrab_3490'}> <FaTelegramPlane size={36} /> </Link> </li>
                                <li> <Link href={'https://wa.me/7994542331?text=Hi'}> <AiOutlineWhatsApp size={36} /> </Link> </li>
                                <li> <Link href={'https://www.linkedin.com/in/rahul-a-b-0044b1232/'}> <AiFillLinkedin size={36} /> </Link> </li>
                                <li> <Link href={'https://discordapp.com/users/kl.rab_3490#8475'}> <FaDiscord size={36} /> </Link> </li>
                                <li> <Link href={'https://rahulab.vercel.app'}> <AiOutlineLink size={36} /> </Link> </li>
                            </nav>
                        </div>
                    </div>
                
                </div>
            </div>
        </div>
    );
};

export default Footer;