import React from 'react';
import Link from "next/link";

const page = () => {
    return (
        <div className='flex-center text-xl'>
            <div className='text-center underline'><Link href={"/S3/Java-Lab"}>Semester 3 - Object Oriented Programibg In Java Lab</Link></div>
            <div className='text-center underline'>Exp1 - String:Palindrome</div>
            
        </div>
    )
}

export default page;