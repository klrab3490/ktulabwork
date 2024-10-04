import React from 'react';
import Link from "next/link";

export default function page() {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'><Link href={"/S3/Java-Lab"}>Semester 3 - Object Oriented Programibg In Java Lab</Link></div>
            <div className='flex items-center justify-between'>
                <Link href={"/S3/Java-Lab/Exp11"}>Previous</Link>
                <div className="text-center underline">Exp12 - String : Palindrome</div>
                <Link href={"/S3/Java-Lab/Exp13"}>Next</Link>
            </div>
        </div>
    )
}
